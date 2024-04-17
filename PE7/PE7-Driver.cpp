/******************
 Problem #: 7

 Author: Jared Morrison

 Prompt:
    "By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
     What is the 10001st prime number?"

 Start Date: 04/17/2024 05:50 pm
 Completion: 04/17/2024 06:02 pm
 Answer: 104743
 ******************/

#define MAX 10001

#include <iostream>
#include "math.h"

using namespace std;

bool isPrime(int numToCheck);

int main() {

    int primeIndex = 1;
    int i = 3;
    do {
        if(isPrime(i)){
            primeIndex++;
            cout << primeIndex << ":   " << i << endl;
        }
        i+=2;
    }while(primeIndex < MAX);


    return 0;
}

bool isPrime(int numToCheck){
    for (int i = 2; i <= sqrt(numToCheck); i++){
        if (numToCheck % i == 0){
            return false;
        }
    }
    return true;
}