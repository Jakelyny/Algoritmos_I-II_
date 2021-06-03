#include <iostream>
using namespace std;

/*Escrever um programa que lê um número inteiro. Mostrar se o número é ou não primo. Número primo é aquele que é divisível por 1 e por ele mesmo. O sistema deverá permitir o teste com N números, apresentando o resultado e solicitando se o usuário deseja avaliar outro valor ou encerrar o programa. Quando encerrar o programa o sistema deverá apresentar quantos números foram avaliados, quantos foram considerados primos e quantos não foram considerados primos.*/

int main(){

    setlocale(LC_ALL, "Portuguese");
    char resposta;
    int numero, i, resto = 0, primo = 0, naoPrimo = 0;

    do{

        cout<<"\n Digite um número: ";
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
            cout<<"--------O número é primo----------\n\n";
            primo++;
        }else{
            cout<<"-------O número não é primo-------\n\n";
            naoPrimo++;
        }

        cout<<"  Deseja inserir mais um número? ( S / N ) : ";
        cin>>resposta;
        resto = 0;
    }while(resposta == 'S' || resposta == 's');
    cout<<"\n\n--------------RESULTADO--------------\nQuantidade de números digitados: "<<primo+naoPrimo<<"\nQuantidade números primos: "<<primo<<"\nQuantida de números não primos: "<<naoPrimo<<"\n\n";

    system("PAUSE");
    return 0;
}
