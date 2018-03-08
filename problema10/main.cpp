#include <iostream>

using namespace std;

using namespace std;
int main()
{
    int numero;
    int contpri = 0;
    int primo = 0;
    int auxnum = 1;
    int res = 0;
    int divi = 1;
    cout<<"ingrese un numero: ";
    cin>>numero;
    while (contpri!=numero)
    {
        if(auxnum==2)
        {
            res=16;
        }
        else
        {
            for(divi=2;divi<auxnum;divi++)
            {
                res=auxnum%divi;
                if(res==0)
                {
                    break;
                }
            }
         }
         if(res==0)
         {
             auxnum+=1;
         }
         else
         {
             contpri += 1;
             primo = auxnum;
             auxnum += 1;

         }
      }

    cout<< "el"<< numero <<"numero primo es: "<<primo <<endl;
}

