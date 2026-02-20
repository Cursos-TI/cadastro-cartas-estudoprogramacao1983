#include <stdio.h>

int main(){
    printf("Desafio Super Trunfo em C\n");
    
    char estado;
    char codigo [3];
    char cidade [20];
    int populacao;
    float area;
    float pib;
    int pturistico;//quantidade de pontos turisticos.

    printf("Digite a sua carta: ");
    scanf("%c", &estado);

    printf("Digite o Código da Cidade: ");
    scanf("%s", &codigo);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &cidade);

    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao);

    printf("Digite a Área em KM² da Cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB em Bilões de Reais da Cidade: ");
    scanf("%f", &pib);

    printf("Digite a Quantidade de Pontos Turísticos da Cidade; ");
    scanf("%d", pturistico);

    
    return 0;
}