#include<bits/stdc++.h>
using namespace std;

/*Escrever um programa que gere dinamicamente um vetor A[5], sem n�meros repetidos e menores que 100, mostre o vetor gerado na tela, ordenar o vetor em ordem crescente e apresentar novamente na tela.*/

int main(){

    setlocale(LC_ALL, "Portuguese");
    int i, A[5];
    srand(time(NULL));

    cout<<"N�MEROS GERADOS: ";
    for(i = 0; i < 5; i++)
    {
        A[i]=(rand()%100);
        cout<<"\nA ["<<i<<"] : "<<A[i];
        for(int e = 0; e < i; e++)
        {
            if(A[i] == A[e]){
                cout<<" - N�MERO REPETIDO! ";
                i--;
                break;
            }
        }
    }

    sort(A, A+5);
    cout<<"\n\nN�MEROS ORDENADOS EM ORDEM CRESCENTE: \n   ----\n";
    for(i = 0; i < 5; i++)
    {
        cout<<"  | "<<A[i]<<" |\n   ----\n";
    }
    cout<<"\n\n";

    system("PAUSE");
    return 0;
}
