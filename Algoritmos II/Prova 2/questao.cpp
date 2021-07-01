#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
using namespace std;

/*Crie um programa que manipule atrav�s de aloca��o din�mica e ponteiros um vetor �V� de X posi��es de n�meros
inteiros (a dimens�o do vetor � definido pelo usu�rio do sistema n�o sendo permitido vetor maior que 100
posi��es), o programa deve apresentar um menu com as seguintes op��es:
0 � Sair
1 � Gerar valores para o vetor (gerar valores randomicamente menores que 100 sem repeti��o) 2 � Mostrar o vetor
(exibindo no m�ximo 10 elementos por linha e separando com virgula) 3 � Localizar valor (usu�rio informa um
determinado valor e o sistema procura se este valor pertence ao vetor, caso pertencer exibe a mensagem:
�Valor X, pertence ao vetor�, caso n�o existir no vetor o valor informado, ele dever� ser inclu�do no lugar
do �ltimo elemento do vetor exibindo a mensagem: �Valor X, foi inclu�do no vetor no lugar do valor Y� (Y � a
refer�ncia ao valor que foi substitu�do) 4 � Mostrar quantas substitui��es foram realizadas.
OBS: as op��es 2, 3 e 4 s� podem ser executadas se a op��o 1 foi acionada. Ao escolher op��o inv�lida
no menu dever� exibir mensagem, com tal informa��o. Os vetores s� podem ser percorridos usando aritm�tica de ponteiros.*/

void gerar(int *pv, int *v);
void mostrar(int *pv, int *v);
void localizar(int *pv, int *v, int *sub);
void mostrarSub(int *sub);

int main(){

    setlocale(LC_ALL, "Portuguese");
    int *tam = new int;
    int *pvet = new int[*tam];
    int menu = -1,indice = -1, sub = 0;

    do{
        system("cls");
        cout<<" ************************* MENU ************************"<<endl;
        cout<<" | 0 - Sair                                            |"<<endl;
        cout<<" | 1 - Gerar valores para o vetor                      |"<<endl;
        cout<<" | 2 - Mostrar o vetor                                 |"<<endl;
        cout<<" | 3 - Localizar vetor                                 |"<<endl;
        cout<<" | 4 - Mostrar quantas substitui��es foram realizadas  |"<<endl;
        cout<<" *******************************************************"<<endl;
        cout<<"\nDigite a op��o desejada: ";
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
                while(*tam > 100){
                    cout<<"\n\t SOMENTE N�MEROS MENORES QUE 100! \n\n";
                    cout<<"Informe o tamanho do vetor: ";
                    cin>>*tam;
                    fflush(stdin);
                }
                fflush(stdin);
                gerar(pvet, tam);
                fflush(stdin);
                indice++;
                getchar();
                break;
            case 2:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\t� NECESS�RIO GERAR VALORES!.."<<endl;
                }else{
                    mostrar(pvet, tam);
                }
                getchar();
                break;
            case 3:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\t� NECESS�RIO GERAR VALORES!.."<<endl;
                }else{
                    localizar(pvet, tam, &sub);
                }
                getchar();
                break;
            case 4:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\t� NECESS�RIO GERAR VALORES!.."<<endl;
                }else{
                    mostrarSub(&sub);
                }
                getchar();
                break;
            default:
                system("cls");
                cout<<"\n\n\tOP��O INV�LIDA!.."<<endl;
                getchar();
                break;
        }
    }while(menu != 0);
    return 0;
}
void gerar(int *pv, int *v){
    int i = 0, x = 0;
    srand(time(NULL));
    while(i < *v){
        *pv = rand() % 99;
        pv++;
        i++;
    }
    pv -= i;
}
void mostrar(int *pv, int *v){
    int aux = 0;
    cout<<"\n\n\t Valores Gerados:\n\n";
    int *x = new int;
    for(*x = 0; *x < *v; (*x)++){
        cout<<*pv<<",  ";
        aux++;
        if((aux == 10) || (aux == 20) || (aux == 30) || (aux == 40) || (aux == 50) || (aux == 60) || (aux == 70) || (aux == 80) || (aux == 90)){
            cout<<endl;
        }
        pv++;
    }
    delete x;
}
void localizar(int *pv, int *v, int *sub){
    int aux = 0, i = 0, x = -1, c = 0;
    cout<<" Insira o valor para saber se existe no vetor: ";
    cin>>aux;
    fflush(stdin);
    while(i < *v){
        if(*pv == aux){
            cout<<"\n\n\t Valor "<<*pv<<", pertence ao vetor!";
            x++;
        }
        pv++;
        i++;
    }
    if(x < 0){
        pv--;
        cout<<"\n\n\t O valor "<<aux<<", foi incluido no vetor, no lugar do "<<*pv;
        *pv = aux;
        pv -= i-1;
        (*sub)++;
    }else{
        pv -= i;
    }
}
void mostrarSub(int *sub){
    cout<<"\n\n\t Foram feitas "<<*sub<<" substitui��es no vetor!";
}
