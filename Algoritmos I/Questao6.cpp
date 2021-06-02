#include<iostream>
using namespace std;

/*Criar um algoritmo que leia o nome e o total de pontos de três finalistas de um campeonato
 de pingue-pongue e exibir a colocação da seguinte forma:
 Vencedor: XXXX ptos
 Segundo colocado: XXXX ptos
 Terceiro colocado: XXXX ptos*/

main()
{
    setlocale (LC_ALL,"portuguese");
    string finalista1, finalista2, finalista3;
    int pont1, pont2, pont3, primeiro, segundo, terceiro,a;

    cout<<"\n Informe o nome do finalista: ";
    cin>>finalista1;

    cout<<"\n Agora informe a pontuação de "<<finalista1<<" : ";
    cin>>pont1;

    cout<<"\n informe o nome do finalista: ";
    cin>>finalista2;

    cout<<"\n Agora informe a pontuação de "<<finalista2<<" : ";
    cin>>pont2;

    cout<<"\n Informe o nome do finalista: ";
    cin>>finalista3;

    cout<<"\n Agora informe a pontuação de "<<finalista3<<" : ";
    cin>>pont3;

    if (pont1 > pont2 && pont1 > pont3)
        {
            primeiro = pont1;
            if (pont2 > pont3)
            {
                segundo = pont2;
                terceiro = pont3;
            }
            else if (pont3 > pont2)
            {
                segundo = pont3;
                terceiro = pont2;
            }
        }
    else if (pont2 > pont1 && pont2 > pont3)
        {
            primeiro = pont2;
            if (pont1 > pont3)
            {
                segundo = pont1;
                terceiro = pont3;
            }
            else if (pont3 > pont1)
            {
                segundo = pont3;
                terceiro = pont1;
            }
        }
    else if (pont3 > pont1 && pont3 > pont2)
        {
            primeiro = pont3;
            if (pont1 > pont2)
            {
                segundo = pont1;
                terceiro = pont2;
            }
            else if (pont2 > pont1)
            {
                segundo = pont2;
                terceiro = pont1;
            }
        }

    cout<< "\n";
    cout<< "\n Vencedor:                "<<primeiro<<" ptos";
    cout<< "\n Segundo colocado:        "<<segundo<<" ptos";
    cout<< "\n Terceiro colocado:       "<<terceiro<<" ptos";

    cout<<"\n \n \n";

}
