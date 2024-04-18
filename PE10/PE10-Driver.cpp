/******************
 Problem #: 10

 Author: Jared Morrison

 Prompt:
    "The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
     Find the sum of all the primes below two million."

 Start Date: 04/17/2024 07:10 pm
 Completion: 04/17/2024 07:52 pm
 Answer: 142913828922
 ******************/

#include <iostream>
using namespace std;


bool isPrime(long int numToCheck);

int main() {

    const int MAX = 2000000;
    int primeIndex = 2;
    long int i = 3;
    long int sum = 2;
    do{
        if(isPrime(i)){
            cout << primeIndex << ":    " << i << endl;
            sum += i;
            primeIndex++;
        }
        i+=2;
    }while(i < MAX);
    cout << endl << sum;


    return 0;
}

bool isPrime(long int numToCheck){
    for (long int i = 2; i <= sqrt(numToCheck); i++){
        if(numToCheck % i == 0){
            return false;
        }
    }
    return true;
}
