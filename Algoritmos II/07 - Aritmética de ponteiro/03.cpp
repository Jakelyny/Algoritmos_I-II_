#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include <algorithm>
using namespace std;

/*Escreva um programa que manipule dois vetores v1 e v2 ambos de tamanho 20, os valores para o vetor v1 devem ser gerados randomicamente,
o sistema deverá apresentar um menu com as seguintes opções:
0 – Sair
1 – Gerar valores para o vetor v1
2 – Preencher vetor v2 (o qual deve ser preenchido com os mesmos valores de v1, porém em ordem inversa)
3 – Mostrar os dois vetores na tela
4 – Mostrar o maior, o menor e a média dos valores dentro do vetor v1
OBS: Utilize aritmética de ponteiros para resolver este exercício.*/

void leitura(int *p);
void preencher(int *p1, int *p2);
void mostrar(int *pont1, int *pont2);
void maiorMenorMedia(int *p1);

int main(){

    setlocale(LC_ALL, "Portuguese");
    int menu = -1, indice = -1, v1[20], v2[20], *pv1, *pv2;
    pv1 = v1;
    pv2 = v2;

    do{
        system("cls");
        cout<<" ********************** MENU ***************************"<<endl;
        cout<<" | 0 - Sair                                            |"<<endl;
        cout<<" | 1 - Gerar valores para o vetor v1                   |"<<endl;
        cout<<" | 2 - Preencher vetor v2 com valor inverso do v1      |"<<endl;
        cout<<" | 3 - Mostrar os dois vetores na tela                 |"<<endl;
        cout<<" | 4 - Mostrar maior e menor valor e a média           |"<<endl;
        cout<<" *******************************************************"<<endl;
        cout<<"\nDigite a opção desejada: ";
        cin>>menu;
        fflush(stdin);
        switch(menu)
        {
            case 0:
                system("cls");
                cout<<"\n\n\t ENCERRANDO PROGRAMA..."<<endl;
                getchar();
                break;
            case 1:
                system("cls");
                leitura(v1);
                indice++;
                getchar();
                break;
            case 2:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tÉ NECESSÁRIO GERAR VALORES!.."<<endl;
                }else{
                    preencher(pv1, pv2);
                }
                getchar();
                break;
            case 3:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tÉ NECESSÁRIO GERAR VALORES!.."<<endl;
                }else{
                    mostrar(pv1, pv2);
                }
                getchar();
                break;
            case 4:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tÉ NECESSÁRIO GERAR VALORES!.."<<endl;
                }else{
                    maiorMenorMedia(pv1);
                }
                getchar();
                break;
        }
    }while(menu != 0);
    return 0;
}

void leitura(int *p){
    cout<<"\n  VALORES GERADOS COM SUCESSO DO V1!\n\n";
    srand(time(NULL));
    int i = 0;
    while(i < 20){
        *p = rand()% 100;
        cout<<"  "<<*p;
        p++;
        i++;
    }
}

void preencher(int *p1, int *p2){
    int i = 0;
    cout<<"\n  VALORES PREENCHIDOS DO V2!\n\n ";
    while(i < 20){
        *p2 = *p1;
        p2++;
        p1++;
        i++;
    }
    reverse(p2, p2 + 20);
}

void mostrar(int *pont1, int *pont2){
    int i = 0;
    cout<<"\n VALORES DE V1:"<<endl;
    while(i < 20){
        cout<<"  "<<*pont1;
        pont1++;
        i++;
    }
    pont1 -= i;
    i = 0;
    cout<<"\n\n VALORES DE V2:"<<endl;
    while(i < 20){
        cout<<"  "<<*pont2;
        pont2++;
        i++;
    }
    pont2 -= i;
}

void maiorMenorMedia(int *p1){
    int i = 0, maior = 0, menor = 0;
    float media = 0;
    while(i < 20){
        if(i == 0 || *p1 > maior){
            maior = *p1;
        }
        if(i == 0 || *p1 < menor){
            menor = *p1;
        }
        media += *p1;
        p1++;
        i++;
    }
    cout<<"\n\t  O "<<maior<<" É O MAIOR VALOR E "<<menor<<" É O MENOR VALOR DE V1"<<endl;
    cout<<"\n\t  MÉDIA DOS VALORES DE V1: "<<media/20<<endl;
}
