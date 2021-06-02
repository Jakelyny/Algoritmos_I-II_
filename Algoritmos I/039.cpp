#include <iostream>
using namespace std;

/* Escrever um algoritmo e um programa que efetue a leitura de três valores (variáveis A, B e C)
e apresente os valores dispostos em ordem crescente. */

main(){

    setlocale(LC_ALL, "Portuguese");
    int A, B, C;
    char resposta;

    cout<<"Digite um valor para a letra A: ";
    cin>>A;
    cout<<"Agora um valor para a letra B: ";
    cin>>B;
    cout<<"E agora para a letra C: ";
    cin>>C;


        if(A < B && A < C)
    {
        if(B < C){
            cout<<"  \nOs números digitados em ordem crescente: "<<"\n A = "<<A<<"\n B = "<<B<<"\n C = "<<C<<endl;
        }else{
            cout<<"  \nOs números digitados em ordem crescente: "<<"\n A = "<<A<<"\n C = "<<C<<"\n B = "<<B<<endl;
        }
    }
    if(B < A && B < C)
    {
        if(A < C){
            cout<<"  \nOs números digitados em ordem crescente: "<<"\n B = "<<B<<"\n A = "<<A<<"\n C = "<<C<<endl;
        }else{
            cout<<"  \nOs números digitados em ordem crescente: "<<"\n B = "<<B<<"\n C = "<<C<<"\n A = "<<A<<endl;
        }
    }
    if(C < A && C < B)
    {
        if(A < B){
            cout<<"  \nOs números digitados em ordem crescente: "<<"\n C = "<<C<<"\n A = "<<A<<"\n B = "<<B<<endl;
        }else{
            cout<<"  \nOs números digitados em ordem crescente: "<<"\n C = "<<C<<"\n B = "<<B<<"\n A = "<<A<<endl;
        }
    }
}
