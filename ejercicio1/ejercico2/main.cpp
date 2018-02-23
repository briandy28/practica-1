#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "escriba un numero: ";
    cin >> numero;

    cout << "el numero que es: " << numero << endl;
    if(numero%2==0){
        cout << "el numero es par" << endl;
    }
    else{
        cout << "el numero es inpar" << endl;
    }
}
