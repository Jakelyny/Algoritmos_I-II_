#include <iostream>
using namespace std;

/* Fa�a um algoritmo que receba tr�s alturas e informe a altura que estiver na situa��o de maior altura. */

main(){

    setlocale(LC_ALL, "Portuguese");
    float altura1, altura2, altura3;
    char resposta;

    cout<<" Digite a primeira altura: ";
    cin>>altura1;
    cout<<" Digite a segunda altura: ";
    cin>>altura2;
    cout<<" Digite a �ltima: ";
    cin>>altura3;

    if((altura1 > altura2) && (altura1 > altura3))
    {
        cout<<" \n\tA que possui "<<altura1<<"m de altura � a mais alta.\n"<<endl;
    }

    if((altura2 > altura1) && (altura2 > altura3))
    {
        cout<<" \n\tA que possui "<<altura2<<"m de altura � a mais alta.\n"<<endl;
    }

    if((altura3 > altura2) && (altura3 > altura1))
    {
        cout<<" \n\tA que possui "<<altura3<<"m de altura � a mais alta.\n"<<endl;
    }

}
