#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
/*                  Jogo Super Trunfo de países.
Um sistema para cadastrar duas cartas com informações sobre as cidades.*/
    char estado1;
    char cod_carta1[3];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int ponto_turistico1;

    char estado2;
    char cod_carta2[3];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int ponto_turistico2;
    
    //Esse bloco abaixo lê as informações da primeira carta

    printf ("        Super trunfo de países\n");
    printf ("Digite as informações da primeira carta. \n");
    printf ("Digite o estado(OBS: Uma letra de 'A' a 'H'):");
    scanf (" %c", &estado1);
    printf ("Digite o codigo da carta(OBS: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):");
    scanf (" %s", cod_carta1);
    printf ("Digite o nome da cidade:");
    scanf ("%s", cidade1);
    printf ("Digite a quantidade de habitantes:");
    scanf ("%d", &populacao1);
    printf ("Digite a area(em km²):");
    scanf ("%f", &area1);
    printf ("Digite o PIB:");
    scanf ("%f", &pib1);
    printf ("Digite a quantidade de pontos turisticos:");
    scanf ("%d", &ponto_turistico1);

    //esse bloco abaixo imprime as informações da primeira carta

    printf ("\nCarta 1:\n");
    printf ("Estado:%c\n", estado1);
    printf ("Código:%S\n", cod_carta1);
    printf ("Nome da cidade: %s\n", cidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.0f\n", area1);
    printf ("PIB: %.0f\n", pib1);
    printf ("Número de pontos turísticos: %d", ponto_turistico1);

    //Esse bloco abaixo lê as informações da segunda carta

    printf ("\nDigite as informações da segunda carta. \n");
    printf ("Digite o estado(OBS: Uma letra de 'A' a 'H'):");
    scanf (" %c", &estado2);
    printf ("Digite o codigo da carta(OBS: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):");
    scanf (" %s", cod_carta2);
    printf ("Digite o nome da cidade:");
    scanf ("%s", cidade2);
    printf ("Digite a quantidade de habitantes:");
    scanf ("%d", &populacao2);
    printf ("Digite a area(em km²):");
    scanf ("%f", &area2);
    printf ("Digite o PIB:");
    scanf ("%f", &pib2);
    printf ("Digite a quantidade de pontos turisticos:");
    scanf ("%d", &ponto_turistico2);

    //esse bloco abaixo imprime as informações da segunda carta

    printf ("\nCarta 2:\n");
    printf ("Estado:%c\n", estado2);
    printf ("Código:%S\n", cod_carta2);
    printf ("Nome da cidade: %s\n", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.0f\n", area2);
    printf ("PIB: %.0f\n", pib2);
    printf ("Número de pontos turísticos: %d", ponto_turistico2); 
    
    return 0;
}
