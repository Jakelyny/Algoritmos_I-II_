#include <iostream>

using namespace std;

//(1�) Fa�a um programa que receba dois n�meros, calcule e mostre a subtra��o do primeiro pelo segundo.

int main(){

    system("color CE");
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, sub;
    char resposta;

    do{
        cout<<"\nDigite um n�mero: ";
        cin>>num1;
        cout<<"Digite o segundo: ";
        cin>>num2;

        sub = num1 - num2;
        cout<<"\n A subtra��o de "<<num1<<" por "<<num2<<" � igual a "<<sub<<".\n"<<endl;
        cout<<" Deseja subtrair mais n�meros? ( S / N) ? ";
        cin>>resposta;
    }while (resposta == 's' || resposta == 'S');
    cout<<"\n\t\t\t Encerrando programa...\n"<<endl;

    system("PAUSE");
    return 0;
}
