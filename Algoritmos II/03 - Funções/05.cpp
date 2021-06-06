#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
using namespace std;

/*Jo�o deseja adquirir um autom�vel, por�m precisa saber quanto tempo necessita economizar para conseguir adquirir o bem
desej�vel, para facilitar a decis�o de Jo�o voc� deve implementar um programa que receba o valor do autom�vel, o tipo de
corre��o (1 � poupan�a (0.14% ao m�s, 2 � CD (0,32% ao m�s)) e o valor fixo que Jo�o vai aplicar mensalmente. Com essas
informa��es o programa dever� calcular quantos meses ser�o necess�rios para Jo�o conseguir atingir o valor do autom�vel e
qual ser� o valor que ele ter� no final. Utilize fun��es para resolver este problema.*/

double Leitura(char recebido[100]);
void ValorFinal(float vAut, int correc, float men);

int main(){

    setlocale(LC_ALL, "Portuguese");
    float vAutomovel = 0, mensal = 0;
    int correcao = 0;

    cout<<fixed<<setprecision(2);
    vAutomovel = Leitura("Digite o valor do autom�vel: R$");
    correcao = Leitura("Digite o tipo de corre��o ( 1 - Poupan�a ) ou ( 2 - CD ): ");
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
            cout<<"\n Ser�o necess�rios "<<mes<<" meses para atingir a quantia de R$"<<economia<<endl;
            break;
        case 2:
            for(i = 0; vAut > economia; i++){
                economia += men;
                economia += economia * (0.32/100);
                mes++;
            }
            cout<<"\n Ser�o necess�rios "<<mes<<" meses para atingir a quantia de R$"<<economia<<endl;
            break;
        default:
            cout<<"\n* VALOR INDEFINIDO, o valor de poupan�a ser� aplicado automaticamente! *"<<endl;
            for(i = 0; vAut > economia; i++){
                economia += men;
                economia += economia * (0.14/100);
                mes++;
            }
            cout<<"\n Em "<<mes<<" meses voc� atingir� a quantia de R$"<<economia<<endl;
            break;
    }
}
