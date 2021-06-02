#include<iostream>
using namespace std;
char funcValidaCPF (int cpf);

main()
{


    int cpf;
    char val;
    do
    {
        cout << "\nInforme CPF para validar OU a tecla 0 para finalizar \n";
        cin >> cpf;
        if ( cpf > 0 )
        {
            val = funcValidaCPF (cpf);

            if ( val == 'S')
            {
                cout << " \nOK CPF Valido\n";
            }
            else
            {
                cout << " \nCPF invalido\n";
            }
        }
    }
    while (cpf > 0);
}


char funcValidaCPF (int cpf)
{
    char valido;
    int calc;

    calc = (cpf/2);
    if ( calc > 10)
    {
        valido = 'N';
    }
    else
    {
        valido = 'S';
    }
    return (valido);
}
