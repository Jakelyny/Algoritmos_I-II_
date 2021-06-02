#include <iostream>
using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");
    int numero, operacao;

    cout<<"Insira o número da tabuada que deseja: ";
    cin>>numero;
    cout<<"\n******** OPERAÇÕES ********\n  1)  X\n  2)  +\n  3)  -\n  4)  /\n***************************\nDigite a operação desejada: ";
    cin>>operacao;

    switch(operacao)
    {
        case 1:
            for(int i = 1; i <= 10; i++){
                cout<<i<<" X "<<numero<<" = "<<i*numero<<endl;
            }break;
        case 2:
            for(int i = 1; i <= 10; i++){
                cout<<i<<" + "<<numero<<" = "<<i+numero<<endl;
            }break;
        case 3:
            for(int i = 1; i <= 10; i++){
                cout<<i<<" - "<<numero<<" = "<<i-numero<<endl;
            }break;
        case 4:
            for(int i = 1; i <= 10; i++){
                cout<<i<<" / "<<numero<<" = "<<i/numero<<endl;
            }break;
        default:
            cout<<"\n\n\t\tOPS.. OPÇÃO INVÁLIDA...\n\n\n";
    }

    system("PAUSE");
    return 0;
}
