#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;

/*Crie um programa que implemente o jogo “Aposta”. Nesse jogo, o jogador deve selecionar a quantidade de números
que ele gostaria de apostar (entre 1 e 20), e em seguida, informar os números escolhidos (valores entre 0 e 100).
Após receber a aposta, o computador sorteia 20 números (entre 0 e 100) e compara os números sorteados com os números
apostados, informando ao apostador a quantidade de acertos e os números que ele acertou. O programa deverá ser implementado
usando funções e ponteiro para ponteiro.*/

void leitura(int *p1);
void sorteia(int *p2, int **p1);
void compara(int **p2, int *sor,int ***p1);

main(){

    setlocale(LC_ALL, "Portuguese");
    int num;
    leitura(&num);
}

void leitura(int *p1){
    int i = 0, numEscolhidos = 0, *pEsco;
    pEsco = &numEscolhidos;
    cout<<"CÓDIGO COM DEFEITO, NÃO CONSEGUI FAZER FUNCIONAR... :("<<endl;
    cout<<"\n\n  ------------------ JOGO APOSTA ------------------"<<endl;
    cout<<"  QUANTOS NÚMEROS DESEJA APOSTAR ENTRE (1 E 20): ";
    cin>>*p1;
    fflush(stdin);
    while(i < *p1){
        cout<<"\n  INFORME SEUS NÚMEROS ESCOLHIDOS DE (O A 100): ";
        cin>>*pEsco;
        fflush(stdin);
        pEsco++;
        i++;
    }
    pEsco -= i;
    sorteia(pEsco, &p1);
}

void sorteia(int *p2, int **p1){
    int sor[20];
    cout<<"\n  Números sorteados: |";
    for(int i = 0; i < 20; i++){
        sor[i] = rand() % 10;
        cout<<sor[i]<<" | ";
    }
    cout<<endl;
    compara(&p2, sor, &p1);
}

void compara(int **p2, int *sor,int ***p1){
    int aux = 0, copia;
    for(int i = 0; i < 20; i++){
        for(int x = 0; x < ***p1; x++){
            if(*sor == **p2){
                aux++;
                copia = **p2;
            }
            p2++;
        }
        p2 -= ***p1;
        sor++;
    }
    cout<<" Você acertou "<<aux<<" vezes!"<<endl;
    cout<<" Números :";
    int i = 0;
    while(i < copia){
        cout<<copia;
        fflush(stdin);
        copia++;
        i++;
    }
    if(aux == 0){
        cout<<" VOCÊ NÃO ACERTOU NENHUM NÚMERO!";
    }
}

