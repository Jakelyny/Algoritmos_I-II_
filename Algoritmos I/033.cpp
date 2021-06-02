#include <iostream>
using namespace std;

/* Faça um programa que receba dois números diferentes e mostre o maior. */


main(){

    setlocale(LC_ALL, "Portuguese");
    double numero1, numero2;

    cout<<" Digite um número: ";
    cin>>numero1;
    cout<<" Digite o segundo número: ";
    cin>>numero2;

    if(numero1 > numero2){
        cout<<"\nNúmero "<<numero1<<" é maior que o número "<<numero2<<"\n\n"<<endl;
    }else{
        cout<<"\nNúmero "<<numero2<<" é maior que o número "<<numero1<<"\n\n"<<endl;
    }
}
