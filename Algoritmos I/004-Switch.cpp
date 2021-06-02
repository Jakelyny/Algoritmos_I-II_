#include <iostream>
using namespace std;

/* Os funcionários de uma empresa receberam um aumento de salário: 1) Técnicos: 50% 2)Gerentes: 30% 3)Demais: 20%
Usando o comando Switch, escreva um algoritmo que receba como entrada o salário atual e o cargo do funcionário, e
apresente o novo salário após o aumento. Imprima também o cargo, de acordo com a entrada digitada. */

int main(){

    setlocale(LC_ALL, "Portuguese");
    int numero, escolha;

    cout<<"\nSaiba seu aumento de acordo com seu cargo: \n 1 - Técnico \n 2 - Gerente \n 3 - Demais \n";
    cout<<"Digite o valor do seu salário: R$";
    cin>>numero;
    cout<<"Digite o número correspondente ao seu cargo: ";
    cin>>escolha;

    switch(escolha)
    {
        case 1:
            cout<<"\n\tComo Técnico seu aumento é de "<<numero + (numero*0.5)<<".\n\n";
            break;
        case 2:
            cout<<"\n\tComo Gerente seu aumento é de "<<numero + (numero*0.3)<<".\n\n";
            break;
        case 3:
            cout<<"\n\tComo os demais o seu aumento é de "<<numero + (numero*0.2)<<".\n\n";
            break;
        default:
            cout<<"\n\t\tOPÇÃO INVÁLIDA\n\n";
    }
    system("PAUSE");
    return 0;
}
