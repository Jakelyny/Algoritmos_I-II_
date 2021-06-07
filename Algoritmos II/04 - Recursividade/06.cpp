#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

/*Crie um programa que calcula o n-ésimo número harmônico que é calculado pela seguinte fórmula: H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n,
sendo (n >=1). Escreva uma função recursiva que calcula H(n).*/

float aux = 0;

float Resultado(float n);

int main(){

    setlocale(LC_ALL, "Portuguese");
    float n = 0.0;

    cout<<"Digite um valor para n: ";
    cin>>n;
    cout<<"\n Número resultante: "<<Resultado(n)<<endl;

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

