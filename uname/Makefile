CC = arm-linux-gnueabihf-gcc
CFLAGS = -Wall #Create shared library

all:libuname.so
	@echo "create libuname.so and uname.o"
libuname.so:uname.o
	$(CC) -shared -o libuname.so uname.o
uname.o:uname.c
	$(CC) -c -Wall -fPIC uname.c -o uname.o

clean:
	rm -r *.o *.so
	


