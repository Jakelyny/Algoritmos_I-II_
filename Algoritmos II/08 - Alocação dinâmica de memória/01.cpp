#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
using namespace std;

void gerar(int *pv);
void mostrar(int *pv);
void pares(int *pv);
void impares(int *pv);

int main(){

    setlocale(LC_ALL, "Portuguese");
    int v[10];
    int menu = -1,indice = -1;

    do{
        system("cls");
        cout<<" ************************ MENU ************************"<<endl;
        cout<<" | 0 - Sair                                           |"<<endl;
        cout<<" | 1 - Gerar valores para o vetor                     |"<<endl;
        cout<<" | 2 - Mostrar os valores do vetor                    |"<<endl;
        cout<<" | 3 - Mostrar os números pares no vetor              |"<<endl;
        cout<<" | 4 - Mostrar os números ímpares no vetor            |"<<endl;
        cout<<" ******************************************************"<<endl;
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
                gerar(v);
                indice++;
                getchar();
                break;
            case 2:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tÉ NECESSÁRIO GERAR VALORES!.."<<endl;
                }else{
                    mostrar(v);
                }
                getchar();
                break;
            case 3:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tÉ NECESSÁRIO GERAR VALORES!.."<<endl;
                }else{
                    pares(v);
                }
                getchar();
                break;
            case 4:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tÉ NECESSÁRIO GERAR VALORES!.."<<endl;
                }else{
                    impares(v);
                }
                getchar();
                break;
        }
    }while(menu != 0);
    return 0;
}

void gerar(int *pv){
    cout<<"\n\n\t VALORES GERADOS COM SUCESSO!\n\n";
    int *x = new int;
    srand(time(NULL));
    for(*x = 0; *x < 10; (*x)++){
        *pv = rand() % 40;
        pv++;
    }
    delete x;
}
void mostrar(int *pv){
    cout<<"\n\n\t VALORES GERADOS:\n\n";
    int *x = new int;
    for(*x = 0; *x < 10; (*x)++){
        cout<<*pv<<"\t";
        pv++;
    }
    delete x;
}
void pares(int *pv){
    cout<<"\n\n\t VALORES QUE SÃO PARES:\n\n";
    int *x = new int;
    for(*x = 0; *x < 10; (*x)++){
        if(((*pv) % 2) == 0){
            cout<<*pv<<"\t";
        }
        pv++;
    }
    delete x;
}
void impares(int *pv){
    cout<<"\n\n\t VALORES QUE SÃO ÍMPARES:\n\n";
    int *x = new int;
    for(*x = 0; *x < 10; (*x)++){
        if(((*pv) % 2) == 1){
            cout<<*pv<<"\t";
        }
        pv++;
    }
    delete x;
}

