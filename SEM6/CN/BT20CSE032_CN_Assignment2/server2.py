# CN Assignment 2 | BT20CSE032 | Dweeja Reddy Devi
import socket
import argparse
import threading

# Taking sever ip and port number as input from command line.
parser = argparse.ArgumentParser()
parser.add_argument("server_ip", type=str, help="IP address of server")
parser.add_argument("server_port", type=int, help="Port number of server socket")
args = parser.parse_args()

SERVER_IP, SERVER_PORT = args.server_ip, args.server_port
SERVER_ADDR = (SERVER_IP, SERVER_PORT)
FORMAT = 'utf-8'

def handleClient(clientSocket, clientAddress, threadNumber):
	try:
		while True:
			arithmeticExpr = clientSocket.recv(1024).decode(FORMAT)
			print(f"Thread {threadNumber} Expression received from client {str(clientAddress)} : {str(arithmeticExpr)}")

			try:
				result = str(eval(arithmeticExpr))
				print(f"Thread {threadNumber} Sending reply: {result}")
				clientSocket.send(result.encode(FORMAT))
			except Exception as e:
				errMsg = str(e)
				print(errMsg)
				clientSocket.send(errMsg.encode(FORMAT))
	except ConnectionAbortedError as e:
		print(f"Thread {threadNumber}: Client {str(clientAddress)} has stopped the connection")
	except Exception as e:
		print(str(e))

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
			thread = threading.Thread(target=handleClient , args=(clientSocket, client_address, threading.active_count()-1))
			thread.start()

		except KeyboardInterrupt as e:
			print("[CLOSED] --> Server closed")
			raise e
except Exception as e:
	print(f"[ERROR] --> {str(e)}")