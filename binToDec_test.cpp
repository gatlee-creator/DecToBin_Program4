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
    int binary = 1101;

    cout << "binary: " << binary << endl;

    binToDec(binary, decimal, weight);

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