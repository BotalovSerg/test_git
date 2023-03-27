import socket
from requests import get

hostname = socket.gethostname()
local_ip = socket.gethostbyname(hostname)
public_ip = get('http://api.ipify.org').text
print(f'Host: {hostname}')
print(f'Local IP: {local_ip}')
print(f'Public IP: {public_ip}')