#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
using namespace std;

/*Escreva um programa que gere aleatoriamente valores para preencher um vetor de 10 elementos, ap�s deve permitir
ao usu�rio que informe um valor, o sistema deve verificar se o valor existe no vetor e em que posi��o ele se encontra,
utilize ponteiros para resolver este exerc�cios e para percorrer o vetor utilize aritm�tica de ponteiros.*/

void leitura(int *p);
void verifica(int *pont);

main(){

    setlocale(LC_ALL, "Portuguese");
    int v[10], *vPont;
    vPont = v;
    leitura(v);
    verifica(vPont);
}

void leitura(int *p){
    cout<<"\n  VALORES GERADOS COM SUCESSO!\n\n";
    srand(time(NULL));
    int i = 0;
    while(i < 10){
        *p = rand()% 10;
        cout<<"  "<<*p;
        p++;
        i++;
    }
    p -= i;
    getchar();
}

void verifica(int *pont){
    int aux, ver = 0, x = 0;
    system("cls");
    cout<<"\n Digite um valor para saber se existe entre os gerados: ";
    cin>>aux;
    fflush(stdin);
    while(x < 10){
        if(*pont == aux){
            cout<<"\n O valor "<<*pont<<" existe na "<<x+1<<"� posi��o. ";
            ver++;
        }
        pont++;
        x++;
    }
    if(ver == 0){
        cout<<"\n\n\tO VALOR DIGITADO N�O EXISTE ENTRE OS GERADOS!";
    }
    getchar();
}
