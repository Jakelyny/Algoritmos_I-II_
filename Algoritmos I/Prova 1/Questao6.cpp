#include<iostream>
using namespace std;

main()
{
    setlocale (LC_ALL, "portuguese");
    int idade, maiorIdade, menorIdade;
    float salario, contFeminin=0, contMasculin=0, somaIdadeFem=0, somaIdadeMas=0,pessoas;
    char sexo;

    cout<<"  Digite o número de pessoas que participaram da pesquisa: ";
    cin>>pessoas;

    for (int i = 0; i < pessoas; i++ )
    {
        cout<<"Sexo: ";
        cin>>sexo;

        cout<<"Salário: ";
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

    cout<<"\n\n  O número de pessoas participantes da pesquisa, foi de "<<pessoas<<" pessoas.";
    cout<<"\n  Quantidade de pessoas do sexo Feminino: "<<contFeminin<<", que em porcentagem é: "<<(contFeminin*100)/pessoas<<"%.";
    cout<<"\n  Quantidade de pessoas do sexo Masculino: "<<contMasculin<<", que em porcentagem é: "<<(contMasculin*100)/pessoas<<"%.";
    cout<<"\n  A média da idade das pessoas é de: "<<(somaIdadeFem + somaIdadeMas)/pessoas<<".";
    cout<<"\n  A menor idade é "<<menorIdade<<" e a maior idade é "<<maiorIdade<<".";
    cout<<"\n  A média de idade das pessoas do sexo Feminino é de "<<somaIdadeFem/contFeminin<<" e a do sexo Masculino é de "<<somaIdadeMas/contMasculin<<".\n\n\n";



}
