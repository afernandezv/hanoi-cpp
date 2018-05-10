#include <iostream>
#include "programPause.h"

using namespace std;

void programPause(){
    cout << "\nPress ENTER to continue... " << flush;
    cin.ignore();
    cin.get();
}

