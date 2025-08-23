#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Nível novato

int main()
{
     //Declaracao das variaveis para primeira carta
    char estado_carta_1[50] = "";
    char codigo_carta_1[50] = "";
    char cidade_carta_1[50] = "";
    unsigned long int populacao_carta_1 = 0;
    float area_carta_1 = 0.0;
    float pib_carta_1 = 0.0;
    int pontos_turisticos_carta_1 = 0;
    float densidade_populacional_1 = 0.0;
    float pib_per_capita_1 = 0.0;
    float super_poder_1 = 0.0;
    float inverso_densidade_populacional_1 = 0.0;


    //Declaracao das variaveis para segunda carta
    char estado_carta_2[50] = "";
    char codigo_carta_2[50] = "";
    char cidade_carta_2[50] = "";
    unsigned long int populacao_carta_2 = 0;
    float area_carta_2 = 0.0;
    float pib_carta_2 = 0.0;
    int pontos_turisticos_carta_2 = 0;
    float densidade_populacional_2 = 0.0;
    float pib_per_capita_2 = 0.0;
    float super_poder_2 = 0.0;
    float inverso_densidade_populacional_2 = 0.0;


    //Inicio do cadastro da primeira carta
    printf("Preencha os dados da Carta 1:\n");
    printf("Digite o estado: \n");
    fgets(estado_carta_1, 50, stdin);
    estado_carta_1[strcspn(estado_carta_1, "\n")] = 0;

    printf("Digite o codigo (ex: A01, B03): \n");
    fgets(codigo_carta_1, 50, stdin);
    codigo_carta_1[strcspn(codigo_carta_1, "\n")] = 0;

    printf("Digite o nome da cidade: \n");
    fgets(cidade_carta_1, 50, stdin);
    cidade_carta_1[strcspn(cidade_carta_1, "\n")] = 0;

    printf("Digite a populacao: \n");
    scanf("%lu", &populacao_carta_1);

    printf("Digite a area: \n");
    scanf("%f", &area_carta_1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_carta_1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos_carta_1);
    getchar(); // Limpa o buffer do \n deixado pelo scanf
    //Fim cadastro da primeira carta

    //calcula a densidade populacional
    densidade_populacional_1 = (float)populacao_carta_1 / area_carta_1;
    inverso_densidade_populacional_1 = area_carta_1 / (float)populacao_carta_1;

    //calcula pib per capita
    pib_per_capita_1 = pib_carta_1 / (float)populacao_carta_1;


    //Inicio cadastro da segunda carta
    printf("\nPreencha os dados da Carta 2:\n");
    printf("Digite o estado: \n");
    fgets(estado_carta_2, 50, stdin);
    estado_carta_2[strcspn(estado_carta_2, "\n")] = 0;

    printf("Digite o codigo (ex: A01, B03): \n");
    fgets(codigo_carta_2, 50, stdin);
    codigo_carta_2[strcspn(codigo_carta_2, "\n")] = 0;

    printf("Digite o nome da cidade: \n");
    fgets(cidade_carta_2, 50, stdin);
    cidade_carta_2[strcspn(cidade_carta_2, "\n")] = 0;

    printf("Digite a populacao: \n");
    scanf("%lu", &populacao_carta_2);

    printf("Digite a area: \n");
    scanf("%f", &area_carta_2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_carta_2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos_carta_2);
    //Fim cadastro segunda carta

    //calcula a densidade populacional
    densidade_populacional_2 = (float)populacao_carta_2 / area_carta_2;
    inverso_densidade_populacional_2 = area_carta_2 / (float)populacao_carta_2;

    //calcula pib per capita
    pib_per_capita_2 = pib_carta_2 / (float)populacao_carta_2;

    super_poder_1 = (float)populacao_carta_1 + area_carta_1 + pib_carta_1 + (float)pontos_turisticos_carta_1 + pib_per_capita_1 + inverso_densidade_populacional_1;
    super_poder_2 = (float)populacao_carta_2 + area_carta_2 + pib_carta_2 + (float)pontos_turisticos_carta_2 + pib_per_capita_2 + inverso_densidade_populacional_2;

    printf("\n--- Comparação das Cartas ---\n");

    printf("Carta 1 - %s (%s): %lu \n", cidade_carta_1, codigo_carta_1, populacao_carta_1 );
    printf("Carta 2 - %s (%s): %lu \n", cidade_carta_2, codigo_carta_2, populacao_carta_2 );


    //Aqui fazemos a comparação de qual carta tem a maior população
    if(populacao_carta_1 > populacao_carta_2){
        printf("\n Carta 1 %s venceu!", cidade_carta_1);
    } else {
        printf("Carta 2 %s venceu!", cidade_carta_2);
    }


    return 0;
}