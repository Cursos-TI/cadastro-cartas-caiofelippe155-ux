// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

#include <stdio.h>

int main () {

    // Área para definição das variáveis para armazenar as propriedades das cidades

    unsigned int populacao1, populacao2; 
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, PIB1, PIB2, PPC1, PPC2, DENSIDADE1, DENSIDADE2, super_poder1, super_poder2; 
    char estado1[20], estado2[80], codigo1[20], codigo2[80], nome1[80], nome2[80];

    // Área para entrada de dados

    //Primeiro serão feitas as perguntas sobre a primeira cidade    

    printf ("Qual o estado da primeira carta (uma letra)?\n");
    scanf ("%s", &estado1);   

    printf ("Qual o código da primeira carta (ex: A01, B03)?\n");
    scanf ("%s", &codigo1);    

    printf ("Qual o nome da cidade da primeira carta?\n");
    scanf ("%s", &nome1);   
    
    printf ("Qual o número de habitantes da cidade da primeira carta?\n");
    scanf ("%u", &populacao1);      

    printf ("Qual a área da cidade da primeira carta (em km²)?\n");
    scanf ("%f", &area1);

    printf ("Qual o produto interno bruto da cidade da primeira carta?\n");
    scanf ("%f", &PIB1);    

    printf ("Qual a quantidade de pontos turísticos da cidade da primeira carta?\n");
    scanf("%d", &pontos_turisticos1);   
    
    //Agora começam as perguntas sobre a segunda cidade
    
    printf ("Qual o estado da segunda carta (uma letra)?\n");
    scanf ("%s", &estado2);   

    printf ("Qual o código da segunda carta (ex: A01, B03)?\n");
    scanf ("%s", &codigo2);    

    printf ("Qual o nome da cidade da segunda carta?\n");
    scanf ("%s", &nome2);   
    
    printf ("Qual o número de habitantes da cidade da segunda carta?\n");
    scanf ("%u", &populacao2);    

    printf ("Qual a área da cidade da segunda carta (em km²)?\n");
    scanf ("%f", &area2);

    printf ("Qual o produto interno bruto da cidade da segunda carta?\n");
    scanf ("%f", &PIB2);    

    printf ("Qual a quantidade de pontos turísticos da cidade da segunda carta?\n");
    scanf("%d", &pontos_turisticos2);   
    
    // Área para cálculos dos atributos PPC e Densidade

    PPC1 = PIB1 / (float) populacao1;
    PPC2 = PIB2 / (float) populacao2;
    DENSIDADE1 = (float) populacao1 / area1;
    DENSIDADE2 = (float) populacao2 / area2;

    // Area para cálculos do super poder

    super_poder1 = populacao1 + area1 + PIB1 + pontos_turisticos1 + PPC1 + (1/DENSIDADE1);
    super_poder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + PPC2 + (1/DENSIDADE2);

    // Área para exibição dos dados da cidade

    printf ("Carta 1\n");
    printf ("Estado: %s\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome: %s\n", nome1);   
    printf ("População: %u\n", populacao1);
    printf ("Área: %.2f\n", area1);
    printf ("PIB: %.2f\n", PIB1); 
    printf ("Pontos turísticos: %d\n", pontos_turisticos1);
    printf ("PIB per capita: %.2f\n", PPC1);
    printf ("Densidade: %.2f\n", DENSIDADE1);
    printf ("Super poder: %.2f\n", super_poder1);

    printf ("\nCarta 2\n");
    printf ("Estado: %s\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome: %s\n", nome2);   
    printf ("População: %u\n", populacao2);
    printf ("Área: %.2f\n", area2);
    printf ("PIB: %.2f\n", PIB2); 
    printf ("PIB per capita: %.2f\n", PPC2);
    printf ("Densidade: %.2f\n", DENSIDADE2);
    printf ("Super poder: %.2f\n", super_poder2);

    
    //Comparação das cartas atributo por atributo

    populacao1 > populacao2 ? printf("\nPopulação: Carta 1 venceu\n") : printf("\nPopulação: Carta 2 venceu\n");
    area1 > area2 ? printf("Área: Carta 1 venceu\n") : printf("Área: Carta 2 venceu\n");
    PIB1 > PIB2 ? printf("PIB: Carta 1 venceu\n") : printf("PIB: Carta 2 venceu\n");
    pontos_turisticos1 > pontos_turisticos2 ? printf("Pontos turísticos: Carta 1 venceu\n") : printf("Pontos turísticos: Carta 2 venceu\n");
    PPC1 > PPC2 ? printf("PIB per capita: Carta 1 venceu\n") : printf("PIB per capita: Carta 2 venceu\n");
    (1/DENSIDADE1) > (1/DENSIDADE2) ? printf("Densidade: Carta 1 venceu\n") : printf("Densidade: Carta 2 venceu\n");
    super_poder1 > super_poder2 ? printf("Super poder: Carta 1 venceu\n") : printf("Super poder: Carta 2 venceu\n");

    return 0;
    
}
