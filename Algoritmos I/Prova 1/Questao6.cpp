#include<iostream>
using namespace std;

main()
{
    setlocale (LC_ALL, "portuguese");
    int idade, maiorIdade, menorIdade;
    float salario, contFeminin=0, contMasculin=0, somaIdadeFem=0, somaIdadeMas=0,pessoas;
    char sexo;

    cout<<"  Digite o n�mero de pessoas que participaram da pesquisa: ";
    cin>>pessoas;

    for (int i = 0; i < pessoas; i++ )
    {
        cout<<"Sexo: ";
        cin>>sexo;

        cout<<"Sal�rio: ";
        cin>>salario;

        cout<<"Idade: ";
        cin>>idade;

        if (sexo == 'f' || sexo == 'F')
        {
            contFeminin++;
            somaIdadeFem = somaIdadeFem + idade;
        }
        if (sexo == 'm' || sexo == 'M')
        {
            contMasculin++;
            somaIdadeMas = somaIdadeMas + idade;
        }
        if (i == 0 || idade > maiorIdade)
        {
            maiorIdade = idade;
        }
        if (i == 0 || idade < menorIdade)
        {
            menorIdade = idade;
        }
    }

    cout<<"\n\n  O n�mero de pessoas participantes da pesquisa, foi de "<<pessoas<<" pessoas.";
    cout<<"\n  Quantidade de pessoas do sexo Feminino: "<<contFeminin<<", que em porcentagem �: "<<(contFeminin*100)/pessoas<<"%.";
    cout<<"\n  Quantidade de pessoas do sexo Masculino: "<<contMasculin<<", que em porcentagem �: "<<(contMasculin*100)/pessoas<<"%.";
    cout<<"\n  A m�dia da idade das pessoas � de: "<<(somaIdadeFem + somaIdadeMas)/pessoas<<".";
    cout<<"\n  A menor idade � "<<menorIdade<<" e a maior idade � "<<maiorIdade<<".";
    cout<<"\n  A m�dia de idade das pessoas do sexo Feminino � de "<<somaIdadeFem/contFeminin<<" e a do sexo Masculino � de "<<somaIdadeMas/contMasculin<<".\n\n\n";



}
