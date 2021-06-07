#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

/*Crie um programa que implemente uma função recursiva para calcular o MDC (Máximo Divisor Comum) entre dois números
inteiros e positivos. Para calcular o MDC deve-se utilizar o algoritmo de Euclides, que possui como conceito: “O MDC
de dois números inteiros é o maior número inteiro que divide ambos sem deixar resto”, a figura abaixo exemplifica o algoritmo de Euclides.
O MDC de 30 e 4 é: 2*/

int Leitura(char recebido[100]);
int Resultado(int num1, int num2);

int main(){

    setlocale(LC_ALL, "Portuguese");
    int num1 = 0, num2 = 0;

    num1 = Leitura("Digite um número: ");
    num2 = Leitura("Digite outro número: ");
    cout<<"\n O MDC do número "<<num1<<" e "<<num2<<" é: "<<Resultado(num1, num2)<<endl;

    getchar();
    return 0;
}

int Leitura(char recebido[100]){
    int numero;
    cout<<recebido;
    cin>>numero;
    return numero;
}

int Resultado(int num1, int num2){
    if(num1 < num2){
        return Resultado(num2, num1);
    }else{
        if(num1 % num2 == 0){
            return num2;
        }else{
            return Resultado(num2, num1 % num2);
        }
    }
}
