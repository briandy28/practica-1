#include <iostream>

using namespace std;
/*Escriba un programa que pida un número N e imprima en pantalla su factorial.
Ej: si se ingresa 5: 5!=1*2*3*4*5=120, por lo que se debe imprimir:
5!=120*/
int main()
{
    int numero, factorial=1;
    cout << "ingrese un numero entero positivo" << endl;
    cin >> numero;
    if (numero>=0){
        for (int i=1;i<numero+1;i++){
           factorial =factorial*i;

        }

        cout << "el factorial de " << numero << " es: " << endl;
        cout << numero <<"!= "<< factorial <<endl;

    }
    else{
        cout << "el numero es negativo ";
    }




}
