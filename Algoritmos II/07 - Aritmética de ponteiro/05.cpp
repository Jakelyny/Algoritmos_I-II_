#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;

/*Crie um programa que implemente o jogo �Aposta�. Nesse jogo, o jogador deve selecionar a quantidade de n�meros
que ele gostaria de apostar (entre 1 e 20), e em seguida, informar os n�meros escolhidos (valores entre 0 e 100).
Ap�s receber a aposta, o computador sorteia 20 n�meros (entre 0 e 100) e compara os n�meros sorteados com os n�meros
apostados, informando ao apostador a quantidade de acertos e os n�meros que ele acertou. O programa dever� ser implementado
usando fun��es e ponteiro para ponteiro.*/

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
    cout<<"C�DIGO COM DEFEITO, N�O CONSEGUI FAZER FUNCIONAR... :("<<endl;
    cout<<"\n\n  ------------------ JOGO APOSTA ------------------"<<endl;
    cout<<"  QUANTOS N�MEROS DESEJA APOSTAR ENTRE (1 E 20): ";
    cin>>*p1;
    fflush(stdin);
    while(i < *p1){
        cout<<"\n  INFORME SEUS N�MEROS ESCOLHIDOS DE (O A 100): ";
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
    cout<<"\n  N�meros sorteados: |";
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
    cout<<" Voc� acertou "<<aux<<" vezes!"<<endl;
    cout<<" N�meros :";
    int i = 0;
    while(i < copia){
        cout<<copia;
        fflush(stdin);
        copia++;
        i++;
    }
    if(aux == 0){
        cout<<" VOC� N�O ACERTOU NENHUM N�MERO!";
    }
}

