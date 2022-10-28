#include <iostream>
/*7) Capture do teclado valores para preenchimento de uma matriz M 3x3.
Após a captura imprima a matriz criada e encontre a quantidade de números
pares, a quantidade de números ímpares*/
using namespace std;

int main()
{
    int matriz[3][3], lin, col, pares, impares;

    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 3; col++) {
            cout << "digite um valor: ";
            cin >> matriz[lin][col];
        }
    }
    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 3; col++) {
            if (col < 2) {
                cout << matriz[lin][col] << " ";
            }
            else {
                cout << matriz[lin][col] << endl;
            }
        }

    }
    pares = 0;
    impares = 0;
    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 3; col++) {
            if (matriz[lin][col] % 2 == 0) {
                pares = pares + 1;
            }
            else {
                impares = impares + 1;
            }
        }
    }
    cout << "A quantidade de pares eh: " << pares << endl;
    cout << "A quantidade de imprares eh: " << impares << endl;
}