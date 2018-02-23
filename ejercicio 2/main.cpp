#include <iostream>

using namespace std;
/* Ejercicio 4. Escriba un programa que pida dos números A y B e imprima en pantalla el menor.
Ej:
si se ingresan 7 y 3 se debe imprimir: El menor es 3*/
int main()
{
    float numero1, numero2;
    cout << "escriba un numero: ";
    cin >> numero1;

    cout << "escriba otro numero ";
    cin>> numero2;
    if(numero1<numero2){
        cout << "el menor es:" <<numero1 << endl;
    }
    if(numero2<numero1){
        cout << "el menor es:" <<numero2 << endl;
    }
    if (numero1==numero2){
        cout<<"los numeros son iguales" << endl;
    }
}
