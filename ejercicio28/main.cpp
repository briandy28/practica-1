#include <iostream>


using namespace std;

int main(){
 int Naprox,n=1;
 float suma=0;
 cout << "ingrese el numero de elementos usados en la aproximacion: " << endl;
    cin>>Naprox;
    while(n<=Naprox){
       if(n%2==0){
         float div = 1.0/(2*n-1.0)*-1.0;
          suma=suma+div;
          n=n+1;

           }
       else{
           float div= 1.0/(2*n-1.0);
           suma =suma+div;
           n=n+1;
        }


    }
    float aprox=4*suma;
    cout<<"pi es aproxiamdamente: "<< aprox << endl;
}
