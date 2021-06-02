#include<iostream>
#include <time.h>
using namespace std;

char matriz[12][12];

void preenchimentoMatriz(){
    for(int l = 0; l < 12; l++){
        for(int c = 0; c < 12; c++){
            matriz[l][c] = rand()%100;
        }
    }
    for(int l = 0; l < 12; l++){
        for(int c = 0; c < 12; c++){
            cout<<" | "<<matriz[l][c];
        }
        cout<<" | \n";
    }
}

void reserva(int linha, int coluna){
    for(int l = 0; l < 12; l++){
        for(int c = 0; c < 12; c++){
            if(l == linha && c == coluna){
                if(matriz[l][c] != 'R'){
                    matriz[l][c] = 'R';
                    cout<<"\nReserva da poltrona realizada!\n\n";
                }else{
                    cout<<"\nEssa poltrona já se encontra reservada.\n\n";
                }
            }
        }
    }
    for(int l = 0; l < 12; l++){
        for(int c = 0; c < 12; c++){
            cout<<" | "<<matriz[l][c];
        }
        cout<<" | \n";
    }
}

main(){
    srand(time(NULL));
    setlocale (LC_ALL,"portuguese");
    preenchimentoMatriz();
    char continuar;

    do{
        int linha, coluna;
        cout<<"\nPara realizarmos a reserva do seu assento prossiga informando, a linha: ";
        cin>>linha;
        cout<<"E a coluna: ";
        cin>>coluna;

        reserva(linha, coluna);
        cout<<"\n\nDeseja fazer mais reservas? S ou N? ";
        cin>>continuar;

    }while(continuar == 'S' || continuar == 's');
    cout<<"\nNão esqueça de chegar no horário e BOA SESSÃO! :D\n\n";
}


