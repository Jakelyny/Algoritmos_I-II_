#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

/*Escreva um programa que apresente os primeiros 20 termos da sequ�ncia de Fibonacci: �A gera��o n de Fibonacci retorna 1 quando for
at� a 2� gera��o. Se n�o, retorna a soma das duas �ltimas gera��es anteriores�. Utilize uma fun��o recursiva para resolver este problema.*/

int Fibonacci(int fib);

int main(){

    setlocale(LC_ALL, "Portuguese");
    int numFib = 20;

    cout<<"20 primeiros termos da sequ�ncia Fibonacci:\n "<<endl;
    for(int i = 0; i < numFib; i++){
        cout<<i+1<<"� - "<<Fibonacci(i+1)<<endl;
    }
    getchar();
    return 0;
}

int Fibonacci(int fib){
    if(fib == 1 || fib ==2){
        return 1;
    }else{
        return Fibonacci(fib - 1) + Fibonacci(fib - 2);
    }
}


