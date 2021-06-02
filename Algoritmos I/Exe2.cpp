#include<iostream>
using namespace std;

main()
{
    setlocale (LC_ALL,"portuguese");
    int vMax[12], vMin[12], maiorTemp, menorTemp, mesMaior, mesMenor, maiorQanual=0, tempNegat=0,vDif[12];
    float mediaMaxi=0;

    for (int i = 0; i < 12; i++)
    {
        cout<<"\n  Digite a temperatura máxima do mês "<<i + 1<<" : ";
        cin>>vMax[i];

        cout<<"\n  Digite a temperatura mínima do mês "<<i + 1<<" : ";
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

    cout<<"\n              Mês                    | 01 | 02 | 03 | 04 | 05 | 06 | 07 | 08 | 09 | 10 | 11 | 12 | Ano |";
    cout<<"\n  Temperaturas Máximas Registradas: ";

    mediaMaxi = mediaMaxi / 12.0;

    for (int i = 0; i < 12; i++)
    {
        cout<<" | "<< vMax[i];
        if (vMax[i] > mediaMaxi)
        {
            maiorQanual++;
        }
    }
    cout<<" | "<<maiorTemp<<" no mês: "<<mesMaior+1;

    cout<<"\n  Temperaturas Mínimas Registradas: ";
    for (int i = 0; i < 12; i++)
    {
        cout<<" | "<< vMin[i];
    }
    cout<<" | "<<menorTemp<<" no mês: "<<mesMenor+1;

    cout<<"\n  Amplitudes térmicas registradas:  ";
    for (int i = 0; i < 12; i++)
    {
        cout<<" | "<< vDif[i];
    }
    cout<<" |";
    cout<<"\n\n  Média da temperatura máxima anual registrada: "<< mediaMaxi;
    cout<<"\n  Média maior que a média anual registrada: "<<maiorQanual;
    cout<<"\n  Mêses que atingiram temperaturas negativas: "<<tempNegat;



    cout<<"\n\n\n";
}
