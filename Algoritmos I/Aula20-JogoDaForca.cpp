#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");
    char palavra[30], letra[1], secreta[30];
    int tam, i, chances, acertos;
    bool acerto;

    chances = 6;
    tam = 0;
    i = 0;
    acerto = false;
    acertos = 0;

    cout<<" Sem que seu amigo olhe, digite a palavra secreta: ";
    cin>>palavra;
    system("cls");

    while(palavra[i] != '\0'){
        i++;
        tam++;
    }

    for(i = 0; i < 30; i++){
        secreta[i]='-';
    }

    while((chances > 0) && (acertos < tam)){
        cout<<"Jogadas restantes: "<<chances<<"\n\n";
        cout<<" Palavra secreta: ";
        for(i = 0; i < tam; i++){
            cout<<secreta[i];
        }
        cout<<"\n\n Digite uma letra: ";
        cin>>letra[0];
        for(i = 0; i < tam; i++){
            if(palavra[i]== letra[0]){
                acerto = true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }
        if(!acerto){
            chances--;
        }
        acerto = false;
        system("cls");
    }
    if(acertos == tam){
        cout<<"\n\t VOCÊ VENCEUUU!!\n\n";
    }else{
        cout<<"\n\t VOCÊ PERDEU!\n\n";
    }

    system("PAUSE");
    return 0;
}
