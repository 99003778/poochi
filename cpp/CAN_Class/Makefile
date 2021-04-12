all:
	g++ CAN.cpp test_can.cpp -o CAN.out -lgtest -lgtest_main -lpthread

run: all
	./CAN.out

clean:
	rm -rf *.out