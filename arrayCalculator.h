
#ifndef ARRAYCALCULATOR_H
#define ARRAYCALCULATOR_H

#include <iostream>
using namespace std;

#define SIZE 10;
//make this class a template class
class ArrayCalculator{
    int sum;
    int difference;
    int product;
    int quotient;
    int values[10];
    int numValues;
    void calculateSum();
    void calculateDifference();
    void calculateQuotient();
    void calculateProduct();
    //add an overloaded insertion operator declaration
    //Note that the syntax for this is affected by the template class
    //This is a great resource to figure the syntax out: https://adaickalavan.github.io/cpp/template-operator-overload/#gsc.tab=0
    //basically, you need to declare a different template class name above the friend funciton, and then use that new template name to instantiate a template of the calculator
    public:
        //modify all methods to use template instead of int
        ArrayCalculator();
        ArrayCalculator(int*);
        ArrayCalculator(const ArrayCalculator&); //this will need to be modified so that it instantiates a template of the arrayCalculator

        int getSum();
        int getDifference();
        int getProduct();
        int getQuotient();
        int* getValues();

        void setValues(int*);
};
#endif