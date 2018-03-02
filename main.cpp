#include <iostream>
//*escriba un programa que pida un numero N e imprima todas las potencias desde N¹ hasat N⁵*//

using namespace std;

int main()
{
    float numero, i=1, potencia=1;
    cout << "ingrese un numero:" ;
    cin>> numero;
    while(i<=5){
        potencia=potencia*numero;
        cout <<numero<<"^"<<i<<"="<<potencia<<endl;
        i=i+1;

    }
}
