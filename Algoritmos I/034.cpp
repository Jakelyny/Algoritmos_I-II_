#include <iostream>
using namespace std;

/* Escrever um algoritmo e um programa que leia dois valores numéricos e mostre a diferença do maior para o menor. */

main(){

    setlocale(LC_ALL, "Portuguese");
    int num1, num2;

    cout<<"  Digite um número: ";
    cin>>num1;
    cout<<"  Digite o outro: ";
    cin>>num2;

    if(num1 == num2)
    {
        cout<<" Os dois números são iguais!\n\n"<<endl;
    }
    else
    {
        if(num1 > num2)
        {
            cout<<"\n O número "<<num1<<" é maior que o "<<num2<<" a diferença entre eles é de "<<num1-num2<<"\n\n"<<endl;
        }
        else
        {
            cout<<"\n O número "<<num2<<" é maior que o "<<num1<<" a diferença entre eles é de "<<num2-num1<<"\n\n"<<endl;
        }
    }
}
