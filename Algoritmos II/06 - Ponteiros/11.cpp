#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
using namespace std;

/*Crie um programa que manipule um vetor de 10 posições através de ponteiro. O sistema deverá gerar os 10 valores randomicamente, sendo
menores que 50, o sistema deverá disponibilizar as seguintes opções no menu:
0 – Sair
1 – Gerar valores
2 – Mostrar soma dos valores
3 – Mostrar maior e menor valor
4 – Solicitar a leitura de um valor e verificar se o valor existe no vetor indicando a sua posição.
OBS: as opções 2, 3 e 4 só poderão ser acionadas após ter sido executado a ação 1.*/

void Leitura(int *pVetor);
void Soma(int *pVetor);
void MenorMaior(int *pVetor);
void Verifica(int *pVetor);

int main(){

    setlocale(LC_ALL, "Portuguese");
    int menu = -1,indice = -1, vetor[10];

    do{
        system("cls");
        cout<<" ********************************************* MENU ***************************************************"<<endl;
        cout<<" | 0 - Sair                                                                                           |"<<endl;
        cout<<" | 1 - Gerar valores                                                                                  |"<<endl;
        cout<<" | 2 - Mostrar soma dos valores                                                                       |"<<endl;
        cout<<" | 3 - Mostrar maior e menor valor                                                                    |"<<endl;
        cout<<" | 4 - Solicitar a leitura de um valor e verificar se o valor existe no vetor indicando a sua posição |"<<endl;
        cout<<" ******************************************************************************************************"<<endl;
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
                Leitura(vetor);
                indice++;
                getchar();
                break;
            case 2:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tÉ NECESSÁRIO GERAR VALORES!.."<<endl;
                }else{
                    Soma(vetor);
                }
                getchar();
                break;
            case 3:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tÉ NECESSÁRIO GERAR VALORES!.."<<endl;
                }else{
                    MenorMaior(vetor);
                }
                getchar();
                break;
            case 4:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tÉ NECESSÁRIO GERAR VALORES!.."<<endl;
                }else{
                    Verifica(vetor);
                }
                getchar();
                break;
        }
    }while(menu != 0);
    return 0;
}

void Leitura(int *pVetor){
    cout<<"\n\n\t VALORES GERADOS COM SUCESSO!\n\n";
    srand(time(NULL));
    for(int i = 0; i < 10; i++){
        pVetor[i] = rand() % 49;
    }
    for(int i = 0; i < 10; i++){
        cout<<pVetor[i]<<"\t";
    }
}

void Soma(int *pVetor){
    float resultado = 0;
    for(int i = 0; i < 10; i++){
        resultado += pVetor[i];
    }
    cout<<"\n\n\t A soma dos valores é: "<<resultado;
}

void MenorMaior(int *pVetor){
    int menor = 0, maior = 0;
    for(int i = 0; i < 10; i++){
        if(i == 0 || pVetor[i] < menor){
            menor = pVetor[i];
        }
        if(i == 0 || pVetor[i] > maior){
            maior = pVetor[i];
        }
    }
    cout<<"\n\n O maior valor é: "<<maior<<"\n O menor valor é: "<<menor<<endl;
}

void Verifica(int *pVetor){
    int aux, ver = -1;
    cout<<" Digite um valor para saber se existe entre os gerados: ";
    cin>>aux;
    fflush(stdin);
    for(int i = 0; i < 10; i++){
        if(pVetor[i] == aux){
            cout<<"\n\n\t O valor "<<pVetor[i]<<" existe na "<<i+1<<"ª posição. ";
            getchar();
            ver++;
        }
    }
    if(ver < 0){
        cout<<"\n\n\tO VALOR DIGITADO NÃO EXISTE ENTRE OS GERADOS!";
    }
}


