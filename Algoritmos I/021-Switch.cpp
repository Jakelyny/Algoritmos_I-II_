#include <iostream>
using namespace std;

/* Fa�a um programa que receba o pre�o de um produto e seu c�digo de origem e mostre sua proced�ncia.
A proced�ncia obedece � tabela a seguir. */

int main(){

    setlocale(LC_ALL, "Portuguese");
    int num;

    cout<<"Digite o n�mero para saber a origem: ";
    cin>>num;

    switch(num)
    {
        case 1:
            cout<<"\nO c�digo de origem � do Sul!\n\n";
            break;
        case 2:
            cout<<"\nO c�digo de origem � do Norte\n\n";
            break;
        case 3:
            cout<<"\nO c�digo de origem � do Leste!\n\n";
            break;
        case 4:
            cout<<"\nO c�digo de origem � do Oeste!\n\n";
            break;
        case 5:
        case 6:
            cout<<"\nO c�digo de origem � do Nordeste!\n\n";
            break;
        case 7:
        case 8:
        case 9:
            cout<<"\nO c�digo de origem � do Sudeste!\n\n";
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
            cout<<"\nO c�digo de origem � do Centro-Oeste!\n\n";
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
            cout<<"\nO c�digo de origem � do Nordeste!\n\n";
            break;
        default:
            cout<<"\n\n\t Op��o de c�digo inv�lida!\n\n";

    }
    system("PAUSE");
    return 0;
}
