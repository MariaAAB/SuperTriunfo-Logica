#include <stdio.h>
#include <string.h>

int main()
{
    // Variáveis para a Carta 1
    char estado[2], codigoCartas[4], cidade[50];
    unsigned long int populacao;
    int pontosTuristicos;
    float area, pib;
    float pibCapita, densidadePopulacional;
    float superPoder;

    printf("Digite as informações da Carta 1\n");
    printf("Estado: \n");
    scanf(" %s", estado);
    printf("Código: \n");
    scanf(" %s", codigoCartas);
    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", cidade);

    printf("População: \n");
    scanf("%d", &populacao);
    printf("Área: Km2 \n");
    scanf("%f", &area);
    printf("Pib: \n");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos);

    densidadePopulacional = populacao / area;
    pibCapita = pib / populacao;

    superPoder = ((float)populacao +
                  area + pib + (float)pontosTuristicos +
                  pibCapita) +
                 (1 / densidadePopulacional);

    printf("\n");

    printf("Carta: 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s%s\n", estado, codigoCartas);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("Pib: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional : %f hab/km² \n", densidadePopulacional);
    printf("PIB Capita : %f reais \n", pibCapita);

    // Variáveis para a Carta 2
    char estado2[2], codigoCartas2[4], cidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2;
    float pibCapita2, densidadePopulacional2;
    float superPoder2;

    printf("\nDigite as informações da Carta 2\n");
    printf("Estado: \n");
    scanf(" %s", estado2);
    printf("Código: \n");
    scanf(" %s", codigoCartas2);
    printf("Nome da Cidade: \n");

    getchar();
    fgets(cidade2, 50, stdin);

    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Área: Km2 \n");
    scanf("%f", &area2);
    printf("Pib: \n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibCapita2 = pib2 / populacao2;

    superPoder2 = ((float)populacao2 +
                   area2 + pib2 + (float)pontosTuristicos2 +
                   pibCapita2) +
                  (1 / densidadePopulacional2);

    printf("\n");

    printf("Carta: 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigoCartas2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Pib: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %f reais \n\n", pibCapita2);

    // nivel aventureiro
    int opcaoMenu;
    printf("Escolha um atributo para comparação das cartas: \n");

    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de pontos turísticos \n");
    printf("5. Densidade demográfica \n");

    scanf("%d", &opcaoMenu);
    printf("\n");
    printf("Comparação das Cartas:\n\n");
    printf("Nome Pais 1 : %s \n", cidade);
    printf("Nome Pais 2 : %s \n", cidade2);
    switch (opcaoMenu)
    {
    case 1:
        printf("Atributo Utilizado: População \n");
        printf("População carta 1: %d \n", populacao);
        printf("População carta 2: %d \n", populacao2);
        if (populacao > populacao2)
        {
            printf("Carta 2 venceu \n");
            
        }
        else if(populacao2 > populacao){
            printf("Carta 2 venceu \n");
        }
        else
        {
            printf("Deu empate! \n");
        }

        break;
    case 2:
        printf("Atributo Utilizado: Área \n");
        printf("Área carta 1 : %f \n", area);
        printf("Área carta 2 : %f \n", area2);
        if (area > area2)
        {
            printf("Carta 1 Venceu \n");
        }
        else if(area > area2){
            printf("Carta 2 venceu \n");
        }
        else
        {
            printf("Deu empate! \n");
        }
        break;

    case 3:
        printf("Atributo Utilizado: PIB \n");
        printf("PIB carta 1 : %f \n", pib);
        printf("PIB carta 2 : %f \n", pib2);
        if (pib > pib2)
        {
            printf("Carta 1 Venceu \n");
        }
        else if(pib > pib2){
            printf("Carta 2 venceu \n");
        }
        else
        {
            printf("Deu empate! \n");
        }

        break;
    case 4:
        printf("Atributo Utilizado: Número de Pontos Turisticos \n");
        printf(" Número de Pontos Turisticos carta 1 : %d \n", pontosTuristicos);
        printf(" Número de Pontos Turisticos carta 2 : %d \n", pontosTuristicos2);
        if (pontosTuristicos > pontosTuristicos2)
        {
            printf("Carta 1 Venceu \n");
        }
        else if(pontosTuristicos > pontosTuristicos2){
            printf("Carta 2 venceu \n");
        }
        else
        {
            printf("Deu empate! \n");
        }

        break;
    case 5:
        printf("Atributo Utilizado: Densidade Demográfrica \n");
        printf(" Densidade Demográfica carta 1 : %d \n", densidadePopulacional);
        printf(" Densidade Demográfica carta 2 : %d \n", densidadePopulacional2);
        if (densidadePopulacional < densidadePopulacional2)
        {
            printf("Carta 1 Venceu \n");
        }
        else if(densidadePopulacional > densidadePopulacional2){
            printf("Carta 2 venceu \n");
        }
        else
        {
            printf("Deu Empate \n!");
        }

    default:
        break;
    }

    return 0;
}
