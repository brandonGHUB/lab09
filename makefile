arrayCalc: driver.o arrayCalculator.o
	g++ -o arrayCalc driver.o arrayCalculator.o

arrayCalculator.o: arrayCalculator.h arrayCalculator.cpp
	g++ -c arrayCalculator.cpp

driver.o: driver.cpp arrayCalculator.h
	g++ -c driver.cpp

clean:
	rm *.o arrayCalc
