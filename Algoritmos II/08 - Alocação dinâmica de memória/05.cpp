#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;

void leitura(int *paposta, int *pnum);
void sorteia(int **paposta2, int **pnum2);
void compara(int ***paposta3, int *sor, int ***pnum3);

main(){

    setlocale(LC_ALL, "Portuguese");
    int num, aposta[20];
    leitura(aposta, &num);
}

void leitura(int *paposta, int *pnum){
    int i = 0;
    cout<<"\n\n  ------------------ JOGO APOSTA ------------------"<<endl;
    cout<<"  QUANTOS N�MEROS DESEJA APOSTAR ENTRE (1 E 20): ";
    cin>>*pnum;
    fflush(stdin);

    while(i < *pnum){
        cout<<"\n  INFORME SEUS N�MEROS ESCOLHIDOS DE (O A 100): ";
        cin>>*paposta;
        fflush(stdin);
        paposta++;
        i++;
    }
    paposta -= i;
    sorteia(&paposta, &pnum);
}

void sorteia(int **paposta2, int **pnum2){

    int sor[20], aux;
    cout<<"\n  N�meros sorteados: ";
    srand(time(NULL));
    for(int i = 0; i < 20; i++)
    {
        //PRECISA IMPLEMENTAR AQUI UMA ROTINA PARA N�O PERMITIR N�MEROS DUPLICADOS
        sor[i] = rand() % 10;
        cout<<sor[i]<<", ";
    }
    cout<<endl;

    cout << "\nVALORES APOSTADOS: ";
    for(int i = 0; i < **pnum2; i++)
        cout << (*(*paposta2 + i)) << ", ";
   compara(&paposta2, sor, &pnum2);
}


void compara(int ***paposta3, int *sor, int ***pnum3){
    int aux = 0;

    cout << "\nACERTOU: ";
    for(int i = 0; i < 20; i++){
        for(int x = 0; x < ***pnum3; x++){
            if(*sor == (*(*(*paposta3) + x))){
                aux++;
                cout << *sor << ", ";
            }
        }
        sor++;
    }
    cout<<"\nVoc� acertou "<<aux<<" vezes!"<<endl;

    if(aux == 0){
        cout<<" VOC� N�O ACERTOU NENHUM N�MERO!";
    }
}

