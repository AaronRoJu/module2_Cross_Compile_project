APP_NAME=busy_box_cross

all: ./uname/uname ./sleep/sleep ./cat/cat

./cat/cat:
	cd ./cat/ && make all

./sleep/sleep:
	cd ./sleep/ && make all

./uptime/uptime:
	cd ./uptime/ && make all

./uname/uname:
	cd ./uname/ && make all

install:
	arm-linux-gnueabihf-gcc main.c -luname -lcat -lsleep -o $(APP_NAME)
	scp busy_box_cross debian@192.168.7.2:/home/debian/
clean:
	# cd ./cat/ && make clean
	# cd ./sleep/ && make clean
	# cd ./uptime/ && make clean
	cd ./uname/ && make clean
	cd ./cat/ && make clean
	cd ./sleep && make clean
