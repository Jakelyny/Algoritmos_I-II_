#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

/*Escreva um programa que exiba um menu com as op��es apresentadas abaixo e quanto acionada deve executar as a��es descritas:
0 � Sair - Encerra o programa
1 � Ler um valor qualquer � Aciona uma fun��o para ler um n�mero via entrada padr�o
2 � Verifica primo - Aciona uma fun��o que recebe o n�mero por par�metro e exibe a informa��o se o
n�mero � primo ou n�o, os n�meros 0 e 1 por defini��o n�o s�o primos.
3 � Soma algarismo - Aciona uma fun��o que soma os algarismos que comp�em o n�mero, por exemplo:
se o n�mero informado foi 528 a fun��o deve retornar 15 pois 5 + 2 + 8 = 15
Obs: executar as valida��es apresentadas:
- Escolha de op��o inv�lida no menu exibir mensagem de alerta.
- As op��es 2 e 3 s� podem ser acionadas ap�s ter sido executado a op��o 1.
- A op��o 3 s� pode ser acionado se o n�mero for maior que zero e menor ou igual a 999.*/

double Leitura(char recebido[100]);
void VerificaPrimo(int num);
int Soma(int num);

int main(){

    setlocale(LC_ALL, "Portuguese");
    int menu = -1, sim = 0, nQualquer = 0;

    do{
        system("cls");
        cout<<" ***********MENU************"<<endl;
        cout<<" * 0 - Sair                *"<<endl;
        cout<<" * 1 - Leitura de um valor *"<<endl;
        cout<<" * 2 - Verifica primo      *"<<endl;
        cout<<" * 3 - Soma algarismo      *"<<endl;
        cout<<" ***************************"<<endl;
        cout<<"Digite a op��o desejada: ";
        cin>>menu;
        fflush(stdin);
        switch(menu)
        {
            case 0:
                system("cls");
                cout<<"\n\n\tENCERRANDO PROGRAMA..."<<endl;
                getchar();
                break;
            case 1:
                system("cls");
                nQualquer = Leitura("Digite um n�mero qualquer: ");
                sim = 1;
                getchar();
                break;
            case 2:
                system("cls");
                if(sim == 0){
                    cout << "\n\n\tPRIMEIRO INSIRA UM VALOR";
                }else{
                    VerificaPrimo(nQualquer);
                }
                getchar();
                break;
            case 3:
                system("cls");
                if(sim == 0){
                    cout << "\n\n\tPRIMEIRO INSIRA UM VALOR";
                }else{
                    if(nQualquer > 0 && nQualquer <= 999){
                        cout<<"A soma dos algarismos �: "<<Soma(nQualquer);
                    }else{
                        cout<<"O n�mero n�o est� entre 0 e 999, tente de novo..";
                    }
                }
                getchar();
                break;
            default:
                system("cls");
                cout<<"\n\n\tOP��O INV�LIDA!";
                getchar();
                break;
        }
    }while(menu != 0);
    return 0;
}

double Leitura(char recebido[100]){
    double numero;
    cout<<recebido;
    cin>>numero;
    return numero;
}

void VerificaPrimo(int num){
    int resto = 0;
    for(int i = 1; i<= num; i++){
        if(num%i == 0){
            resto++;
        }
    }
    if(resto == 2){
        cout<<"O n�mero � primo";
    }else{
        cout<<"O n�mero n�o � primo";
    }
}

int Soma(int num){
    int resultado = 0;
    string valor = to_string(num);
    for(int i = 0; i < valor.size(); i++){
        char algarismo[1] = {valor[i]};
        resultado += atoi(algarismo);
    }
    return resultado;
}
