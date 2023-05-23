# CN Assignment 2 | BT20CSE032 | Dweeja Reddy Devi
import socket
import argparse

# Taking sever ip and port number as input from command line.
parser = argparse.ArgumentParser()
parser.add_argument("server_ip", type=str, help="IP address of server to connect to")
parser.add_argument("server_port", type=int, help="Port number of server to connect to")
args = parser.parse_args()

SERVER_IP, SERVER_PORT = args.server_ip, args.server_port

SERVER_ADDR = (SERVER_IP, SERVER_PORT)
FORMAT = 'utf-8'

try:
	# AF_INET refers to the address-family ipv4. The SOCK_STREAM means connection-oriented TCP protocol.
	clientSocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
	print("[SOCKET CREATED] --> Client socket is created")

	clientSocket.connect(SERVER_ADDR)
	print(f"[ACCEPTED CONNECTION] --> Client connected to server {str(SERVER_ADDR)}")

	while True:
		arithmetic_expr = input("Please enter the message to the server: ")

		# Send expression to server
		clientSocket.sendall(arithmetic_expr.encode(FORMAT))

		# Receive result from server
		result = clientSocket.recv(1024).decode(FORMAT)

		# printing results
		print(f"Server replied: {result}")

except KeyboardInterrupt:
	clientSocket.close()
	print("[CLOSED] --> Closed connection...")
except Exception as e:
	print(f"[ERROR] --> {str(e)}")