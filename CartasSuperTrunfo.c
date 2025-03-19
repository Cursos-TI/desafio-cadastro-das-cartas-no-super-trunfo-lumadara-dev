#include <stdio.h>

int main()
{
    // VARIÁVEIS
    char estado1, estado2;
    char codigo1[15], codigo2[15];
    char cidade1[15], cidade2[15];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float perCapita1, perCapita2;
    int turismo1, turismo2;
    float superPoder1, superPoder2;

    // JOGO SUPER TRUNFO - INICIO
    printf("JOGO SUPER TRUNFO\n");
    printf("PREENCHA OS CAMPOS ABAIXO COM OS DADOS DA CARTA 1:\n\n");

    // CARTA 1 - ENTRADA DE DADOS
    printf("Digite uma letra de A a H (representando um dos oito estados):\n");
    scanf(" %c", &estado1);

    printf("\nDigite a letra do estado seguida de um numero de 01 a 04 (exemplo: A01):\n");
    scanf(" %s", &codigo1);

    printf("\nDigite o nome da cidade:\n");
    scanf(" %s", &cidade1);

    printf("\nDigite o numero de habitantes da cidade:\n");
    scanf(" %d", &populacao1);

    printf("\nDigite a area da cidade em quilometros quadrados:\n");
    scanf(" %f", &area1);

    printf("\nDigite o Produto Interno Bruto da cidade:\n");
    scanf(" %f", &pib1);

    printf("\nDigite a quantidade de pontos turisticos na cidade:\n");
    scanf(" %d", &turismo1);

    //  CARTA 1 - PROCESSAMENTO DE DADOS
    densidade1 = populacao1 / area1;
    perCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + perCapita1 + densidade1 + turismo1;

    // CARTA 1 - SAIDA DE DADOS
    printf("\n-------------------------------------");
    printf("\nCARTA 1:");
    printf("\n\nEstado: %c", estado1);
    printf("\nCodigo: %s", codigo1);
    printf("\nCidade: %s", cidade1);
    printf("\nPopulacao: %d habitantes", populacao1);
    printf("\nArea: %.2f km²", area1);
    printf("\nPIB: $ %.2f dolares", pib1);
    printf("\nPIB per capita: $ %.2f per capita", perCapita1);
    printf("\nDensidade populacional: %.2f hab/km²", densidade1);
    printf("\nPontos turisticos: %d", turismo1);
    printf("\nSuper Poder: %.2f\n", superPoder1);
    printf("\n-------------------------------------\n");

    // CARTA 2 - ENTRADA DE DADOS
    printf("PREENCHA OS CAMPOS ABAIXO COM OS DADOS DA CARTA 2:\n");
    printf("\nDigite uma letra de A a H (representando um dos oito estados):\n");
    scanf(" %c", &estado2);

    printf("\nDigite a letra do estado seguida de um numero de 01 a 04 (exemplo: B02):\n");
    scanf(" %s", &codigo2);

    printf("\nDigite o nome da cidade:\n");
    scanf(" %s", &cidade2);

    printf("\nDigite o numero de habitantes da cidade:\n");
    scanf(" %d", &populacao2);

    printf("\nDigite a area da cidade em quilometros quadrados:\n");
    scanf(" %f", &area2);

    printf("\nDigite o Produto Interno Bruto da cidade:\n");
    scanf(" %f", &pib2);

    printf("\nDigite a quantidade de pontos turisticos na cidade:\n");
    scanf(" %d", &turismo2);

    //  CARTA 2 - PROCESSAMENTO DE DADOS
    densidade2 = populacao2 / area2;
    perCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + perCapita2 + densidade2 + turismo2;

    // CARTA 2 - SAIDA DE DADOS
    printf("\n-------------------------------------");
    printf("\nCARTA 2:");
    printf("\n\nEstado: %c", estado2);
    printf("\nCodigo: %s", codigo2);
    printf("\nCidade: %s", cidade2);
    printf("\nPopulacao: %d habitantes", populacao2);
    printf("\nArea: %.2f km²", area2);
    printf("\nPIB: $ %.2f dolares", pib2);
    printf("\nPIB per capita: %.2f per capita", perCapita2);
    printf("\nDensidade populacional: %.2f hab/km²", densidade2);
    printf("\nPontos turisticos: %d", turismo2);
    printf("\nSuper poder: %.2f\n", superPoder2);

    printf("\ndigite SIM para ver o resultado...\n");
    scanf(" %s");

    // COMPARAÇÃO DAS CARTAS
    printf("\n-------------------------------------\n");
    printf("COMPARAÇÃO DAS CARTAS\n\n");
    populacao1 > populacao2 ? printf("POPULAÇÃO: Carta 1 venceu\n") : printf("POPULAÇÃO: Carta 2 venceu\n");
    area1 > area2 ? printf("AREA: Carta 1 venceu\n") : printf("AREA: Carta 2 venceu\n");
    pib1 > pib2 ? printf("PIB: Carta 1 venceu\n") : printf("PIB: Carta 2 venceu\n");
    perCapita1 > perCapita2 ? printf("PIB PER CAPITA: Carta 1 venceu\n") : printf("PIB PER CAPITA: Carta 2 venceu\n");
    densidade1 < densidade2 ? printf("DENSIDADE POPULACIONAL: Carta 1 venceu\n") : printf("DENSIDADE POPULACIONAL: Carta 2 venceu\n");
    turismo1 > turismo2 ? printf("PONTOS TURISTICOS: Carta 1 venceu\n") : printf("PONTOS TURISTICOS: Carta 2 venceu\n");
    superPoder1 > superPoder2 ? printf("SUPER PODER: Carta 1 venceu\n") : printf("SUPER PODER: Carta 2 venceu\n");
    printf("\n-------------------------------------\n");

    printf("FIM DO JOGO!\n");

    return 0;
}