#include <iostream>
using namespace std;

/* Escrever um algoritmo e um programa que leia um n�mero inteiro. Mostrar se o n�mero lido � �par� ou ��mpar�. */

main(){

    setlocale(LC_ALL, "Portuguese");
    int num;


    cout<<" Digite um n�mero: ";
    cin>>num;

    if(num % 2 == 0)
    {
        cout<<"\nO n�mero "<<num<<" � par!\n\n"<<endl;
    }
    else
    {
        cout<<"\nO n�mero "<<num<<" � �mpar!\n\n"<<endl;
    }
    return 0;
}
