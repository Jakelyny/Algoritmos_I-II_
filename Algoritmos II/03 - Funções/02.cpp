#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
using namespace std;

/*Escreva uma função que retorne o salário final de um vendedor. A função deverá receber o salário fixo, o valor vendido, a
porcentagem de comissão do vendedor (por padrão 5%) e o valor dos descontos com INSS (por padrão 11%). A função deverá calcular
e retornar o salário final, formatado com duas casas decimais. Após exibir o valor do salário também deverá exibir quanto
representa em salário mínimo o valor calculado, tendo por base o salário mínimo de: R$ 1100,00*/

double Leitura(char recebido[100]);
void Salario(float sFixo, float vVend, float comis, float inss);

int main(){

    setlocale(LC_ALL, "Portuguese");
    float salarioFixo = 0, valorVend = 0, comissao = 0, inss = 0;

    cout<<fixed<<setprecision(2);
    salarioFixo = Leitura("Digite seu salário fixo: R$");
    valorVend = Leitura("Digite o valor vendido: R$");
    comissao = Leitura("Digite sua comissão em porcentagem, para a comissão padrão digite o número 5: ");
    inss = Leitura("Digite seu desconto do INSS, para o padrão digite o número 11: ");
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
    cout<<"\n Seu salário final é: R$"<<sTotal<<endl;
    cout<<" Você recebeu o equivalente a "<<sTotal/1100.0<<" salário(s) mínimo(s)"<<endl;
}



