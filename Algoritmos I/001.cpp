#include <iostream>

using namespace std;

//(1ª) Faça um programa que receba dois números, calcule e mostre a subtração do primeiro pelo segundo.

int main(){

    system("color CE");
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, sub;
    char resposta;

    do{
        cout<<"\nDigite um número: ";
        cin>>num1;
        cout<<"Digite o segundo: ";
        cin>>num2;

        sub = num1 - num2;
        cout<<"\n A subtração de "<<num1<<" por "<<num2<<" é igual a "<<sub<<".\n"<<endl;
        cout<<" Deseja subtrair mais números? ( S / N) ? ";
        cin>>resposta;
    }while (resposta == 's' || resposta == 'S');
    cout<<"\n\t\t\t Encerrando programa...\n"<<endl;

    system("PAUSE");
    return 0;
}
