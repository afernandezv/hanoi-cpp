#include <iostream>
#include "hanoi.h"

using namespace std;

void hanoi(int n, char pA, char pC, char pB){
    if(n == 1){
        cout << "\t\tMueve el disco " << n << " de la torre " << pA << " a la torre " << pC <<  "\n" << endl;
    } else {
        hanoi(n-1, pA, pB, pC);
        cout << "\t\tMueve el disco " << n << " de la torre " << pA << " a la torre " << pC <<  "\n" << endl;
        hanoi(n - 1, pB, pC, pA );
    }
}