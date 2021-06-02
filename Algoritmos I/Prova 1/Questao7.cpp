#include<iostream>
#include<stdlib.h>
#include<ctime>
#include <algorithm>
#include <vector>
using namespace std;

main()
{
    setlocale (LC_ALL, "portuguese");
    int v[10], maiorMed=0,x;
    float totArmaz=0, medArmaz=0;
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        v[i] = rand()%200;
        totArmaz = totArmaz + v[i];
    }
    medArmaz = totArmaz/10;
    cout<<" Média calculada: "<<medArmaz<<".\n\n";
    for (int i = 0; i < 10; i++)
    {
        if (v[i] > medArmaz)
        {
            maiorMed++;
        }
        if (v[i] < medArmaz)
        {
            cout<<v[i]<<" é menor que a média.\n";
        }
    }
    cout<<"\n Valores gerados em ordem decrescente: ";
    sort(v, v+10);
    reverse(v, v+10);
    cout<<"\n";
    for (int i = 0; i < 10; i++)
    {
        cout<<"\n"<<v[i];
    }
    cout<<"\n\n Existem "<<maiorMed<<" valores maiores que a média.\n\n\n";


}
