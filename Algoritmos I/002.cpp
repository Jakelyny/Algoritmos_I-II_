#include <iostream>

using namespace std;

/*(2ª) Faça um algoritmo que leia dois números nas variáveis Val1 e Val2, calcule sua média na
variável Media e imprima seu valor. */

int main(){

    system("color 87");
    setlocale(LC_ALL, "Portuguese");
    float val1, val2, media = 0.0;
    char resposta;

    do{
        cout<<"\nDigite um número: ";
        cin>>val1;
        cout<<"Digite o segundo número: ";
        cin>>val2;

        media = (val1 + val2) / 2;
        cout<<"\n A média entre "<<val1<<" e "<<val2<<" é de "<<media<<".\n"<<endl;
        cout<<" Deseja fazer a média novamente? ( S / N)? ";
        cin>>resposta;
    }while (resposta =='s' || resposta == 'S');
    cout<<"\n\t\t\t Encerrando programa...\n"<<endl;

    system("PAUSE");
    return 0;
}
