#include <stdio.h>

int main () {
    char estado[10], estador[10];
    char l1, cidade[20], cidade1[20], cd_carta[5], cd_carta1[5];
    int populacao, populacao1, p_turistico1, p_turistico;
    float area, area1, pib, pib1;

    // Cadastro da carta 1
    printf("Carta 1\n");

    // Inserir e guardar a letra do estado
    printf("Digite o estado: ");
    scanf("%s", estado);
    
    // Inserir e guardar o codigo da carta
    printf("Digite o codigo da carta: ");
    scanf("%s", cd_carta);

    // Inserir e guardar o nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    // Inserir e guardar o numero de habitantes
    printf("Digite o numero de habitantes: ");
    scanf("%d", &populacao);

    // Inserir e guardar a area da cidade
    printf("Digite a Area(em Km²) da cidade: ");
    scanf("%f", &area);

    // Inserir e guardar o pib
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    // Inserir e guardar o numero de pontos turisticos
    printf("Digite quantos pontos turisticos existem nessa cidade: ");
    scanf("%d", &p_turistico);

    printf("Carta 1\n");
    printf("Estado: %s\nCodigo: %s \n", estado, cd_carta);
    printf("Nome da cidade: %s\nPopulação: %d\nÁrea: %.2fKm²\nPIB: %.2f Bilhoes de reais\nNumero de pontos turisticos: %d", cidade, populacao, area, pib, p_turistico);
    
    printf("\n");

    // Cadastro da carta 2
    printf("Carta 2\n");
    // Inserir e guardar a letra do estado
    printf("Digite o estado: ");
    scanf("%s", estador);
    
    // Inserir e guardar o codigo da carta
    printf("Digite o codigo da carta: ");
    scanf("%s", cd_carta1);
    
    // Inserir e guardar o nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    
    // Inserir e guardar o numero de habitantes
    printf("Digite o numero de habitantes: ");
    scanf("%d", &populacao1);
    
    // Inserir e guardar a area da cidade
    printf("Digite a Area(em Km²) da cidade: ");
    scanf("%f", &area1);
    
    // Inserir e guardar o pib
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    
    // Inserir e guardar o numero de pontos turisticos
    printf("Digite quantos pontos turisticos existem nessa cidade: ");
    scanf("%d", &p_turistico1);

    printf("Carta 2\n");
    printf("Estado: %s\nCodigo: %s \n", estador, cd_carta1);
    printf("Nome da cidade: %s\nPopulação: %d\nÁrea: %.2fKm²\nPIB: %.2f Bilhoes de reais\nNumero de pontos turisticos: %d", cidade1, populacao1, area1, pib1, p_turistico1);

    
    return 0;
}