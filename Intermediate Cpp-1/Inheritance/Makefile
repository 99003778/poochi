PROJECT_NAME = inheritance
SRC = inheritance.cpp
TEST_SRC = test_inheritance.cpp

all:
	g++ $(SRC) $(TEST_SRC) -o $(PROJECT_NAME).out -lgtest -lgtest_main -lpthread

run: all
	./$(PROJECT_NAME).out

clean:
	rm -rf *.out