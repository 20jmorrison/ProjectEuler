/******************
 Problem #: 6

 Author: Jared Morrison

 Prompt:
    "The sum of the squares of the first ten natural numbers is (1^2) + (2^2) + ... + (10^2) = 385.

     The square of the sum of the first ten natural numbers is (1+2+...+10)^2 = 55^2 = 3025.

     Hence the difference between the sum of the squares of the first ten natural numbers and the square of the
     sum is 3025 - 385 = 2640.

     Find the difference between the sum of the squares of the first one hundred natural numbers and
     the square of the sum."

 Start Date: 04/17/2024 03:11 pm
 Completion: 04/17/2024 05:45 pm
 Answer: 25164150
 ******************/

#define MAX 100

#include <iostream>
using namespace std;

int sumOfSquares(int max);
int squareOfSum(int max);

int main() {
    int difference = squareOfSum(MAX)- sumOfSquares(MAX);
    cout << "Sum Square Difference: " << difference << endl;
    return 0;
}

int sumOfSquares(int max){
    int sum = 0;
    for (int i = 1; i <= max; i++){
        sum += i * i;
    }
    return sum;
}

int squareOfSum(int max){
    int sum = 0;
    for (int i = 1; i <= max; i++){
        sum += i;
    }
    return sum * sum;
}
