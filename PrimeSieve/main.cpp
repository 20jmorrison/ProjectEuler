#include <iostream>
#include "vector"
using namespace std;

const int MAX = 2000;
int currSmallestIndex = 0;

void printVector(vector<int> vec);
void initVector(vector<int>& vec);
void markMultiples(vector<int>& vec, int startIndex);
int getNextPrime(vector<int>& vec);

int main() {

    vector<int> myVec;
    vector<int> primeVec;
    initVector(myVec);
    currSmallestIndex = 2;

    do{
        markMultiples(myVec, currSmallestIndex);
        currSmallestIndex = getNextPrime(myVec);
        primeVec.push_back(currSmallestIndex);
    }while(currSmallestIndex != -1);
    //cout << primeVec.at(primeVec.size() - 2);
    printVector(primeVec);
    return 0;
}

int getNextPrime(vector<int>& vec){
    if (currSmallestIndex)
    for (int i = currSmallestIndex + 1; i < vec.size(); i++){
        if (vec.at(i) != 0){
            return i;
        }
    }
    return -1;
}


void markMultiples(vector<int>& vec, int startIndex){
    for (int i = startIndex * 2; i < MAX; i+=startIndex){
        vec[i] = 0;
    }
}


void initVector(vector<int>& vec){
    for(int i = 0; i < MAX; i++){
        vec.push_back(i);
    }
}

void printVector(vector<int> vec){
    int rowLen = floor(sqrt(vec.size()));
    int rowIndex = 0;
    cout << endl << endl;
    for (int i = 0; i < vec.size(); i++){
        cout << vec.at(i) << " ";
        if (rowIndex == rowLen){
            cout << endl;
            rowIndex = 0;
        }
        rowIndex++;
    }
}