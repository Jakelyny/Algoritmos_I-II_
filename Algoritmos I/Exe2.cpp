#include<iostream>
using namespace std;

main()
{
    setlocale (LC_ALL,"portuguese");
    int vMax[12], vMin[12], maiorTemp, menorTemp, mesMaior, mesMenor, maiorQanual=0, tempNegat=0,vDif[12];
    float mediaMaxi=0;

    for (int i = 0; i < 12; i++)
    {
        cout<<"\n  Digite a temperatura m�xima do m�s "<<i + 1<<" : ";
        cin>>vMax[i];

        cout<<"\n  Digite a temperatura m�nima do m�s "<<i + 1<<" : ";
        cin>>vMin[i];

        if (vMin[i] < 0)
        {
            tempNegat++;
        }

        if (i == 0 || vMax[i] > maiorTemp)
        {
            maiorTemp = vMax[i];
            mesMaior = i;
        }
        if (i == 0 || vMin[i] < menorTemp)
        {
            menorTemp = vMin[i];
            mesMenor = i;
        }
        mediaMaxi = mediaMaxi + vMax[i];

        vDif[i] = vMax[i] - vMin[i];

    }

    cout<<"\n              M�s                    | 01 | 02 | 03 | 04 | 05 | 06 | 07 | 08 | 09 | 10 | 11 | 12 | Ano |";
    cout<<"\n  Temperaturas M�ximas Registradas: ";

    mediaMaxi = mediaMaxi / 12.0;

    for (int i = 0; i < 12; i++)
    {
        cout<<" | "<< vMax[i];
        if (vMax[i] > mediaMaxi)
        {
            maiorQanual++;
        }
    }
    cout<<" | "<<maiorTemp<<" no m�s: "<<mesMaior+1;

    cout<<"\n  Temperaturas M�nimas Registradas: ";
    for (int i = 0; i < 12; i++)
    {
        cout<<" | "<< vMin[i];
    }
    cout<<" | "<<menorTemp<<" no m�s: "<<mesMenor+1;

    cout<<"\n  Amplitudes t�rmicas registradas:  ";
    for (int i = 0; i < 12; i++)
    {
        cout<<" | "<< vDif[i];
    }
    cout<<" |";
    cout<<"\n\n  M�dia da temperatura m�xima anual registrada: "<< mediaMaxi;
    cout<<"\n  M�dia maior que a m�dia anual registrada: "<<maiorQanual;
    cout<<"\n  M�ses que atingiram temperaturas negativas: "<<tempNegat;



    cout<<"\n\n\n";
}
