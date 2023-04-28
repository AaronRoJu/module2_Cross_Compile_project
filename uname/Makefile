CROSS_COMPILE=

CC = gcc
CFLAGS = -Wall -shared -fPIC #Create shared library

APP_NAME= uname
all:libuname.so
	$(CC) -c uname.c -luname -o $(APP_NAME).o
libuname.so:uname.c
	$(CROSS_COMPILE)$(CC) $(CFLAGS) uname.c -o libuname.so
clean:
	rm -rf *.o *.so