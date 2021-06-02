#include<iostream>
#include <time.h>
#include<bits/stdc++.h>
using namespace std;

int V[20];

void gerarVetor(){
    cout<<"\nVetor V[20]:";
    for(int i = 0; i < 20; i++){
        V[i]= (rand()%100) + 1 ;
        cout<<"\nV[ "<<i<<" ]: "<< V[i];
        for(int e = 0; e < i; e++){
            if(V[i] == V[e]){
                cout<<"\nNúmero já existente.";
                i--;
                break;
            }
        }
    }
}

int consultarNumero(int numero){
    int cont=0;
    for(int i = 0; i< 20; i++){
        if(V[i]%numero==0){
            cont++;
        }
    }
    return cont;
}

bool ordenar(int opcao){
    switch(opcao){
        case 1:
            sort(V, V+20);
            for(int i = 0; i<20;i++){
                cout<<" | "<<V[i];
            }
            break;
        case 2:
            sort(V, V+20,greater<int>());
            for(int i = 0; i<20;i++){
                cout<<" | "<<V[i];
            }
            break;
    }
}

main(){

    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
    int menu=0;
    while(menu != 4){
    cout<<"\n\n -------- MENU VETOR -------- ";
    cout<<"\n1. Gerar Vetor V[20]";
    cout<<"\n2. Consultar número";
    cout<<"\n3. Ordenar Crescente/Decrescente";
    cout<<"\n4. sair\n -------------------------- \n";
    cout<<"Para prosseguir selecione uma das opções: ";
    cin>>menu;
    switch(menu){
        case 1:
            gerarVetor();
            break;
        case 2:
            int numero;
            cout<<"Digite um número para saber quantos acima são divisíveis por ele: ";
            cin>>numero;
            cout<<"\nO número "<<numero<<" tem "<<consultarNumero(numero)<<" números divisiveis no vetor.";
            break;
        case 3:
            int opcao;
            cout<<"Para ordenar em forma Crescente digite 1, para forma Decrescente digite 2: ";
            cin>>opcao;
            ordenar(opcao);
            break;
        case 4:
            cout<<"\nPrograma finalizado.\n\n";
            break;
        default:
            cout<<"\nOpção inválida";
            break;
        }
    }
}

