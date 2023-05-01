CC = arm-linux-gnueabihf-gcc
CFLAGS = -Wall #Create shared library

all:libuname.so
	@echo "create libuname.so and uname.o"
	sudo cp libuname.so /usr/lib/
	scp libuname.so debian@192.168.7.2:/home/debian/
	ssh -t debian@192.168.7.2 "sudo cp libuname.so /usr/lib/" 
libuname.so:uname.o
	$(CC) -shared -o libuname.so uname.o
uname.o:uname.c
	$(CC) -c -Wall -fPIC uname.c -o uname.o	

clean:
	rm -r *.o *.so
	