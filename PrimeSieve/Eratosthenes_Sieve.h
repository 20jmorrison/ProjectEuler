//
// Created by Jared Morrison on 4/17/24.
//

#ifndef PRIMESIEVE_ERATOSTHENES_SIEVE_H
#define PRIMESIEVE_ERATOSTHENES_SIEVE_H

#include "vector"
using namespace std;

class Eratosthenes_Sieve{
public:
    void printPrimesUnderN(int N);

private:
    void initVector();
    void clearVector();
    void markMultiples(int startIndex);
    void printVector();
    void sieve(int N);
    void printSpaces(int num);
    int getNextPrime();
    int getNumDigits(int num);

    vector<int> startVec;
    vector<int> primeVec;
    int MAX = 0;
    int currSmallestIndex = 2;

};

#endif //PRIMESIEVE_ERATOSTHENES_SIEVE_H
