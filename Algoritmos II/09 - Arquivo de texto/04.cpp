#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
using namespace std;

void principal(int v);

main(){

    int menu = -1;
    do{
        system("cls");
        cout<<".------------------------------------------MENU------------------------------------."<<endl;
        cout<<"| 0 - Sair                                                                         |"<<endl;
        cout<<"| 1 - Mostrar elementos da diagonal principal                                      |"<<endl;
        cout<<"| 2 - Mostrar elementos da diagonal secundaria                                     |"<<endl;
        cout<<"| 3 - Mostrar a matriz e a soma dos elementos acima e abaixo da diagonal principal |\n.----------------------------------------------------------------------------------."<<endl;
        cout<<" Escolha uma opcao: ";
        cin>>menu;
        fflush(stdin);
        switch(menu)
        {
        case 0:
            system("cls");
            cout << "\n\n\tENCERRANDO PROGRAMA...";
            getchar();
            break;
        case 1:
            system("cls");
            ofstream escreve("numeros.txt",ios::app);
            for(int i = 0;i < 25; i++){
                escreve<<rand()%100<<";";
            }
            escreve.close();
            cout<<"\n\n\tNUMEROS GERADOS! ";
            ifstream lerV("numeros.txt", ios::in);
            char num[5];
            int v[5][5];
            for(int l = 0; l < 5 && !lerV.fail(); l++){
                for(int c = 0; c < 5 && !lerV.fail(); c++){
                    lerV.getline(num,5,';');
                    v[l][c] = atoi(num);
                }
            }
            getchar();
            break;
        case 2:
            system("cls");
            principal(v);
            getchar();
            break;
        case 3:
            system("cls");

            getchar();
            break;
        }
    }
    while(menu != 0);
}

void principal(int v){
    for(int l = 0;l < 5; l++){
        for(int c = 0;c < 5; c++){
            if(l == c){
                cout<<v[l][c];
            }
        }
    }

}
