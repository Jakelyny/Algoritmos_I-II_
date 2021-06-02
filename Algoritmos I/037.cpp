#include <iostream>
using namespace std;

/* Imprimir se um número X é divisível por Y */

main(){

    setlocale(LC_ALL, "Portuguese");
    int x, y;

    cout<<" Digite o número a ser dividido: ";
    cin>>x;
    cout<<" Digite o divisor: ";
    cin>>y;

    if(x % y == 0)
    {
        cout<<"\n   O número "<<x<<" é divisível por "<<y<<".\n\n"<<endl;
    }
    else
    {
        cout<<"\n   O número "<<x<<" não é divisível por "<<y<<".\n\n"<<endl;
    }
}
