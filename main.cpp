#include <iostream>
#include "programPause.cpp"
#include "hanoi.cpp"

using namespace std;

int main() {
    int n = 0;
    char pA = 'A';
    char pB = 'B';
    char pC = 'C';

    cout << "\n\tSolucion al juego de las Torres de Hanoi para n discos.\n" << endl;

    while(n <= 0){
        cout << "\t\tIntroduce el numero de discos: ";
        cin >> n;
        if(n <= 0){
            cout << "\nEl numero de discos debe de ser mayor y distinto de cero, intentalo de nuevo.\n" << endl;
        }
    }

    cout << "\n\n\tLa solucion para las Torres de Hanoi con " << n << " discos es la siguiente:\n" << endl;
    // Llamada a la fución recursiva
    hanoi(n, pA, pC, pB);
    programPause();
    return 0;
}