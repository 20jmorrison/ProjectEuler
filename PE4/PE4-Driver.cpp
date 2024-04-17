/******************
 Problem #: 4

 Author: Jared Morrison

 Prompt:
    "A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit
     numbers is 9009 = 91 * 99. Find the largest palindrome made from the product of two 3-digit numbers."

 Start Date: 04/16/2024 12:48 am
 Completion: 04/17/2024 02:50 pm
 Answer: 906609
 ******************/

#include <iostream>
using namespace std;

// ---- Public Functions ----
bool isPalindrome(int numToCheck);


// ---- Private Functions ----
int getNumDigits(int numToCheck);

int main() {
    int largestPalindrome = 0;

    for(int x = 999; x > 0; x--){
        for(int y = x; y > 0; y--){
            int product = x * y;
            if (isPalindrome(product)){
                largestPalindrome = product > largestPalindrome ? product : largestPalindrome;
            }
        }
    }
    cout << "Largest palindrome from product of two 3-digit numbers: " << largestPalindrome;
    return 0;
}


bool isPalindrome(int numToCheck){
    int size = getNumDigits(numToCheck);
    int tempNum = numToCheck;
    int reversedNum = 0;
    const int base = 10;

    for (int i = size - 1; i >= 0; i--){
        reversedNum += (tempNum % base) * pow(base, i);
        tempNum /= base;
    }

    if (reversedNum == numToCheck){
        return true;
    }
    else {
        return false;
    }
}

int getNumDigits(int numToCheck){
    int digits = 0;
    do{
        numToCheck /= 10;
        digits++;
    }while (numToCheck > 0);

    return digits;
}