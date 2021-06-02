#include<iostream>
using namespace std;

/*Escrever um algoritmo e um programa que lê um número não determinado de valores inteiros e
positivos, maiores que 0 e menores que 5.000. A cada número lido, mostrar a quantidade de
números lidos, juntamente com a média destes. Parar de informar quando o valor informado seja igual a “ 0 ”.*/

int main()
{
    int cont=0, soma=0, num;
    double media;


    do
    {
        cout<<"Informe o numero: ";
        cin>>num;
        if(num>0 && num<5000)
        {
            cont=cont+1;
            soma=soma+num;
        }

    }while(num!=0);

    media=soma/cont;

    cout<<"\n quantidade de numeros informados: "<<cont;
    cout<<"\n soma dos numeros informados: "<<soma;
    cout<<"\n media dos numeros informados: "<<media;

    cout<<"\n \n";

}
