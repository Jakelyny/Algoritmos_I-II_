#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/*Crie um programa que gere dinamicamente um vetor de 10 elementos, em seguida apresente os elementos do vetor e realize as seguintes opera��es:
- Trocar os elementos do vetor de ordem, ou seja, o primeiro passa a ser o �ltimo e assim sucessivamente;
- Mostra a m�dia dos elementos do vetor;
- Mostrar o maior e o menor elemento do vetor;
- Ordenar o vetor em ordem crescente e exibir os valores ordenados;
Utilize um menu de op��es e fun��es para resolver este exerc�cio.*/

int v[10];

void Inverter();
float Media();
void MenorMaior();
void Crescente();

int main(){

    setlocale(LC_ALL, "Portuguese");
    int menu = -1;

    do{
        system("cls");
        cout<<" ************MENU************"<<endl;
        cout<<" * 0 - Sair                 *"<<endl;
        cout<<" * 1 - Inverter n�meros     *"<<endl;
        cout<<" * 2 - M�dia                *"<<endl;
        cout<<" * 3 - Maior / Menor        *"<<endl;
        cout<<" * 4 - Forma crescente      *"<<endl;
        cout<<" ****************************"<<endl;
        cout<<" N�MEROS GERADOS: \n | ";
        for(int i = 0; i < 10; i++){
            v[i]= (rand()%100) + 1 ;
            cout<<v[i]<<" | ";
        }
        cout<<"\n\nDigite a op��o desejada: ";
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
                Inverter();
                getchar();
                break;
            case 2:
                system("cls");
                cout<<"\n\n\t A m�dia deles �: "<<Media();
                getchar();
                break;
            case 3:
                system("cls");
                MenorMaior();
                getchar();
                break;
            case 4:
                system("cls");
                Crescente();
                getchar();
                break;
        }
    }while(menu != 0);
    return 0;
}

void Inverter(){
    cout<<"\n\n N�meros invertidos:\n"<<endl;
    reverse(v, v + 10);
    for(int i = 0; i < 10; i++){
        cout<<" | "<<v[i];
    }
    cout<<" |";
}

float Media(){
    float med = 0;
    for(int i = 0; i < 10; i++){
        med += v[i];
    }
    return med/10;
}

void MenorMaior(){
    int menor = 0, maior = 0;
    for(int i = 0; i < 10; i++){
        if(i == 0 || v[i] < menor){
            menor = v[i];
        }
        if(i == 0 || v[i] > maior){
            maior = v[i];
        }
    }
    cout<<"\n\n O n�mero maior �: "<<maior<<"\n O n�mero menor �: "<<menor<<endl;
}

void Crescente(){
    cout<<"\n\n N�meros em ordem crescente:\n"<<endl;
    sort(v, v + 10);
    for(int i = 0; i < 10;i++){
        cout<<" | "<<v[i];
    }
    cout<<" |";
}

