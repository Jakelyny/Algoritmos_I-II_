#include <iostream>
using namespace std;

/* Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
A procedência obedece à tabela a seguir. */

int main(){

    setlocale(LC_ALL, "Portuguese");
    int num;

    cout<<"Digite o número para saber a origem: ";
    cin>>num;

    switch(num)
    {
        case 1:
            cout<<"\nO código de origem é do Sul!\n\n";
            break;
        case 2:
            cout<<"\nO código de origem é do Norte\n\n";
            break;
        case 3:
            cout<<"\nO código de origem é do Leste!\n\n";
            break;
        case 4:
            cout<<"\nO código de origem é do Oeste!\n\n";
            break;
        case 5:
        case 6:
            cout<<"\nO código de origem é do Nordeste!\n\n";
            break;
        case 7:
        case 8:
        case 9:
            cout<<"\nO código de origem é do Sudeste!\n\n";
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
            cout<<"\nO código de origem é do Centro-Oeste!\n\n";
            break;
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
            cout<<"\nO código de origem é do Nordeste!\n\n";
            break;
        default:
            cout<<"\n\n\t Opção de código inválida!\n\n";

    }
    system("PAUSE");
    return 0;
}
