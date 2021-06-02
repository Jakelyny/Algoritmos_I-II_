#include<iostream>
#include<cstdlib>
using namespace std;
main()
{
    setlocale(LC_ALL,"portuguese");
    char letra;

    cout<<"Informe uma letra : ";
    cin>>letra;

    letra = toupper(letra);   /// converte para maíusculo

    cout<< " \n usando conectivos or \n";
    if(letra == 'A'  or letra == 'E'  or letra == 'I' or  letra == 'O' or letra == 'U')
        cout <<"\n É VOGAL ";
    else
        cout <<"\n É CONSOANTE ";


    cout<< " \n usando     if e else          \n";
    if(letra == 'A')
        cout <<"\n É VOGAL ";
    else if(letra == 'E')
        cout <<"\n É VOGAL ";
    else if(letra == 'I')
        cout <<"\n É VOGAL ";
    else if(letra == 'O')
        cout <<"\n É VOGAL ";
    else if (letra == 'U')
        cout <<"\n É VOGAL ";
    else
        cout <<"\n É CONSOANTE ";


    cout<< " \n usando     switch case          \n";

    switch(letra)                             /// Para usar switch a variavel no case letra poderá ser só char ou int
    {                                         /// para variaveis do tipo float, double ou string vai ter q ser if e else
    case 'A' :
        cout <<"\n É VOGAL ";
        break ;
    case 'E' :
        cout <<"\n É VOGAL ";
        break ;
    case 'I' :
        cout <<"\n É VOGAL ";
        break ;
    case 'O' :
        cout <<"\n É VOGAL ";
        break ;
    case 'U' :
        cout <<"\n É VOGAL ";
        break;
    default:

        cout <<"\n É CONSOANTE ";
    }


    cout<<"\n\n\n";
    system("Pause");

}
