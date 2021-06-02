#include<iostream>
#include<cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;
main()
{
    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));

    int id;
    char sexo;


   cout<<"\n Informe idade ";
   cin>>id;
   cout<<"\n Informe Sexo M/F ";
   cin>>sexo;


   while (sexo != 'M' and  sexo != 'F')
   {
        cout<<"\n Informe Sexo CORRETAMENTE M/F ";
        cin>>sexo;
   }

    cout<< "\n saiu do loop ";


    cout<< "\n \n";
    system("Pause");




}


