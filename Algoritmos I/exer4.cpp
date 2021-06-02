#include<iostream>
using namespace std;

int produtos[10];
float estoque[10];

bool verificarProduto(int codigoProduto){
    for(int p = 0; p < 10; p++){
        if(produtos[p] == codigoProduto){
            return true;
        }
    }
    return false;
}

int atualizarEstoque(int quantidadeProduto, int codigoProduto){
    for(int p = 0; p < 10; p++){
        if(p == codigoProduto - 1){
            estoque[p] = estoque[p] - quantidadeProduto;
            return estoque[p];
        }
    }

}

void listagemProdutos(){
    for(int p = 0; p < 10; p++){
        cout<<"Produto "<<produtos[p]<<"\nQuantidade em estoque: "<<estoque[p]<<"\n";
    }
}

main(){

    setlocale (LC_ALL,"portuguese");

    for(int p = 0; p < 10; p++){
        cout<<"Digite o código do produto: ";
        cin>>produtos[p];
        for(int e = 0; e < p; e++){
            if(produtos[p] == produtos[e]){
                cout<<"--- Já existe um produto com esse código ---\n";
                p--;
                break;
            }
        }
    }
    for(int p = 0; p < 10; p++){
        cout<<"Agora digite o total em estoque do produto "<<produtos[p]<<" :";
        cin>>estoque[p];
    }
    int codigoCliente = 1, codigoProduto, quantidadeProduto;
    do{
        cout<<"\n\nDigite o código de vendedor ou o número '00' para sair: ";
        cin>>codigoCliente;
        if(codigoCliente == 00){
            break;
        }
        cout<<"Digite o código do produto desejado: ";
        cin>>codigoProduto;
        if(verificarProduto(codigoProduto)){
            cout<<"Agora digite a quantidade de produtos da compra: ";
            cin>>quantidadeProduto;
            if(estoque[(codigoProduto - 1)] >= quantidadeProduto){
                cout<<"\nPedido atendido. Obrigada e volte sempre!\n";
                cout<<"Restante em estoque: "<<atualizarEstoque(quantidadeProduto, codigoProduto)<<"\n";
            }else{
                cout<<"\nNão temos estoque suficiente dessa mercadoria";
            }
        }else{
            cout<<"\nCódigo inexistente\n";
        }
    }while(codigoCliente != 00);
    listagemProdutos();
}
