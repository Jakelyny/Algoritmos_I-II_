#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

/*Crie um programa que calcula o n-�simo n�mero harm�nico que � calculado pela seguinte f�rmula: H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n,
sendo (n >=1). Escreva uma fun��o recursiva que calcula H(n).*/

float aux = 0;

float Resultado(float n);

int main(){

    setlocale(LC_ALL, "Portuguese");
    float n = 0.0;

    cout<<"Digite um valor para n: ";
    cin>>n;
    cout<<"\n N�mero resultante: "<<Resultado(n)<<endl;

    getchar();
    return 0;
}

float Resultado(float n){
    if(n > 0){
        aux += 1.0/n;
        return Resultado(n -1);
    }else{
        return aux;
    }
}

