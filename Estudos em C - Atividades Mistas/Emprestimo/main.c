/*Receber dois valores, sal�rio e presta��o, se 20% do sal�rio for menor que a presta��o, entao
digite, o empr�stimo pode ser concedido, se n�o, emprestimo recusado*/

#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    double salario, prestacao, porcentagem = 20.0/100, total;

    printf("\n\t Informe aqui o seu Sal�rio: ");
    scanf("%lf", &salario);
    printf("\n\t Informe aqui o valor da presta��o: ");
    scanf("%lf", &prestacao);

    total = salario * porcentagem;

    if ( prestacao < total )
    {
        printf("\n\t O Emprestimo pode ser concedido\n");
    }
    else
    {
        printf("\n\t O Emprestimo n�o pode ser concedido\n");
    }

    return 0;
}
