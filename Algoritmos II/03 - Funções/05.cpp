#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
using namespace std;

/*João deseja adquirir um automóvel, porém precisa saber quanto tempo necessita economizar para conseguir adquirir o bem
desejável, para facilitar a decisão de João você deve implementar um programa que receba o valor do automóvel, o tipo de
correção (1 – poupança (0.14% ao mês, 2 – CD (0,32% ao mês)) e o valor fixo que João vai aplicar mensalmente. Com essas
informações o programa deverá calcular quantos meses serão necessários para João conseguir atingir o valor do automóvel e
qual será o valor que ele terá no final. Utilize funções para resolver este problema.*/

double Leitura(char recebido[100]);
void ValorFinal(float vAut, int correc, float men);

int main(){

    setlocale(LC_ALL, "Portuguese");
    float vAutomovel = 0, mensal = 0;
    int correcao = 0;

    cout<<fixed<<setprecision(2);
    vAutomovel = Leitura("Digite o valor do automóvel: R$");
    correcao = Leitura("Digite o tipo de correção ( 1 - Poupança ) ou ( 2 - CD ): ");
    mensal = Leitura("Digite o valor a ser aplicado mensalmente: R$");
    ValorFinal(vAutomovel, correcao, mensal);
    getchar();
    return 0;
}

double Leitura(char recebido[100]){
    double numero;
    cout<<recebido;
    cin>>numero;
    return numero;
}

void ValorFinal(float vAut, int correc, float men){
    float economia = 0;
    int i, mes = 0;
    switch(correc)
    {
        case 1:
            for(i = 0; vAut > economia; i++){
                economia += men;
                economia += economia * (0.14/100);
                mes++;
            }
            cout<<"\n Serão necessários "<<mes<<" meses para atingir a quantia de R$"<<economia<<endl;
            break;
        case 2:
            for(i = 0; vAut > economia; i++){
                economia += men;
                economia += economia * (0.32/100);
                mes++;
            }
            cout<<"\n Serão necessários "<<mes<<" meses para atingir a quantia de R$"<<economia<<endl;
            break;
        default:
            cout<<"\n* VALOR INDEFINIDO, o valor de poupança será aplicado automaticamente! *"<<endl;
            for(i = 0; vAut > economia; i++){
                economia += men;
                economia += economia * (0.14/100);
                mes++;
            }
            cout<<"\n Em "<<mes<<" meses você atingirá a quantia de R$"<<economia<<endl;
            break;
    }
}
