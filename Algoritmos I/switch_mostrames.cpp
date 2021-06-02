#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"portuguese");

    int m;

    cout<<"Informe o mes:  ";
    cin>>m;


    switch(m)
    {
        case 1 :
            cout<< "\n Janeiro";
            break;
        case 2 :
            cout<<"\n Fevereiro";
            break;
        case 3 :
            cout<<"\n Marco";
            break;
        case 4 :
            cout<<"\n Abril";
            break;
        case 5 :
            cout<<"\n Maio";
            break;
        case 6 :
            cout<<"\n Junho";
            break;
        case 7 :
            cout<<"\n Julho";
            break;
        case 8 :
            cout<<"\n Agosto";
            break;
        case 9 :
            cout<<"\n Setembro";
            break;
        case 10 :
            cout<<"\n Outubro";
            break;
        case 11 :
            cout<<"\n Novembro";
            break;
        case 12 :
            cout<<"\n Dezembro";
            break;
        default :
            cout <<"\n Mes invalido ";
    }

    cout<<"\n \n";

}
