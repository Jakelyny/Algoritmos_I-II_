#include <iostream>
using namespace std;

/*A padaria Europa � uma franquia que possui v�rias lojas na cidade de Porto Alegre, a rede toda vende uma certa quantidade de p�es franceses e uma quantidade de broas a cada dia. Cada p�ozinho custa R$ 0,41 e a broa custa R$ 3,50. Ao final do dia, o dono da rede sabe quanto arrecadou com a venda dos p�es e broas (juntos), devido a pandemia do COVID-19 ele decidiu doar 5% do que arrecada com estes dois itens que comercializa para o hospital da cidade. Com base nestes fatos, fa�a um programa para ler as quantidades de p�es e de broas vendidos, e depois calcule quanto foi arrecadado e quanto ser� a doa��o para o hospital.*/

int main(){

    setlocale(LC_ALL, "Portuguese");
    float paes, broas, totalPaes, totalBroas, total, doacao;

    cout<<"Digite a quantidade de p�es vendidos: ";
    cin>>paes;
    cout<<"Digite a quantidade de broas vendidas: ";
    cin>>broas;

    totalPaes = paes * 0.41;
    totalBroas = broas * 3.50;
    total = totalBroas + totalPaes;
    doacao = total - (total*0.95);

    cout<<"\n----------BALAN�O DI�RIA----------\n\nTotal das vendas: R$"<<total<<"\n\nP�es arrecadou: R$"<<totalPaes<<"\nBroas arrecadou: R$"<<totalBroas;
    cout<<"\n\nValor a ser doado: R$"<<doacao<<"\n\n----------------------------------\n\n";

    system("PAUSE");
    return 0;
}
