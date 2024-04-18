//
// Created by Jared Morrison on 4/17/24.
//

#include "Eratosthenes_Sieve.h"
#include <iostream>
using namespace std;

void Eratosthenes_Sieve::printPrimesUnderN(int N) {
    clearVector();
    sieve(N);
    printVector();
}


void Eratosthenes_Sieve::clearVector() {
    startVec.clear();
    primeVec.clear();
}

void Eratosthenes_Sieve::sieve(int N) {
    MAX = N;
    initVector();
    do{
        primeVec.push_back(currSmallestIndex);
        markMultiples(currSmallestIndex);
        currSmallestIndex = getNextPrime();
    }while(currSmallestIndex != -1);
}


void Eratosthenes_Sieve::initVector() {
    for(int i = 0; i < MAX; i++){
        startVec.push_back(i);
    }
}

void Eratosthenes_Sieve::markMultiples(int startIndex) {
    for (int i = startIndex * 2; i < MAX; i+=startIndex){
        startVec[i] = 0;
    }
}

int Eratosthenes_Sieve::getNextPrime() {
    if (currSmallestIndex)
        for (int i = currSmallestIndex + 1; i < startVec.size(); i++){
            if (startVec.at(i) != 0){
                return i;
            }
        }
    return -1;
}




void Eratosthenes_Sieve::printVector(){
    int rowLen = floor(sqrt(primeVec.size()));
    rowLen = rowLen > 16 ? 16 : rowLen;
    int rowIndex = 1;
    int window = getNumDigits(primeVec.at(primeVec.size() - 2));
    int spaces = 0;
    for (int i = 0; i < primeVec.size(); i++){
        spaces = window - getNumDigits(primeVec.at(i));
        cout << primeVec.at(i);
        printSpaces(spaces);
        if (rowIndex == rowLen){
            cout << endl;
            rowIndex = 0;
        }
        rowIndex++;
    }

}

void Eratosthenes_Sieve::printSpaces(int num) {
    for(int i = 0; i <= num; i++){
        cout << " ";
    }
}

int Eratosthenes_Sieve::getNumDigits(int num) {
    int numDigits = 0;
    do{
        num /= 10;
        numDigits++;
    }while(num);
    return numDigits;
}








