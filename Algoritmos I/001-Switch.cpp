#include <iostream>
using namespace std;

/* Faça um algoritmo que leia um número que represente um mês do ano. Após a leitura escreva por extenso
qual o mês lido. Caso o número digitado não esteja na faixa de 1...12 escreva uma mensagem informando o
usuário do erro da digitação. */

int main(){

    setlocale(LC_ALL, "Portuguese");
    int numMes;

    cout<<"Digite um número para saber qual é o seu mês: ";
    cin>>numMes;

    switch(numMes)
    {
        case 1:
            cout<<"\n  O número 1 representa o mês de Janeiro. \n\n";
            break;
        case 2:
            cout<<"\n  O número 2 representa o mês de Fevereiro. \n\n";
            break;
        case 3:
            cout<<"\n  O número 3 representa o mês de Março. \n\n";
            break;
        case 4:
            cout<<"\n  O número 4 representa o mês de Abril. \n\n";
            break;
        case 5:
            cout<<"\n  O número 5 representa o mês de Maio. \n\n";
            break;
        case 6:
            cout<<"\n  O número 6 representa o mês de Junho. \n\n";
            break;
        case 7:
            cout<<"\n  O número 7 representa o mês de Julho. \n\n";
            break;
        case 8:
            cout<<"\n  O número 8 representa o mês de Agosto. \n\n";
            break;
        case 9:
            cout<<"\n  O número 9 representa o mês de Setembro. \n\n";
            break;
        case 10:
            cout<<"\n  O número 10 representa o mês de Outubro. \n\n";
            break;
        case 11:
            cout<<"\n  O número 11 representa o mês de Novembro. \n\n";
            break;
        case 12:
            cout<<"\n  O número 12 representa o mÊs de Dezembro. \n\n";
            break;
        default:
            cout<<"\n \tOpção inválida!\n\n";
    }


    system("PAUSE");
    return 0;
}
