#include <iostream>

using namespace std;

int palindromo(int numero);

int main()
{

    int ope1=0;
    int ope2=0;
    int a=100;
    int b =100;
    int resultado=0;
    int mult=0;

    while(a<1000)
    {

        while(b<1000)
        {
            mult=a*b;
            if (palindromo(mult))
            {
                if (mult>resultado)
                {
                    resultado = mult;
                    ope1 = a;
                    ope2 = b;
                }
            }

            b +=1;
        }

        a +=1;
        b = a;


    }

    cout <<ope1<<"*"<<ope2<<"="<<resultado<<endl;
    return 0;
}

int palindromo(int numero){
    int res = 0;
    int numv = 0;
    int auxnumero = numero;

    while(auxnumero!=0)
    {
        res=auxnumero % 10;
        auxnumero = auxnumero / 10;
        numv= numv*10+res;
    }

    if (numv == numero){return true;}else{return false;}
}
