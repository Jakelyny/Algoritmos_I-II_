#include <iostream>
using namespace std;

/* Os funcion�rios de uma empresa receberam um aumento de sal�rio: 1) T�cnicos: 50% 2)Gerentes: 30% 3)Demais: 20%
Usando o comando Switch, escreva um algoritmo que receba como entrada o sal�rio atual e o cargo do funcion�rio, e
apresente o novo sal�rio ap�s o aumento. Imprima tamb�m o cargo, de acordo com a entrada digitada. */

int main(){

    setlocale(LC_ALL, "Portuguese");
    int numero, escolha;

    cout<<"\nSaiba seu aumento de acordo com seu cargo: \n 1 - T�cnico \n 2 - Gerente \n 3 - Demais \n";
    cout<<"Digite o valor do seu sal�rio: R$";
    cin>>numero;
    cout<<"Digite o n�mero correspondente ao seu cargo: ";
    cin>>escolha;

    switch(escolha)
    {
        case 1:
            cout<<"\n\tComo T�cnico seu aumento � de "<<numero + (numero*0.5)<<".\n\n";
            break;
        case 2:
            cout<<"\n\tComo Gerente seu aumento � de "<<numero + (numero*0.3)<<".\n\n";
            break;
        case 3:
            cout<<"\n\tComo os demais o seu aumento � de "<<numero + (numero*0.2)<<".\n\n";
            break;
        default:
            cout<<"\n\t\tOP��O INV�LIDA\n\n";
    }
    system("PAUSE");
    return 0;
}
