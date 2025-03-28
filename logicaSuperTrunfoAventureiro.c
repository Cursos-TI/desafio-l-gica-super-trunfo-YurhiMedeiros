#include <stdio.h>

int main(){

    // Declaração das variáveis para armazenar os dados
    int populacao1, populacao2; // População de cada cidade
    int pontoTuristico1, pontoTuristico2; // Número de pontos turísticos
    int comparar; //Carta de comparação

    char tecla_de_inicio = 'A'; // Tecla de inicialização
    char estado1, estado2; // Letra representando o estado
    char codigoCidade1[5], codigoCidade2[5]; // Código da cidade (Ex: A01, S02)
    char nome_cidade1[50], nome_cidade2[50]; // Nome da cidade

    float areaKm1, areaKm2; // Área em km²
    float pib1, pib2; // PIB da cidade
    float densidadePopulacional1, densidadePopulacional2; //densidade da população 
    float pibCapita1, pibCapita2; //Calcular o PIB per Capita

    // Introdução ao jogo
    printf("***Seja bem-vindo ao Super Trunfo!***\n"); 
    printf("\nO jogo funcionará da seguinte maneira: você deve me fornecer informações de duas cartas sobre países de sua escolha, e quem tiver as cartas mais fortes, vence. Vamos começar!\n");
    printf("Para iniciar digite 'A':\n");     
    scanf(" %c", &tecla_de_inicio); // Espaço antes de %c evita problemas com buffer de entrada

    printf("\nEssa será as informações da sua carta nº1 \n"); // Exibe o número da carta

    // Dados da carta nº1
    printf("Digite a letra do estado da carta nº1:\n");
    scanf(" %c", &estado1); // Armazena a letra do estado

    printf("Digite o código de sua carta substituindo o 'A' pela letra do seu estado (A01, S01, T01 etc...):\n");
    scanf("%s", codigoCidade1); // Código da cidade (sem o & para strings)

    printf("Agora digite o nome da cidade:\n");
    scanf("%s", nome_cidade1); // Nome da cidade 

    printf("Qual a população?:\n");
    scanf("%d", &populacao1); // População da cidade

    printf("Qual o tamanho da área desse estado (em Km²)?:\n");
    scanf("%f", &areaKm1); // Área em Km²

    printf("Qual o PIB da cidade?:\n");
    scanf("%f", &pib1); // PIB da cidade

    printf("E quais são os números de pontos turísticos que possui?:\n");
    scanf("%d", &pontoTuristico1); // Número de pontos turísticos
    
    // *** Dados da carta nº2 ***
    printf("Agora vamos para a carta  nº2 \n"); //Começando coleta de dados da segunda carta

    printf("Digite a letra do estado da carta nº2:\n");
    scanf(" %c", &estado2); // Armazena a letra do estado

    printf("Digite o código de sua carta substituindo o 'A' pela letra do seu estado (A02, S02, T02 etc...):\n");
    scanf("%s", codigoCidade2); // Código da cidade (sem o & para strings)

    printf("Agora digite o nome da cidade:\n");
    scanf("%s", nome_cidade2); // Nome da cidade

    printf("Qual a população?:\n");
    scanf("%d", &populacao2); // População da cidade

    printf("Qual o tamanho da área desse estado (em Km²)?:\n");
    scanf("%f", &areaKm2); // Área em Km²

    printf("Qual o PIB da cidade?:\n");
    scanf("%f", &pib2); // PIB da cidade

    printf("E quais são os números de pontos turísticos que possui?:\n");
    scanf("%d", &pontoTuristico2); // Número de pontos turísticos

    printf("\n### Qual atributo deseja comparar? ###\n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos turísticos \n");
    printf("Escolha um número: ");
    scanf("%d", &comparar);
    
    densidadePopulacional1 = populacao1 / areaKm1; //Calculo para descobrir a densidade Populacional da carta N1
    densidadePopulacional2 = populacao2 / areaKm2; //Calculo para descobrir a densidade Populacional da carta N2

    pibCapita1 = pib1 / (float)populacao1; //Calculo para descobrir o PIB per capita carta N1
    pibCapita2 = pib2 / (float)populacao2; //Calculo para descobrir o PIB per capita carta N2

    printf("\n-------------------------\n");

    // Estrutura switch para comparação
    switch (comparar)
    {
    case 1: //População
        printf("Comparando população...\n");
        printf("%s, %d habitantes\n", nome_cidade1, populacao1);
        printf("%s, %d habitantes\n", nome_cidade2, populacao2);

        if(populacao1 > populacao2){
            printf("A cidade %s venceu!\n", nome_cidade1);
        } else if (populacao2 > populacao1)
        {
            printf("A cidade %s venceu!\n", nome_cidade2);
        }
        else {
            printf("### Empate! ### \n");
        }      
        break;
    
    case 2: // Área
        printf("Comparando área...\n");
        printf("%s, %.2f km²\n", nome_cidade1, areaKm1);
        printf("%s, %.2f km²\n", nome_cidade2, areaKm2);

    if (areaKm1 > areaKm2)
    {
        printf("A cidade %s venceu!\n", nome_cidade1);
    } else if (areaKm2 > areaKm1){
        printf("A cidade %s venceu!\n", nome_cidade2);
    } 
    else {
        printf("### Empate! ### \n");
    }      
    break;

    case 3: //PIB
        printf("Comparando PIB...\n");
        printf("%s,  R$ %.2f\n", nome_cidade1, pib1);
        printf("%s,  R$ %.2f\n", nome_cidade2, pib2);

        if (pib1 > pib2)
        {
            printf("A cidade %s venceu!\n", nome_cidade1);
        } else if (pib2 > pib1){
            printf("A cidade %s venceu!", nome_cidade2);
        } 
        else {
            printf("### Empate! ### \n");
        }      
        break;
        
    case 4: //Pontos turísticos
        printf("Comparando Pontos turísticos...\n");
        printf("%s, %d pontos turísticos\n", nome_cidade1, pontoTuristico1);
        printf("%s, %d pontos turísticos\n", nome_cidade2, pontoTuristico2);

        if (pontoTuristico1 > pontoTuristico2)
        {
            printf("A cidade %s venceu!\n", nome_cidade1);
        } else if (pontoTuristico2 > pontoTuristico1)
        {
            printf("A cidade %s venceu!\n", nome_cidade2);
        } 
        else {
            printf("### Empate! ### \n");
        }      
        break;    

    default:
        printf("Número inválido. Digite outro."); //Caso o usuário digite algum número além do que declarado
        break;
    }
    printf("\n-------------------------\n");
    return 0;
}