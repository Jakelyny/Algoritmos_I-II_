#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
using namespace std;

void gerar(int v1[10], int v2[10], int **pv3);
void mostrar(int *pv1, int *pv2, int **pv3);
void imparPar(int **pv3);
void crescente(int **pv3);
void soma(int **pv3);

int main(){

    setlocale(LC_ALL, "Portuguese");
    int v1[10], v2[10];
    int *v3 = new int[20];
    int menu = -1,indice = -1;

    do{
        system("cls");
        cout<<" ************************ MENU ************************"<<endl;
        cout<<" | 0 - Sair                                           |"<<endl;
        cout<<" | 1 - Gerar valores para os vetores                  |"<<endl;
        cout<<" | 2 - Mostrar os valores do vetor                    |"<<endl;
        cout<<" | 3 - Mostrar os números pares e ímpar do 3º vetor   |"<<endl;
        cout<<" | 4 - Vetor 3 em ordem crescente                     |"<<endl;
        cout<<" | 5 - A soma dos elementos do 3º vetor               |"<<endl;
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
                gerar(v1, v2, &v3);
                indice++;
                getchar();
                break;
            case 2:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tÉ NECESSÁRIO GERAR VALORES!.."<<endl;
                }else{
                    mostrar(v1, v2, &v3);
                }
                getchar();
                break;
            case 3:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tÉ NECESSÁRIO GERAR VALORES!.."<<endl;
                }else{
                    imparPar(&v3);
                }
                getchar();
                break;
            case 4:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tÉ NECESSÁRIO GERAR VALORES!.."<<endl;
                }else{
                    crescente(&v3);
                }
                getchar();
                break;
            case 5:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tÉ NECESSÁRIO GERAR VALORES!.."<<endl;
                }else{
                    soma(&v3);
                }
                getchar();
                break;
        }
    }while(menu != 0);
    return 0;
}

void gerar(int v1[10], int v2[10], int **pv3){
    cout<<"\n\n\t VALORES GERADOS COM SUCESSO!\n\n";
    int i = 0, x = 0;
    srand(time(NULL));
    for(i = 0; i < 10; i++){
        v1[i] = rand() % 100;
        v2[i] = rand() % 100;
    }
    while(x < 10){
        (*((*pv3) + x)) = v1[x];
        x++;
    }
    x = 0;
    while(x < 10){
        (*((*pv3) + (x+10))) = v2[x];
        x++;
    }
    pv3 -= 20;
}
void mostrar(int *pv1, int *pv2, int **pv3){
    cout<<"\n\n\t VALORES GERADOS:\n\n";
    int *x = new int;
    cout<<"\n\n   1º VETOR:  ";
    for(*x = 0; *x < 10; (*x)++){
        cout<<*pv1<<"  ";
        pv1++;
    }
    cout<<"\n\n   2º VETOR:  ";
    for(*x = 0; *x < 10; (*x)++){
        cout<<*pv2<<"  ";
        pv2++;
    }
    cout<<"\n\n   3º VETOR : ";
    for(*x = 0; *x < 20; (*x)++){
        cout<<(*((*pv3) + *x))<<"  ";
    }
    delete x;
}
void imparPar(int **pv3){
    cout<<"\n\n   VALORES ÍMPARES:  ";
    int *x = new int;
    for(*x = 0; *x < 20; (*x)++){
        if((*((*pv3) + *x)) % 2 == 1){
            cout<<(*((*pv3) + *x))<<"  ";
        }
    }
    cout<<"\n\n   VALORES PARES:  ";
    for(*x = 0; *x < 20; (*x)++){
        if((*((*pv3) + *x)) % 2 == 0){
            cout<<(*((*pv3) + *x))<<"  ";
        }
    }
    delete x;
}
void crescente(int **pv3){
    cout<<"\n\n   VALORES EM ORDEM CRESCENTE:  ";
    int aux = 0, i = 0, x = 0, y = 0;
    while(i < 20){
        x = 0;
        while(x < 20){
            if((*((*pv3) + x)) >= (*((*pv3) + i))){
                aux = (*((*pv3) + i));
                (*((*pv3) + i)) = (*((*pv3) + x));
                (*((*pv3) + x)) = aux;
            }
            x++;
        }
        i++;
    }
    while(y < 20){
        cout<<(*((*pv3) + y))<<"  ";
        y++;
    }
    pv3 -= y;
}
void soma(int **pv3){
    cout<<"\n\n\t SOMA DOS VALORES DO 3º VETOR:  ";
    int soma = 0;
    int *x = new int;
    for(*x = 0; *x < 20; (*x)++){
    soma += (*((*pv3) + *x));
    }
    cout<<soma;
    delete x;
}

