/******************
 Problem #: 1

 Author: Jared Morrison

 Prompt:
    "If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6, and 9. The sum of these
     multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000."

 Start Date: 04/15/2024 12:06am
 Completion: 04/15/2024 12:16am
 Answer: 233168
 ******************/

#include <iostream>
using namespace std;

int sumMultiplesOf3And5(int max);

int main() {

    cout << sumMultiplesOf3And5(1000);
    return 0;
}

int sumMultiplesOf3And5(int max){
    int sum = 0;
    for(int i = 0; i < max; i++){
        if(i % 3 == 0){
            sum += i;
        }
        else if(i % 5 == 0){
            sum += i;
        }
    }
    return sum;
}