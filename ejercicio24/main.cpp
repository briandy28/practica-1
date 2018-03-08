#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "ingrese un numero positivo: ";
    cin >>n;
    for(int pf=0;pf<n;pf++){
        cout<< "+";
    }
    for(int colm=0;colm<n-2;colm++){
        cout<<endl;
        for(int f=0;f<=1;f++){
            cout<<"+";
            for(int esp=0; esp<n-2;esp++){
                cout<<" ";
            }
        }
    }
    cout<<endl;
    for(int pf=0;pf<n;pf++){
        cout<< "+";

    }
    cout<<endl;
}
