#include "arrayCalculator.h"


int main(){
    //Do not alter the arrays or your output will not pass the autograder
    int values[10];
    for(int i = 0; i <10; i++){
        values[i] = i+1;
    }
    double doubleValues[] = {0.42, 0.33, 0.99, 1.33, 1.66, 2.16, 9.45, 4.32, 4.42, 0.55};
    
    ArrayCalculator intCalc(values); //could also use default and then call set

    //Replace these couts with an insertion operator overload
    cout <<endl << "INT ARRAY!"<< endl;
    cout << "Array Sum: "<< intCalc.getSum() << endl;
    cout << "Array Difference: " << intCalc.getDifference()<< endl;
    cout << "Array Product: " << intCalc.getProduct() << endl;
    cout << "Array Quotient: " << intCalc.getQuotient()<< endl;
    
    //Modify the calculator class so that it can take doubles or ints (it should be a template class)
    //Create a doubleCalc object
    //print "DOUBLE ARRAY"
    //use the insertion operator overload that your wrote to replace the couts above to print double array info
    return 0;
}

//write your insertion operator overload IMPLEMENTATION her