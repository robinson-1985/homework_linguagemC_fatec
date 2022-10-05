/* 2 - Construa um programa que possa calcular a quantidade de dinheiro 
gasto pelos fumantes. Entrar via teclado com os dados: o número de anos 
que ele fuma, o nº de cigarros fumados por dia e o preço de uma carteira 
(maço). 
Obs: cada carteira possui 20 cigarros.
• Organizar o código com: procedimentos
• O usuário deverá ter opção de parar ou não o processamento (utilizar o 
WHILE). */

#include <stdio.h>
#include <stdlib.h>

int anosFumados, cigarroDia, resposta;
float precoMaco, dinheiroGasto; 

int main() {

    do{
        printf("Digite a quantos anos voce fuma: ");
        scanf("%d", &anosFumados);

        printf("Digite o numero de cigarros fumados por dia: ");
        scanf("%d", &cigarroDia);

        printf("Digite o preco da carteira : ");
        scanf("%f", &precoMaco);

        anosFumados = anosFumados * 365;
        cigarroDia = cigarroDia * anosFumados; 
        dinheiroGasto = precoMaco * (cigarroDia/20);

        printf("A quantidade de dinheiro que o fumante gastou é: R$ %2.f\n", dinheiroGasto);
        printf("\n\n");

        printf("Digite 1 para continuar e 2 para sair! \n");
        scanf("%d", &resposta);
    }
    
    while (resposta == 1);

    return 0;
}
