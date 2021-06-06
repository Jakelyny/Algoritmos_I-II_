#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
using namespace std;

/*Escreva uma fun��o que retorne o sal�rio final de um vendedor. A fun��o dever� receber o sal�rio fixo, o valor vendido, a
porcentagem de comiss�o do vendedor (por padr�o 5%) e o valor dos descontos com INSS (por padr�o 11%). A fun��o dever� calcular
e retornar o sal�rio final, formatado com duas casas decimais. Ap�s exibir o valor do sal�rio tamb�m dever� exibir quanto
representa em sal�rio m�nimo o valor calculado, tendo por base o sal�rio m�nimo de: R$ 1100,00*/

double Leitura(char recebido[100]);
void Salario(float sFixo, float vVend, float comis, float inss);

int main(){

    setlocale(LC_ALL, "Portuguese");
    float salarioFixo = 0, valorVend = 0, comissao = 0, inss = 0;

    cout<<fixed<<setprecision(2);
    salarioFixo = Leitura("Digite seu sal�rio fixo: R$");
    valorVend = Leitura("Digite o valor vendido: R$");
    comissao = Leitura("Digite sua comiss�o em porcentagem, para a comiss�o padr�o digite o n�mero 5: ");
    inss = Leitura("Digite seu desconto do INSS, para o padr�o digite o n�mero 11: ");
    Salario(salarioFixo, valorVend, comissao, inss);
    getchar();
    return 0;
}

double Leitura(char recebido[100]){
    double numero;
    cout<<recebido;
    cin>>numero;
    return numero;
}

void Salario(float sFixo, float vVend, float comis, float inss){
    float sTotal = 0;
    sTotal = sFixo + (vVend * (comis/100));
    sTotal = sTotal - (sTotal * (inss/100));
    cout<<"\n Seu sal�rio final �: R$"<<sTotal<<endl;
    cout<<" Voc� recebeu o equivalente a "<<sTotal/1100.0<<" sal�rio(s) m�nimo(s)"<<endl;
}



