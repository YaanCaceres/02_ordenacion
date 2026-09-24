// intercambio directo por la izquierda
#include <iostream>
using namespace std;

void intercambioIzquierda(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (A[j] < A[j - 1]) {
                int auxi = A[j];
                A[j] = A[j - 1];
                A[j - 1] = auxi;
            }
        }
    }
}

int main() {
    int A[50]; 
    int n;
    cout << "Ingrese la cantidad de datos: ";
    cin >> n;

    // Validacion
    if (n > 50 || n <= 0) {
        cout << "Error: La cantidad de datos debe estar entre 1 y 50." << endl;
        return 1; 
    }
    cout << "\nIngrese los elementos del arreglo:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Dato [" << i << "]: ";
        cin >> A[i];
    }
    intercambioIzquierda(A, n);
    cout << "\nArreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}