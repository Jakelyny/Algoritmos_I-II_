#include <iostream>
using namespace std;

/* Fa�a um algoritmo que leia um n�mero que represente um m�s do ano. Ap�s a leitura escreva por extenso
qual o m�s lido. Caso o n�mero digitado n�o esteja na faixa de 1...12 escreva uma mensagem informando o
usu�rio do erro da digita��o. */

int main(){

    setlocale(LC_ALL, "Portuguese");
    int numMes;

    cout<<"Digite um n�mero para saber qual � o seu m�s: ";
    cin>>numMes;

    switch(numMes)
    {
        case 1:
            cout<<"\n  O n�mero 1 representa o m�s de Janeiro. \n\n";
            break;
        case 2:
            cout<<"\n  O n�mero 2 representa o m�s de Fevereiro. \n\n";
            break;
        case 3:
            cout<<"\n  O n�mero 3 representa o m�s de Mar�o. \n\n";
            break;
        case 4:
            cout<<"\n  O n�mero 4 representa o m�s de Abril. \n\n";
            break;
        case 5:
            cout<<"\n  O n�mero 5 representa o m�s de Maio. \n\n";
            break;
        case 6:
            cout<<"\n  O n�mero 6 representa o m�s de Junho. \n\n";
            break;
        case 7:
            cout<<"\n  O n�mero 7 representa o m�s de Julho. \n\n";
            break;
        case 8:
            cout<<"\n  O n�mero 8 representa o m�s de Agosto. \n\n";
            break;
        case 9:
            cout<<"\n  O n�mero 9 representa o m�s de Setembro. \n\n";
            break;
        case 10:
            cout<<"\n  O n�mero 10 representa o m�s de Outubro. \n\n";
            break;
        case 11:
            cout<<"\n  O n�mero 11 representa o m�s de Novembro. \n\n";
            break;
        case 12:
            cout<<"\n  O n�mero 12 representa o m�s de Dezembro. \n\n";
            break;
        default:
            cout<<"\n \tOp��o inv�lida!\n\n";
    }


    system("PAUSE");
    return 0;
}
