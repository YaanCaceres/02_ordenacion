// intercambio directo con senal
#include <iostream>
using namespace std;

void intercambioSenal(int A[], int n) {
    int i = 0;
    bool ordenado = false;
    while (i < n - 1 && !ordenado) {
        ordenado = true; 

        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                int auxi = A[j];
                A[j] = A[j + 1];
                A[j + 1] = auxi;
                ordenado = false; 
            }
        }
        i++;
    }
}

int main() {
    int A[50]; 
    int n;
    cout << "Ingrese la cantidad de datos: ";
    cin >> n;
    if (n > 50 || n <= 0) {
        cout << "Error: La cantidad de datos debe estar entre 1 y 50." << endl;
        return 1; 
    }

    cout << "\nIngrese los elementos del arreglo:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Dato [" << i << "]: ";
        cin >> A[i];
    }

    intercambioSenal(A, n);

    cout << "\nArreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    
    return 0;
}