#include<iostream>
#include<cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;
main()
{
    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));

    int n,i;
    char resp;

    i = 0;

   resp = 'N';
   cout<<"\n valor de resp " << resp;

   while (resp == 'S' or resp == 's')
   {
        i = i + 1;
        cout<<"\n Informe número "<< i << " : ";
        n = rand() % 200;
        cout<< "  Numero Gerado "<< n;
        if( n % 2 == 0)
        {
            cout<<"... o numero é PAR";
        }
        else
        {
            cout<<"... o numero é IMPAR";
        }
        cout<< "\n Deseja continuar ? S/N ";
        cin >> resp;
   }

    cout<< "\n saiu do loop ";
    cout<< "\n \n";
    system("Pause");




}


