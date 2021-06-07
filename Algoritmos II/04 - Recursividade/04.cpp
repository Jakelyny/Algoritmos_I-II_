#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

/*Escreva um programa que apresente os primeiros 20 termos da sequência de Fibonacci: “A geração n de Fibonacci retorna 1 quando for
até a 2ª geração. Se não, retorna a soma das duas últimas gerações anteriores”. Utilize uma função recursiva para resolver este problema.*/

int Fibonacci(int fib);

int main(){

    setlocale(LC_ALL, "Portuguese");
    int numFib = 20;

    cout<<"20 primeiros termos da sequência Fibonacci:\n "<<endl;
    for(int i = 0; i < numFib; i++){
        cout<<i+1<<"º - "<<Fibonacci(i+1)<<endl;
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


