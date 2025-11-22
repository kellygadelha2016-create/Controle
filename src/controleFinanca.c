#include <stdio.h>
// INCLUINDO A CLASSE HEADER PARA COMPARTILHAR A FUNCAO
#include "controleFinanca.h"

// FUNCAO SOMAGASTOS
double somaGastos(double gastos,  char cont, double salario){
    double somaGastos=0;
    while(1){
        //  FAZ A SOMA ENTRE OS GASTOS
        printf("Valor do gasto R$: ");
        scanf("%lf", &gastos);
        somaGastos+=gastos;

        // PERGUNTA SE O USUARIO DESEJA ENCERRAR A TAREFA
        printf("Deseja continuar: (s/n)");
        scanf(" %c", &cont);

        // CONDICAO PARA ENCERRAR OU NÃO O SCRIPT
        if(cont!='n'&& cont!='s' && cont!='N'&& cont!='S'){
            while(cont!='n'&& cont!='s' && cont!='N'&& cont!='S'){
                printf("Opc invalida!\n");
                printf("Digite (s/n)");
                scanf(" %c", &cont);
            }
        }

        if (cont=='n' || cont=='N'){
            break;
        }

        if(somaGastos>=salario){
            break;
        }

    }
    return somaGastos;
}