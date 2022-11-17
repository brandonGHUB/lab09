
#include "arrayCalculator.h"

//Modify each of the methods below so that they use the template you structured in the .h file
//don't forget to modify the body of the functions so that they use the template appropriately
//for example, if we want to getSum, getSum should return the template, not an int, to work with any data type

ArrayCalculator::ArrayCalculator(){
    sum = -1;
    product = -1;
    quotient = -1;
    difference = -1;
    numValues = SIZE;
}

ArrayCalculator::ArrayCalculator(int* vals){
    numValues = SIZE;
    setValues(vals);
    calculateDifference();
    calculateSum();
    calculateProduct();
    calculateQuotient();
    
}

ArrayCalculator::ArrayCalculator(const ArrayCalculator& rhs){
    sum = rhs.sum;
    difference = rhs.difference;
    product = rhs.product;
    quotient = rhs.quotient;
    numValues = rhs.numValues;
}

int ArrayCalculator::getSum(){
    return sum;
}

int ArrayCalculator::getDifference(){
    return difference;
}

int ArrayCalculator::getProduct(){
    return product;
}

int ArrayCalculator::getQuotient(){
    return quotient;
}

int* ArrayCalculator::getValues(){
    return values;
}

void ArrayCalculator::calculateSum(){
    int summation = 0;
    for(int i = 0; i < numValues; i++){
        summation += values[i];

    }
    sum = summation;
}

void ArrayCalculator::calculateDifference(){
    int diff = 0;
    for(int i = 0; i < numValues; i++){
        diff -= values[i];
    }
    difference = diff;
}

void ArrayCalculator::calculateQuotient(){
    int quot = values[0];
    for(int i = 1; i < numValues; i++){
        quot /= values[i];
    }
    quotient = quot;
}

void ArrayCalculator::calculateProduct(){
    int prod = values[0];
    for(int i = 1; i < numValues; i++){
        prod *= values[i];
    }
    product = prod;
}

void ArrayCalculator::setValues(int* vals){
    for(int i =0; i < numValues; i++){
        values[i] = vals[i];
    }
}
//forward declare an integer array calculator
//forward declare a double array calculator
//This is a good resource: https://arne-mertz.de/2018/03/forward-declaring-templates-and-enums/
//the basic syntax is template<class T> class className<data type such as int, char, double>;