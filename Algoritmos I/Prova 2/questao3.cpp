#include<iostream>
using namespace std;

char anoFabricacao(int ano){
    if(ano == 2020){
        cout<<"\nSeu veículo do ano de "<<ano<<" é classificado como novo.\n";
        return 'N';
    }
    if(ano == 2020 - 1 || ano == 2020 - 2){
        cout<<"\nSeu veículo do ano de "<<ano<<" é classificado como seminovo.\n";
        return 'S';
    }
    if(ano < 2020 - 2){
        cout<<"\nSeu veículo do ano de "<<ano<<" é classificado como usado.\n";
        return 'U';
    }
}

float precoVeiculo(int preco, char classificacao){
    if(classificacao == 'N'){
        float novoPreco = preco + (preco * 0.7);
        cout<<"Seu veículo novo com o percentual de 7% fica no valor de venda de R$"<<novoPreco<<".\n";
        return novoPreco;
    }
    if(classificacao == 'S'){
        float novoPreco = preco + (preco * 0.14);
        cout<<"Seu veículo seminovo com o percentual de 14% fica no valor de venda de R$"<<novoPreco<<".\n";
        return novoPreco;
    }
    if(classificacao == 'U'){
        float novoPreco = preco + (preco * 0.20);
        cout<<"Seu veículo usado com o percentual de 20% fica no valor de venda de R$"<<novoPreco<<".\n";
        return novoPreco;
    }
}

float parcelasPagar(int parcela, float valor){
    if(parcela == 1){
        float valorVenda = valor - (valor * 0.15);
        cout<<"Com apenas uma única parcela você tem o desconto de 15%, ficando o valor final de R$"<<valorVenda;
        return valorVenda;
    }
    if(parcela >= 2 && parcela <= 12){
        float valorVenda = valor + (valor * 0.8);
        cout<<"Com parcelas de "<<parcela<<" vezes você tem o acrescimo de 8%, ficando o valor final de R$"<<valorVenda;
        return valorVenda;
    }
    if(parcela >= 13 && parcela <= 24){
        float valorVenda = valor + (valor * 0.13);
        cout<<"Com parcelas de "<<parcela<<" vezes você tem o acrescimo de 13%, ficando o valor final de R$"<<valorVenda;
        return valorVenda;
    }
    if(parcela >= 25 && parcela <= 36){
        float valorVenda = valor + (valor * 0.18);
        cout<<"Com parcelas de "<<parcela<<" vezes você tem o acrescimo de 18%, ficando o valor final de R$"<<valorVenda;
        return valorVenda;
    }
}

main(){

    setlocale(LC_ALL, "portuguese");
    int ano, preco, parcela;

    cout<<"  Digite o ano do veículo: ";
    cin>>ano;
    cout<<"  Digite o preço: R$";
    cin>>preco;
    cout<<"  Deseja pagar em quantas parcelas: ";
    cin>>parcela;

    char classificacao = anoFabricacao(ano);
    float valor = precoVeiculo(preco, classificacao);
    parcelasPagar(parcela, valor);

    cout<<"\n\n";
}
