/*

    Alunos: Kelly Gadelha

    principais alterações:
        - O usuário não consegue encerrar o código enquanto 
        não digitar a letra correta
        
        - Verificar qual o sistema operacional e limpa o terminal

        - principal implementação: fução somaGastos() que permite somar
        qualquer tipo de gasto em qualquer lugar do código
*/


#include <stdio.h>
#include <stdlib.h>
// INCLUINDO A CLASSE HEADER PARA COMPARTILHAR A FUNCAO
#include "controleFinanca.h"

int main(){

    char cont;
    double gastosContas, gastosLazer=0, salario, novoSalario, totalGastos;

    // DEFINE O SALARIO DO USUARIO
    printf("___===CONTROLE FINANCEIRO===___\n");
    printf("Entre com seu salario atual: R$");
    scanf("%lf", &salario);
    // VERIFICA QUAL O SISTEMA OPERACIONAL E LIMPA O TERMINAL
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    // INVOCA A FUNCAO SOMAGASTOS PARA TOTALIZAR AS DIVIDAS OBRIGATÓRIAS
    printf("___===PENDENCIAS OBRIGATÓRIAS===___\n");
    gastosContas = somaGastos(gastosContas, cont, salario);
    // VERIFICA QUAL O SISTEMA OPERACIONAL E LIMPA O TERMINAL
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    // VERIFICA SE AINDA HÁ DINHEIRO PARA O LAZER
    if(gastosContas<salario){
        printf("___===GASTOS COM LAZER===___\n");
        gastosLazer = somaGastos(gastosLazer, cont, (salario-gastosContas));
        // VERIFICA QUAL O SISTEMA OPERACIONAL E LIMPA O TERMINAL
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

    }

    totalGastos = gastosContas +  gastosLazer;

    // CONDIÇÃO ABAIXO VERIFICA DE ACORDO COM O SALARIO BRUTO 
    // O QUANTO O USUARIO SE PREPAROU DURANTE O MÊS
    if(gastosContas<=salario && salario<totalGastos)
    {
        // VERIFICA QUAL O SISTEMA OPERACIONAL E LIMPA O TERMINAL
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        printf("___===CONCLUSÃO FINAL===___\n");
        printf("Seu salario é sufiente para suas dividas!\n");
        printf("Muito cuidado com seus gastos para lazer!\n");
        printf("Salario bruto sem contas: R$%.2f", (salario-gastosContas));
    }
    else if(salario>gastosContas  && salario>gastosLazer && salario>totalGastos)
    {
        // VERIFICA QUAL O SISTEMA OPERACIONAL E LIMPA O TERMINAL
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        printf("___===CONCLUSÃO FINAL===___\n");
        printf("Seu salario é sufiente para toda as suas tarefas!\n");
        printf("Seus  gastos foram bem organizados, parabens!\n");
        printf("Salario bruto com descontos de gastos: R$%.2f", (salario-totalGastos));
    }
    else
    {
        // VERIFICA QUAL O SISTEMA OPERACIONAL E LIMPA O TERMINAL
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        printf("___===CONCLUSÃO FINAL===___\n");
        printf("Seu salario não é sufiente para toda as suas tarefas!\n");
        printf("Seus  gastos precisam ser analisados!\n");
        printf("Saldo final: R$%.2f", (salario-totalGastos));
    }


    return 0;
}