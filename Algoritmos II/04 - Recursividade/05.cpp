#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/*Crie um programa que, utilizando funções, leia uma matriz M[5][5] de números reais. Mostrar a matriz lida, arredondar os
números pares para cima e os ímpares para baixo. Encontrar o maior elemento de cada linha e passá-lo para a posição da diagonal
principal na linha e o elemento que estava na diagonal principal para o local do número. Mostrar a matriz modificada.*/

float matriz[5][5];

void Mostrar();
void Arredondar();
void Maior();

int main(){

    setlocale(LC_ALL, "Portuguese");
    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 5; c++){
            cout<<" Digite o valor para a matriz ["<<l<<"]"<<"["<<c<<"] : ";
            cin>>matriz[l][c];
        }
    }
    cout<<"\n -----------MATRIZ LIDA------------ "<<endl;
    Mostrar();
    Arredondar();
    Maior();
    Mostrar();
    return 0;
}

void Mostrar(){
    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 5; c++){
            cout.width(6);
            cout<<right<<matriz[l][c];
        }
        cout<<endl;
    }
}

void Arredondar(){
    cout<<"\n\n --------MATRIZ ARREDONDADA--------"<<endl;
    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 5; c++){
            int aux = matriz[l][c];
            if(aux % 2 == 0){
                matriz[l][c] = ceil(matriz[l][c]);
                cout.width(6);
                cout<<right<<matriz[l][c];
            }else{
                matriz[l][c] = floor(matriz[l][c]);
                cout.width(6);
                cout<<right<<matriz[l][c];
            }
        }
        cout<<endl;
    }
}

void Maior(){
    cout<<"\n\n ----------MAIOR ELEMENTO----------"<<endl;
    for(int l = 0; l < 5; l++){
        int maior = 0, linhaMaior = 0;
        for(int c = 0; c < 5; c++){
            if(c == 0 || matriz[l][c] > maior){
                maior = matriz[l][c];
                linhaMaior = c;
            }
        }
        for(int c = 0; c < 5; c++){
            if(l == c){
                int aux = matriz[l][c];
                matriz[l][c] = maior;
                matriz[l][linhaMaior] = aux;
            }
        }
    }
}
