#include <iostream>
//*escriba un programa que pida un numero N e imprima si es o no palindromo*//
using namespace std;

int main()
{
    int numero,res,numv=0,auxnumero;
    cout<<"ingrese un numero: "<<endl;
    cin>>numero;
    auxnumero=numero;
    while(auxnumero!=0){
        res=auxnumero % 10;
        auxnumero = auxnumero / 10;
        numv= numv*10+res;
    }
  if (numv= numero){
  cout<<"El numero es Palindromo"<<endl;
  }
  else{
  cout<<"El numero no es Palindromo"<<endl;
  }
}
