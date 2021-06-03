#include<iostream>
#include <iomanip>
using namespace std;

/*O card�pio de uma lancheria cont�m os seguintes itens:
Descri��o           C�digo     Valor R$
Cachorro quente       10         12,00
Bauru simples         11         16,50
Bauru com ovo         12         18,00
Hamb�rger             13         22,00
Cheeseburguer         14         20,00
Torrada               15         10,00
Refrigerante           1          8,00
Suco Natural           2         10,50
Escreva um programa que auxilie o dono da lancheria a realizar os pedidos dos clientes, o programa deve possibilitar que o atendente informe o c�digo do item e a quantidade solicitada, sendo poss�vel incluir v�rios itens no mesmo pedido, para tanto a cada item solicitado o sistema dever� apresentar as seguintes possibilidades:
1 � Incluir mais um item
2 � Encerrar o pedido
Se a op��o for incluir mais um item (1) permite informar o c�digo e a quantidade do pr�ximo item, caso a op��o seja encerrar o pedido (2) dever� exibir os itens do pedido, com as respectivas quantidades, o valor do item e ao final o valor total do pedido, como no exemplo:
Descri��o         QTD      Valor do Item
Bauru Simples      1           16,50
Torrada            2           20,00
Suco Natural       2           21,00
Total do Pedido: 57,50
OBS:
- Validar para aceitar somente itens pertencentes ao card�pio.
- Exibir o pedido com os alinhamentos e os valores num�ricos formatados conforme no exemplo.*/

int codigo, opcao, aux = 0, quantidade[8]{0, 0, 0, 0, 0, 0, 0, 0};
float valorTotal = 0, valor[]{12.00, 16.50, 18.00, 22.00, 20.00, 10.00, 8.00, 10.50};
string produto[]{"Cachorro quente", "Bauru simples", "Bauru com ovo", "Hamb�rguer", "Cheeseburguer", "Torrada", "Refrigerante", "Suco Natural"};

void Pedidos(int codigo, int aux,int quantidade[8],float valor[8], string produto[8])
{
    switch(codigo)
    {
        case 10:
            cout<<" Quantos Cachorros quentes? ";
            cin>>aux;
            quantidade[0] += aux;
            break;
        case 11:
            cout<<" Quantos Baurus simples? ";
            cin>>aux;
            quantidade[1] += aux;
            break;
        case 12:
            cout<<" Quantos Baurus com ovos? ";
            cin>>aux;
            quantidade[2] += aux;
            break;
        case 13:
            cout<<" Quantos Hamb�rguers? ";
            cin>>aux;
            quantidade[3] += aux;
            break;
        case 14:
            cout<<" Quantos Cheeseburguers? ";
            cin>>aux;
            quantidade[4] += aux;
            break;

        case 15:
            cout<<" Quantas Torradas? ";
            cin>>aux;
            quantidade[5] += aux;
            break;

        case 1:
            cout<<" Quantos Refrigerantes? ";
            cin>>aux;
            quantidade[6] += aux;
            break;

        case 2:
            cout<<" Quantos Sucos Naturais? ";
            cin>>aux;
            quantidade[7] += aux;
            break;
        default:
            cout<<"\n   Esse item n�o existe no card�pio!\n";
    }
}

main(){

    setlocale(LC_ALL, "Portuguese");

    cout<<" ___________________________________________\n|DESCRI��O         |   C�DIGO   |   VALOR   |\n -------------------------------------------"<<endl;
    cout<<" Cachorro quente        10         R$ 12,00"<<endl;
    cout<<" Bauru simples          11         R$ 16,50"<<endl;
    cout<<" Bauru com ovo          12         R$ 18,00"<<endl;
    cout<<" Hamb�rguer             13         R$ 22,00"<<endl;
    cout<<" Cheeseburguer          14         R$ 20,00"<<endl;
    cout<<" Torrada                15         R$ 10,00"<<endl;
    cout<<" Refrigerante           1          R$ 08,00"<<endl;
    cout<<" Suco Natural           2          R$ 10,50\n-------------------------------------------"<<endl;

    do{
        cout<<" Digite o c�digo correspondente ao seu lanche: ";
        cin>>codigo;
        Pedidos(codigo, aux, quantidade, valor, produto);
        cout<<"  1 - Incluir mais um item"<<endl;
        cout<<"  2 - Encerrar o pedido"<<endl;
        cout<<"Digite sua op��o: ";
        cin>>opcao;

    }while(opcao == 1);
    cout<<"\n------------------------------------------------\n  DESCRI��O         |   QTD  |  VALOR DO ITEM  |\n------------------------------------------------"<<endl;

    for(int i = 0; i < 8; i++)
    {
        if(quantidade[i] >= 1){
            cout.width(25);
            cout<<left<<produto[i];
            cout.width(10);
            cout<<quantidade[i];
            cout.width(5);
            cout<<fixed<<setprecision(2);
            cout<<"R$"<<valor[i] * quantidade[i]<<endl;
        }
    }
    for(int i = 0; i < 8; i++){
        valorTotal = valorTotal + (valor[i] * quantidade[i]);
    }
    cout<<"\n\n";
    cout.width(41);
    cout.fill('-');
    cout << right <<"TOTAL: R$"<<valorTotal<<"\n\n\n";

    system("PAUSE");
    return 0;
}


