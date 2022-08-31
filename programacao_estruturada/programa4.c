/* 4 - Elabore um algoritmo que leia duas notas de um aluno e o seu total 
de faltas durante o semestre e escreva seu conceito de acordo com a tabela 
abaixo. Considere que o aluno somente será aprovado com média >= 6.0 e total 
de faltas inferior ou igual a 25%. O aluno tem durante o semestre um total 
de 80 aulas (quatro aulas por semana). 

INTERVALO DA MÉDIA               CONCEITO
9 <= MF <= 10                       E
8 <= MF < 9.0                       A
6 <= MF <  8                        B
MF < 6.0 INSUFICIENTE               MF
REPROVAÇÃO POR FALTAS               F 

Obs.- Criar: procedimento, entrarDados, calculo, e mostrarResultado */

#include <stdio.h>
#include <stdlib.h>

int nota1, nota2, faltas, aulas = 80;
float media;
char resposta;

void entra_dados(void){
    printf("Digite a primeira nota do aluno: \n");
    scanf("%d", &nota1);
    printf("Digite a segunda nota do aluno: \n");
    scanf("%d", &nota2);
    printf("Digite o total de faltas do aluno: \n");
    scanf("%d", &faltas);
    return;
}

void calculo(void){
    media = (nota1 + nota2) / 2;
    faltas = (aulas - faltas) * 0.01; 
}

void resultado(void){
	printf("\nMedia do aluno: %.2f\n", media); 
    printf("Você faltou em %d aulas\n", faltas);
	return;
}

void mostra_dados(void) {
    if(media <= 9 || media <= 10){
        printf("Conceito - E\n");
    }
    else if(media <= 8 || media < 9){
        printf("Conceito - A\n");
    } 
    else if(media <= 6 || media < 8 ){
        printf("Conceito - B\n");
    } 
    else {
        printf("Média insuficiente. Você foi reprovado!\n");
    }
            
    if(faltas <= 25 && media > 6){
        printf("Voce foi aprovado!\n");
    }
    else if(faltas > 25 && media > 6) 
    {
        printf("Reprovado por faltas!\n");
    }
    else if(faltas > 25 && media < 6)
    {
        printf("Reprovado, media insuficiente!");
    }
    else if (faltas < 25 && media < 6)
    {
        printf("Reprovado, media insuficiente");
    }
    else if(faltas < 25 && media > 6)
    {
        printf("Aprovado, por media e faltas!");
    }

}

void main(void) {
  do{
    entra_dados();
    calculo();
    mostra_dados();
    printf("\n\n"); 
    printf("Deseja cadastrar as notas de outro aluno (S/N)?:\n");
    scanf("%s",&resposta);
    fflush(stdin); 
    printf("\n\n");
  } 

  while ((resposta == 'S') || (resposta == 's')); 

  system("PAUSE");
}
