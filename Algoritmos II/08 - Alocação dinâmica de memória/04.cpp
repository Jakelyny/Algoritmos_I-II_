#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
using namespace std;

void gerar(int *pv, int *v);
void invertido(int *pv, int *v);
void troca(int *pv, int *v);

int main(){

    setlocale(LC_ALL, "Portuguese");
    int *tam = new int;
    int *pvet = new int[*tam];
    int menu = -1,indice = -1;

    do{
        system("cls");
        cout<<" *********************************** MENU ***********************************"<<endl;
        cout<<" | 0 - Sair                                                                 |"<<endl;
        cout<<" | 1 - Gerar valores para o vetor                                           |"<<endl;
        cout<<" | 2 - Mostrar os valores do vetor e em ordem inversa                       |"<<endl;
        cout<<" | 3 - Trocar o 1º pelo último, o 2º com o penultimo, assim sucessivamente  |"<<endl;
        cout<<" ****************************************************************************"<<endl;
        cout<<"\nDigite a opção desejada: ";
        cin>>menu;
        fflush(stdin);
        switch(menu){
            case 0:
                system("cls");
                cout<<"\n\n\t ENCERRANDO PROGRAMA..."<<endl;
                getchar();
                break;
            case 1:
                system("cls");
                cout<<"Informe o tamanho do vetor: ";
                cin>>*tam;
                fflush(stdin);
                gerar(pvet, tam);
                fflush(stdin);
                indice++;
                getchar();
                break;
            case 2:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tÉ NECESSÁRIO GERAR VALORES!.."<<endl;
                }else{
                    invertido(pvet, tam);
                }
                getchar();
                break;
            case 3:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tÉ NECESSÁRIO GERAR VALORES!.."<<endl;
                }else{
                    troca(pvet, tam);
                }
                getchar();
                break;
        }
    }while(menu != 0);
    return 0;
}
void gerar(int *pv, int *v){
    int *x = new int;
    srand(time(NULL));
    for(*x = 0; *x < *v; (*x)++){
        *pv = rand() % 40;
        pv++;
    }
    delete x;
}
void invertido(int *pv, int *v){
    cout<<"\n\n\t VALORES GERADOS:\n\n";
    int *x = new int;
    for(*x = 0; *x < *v; (*x)++){
        cout<<*pv<<"\t";
        pv++;
    }
    delete x;
    cout<<"\n\n\t VALORES INVERTIDOS:\n\n";
    pv--;
    for(*x = 0; *x < *v; (*x)++){
        cout<<*pv<<"\t";
        pv--;
    }
    pv -= *v;
    delete x;
}
void troca(int *pv, int *v){
    int i = 0, aux = 0, aux2[*v];
    cout<<"\n\n\t VALORES GERADOS:\n\n";
    while(i < *v){
        cout<<*pv<<"\t";
        aux2[i] = *pv;
        pv++;
        i++;
    }
    pv -= *v;
    i = 0;
    cout<<"\n\n\t VALORES TROCADOS:\n\n";
    while(i < *v/2){
        aux = aux2[i];
        aux2[i] = aux2[*v-i-1];
        aux2[*v-i-1] = aux;
        i++;
    }
    pv -= *v;
    i = 0;
    while(i < *v){
        cout<<aux2[i]<<"\t";
        i++;
    }
}

