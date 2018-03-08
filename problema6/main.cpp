#include <iostream>

using namespace std;
int factorialn(float numero){
    float fact=1;
    if(numero>=0){
        for(int i=1; i<numero+1;i++)
            fact=fact*i;
        return fact;

    }}

int main()
{int Naprox;
    float suma=0,N=0;
    cout << "ingrese el numerode elementos usados en la aproximacion: " ;
    cin>>Naprox;
    while(N<Naprox){
        float divi = 1.0/factorialn(N);
        suma=suma+divi;
        N=N+1.0;
    }
    cout<<"e es aproximadamente: "<<suma<<endl;
}
