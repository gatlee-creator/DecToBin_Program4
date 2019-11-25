#include <iostream>
#include "linkedStack.h" //linked list stack code from lab 13

using namespace std;

void decToBin(int number, int base);
/*
    This function takes a positive integer and converts
    it to its binary form in base 2. 
    Precondtions:
        number = > 0
        base == 2 
*/

int main()
{
    // int testNum = 13;
    // const int base = 2;



    return 0;
}


void decToBin(int number, int base){

    int quotient, bit;
    linkedStackType<int> quotientHolder; 

    //load in the quotients
    while (quotient > 0)
    {
        quotient = number / base;
        quotientHolder.push(quotient);
    }
    
    //now get the right most bits 
    while (quotientHolder.isEmptyStack())
    {
        bit = quotientHolder.top() % base; 
        quotientHolder.pop();

        cout << bit; //output the right most bit 
    }
    
}