#include <stdio.h>

int main(){
    printf("Desafio Super Trunfo em C\n");

    /* ====================
    DECLARAÇÃO DE VARIÁVEIS
    =======================*/

    //CARTA 1
    char estado1;
    char codigo1 [4];
    char nomecidade1 [50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //CARTA 2
    char estado2;
    char codigo2;
    char nomecidade2;
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    /*=========================
    ENTRADA DE DADOS DA CARTA 1
    ===========================*/

    printf("==== Cadastro da Carta 1 ====\n");

    printf("Estado A: ");
    scanf("%c", &estado1);

    printf("Código da carta: A01");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: Fortaleza");
    scanf("%s", &nomecidade1);

    printf("População: 5000000000");
    scanf("%d", &populacao1);

    printf("Área (em KM²); 1250.23");
    scanf("%f", &area1);

    printf("PIB (em bilões de reais): 400.29");
    scanf("%f"), &pib1);

    printf("Número de Pontos Turísticos: 40");
    scanf("%d", &pontosturisticos1);

    /*=========================
    ENTRADA DE DADOS DA CARTA 2
    ===========================*/

    printf("==== Cadastro da Carta 2 ====\n");

    printf("Estado B: ");
    scanf("%c", &estado2);

    printf("Código da carta: B01");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: Curitiba");
    scanf("%s", &nomecidade2);

    printf("População: 5500000000");
    scanf("%d", &populacao2);

    printf("Área (em KM²); 1050.23");
    scanf("%f", &area2);

    printf("PIB (em bilões de reais): 430.10");
    scanf("%f"), &pib2);

    printf("Número de Pontos Turísticos: 35");
    scanf("%d", &pontosturisticos2);

    /*=========================
        EXIBIÇÃO DOS DADOS
    ===========================*/

    printf("\n\n====== CARTAS CADASTRADAS =====\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n, estado1");
    printf("Código da Carta: %s\n, codigo1");
    printf("Nome da Cidade: %s\n, nomedacidade1");
    printf("População: %d\n, populacao1");
    printf("Área: %f KM²\n, area1");
    printf("PIB: %f Bilhões de pessoas\n, pib1");
    printf("Números de Pontos Turísticos: %d\n, pontosturisticos1");

    printf("\nCarta 2:\n");
    printf("Estado: %c\n, estado2");
    printf("Código da Carta: %s\n, codigo2");
    printf("Nome da Cidade: %s\n, nomedacidade2");
    printf("População: %d\n, populacao2");
    printf("Área: %f KM²\n, area2");
    printf("PIB: %f Bilhões de pessoas\n, pib2");
    printf("Números de Pontos Turísticos: %d\n, pontosturisticos2");

    
    
    return 0;
}