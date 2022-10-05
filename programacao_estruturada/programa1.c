/* 1 - Ler nome, sexo e idade de 10 pessoas, organize o código em VETORES. 
Se sexo for feminino e idade menor que 25,  imprimir o nome da pessoa e a 
palavra ACEITA. Caso contrário imprimir NAO ACEITA. Organizar o código com 
PROCEDIMENTOS;*/

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

void entrada(void);
void saida(void);

int i = 0;
int idade[11];
char nome[11], sexo[11];

int main(){
    for (i = 0; i < 11; i++){       
        entrada();
        saida();
    }
    system("pause");
}

void entrada(void){
    printf("Insira o seu nome: ", nome[i]);
    scanf("%s%*c", &nome[i]);

    printf("Insira sua idade: ", idade[i]);
    scanf("%d%*c", &idade[i]); 

    printf("Insira o seu sexo: M - masculino F - feminino: ", sexo[i]);
    scanf("%c%*c", &sexo[i]);
}

void saida(void){
    if (sexo[i] == 'F' && idade[i] < 25){
        printf("%s: ACEITA \n", nome);
    }
    else{
        printf("%s: NÃO ACEITA \n", nome);
    }
}
