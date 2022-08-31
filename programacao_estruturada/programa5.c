/* 5 – Desenvolva um programa que receba a Altura a Idade e o Peso de 15 
pessoas e armazene em um VETOR. No final do processamento mostre:
◦ A quantidade de pessoas com mais de 50 anos;
◦ A média das alturas das pessoas entre 10 e 20 anos;
◦ A percentagem de pessoas com menos de 40 Kg entre todas as pessoas.
Obs.: Criar - Procedimento: ENTRADA, CALCULO e Mostrar Resultados. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int qtd_mais_50, qtd_pessoas_10_20 = 0, qtd_pessoas_40_kg = 0;
float altura [15], idade[15], peso[15];
float perc_menos_40_kg, media_altura_10_20,  soma_altura_10_20 = 0;

void entra_dados(void);
void calcula_dados(void);
void resultado(void);

void entra_dados (void){
    printf("\n#### Escolhemos 15 pessoas para participar de uma pesquisa ####\n");
    for(int i = 0; i< 15; i++){
        printf("\nInforme a Altura em cm:\n");
        scanf("%f",&altura[i]);

        printf("\nInforme o Peso em kg:\n");
        scanf("%f",&peso[i]);

        printf("\nInforme a Idade:\n");
        scanf("%f",&idade[i]);
    }
    return;
}

void calcula_dados (void){

    for(int i = 0; i < 3; i++){
        if(idade[i] > 50){
            qtd_mais_50++;
        }

        if(idade[i] > 10 && idade[i] < 20){
            qtd_pessoas_10_20++;
            soma_altura_10_20 = altura[i];
        }

        if(peso[i] < 40){
            qtd_pessoas_40_kg++;
        }
    }
    if(qtd_pessoas_10_20 == 0){
        media_altura_10_20 = 0;
    }

    else {
        media_altura_10_20 = soma_altura_10_20 / qtd_pessoas_10_20;
    }

  perc_menos_40_kg = (qtd_pessoas_40_kg * 100) / 15;
    return;
}

void resultado (void){
    printf("\nQtd de Pessoas com mais de 50 anos: %d\n", qtd_mais_50);
    printf("\nMedia de Altura entre 10 e 20 anos: %.2fcm\n", media_altura_10_20);
    printf("\nPorcentagem de pessoas com menos de 40kg: %.2fkg\n",perc_menos_40_kg);
}

int main() {
    entra_dados();
    calcula_dados();
    resultado();
    return 0;
}