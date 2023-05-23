# CN Assignment 2 | BT20CSE032 | Dweeja Reddy Devi
import socket
import argparse

# Taking sever ip and port number as input from command line.
parser = argparse.ArgumentParser()
parser.add_argument("server_ip", type=str, help="IP address of server")
parser.add_argument("server_port", type=int, help="Port number of server socket")
args = parser.parse_args()

SERVER_IP, SERVER_PORT = args.server_ip, args.server_port
SERVER_ADDR = (SERVER_IP, SERVER_PORT)
FORMAT = 'utf-8'

def handleClient(clientSocket, clientAddress):
	try:
		while True:
			arithmeticExpr = clientSocket.recv(1024).decode(FORMAT)
			print(f"[MESSAGE RECEIVED] --> Expression received from client {str(clientAddress)} : {str(arithmeticExpr)}")

			try:
				result = str(eval(arithmeticExpr))
				print(f"[MESSAGE SENT] --> Sending reply: {result}")
				clientSocket.send(result.encode(FORMAT))
			except Exception as e:
				errMsg = f"[ERROR] --> {str(e)}"
				print(errMsg)
				clientSocket.send(errMsg.encode(FORMAT))
	except ConnectionAbortedError as e:
		print(f"[CONNECTION ABORTED] --> Client {str(clientAddress)} has stopped the connection")
		print("Waiting for another client")
	except Exception as e:
		print(f"[ERROR] --> {str(e)}")

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

	while True:
		try:
			# Accept connection from client
			# Server socket doesn’t send any data. It doesn’t receive any data. It just produces “client” sockets. 
			clientSocket, client_address = serverSocket.accept()
			print(f"[ACCEPTED CONNECTION] --> Server accepted connection from client {str(client_address)}")
			handleClient(clientSocket, client_address)
		except KeyboardInterrupt as e:
			print("[CLOSED] --> Server closed")
			raise e
except Exception as e:
	print(f"[ERROR] --> {str(e)}")
	raise e