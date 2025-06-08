#include <iostream>
using namespace std;

int main() {
    int a, b, suma = 0;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Los primeros " << b << " múltiplos de " << a << " son:\n";
    for (int i = 0; i < b; i++) {
        int multiplo = a * i;
        cout << multiplo << " ";
        suma = suma + multiplo;
    }

    cout << "\nLa suma de los múltiplos es: " << suma << endl;
    return 0;
}

