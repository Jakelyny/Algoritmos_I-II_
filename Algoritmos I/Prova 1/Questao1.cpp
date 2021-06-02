#include<iostream>
using namespace std;

main()
{
    setlocale (LC_ALL, "portuguese");

    int idade, vlrPlano=0;
    char sexo;

    cout<<"\n Informe idade ";
    cin>>idade;

    cout<<"\n Informe sexo ";
    cin>>sexo;

    if (idade < 10 && sexo == 'F' )
    {
        vlrPlano = 90;
    }
    if(idade < 29 || sexo == 'M' )
    {
        vlrPlano = 120;
    }
    if(idade < 45 || sexo != 'F' )
    {
        vlrPlano = 175;
    }
    if(idade < 59 && sexo != 'F' )
    {
        vlrPlano = 250;
    }
    if(idade > 59 && sexo != 'M' )
    {
        vlrPlano = 280;
    }

    cout<<"\nValor a Pagar "<<vlrPlano;
}
