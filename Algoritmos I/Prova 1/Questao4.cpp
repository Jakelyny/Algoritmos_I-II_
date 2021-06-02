#include<iostream>
using namespace std;

main()
{
    setlocale (LC_ALL, "portuguese");
    float peso, dose, gotas, ml;
    int idade;

    cout<<"\nDigite sua idade: ";
    cin>>idade;

    cout<<"\nAgora digite seu peso: ";
    cin>>peso;

    if(idade >= 12)
    {
        if (peso < 50)
        {
            dose = 875;
        }

        if (peso >= 50)
        {
            dose = 1000;
        }
    }
    else
    {
        if (peso >= 5 && peso <= 10)
        {
            dose = 125;
        }
        if (peso >= 10.1 && peso <= 17)
        {
            dose = 250;
        }
        if (peso >=17.1 && peso <= 25)
        {
            dose = 375;
        }
        if (peso >= 25.1 && peso <= 35)
        {
            dose = 500;
        }
        if (peso > 35)
        {
            dose = 750;
        }
    }

    ml = dose/500;
    gotas = ml * 15;

    cout<<"\n\nCom "<<idade<<" anos, recomenda-se tomar "<<gotas<<" gotas.\n\n\n";


}
