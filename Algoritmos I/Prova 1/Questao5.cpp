#include<iostream>
using namespace std;

main()
{
    setlocale (LC_ALL, "portuguese");
    int numero, soma=0;

    cout<<"Digite um n�mero que seja entre 1 e 200: ";
    cin>>numero;

    if (numero >= 1 && numero <= 200)
    {
        for (int i = 1; i <= numero ;i++)
        {
            if (i%3 == 0)
            {
                cout<<i<<" � divis�vel por 3. \n";
            }
            if (i%2 == 1)
            {
                soma = soma + i;
            }
            if (i%2 == 0)
            {
                cout<<i<<" � um n�mero par. \n";
            }
        }

        cout<<"\n A soma de todos os n�meros �mpares do intervalo digitado � de "<<soma<<".\n\n\n";
    }
    else
    {
        cout<<"\n\nO valor digitado � inv�lido!\n\n\n";
    }




}

