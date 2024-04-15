/******************
 Problem #: 3

 Author: Jared Morrison

 Prompt:
    "The prime factors of 13195 are 5, 7, 13, and 29. What is the largest prime factor
     of the number 600851475143?"

 Start Date: 04/15/2024 06:02 pm
 Completion: 04/15/2024 06:56 pm
 Answer: 6857
 ******************/

#include <iostream>
#include "math.h"
using namespace std;

void printPrimes(int max);
bool isPrime(int numToCheck);

unsigned long long const int COMPOSITE = 600851475143;

int main() {
    printPrimes(sqrt(COMPOSITE));
    return 0;
}

void printPrimes(int max) {
    for (int i = 3; i < max; i += 2){
        if (isPrime(i) && (COMPOSITE % i == 0)){
            cout << i << endl;
        }
    }
}

bool isPrime(int numToCheck){
    for (int i = 2; i < sqrt(numToCheck); i++){
        if (numToCheck % i == 0){
            return false;
        }
    }
    return true;
}


