#include<iostream>
using namespace std;

main()
{
    setlocale (LC_ALL, "portuguese");
    int numero, soma=0;

    cout<<"Digite um número que seja entre 1 e 200: ";
    cin>>numero;

    if (numero >= 1 && numero <= 200)
    {
        for (int i = 1; i <= numero ;i++)
        {
            if (i%3 == 0)
            {
                cout<<i<<" é divisível por 3. \n";
            }
            if (i%2 == 1)
            {
                soma = soma + i;
            }
            if (i%2 == 0)
            {
                cout<<i<<" é um número par. \n";
            }
        }

        cout<<"\n A soma de todos os números ímpares do intervalo digitado é de "<<soma<<".\n\n\n";
    }
    else
    {
        cout<<"\n\nO valor digitado é inválido!\n\n\n";
    }




}

