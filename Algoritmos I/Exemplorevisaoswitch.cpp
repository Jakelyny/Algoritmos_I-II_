#include<iostream>
#include<cstdlib>
using namespace std;
main()
{
    setlocale(LC_ALL,"portuguese");
    char letra;

    cout<<"Informe uma letra : ";
    cin>>letra;

    letra = toupper(letra);   /// converte para ma�usculo

    cout<< " \n usando conectivos or \n";
    if(letra == 'A'  or letra == 'E'  or letra == 'I' or  letra == 'O' or letra == 'U')
        cout <<"\n � VOGAL ";
    else
        cout <<"\n � CONSOANTE ";


    cout<< " \n usando     if e else          \n";
    if(letra == 'A')
        cout <<"\n � VOGAL ";
    else if(letra == 'E')
        cout <<"\n � VOGAL ";
    else if(letra == 'I')
        cout <<"\n � VOGAL ";
    else if(letra == 'O')
        cout <<"\n � VOGAL ";
    else if (letra == 'U')
        cout <<"\n � VOGAL ";
    else
        cout <<"\n � CONSOANTE ";


    cout<< " \n usando     switch case          \n";

    switch(letra)                             /// Para usar switch a variavel no case letra poder� ser s� char ou int
    {                                         /// para variaveis do tipo float, double ou string vai ter q ser if e else
    case 'A' :
        cout <<"\n � VOGAL ";
        break ;
    case 'E' :
        cout <<"\n � VOGAL ";
        break ;
    case 'I' :
        cout <<"\n � VOGAL ";
        break ;
    case 'O' :
        cout <<"\n � VOGAL ";
        break ;
    case 'U' :
        cout <<"\n � VOGAL ";
        break;
    default:

        cout <<"\n � CONSOANTE ";
    }


    cout<<"\n\n\n";
    system("Pause");

}
