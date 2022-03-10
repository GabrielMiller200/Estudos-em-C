/*Receber dois valores, salário e prestação, se 20% do salário for menor que a prestação, entao
digite, o empréstimo pode ser concedido, se não, emprestimo recusado*/

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

    printf("\n\t Informe aqui o seu Salário: ");
    scanf("%lf", &salario);
    printf("\n\t Informe aqui o valor da prestação: ");
    scanf("%lf", &prestacao);

    total = salario * porcentagem;

    if ( prestacao < total )
    {
        printf("\n\t O Emprestimo pode ser concedido\n");
    }
    else
    {
        printf("\n\t O Emprestimo não pode ser concedido\n");
    }

    return 0;
}
