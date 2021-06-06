#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

/*Escreva um programa que exiba um menu com as opções apresentadas abaixo e quanto acionada deve executar as ações descritas:
0 – Sair - Encerra o programa
1 – Ler um valor qualquer – Aciona uma função para ler um número via entrada padrão
2 – Verifica primo - Aciona uma função que recebe o número por parâmetro e exibe a informação se o
número é primo ou não, os números 0 e 1 por definição não são primos.
3 – Soma algarismo - Aciona uma função que soma os algarismos que compõem o número, por exemplo:
se o número informado foi 528 a função deve retornar 15 pois 5 + 2 + 8 = 15
Obs: executar as validações apresentadas:
- Escolha de opção inválida no menu exibir mensagem de alerta.
- As opções 2 e 3 só podem ser acionadas após ter sido executado a opção 1.
- A opção 3 só pode ser acionado se o número for maior que zero e menor ou igual a 999.*/

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
        cout<<"Digite a opção desejada: ";
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
                nQualquer = Leitura("Digite um número qualquer: ");
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
                        cout<<"A soma dos algarismos é: "<<Soma(nQualquer);
                    }else{
                        cout<<"O número não está entre 0 e 999, tente de novo..";
                    }
                }
                getchar();
                break;
            default:
                system("cls");
                cout<<"\n\n\tOPÇÃO INVÁLIDA!";
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
        cout<<"O número é primo";
    }else{
        cout<<"O número não é primo";
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
