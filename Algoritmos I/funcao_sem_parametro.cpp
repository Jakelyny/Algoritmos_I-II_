//função sem parametro e sem retorno

#include<iostream>
using namespace std;
void mostraErro();

main()
{
    int num;
    cout << " Informe nº 3 e 19 e impar ";
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
            cout << "\nParabens vc sabe ler enunciados";
        }
    }
}



void mostraErro()
{
    cout << "\n****************** ";
    cout << "\n***VC NAO SABE**** ";
    cout << "\n**LER ENUNCIADOS** ";
    cout << "\n****************** ";
}
