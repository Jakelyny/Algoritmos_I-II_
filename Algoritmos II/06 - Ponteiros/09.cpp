#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

/*Crie um programa para ler o tempo registrado por um atleta durante uma corrida com N voltas, a leitura deve ocorrer em uma função
e o registro do melhor tempo deve ser atualizado através de um ponteiro. Encerrar o programa quando o número zero for informado para o
tempo, apresentar o melhor tempo.*/

void Tempo(float *ptemp);

int main(){

    setlocale(LC_ALL, "Portuguese");
    float temp = 50;

    do{
        Tempo(&temp);
        if(temp == 0){
            break;
        }
        cout<<"\n --------------------\n| O melhor tempo: "<<temp<<" |\n --------------------\n"<<endl;
    }while(temp != 0);{
    }
}

void Tempo(float *ptemp){
    float aux;
    cout<<"Informe o tempo: ";
    cin>>aux;
    fflush(stdin);
    if(*ptemp > aux){
        *ptemp = aux;
    }
}
