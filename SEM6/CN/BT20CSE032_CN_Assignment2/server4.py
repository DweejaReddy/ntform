# CN Assignment 2 | BT20CSE032 | Dweeja Reddy Devi
import select
import socket
import queue
import argparse

# Taking sever ip and port number as input from command line.
parser = argparse.ArgumentParser()
parser.add_argument("server_ip", type=str, help="IP address of server")
parser.add_argument("server_port", type=int, help="Port number of server socket")
args = parser.parse_args()

SERVER_IP, SERVER_PORT = args.server_ip, args.server_port
SERVER_ADDR = (SERVER_IP, SERVER_PORT)
FORMAT = 'utf-8'

try:
	# Create server socket
	# AF_INET refers to the address-family ipv4. The SOCK_STREAM means connection-oriented TCP protocol. 
	serverSocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
	print("[SOCKET CREATED] --> Server socket is created")

	# Bind server socket to ADDR
	serverSocket.bind(SERVER_ADDR)
	print(f"[SOCKET BINDED] --> Server socket binded to {str(SERVER_ADDR)}")

	# Listen on ADDR
	serverSocket.listen(0)
	print(f"[SERVER LISTENING] --> Server listening on {str(SERVER_ADDR)}")

	# sockets list which is readable, i.e. data receival is possible
	inputs = [serverSocket]

	# sockets list which is writable, i.e. data sendable is possible
	outputs = []
	
	# Data to be sent is stored in queues
	message_queues = {}

	# While inputs is not empty
	while inputs:
		readable, writable, exceptional = select.select(inputs, outputs, inputs)
		
		# Iterate through readable sockets
		for sc in readable:

			# A server socket is ready to accept a connection
			if sc is serverSocket:
				clientSocket, clientAddress = sc.accept()
				print(f"[ACCEPTED CONNECTION] --> Server accepted connection from client {str(clientAddress)}")

				# Add client to the inputs list
				inputs.append(clientSocket)

				# Attach a Queue for client for messages
				message_queues[clientSocket] = queue.Queue()
			else:
				data = sc.recv(1024).decode(FORMAT)

				# If data is not empty
				if data:
					print(f"[MESSAGE RECEIVED] --> Expression received from client {str(sc.getpeername())} : {str(data)}")
					message_queues[sc].put(data)

					# If socket not in outputs list we add it to the list
					if sc not in outputs:
						outputs.append(sc)

				else: # If data is empty, it means that the client has disconnected, and the stream is ready to be closed.
					if sc in outputs:
						outputs.remove(sc)
					inputs.remove(sc)
					print(f"[CONNECTION ABORTED] --> Client {str(sc.getpeername())} has stopped the connection")
					sc.close()
					del message_queues[sc]

		# Iterate through writable sockets
		for sc in writable:
			if message_queues[sc].empty():
				outputs.remove(sc)
			else:
				msg = message_queues[sc].get(False)
				print(f"[MESSAGE SENT] --> Sending reply to client {sc.getsockname()}: {msg}")
				sc.send(msg.encode(FORMAT))

		# Handle sockets that faced exceptions
		for sc in exceptional:
			print(f"[ERROR] --> Handling error for {sc.getsockname()}")

			# Close client connection
			inputs.remove(sc)
			if sc in outputs:
				outputs.remove(sc)
			print(f"[ERROR] --> Client {str(clientAddress)} connection stopped due to an error")
			sc.close()
			del message_queues[sc]
except Exception as e:
    print(f"[ERROR] --> {str(e)}")