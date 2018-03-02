#include <iostream>
//*escriba un programa que pida constantemente numeros hasta que se ingrese*//
//*al numero cero e imprima en pantalla el promdeio de numero ingresados(excluyendo el cero).*//
using namespace std;

int main()
{
    float numero, suma=0,n=0;
    while(true){
        cout << "ingrese un numero: ";
        n=n+1;
        cin>>numero;
        suma=suma+numero;
        float promedio=suma/(n-1);
        if(numero==0){
            cout<<n<<"el promedio es: "<<promedio<<endl;
            break;
        }
        }
    }

