#include <iostream>
using namespace std;

/* Escrever um algoritmo e um programa que leia dois valores num�ricos e mostre a diferen�a do maior para o menor. */

main(){

    setlocale(LC_ALL, "Portuguese");
    int num1, num2;

    cout<<"  Digite um n�mero: ";
    cin>>num1;
    cout<<"  Digite o outro: ";
    cin>>num2;

    if(num1 == num2)
    {
        cout<<" Os dois n�meros s�o iguais!\n\n"<<endl;
    }
    else
    {
        if(num1 > num2)
        {
            cout<<"\n O n�mero "<<num1<<" � maior que o "<<num2<<" a diferen�a entre eles � de "<<num1-num2<<"\n\n"<<endl;
        }
        else
        {
            cout<<"\n O n�mero "<<num2<<" � maior que o "<<num1<<" a diferen�a entre eles � de "<<num2-num1<<"\n\n"<<endl;
        }
    }
}
