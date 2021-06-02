//função com parâmetro

#include<iostream>
using namespace std;
void mostraErro();
void funcGeraMatriz(int tam);
main()
{
    int num;
    cout << " Informe numero entre 3 e 19 e impar ";
    cin >> num;
    if ( num < 3 || num > 19 )
    {
        mostraErro();
    }
    else
    {
        if ( num%2==0)
        {
            mostraErro();
        }

        else
        {
            cout << "\nParabens vc sabe ler enunciados\n";
            funcGeraMatriz(num);
        }
    }
}

void funcGeraMatriz(int tam)
{
    int l,c,M[tam][tam];
    for (l=0; l<tam; l++)
    {
        for( c=0; c<tam; c++)
        {
            if ( tam/2 == c || tam/2 == l)
            {
                M[l][c] = 1;
            }
            else
            {
                M[l][c] = 0;
            }
            cout  << M[l][c] << "\t";
        }
         cout << "\n\n";
    }

}


void mostraErro()
{
    cout << "\n****************** ";
    cout << "\n***VC NAO SABE**** ";
    cout << "\n**LER ENUNCIADOS** ";
    cout << "\n****************** ";
}
