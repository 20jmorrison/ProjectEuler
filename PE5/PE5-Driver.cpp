/******************
 Problem #: 5

 Author: Jared Morrison

 Prompt:
    "2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
     What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?"

 Start Date: 04/17/2024 02:54 pm
 Completion: 04/17/2024 03:02 pm
 Answer: 232792560
 ******************/


#include <iostream>
using namespace std;

bool hasRemainder(int num);

int main() {

    int numToCheck = 1;

    do{
        numToCheck++;
    }while(hasRemainder(numToCheck));

    cout << numToCheck;

    return 0;
}

bool hasRemainder(int num){
    for (int i = 1; i <= 20; i++){
        if(num % i != 0){
            return true;
        }
    }
    return false;
}