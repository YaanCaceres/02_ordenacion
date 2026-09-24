// intercambio directo por la derecha
#include <iostream>
using namespace std;

void intercambioDerecha(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                int auxi = A[j];
                A[j] = A[j + 1];
                A[j + 1] = auxi;
            }
        }
    }
}

int main() {
    int A[50]; 
    int n;
    cout << "Ingrese la cantidad de datos  ";
    cin >> n;
    // Validacion
    if (n > 50 || n <= 0) {
        cout << "Error: La cantidad de datos debe estar entre 1 y 50." << endl;
        return 1; 
    }
    // 3. Pedir al usuario que ingrese los datos
    cout << "\nIngrese los elementos del arreglo:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Dato [" << i << "]: ";
        cin >> A[i];
    }
    intercambioDerecha(A, n);
    cout << "\nArreglo ordenado: ";
    for(int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    
    return 0;
}