#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Nível novato

int main() {
    int populacao_carta_1, pontos_turisticos_carta_1, populacao_carta_2, pontos_turisticos_carta_2 = 0;
    float area_carta_1, pib_carta_1, area_carta_2, pib_carta_2 = 0.0;



    printf("Bem-vindo ao desafio Super Trunfo - Países! No jogo Super Trunfo, os jogadores comparam os atributos das cartas para determinar a mais forte. \nO tema deste Super Trunfo é Países, onde você comparará os atributos das cidades.");
    printf("\nPara dar início, vamos cadastrar duas cartas.\nPrimeira carta\nDigite o valor da população: ");

    scanf("%d", &populacao_carta_1);

    printf("Área: ");
    scanf("%f", &area_carta_1);

    printf("PIB: ");
    scanf("%f", &pib_carta_1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_carta_1);

    //aqui se inicia o preenchimento dos dados da segunda carta
    printf("\nPreencha os dados da segunda carta. \nDigite o valor da população: ");
    scanf("%d", &populacao_carta_2);

    printf("Área: ");
    scanf("%f", &area_carta_2);

    printf("PIB: ");
    scanf("%f", &pib_carta_2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_carta_2);

    // Exibindo os dados das cartas cadastradas
    printf("\nCartas cadastradas com sucesso!\n");
    printf("Dados das cartas:\n");

    printf("\nPrimeira carta: ");
    printf("\nPopulação: %d", populacao_carta_1);
    printf("\nÁrea: %.2f m²", area_carta_1);
    printf("\nPIB: %.2f", pib_carta_1);
    printf("\nPontos Turísticos: %d \n", pontos_turisticos_carta_1);

     printf("\nSegunda carta: ");
    printf("\nPopulação: %d", populacao_carta_2);
    printf("\nÁrea: %.2f m²", area_carta_2);
    printf("\nPIB: %.2f", pib_carta_2);
    printf("\nPontos Turísticos: %d \n", pontos_turisticos_carta_2);

    return 0;
}
