#include<iostream>
using namespace std;

//Escrever um algoritmo e um programa que leia quantidade de números definido pelo usuario e mostre a média dos números lidos.

int main()
{

    float contador, acumulador, valor, media, totalValores;

    contador=0;
    acumulador=0;

    cout<<"\n Informe quantos valores serao calculados: ";
    cin>>totalValores;

    while (contador<totalValores)
    {
        contador=contador+1;

         cout<<"\n Informe o valor "<<contador <<" :";
         cin>>valor;

         acumulador=acumulador+valor;

    };

    media=acumulador/contador;

    cout<<"\n A media dos valores e: "<<media;

    cout<<"\n\n";

}



