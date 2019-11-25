#include <iostream>
#include "linkedStack.h" //linked list stack code from lab 13

using namespace std;

void decToBin(int number);
/*
    This function takes a positive integer and converts
    it to its binary form in base 2. 
    Precondtions:
        number > 0
*/

int main()
{
    int testNum = 13;
    
    //test 1 
    cout << "decimal: " << testNum << endl;
    
    cout << "binary: ";
    decToBin(testNum);
    cout << endl;

    //test 2
    testNum = 78; //new test number
    cout << "decimal: " << testNum << endl;

    cout << "binary: ";
    decToBin(testNum);
    cout << endl;

    //test 3
    testNum = 260; //new test number
    cout << "decimal: " << testNum << endl;

    cout << "binary: ";
    decToBin(testNum);
    cout << endl;

    return 0;
}


void decToBin(int number){

    int quotient, bit;
    const int base = 2;
    linkedStackType<int> quotientHolder; 
    
    quotientHolder.push(number);
    quotient = number; 

    //load in the quotients
    while (quotient > 0)
    {
        quotient = quotient / base;
        quotientHolder.push(quotient);
    }
    
    //now get the right most bits 
    while (!quotientHolder.isEmptyStack())
    {
        bit = quotientHolder.top() % base; 
        cout << bit; //output the right most bit 

        quotientHolder.pop();
    }
    
} //end of decToBin 