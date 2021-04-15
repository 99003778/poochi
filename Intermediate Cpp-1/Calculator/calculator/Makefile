PROJECT_NAME = Calculator

SRC = Calculator.cpp\

TEST_SRC = TestCalculator.cpp

all:
	g++ $(SRC) $(TEST_SRC) $(INC) -o $(PROJECT_NAME).out -lgtest -lgtest_main -lpthread
	
run: all
	./$(PROJECT_NAME).out

clean:
	rm -rf *.out