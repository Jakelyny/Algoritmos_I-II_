#include <iostream>
using namespace std;

/* Fa�a um programa que receba dois n�meros diferentes e mostre o maior. */


main(){

    setlocale(LC_ALL, "Portuguese");
    double numero1, numero2;

    cout<<" Digite um n�mero: ";
    cin>>numero1;
    cout<<" Digite o segundo n�mero: ";
    cin>>numero2;

    if(numero1 > numero2){
        cout<<"\nN�mero "<<numero1<<" � maior que o n�mero "<<numero2<<"\n\n"<<endl;
    }else{
        cout<<"\nN�mero "<<numero2<<" � maior que o n�mero "<<numero1<<"\n\n"<<endl;
    }
}
