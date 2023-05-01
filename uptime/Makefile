CC = arm-linux-gnueabihf-gcc
CFLAGS = -Wall #Create shared library

all:libuptime.so
	@echo "create libuptime.so and uptime.o"
	sudo cp libuptime.so /usr/lib/
	scp libuptime.so debian@192.168.7.2:/home/debian/
	ssh -t debian@192.168.7.2 "sudo cp libuname.so /usr/lib/" 
libuname.so:uptime.o
	$(CC) -shared -o libuptime.so uptime.o
uname.o:uname.c
	$(CC) -c -Wall -fPIC uptime.c -o uptime.o	

clean:
	rm -r *.o *.so