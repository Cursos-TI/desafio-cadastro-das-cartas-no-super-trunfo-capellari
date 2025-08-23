#include <stdio.h>
#include <string.h>

int main()
{
    //Declaracao das variaveis para primeira carta
    char pais_carta_1[50] = "";
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
    char pais_carta_2[50] = "";
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

    int switch_comparacao = 0;

    //Inicio do cadastro da primeira carta
    printf("Preencha os dados da Carta 1:\n");

    printf("Digite o país: \n");
    fgets(pais_carta_1, 50, stdin);
    pais_carta_1[strcspn(pais_carta_1, "\n")] = 0;

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
    printf("Digite o país: \n");
    fgets(pais_carta_2, 50, stdin);
    pais_carta_2[strcspn(pais_carta_2, "\n")] = 0;

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


    printf("\nSelecione qual atributo comparar e digite o valor: \n");
    printf("\n1 - População");
    printf("\n2 - Área m²");
    printf("\n3 - PIB");
    printf("\n4 - Número de pontos turísticos");
    printf("\n5 - Densidade demográfica\n");

    scanf("%d", &switch_comparacao);

    switch(switch_comparacao) {
        case 1:
            switch_comparacao = 1;
            break;
        case 2:
            switch_comparacao = 2;
            break;
        case 3:
          switch_comparacao = 3;
            break;
        case 4:
          switch_comparacao = 4;
            break;
        case 5:
          switch_comparacao = 5;
            break;
        default:
            switch_comparacao = 0;
    }

    if(switch_comparacao == 0){
         printf("\n Atributo selecionado pra comparação inválido!");
         return 0;
    }

     printf("\n -- Resultado da comparacao --\n");
     printf("\n Países comparados: %s X %s", pais_carta_1, pais_carta_2 );

    if (switch_comparacao == 1) {
        printf("\n Atributo usado na comparacao: População");
        printf("\n Carta 1: %lu - Carta 2: %lu", populacao_carta_1, populacao_carta_2);
        if(populacao_carta_1 == populacao_carta_2){
            printf("\n Resultado: Empate!");
        } else if( populacao_carta_1 > populacao_carta_2 ){
            printf("\n Carta 1 (%s) venceu", pais_carta_1);
        } else {
            printf("\n Carta 2 (%s) venceu", pais_carta_2);
        }
    } else if (switch_comparacao == 2) {
        printf("\n Atributo usado na comparacao: Área m²");
        printf("\n Carta 1: %2.f - Carta 2: %2.f", area_carta_1, area_carta_2);
        if(area_carta_1 == area_carta_2){
            printf("\n Resultado: Empate!");
        } else if( area_carta_1 > area_carta_2 ){
            printf("\n Carta 1 (%s) venceu", pais_carta_1);
        } else {
            printf("\n Carta 2 (%s) venceu", pais_carta_2);
        }
    } else if (switch_comparacao == 3) {
        printf("\n Atributo usado na comparacao: PIB");
        printf("\n Carta 1: %2.f - Carta 2: %2.f", pib_carta_1, pib_carta_2);
        if(pib_carta_1 == pib_carta_2){
            printf("\n Resultado: Empate!");
        } else if( pib_carta_1 > pib_carta_2 ){
            printf("\n Carta 1 (%s) venceu", pais_carta_1);
        } else {
            printf("\n Carta 2 (%s) venceu", pais_carta_2);
        }
    } else if (switch_comparacao == 4) {
        printf("\n Atributo usado na comparacao: Número de pontos turísticos");
        printf("\n Carta 1: %d - Carta 2: %d", pontos_turisticos_carta_1, pontos_turisticos_carta_2);
        if(pontos_turisticos_carta_1 == pontos_turisticos_carta_2){
            printf("\n Resultado: Empate!");
        } else if( pontos_turisticos_carta_1 > pontos_turisticos_carta_2 ){
            printf("\n Carta 1 (%s) venceu", pais_carta_1);
        } else {
            printf("\n Carta 2 (%s) venceu", pais_carta_2);
        }
    }  else if (switch_comparacao == 5) {
       printf("\n Atributo usado na comparacao: Densidade demográfica");
       printf("\n Carta 1: %2.f - Carta 2: %2.f", densidade_populacional_1, densidade_populacional_2);
       if(densidade_populacional_1 == densidade_populacional_2){
           printf("\n Resultado: Empate!");
       } else if( densidade_populacional_1 < densidade_populacional_2 ){
           printf("\n Carta 1 (%s) venceu", pais_carta_1);
       } else {
           printf("\n Carta 2 (%s) venceu", pais_carta_2);
       }
   }
    return 0;
}