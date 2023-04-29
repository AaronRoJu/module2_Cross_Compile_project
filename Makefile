all:./cat/cat ./sleep/sleep ./uptime/uptime ./uname/uname

./cat/cat:
	cd ./cat/ && make all

./sleep/sleep:
	cd ./sleep/ && make all

./uptime/uptime:
	cd ./uptime/ && make all

./uname/uname:
	cd ./uname/ && make all

clean:
	cd ./cat/ && make clean
	cd ./sleep/ && make clean
	cd ./uptime/ && make clean
	cd ./uname/ && make clean
