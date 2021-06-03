#include <iostream>
using namespace std;

/*Escrever um programa que l� um n�mero inteiro. Mostrar se o n�mero � ou n�o primo. N�mero primo � aquele que � divis�vel por 1 e por ele mesmo. O sistema dever� permitir o teste com N n�meros, apresentando o resultado e solicitando se o usu�rio deseja avaliar outro valor ou encerrar o programa. Quando encerrar o programa o sistema dever� apresentar quantos n�meros foram avaliados, quantos foram considerados primos e quantos n�o foram considerados primos.*/

int main(){

    setlocale(LC_ALL, "Portuguese");
    char resposta;
    int numero, i, resto = 0, primo = 0, naoPrimo = 0;

    do{

        cout<<"\n Digite um n�mero: ";
        cin>>numero;

        for(i = 1; i<= numero; i++)
        {
            if(numero%i == 0)
            {
                resto++;
            }
        }
        if(resto == 2)
        {
            cout<<"--------O n�mero � primo----------\n\n";
            primo++;
        }else{
            cout<<"-------O n�mero n�o � primo-------\n\n";
            naoPrimo++;
        }

        cout<<"  Deseja inserir mais um n�mero? ( S / N ) : ";
        cin>>resposta;
        resto = 0;
    }while(resposta == 'S' || resposta == 's');
    cout<<"\n\n--------------RESULTADO--------------\nQuantidade de n�meros digitados: "<<primo+naoPrimo<<"\nQuantidade n�meros primos: "<<primo<<"\nQuantida de n�meros n�o primos: "<<naoPrimo<<"\n\n";

    system("PAUSE");
    return 0;
}
