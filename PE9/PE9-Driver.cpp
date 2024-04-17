/******************
 Problem #: 9

 Author: Jared Morrison

 Prompt:
    "A Pythagorean triplet is a set of three natural numbers, a < b < c, for which a^2 + b^2 = c^2.
     For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
     There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc."

 Start Date: 04/17/2024 06:46 pm
 Completion: 04/17/2024 07:03 pm
 Answer: 31875000
 ******************/

#include <iostream>
using namespace std;

void listTriplets(int max);

int main() {

    listTriplets(1000);
    return 0;
}


void listTriplets(int max){
    int c = 0;
    for(int a = 1; a < max - 2; a++){
        for(int b = a; b < max - 1; b++){
            c = sqrt((a*a) + (b*b));
            if ((c * c) == ((a*a) + (b*b))){
                if (a + b + c == 1000){
                    cout << "Triplet found: " << a << ", " << b << ", " << c << " = " << a + b + c << endl;
                    cout << "Product: " << a * b * c << endl;
                }
            }
        }
    }
}