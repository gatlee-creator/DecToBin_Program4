#include <iostream>
#include <string>
#include <cmath>

#include "myStack.h" //array-stack code from lab13

using namespace std;

void binToDec(int binaryNumber, int &decimal, int &weight);
/*
    This function takes a binary number of any size and converts
    it to a decimal number.
    Precondtions:
        - decimal is set to 0
        - weight is set to 0  
*/


int main()
{
    int weight = 0;
    int decimal = 0;
    int bit_4 = 1101;
    int bit_8 = 1000001;

    cout << "4-bit binary: " << bit_4 << endl;

    binToDec(bit_4, decimal, weight);

    cout << "decimal: " << decimal << endl;

    //reset
    weight = 0;
    decimal = 0;

    cout << "8-bit binary: " << bit_8 << endl;

    binToDec(bit_8, decimal, weight);

    cout << "decimal: " << decimal << endl;


    return 0;
}

void binToDec(int binaryNumber, int &decimal, int &weight){
    int bit;
    //get the length of the binaryNumber
    int size = to_string(binaryNumber).length();
    //create the stackType of that size 
    stackType<int> bitHolder(size);

    while (!bitHolder.isFullStack())
    {
        bit = binaryNumber % 10; //right most bit

        bitHolder.push(bit); //push that onto the stack 

        //weight equation
        decimal = decimal + bitHolder.top() * static_cast<int>(pow(2.0, weight));

        binaryNumber = binaryNumber / 10;

        weight++; 

        //cout << "decimal: " << decimal << endl; //debug 
    }
    
}