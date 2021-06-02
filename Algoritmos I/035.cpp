#include <iostream>
using namespace std;

/* Escrever um algoritmo e um programa que leia um número inteiro. Mostrar se o número lido é “par” ou “ímpar”. */

main(){

    setlocale(LC_ALL, "Portuguese");
    int num;


    cout<<" Digite um número: ";
    cin>>num;

    if(num % 2 == 0)
    {
        cout<<"\nO número "<<num<<" é par!\n\n"<<endl;
    }
    else
    {
        cout<<"\nO número "<<num<<" é ímpar!\n\n"<<endl;
    }
    return 0;
}
