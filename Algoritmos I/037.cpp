#include <iostream>
using namespace std;

/* Imprimir se um n�mero X � divis�vel por Y */

main(){

    setlocale(LC_ALL, "Portuguese");
    int x, y;

    cout<<" Digite o n�mero a ser dividido: ";
    cin>>x;
    cout<<" Digite o divisor: ";
    cin>>y;

    if(x % y == 0)
    {
        cout<<"\n   O n�mero "<<x<<" � divis�vel por "<<y<<".\n\n"<<endl;
    }
    else
    {
        cout<<"\n   O n�mero "<<x<<" n�o � divis�vel por "<<y<<".\n\n"<<endl;
    }
}
