/* 3 - Um professor pesquisou entre seus 10 alunos (usar vetores) sobre a 
qualidade de suas aulas. Cada aluno atribuiu uma nota de 1 a 10 e ao final 
foi calculada uma média, classificando a aula de acordo com a tabela abaixo: 
de 9 a 10 (ótimo), de 7 a 8,9 (bom), de 5 a 6,9 (regular), de 3 a 4,9 (Ruim) 
e de 1 a 2,9 (Péssimo). 
Obs.: Organize os dados em VETORES Criar: Procedimentos: entrarDados, calculo 
e mostraResultado. Armazenar as notas em um VETOR. */

#include <stdio.h>
#include <stdlib.h>

int i; 
float nota[10], media, resultado = 0;

void entra_dados(void){
    printf("Digite a nota sobre a qualidade das aula:\n");
    for(i=0; i<10; i++){
        scanf("%f", &nota[i]);
        resultado += nota[i];
    }
}

void calculo(void){
    media = resultado / 10;
    system("cls");
}

void resultados(void){
    printf("A média das notas sobre a qualidade das aula é: %f\n", media);
    
    return;
}

void mostra_dados(void) {
    if(media <= 1 && media <= 2.99){
    printf("A media das notas foi %.2f.\nPessimo!\n", media);
    }
    if(media <= 3 && media <= 4.99){
        printf("A media das notas foi %.2f.\nRuim!\n", media);
    }
    if(media <= 5 && media <= 6.99){
        printf("A media das notas foi %.2f.\nRegular!\n", media);
    }
    if(media <= 7 && media <= 8.99){
        printf("A media das notas foi %.2f.\nBom!\n", media);
    }
    if(media <= 9 && media <= 10){
        printf("A media das notas foi %.2f.\nOtimo!\n", media);
    }
    
}

int main(){
    entra_dados();
    calculo();
    resultados();
    mostra_dados();
    printf("\n\n");
    fflush(stdin); 
    printf("\n\n");
  
    system("PAUSE");
}
