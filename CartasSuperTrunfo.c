#include <stdio.h>

int main(){
printf("Desafio carta super trunfo!:\n");
printf("novo commit\n");

// informacoes das cartas super trunfo //


    int populacao1,populacao2;
    int pontoturistico1,pontoturistico2;
    char estado1 [50], estado2 [50];
    char cidade1 [50], cidade2 [50];
    char codigoA01 [60] ,codigoB01 [60];
    float area1,area2;
    float pib1,pib2;

    // infomação da carta A01 //

    printf("carta 1:\n");

    printf("digite o codigo da carta:\n");
    scanf("%s",&codigoA01);

    printf("digite o nome do estado:\n");
    scanf("%s",&estado1);

    printf("digite o nome da cidade:\n");
    scanf("%s",&cidade1);

    printf("digite o numero da populacao:\n");
    scanf("%d",&populacao1);

    printf("digite o numero de pontos turisticos:\n");
    scanf("%d",&pontoturistico1);

    printf("digite o pib:\n");
    scanf("%f",&pib1);

    printf("digite a area em km:\n");
    scanf("%f",&area1);


    // informacao da carta B01//

    printf("Carta 2:\n");

    printf("digite o codigo da carta:\n");
    scanf("%s",&codigoB01);

    printf("digite o nome do estado:\n");
    scanf("%s",&estado2);

    printf("digite o nome da cidade:\n");
    scanf("%s",&cidade2);

    printf("digite o numero da populacao:\n");
    scanf("%d",&populacao2);

    printf("digite o numero de pontos turisticos:\n");
    scanf("%d",&pontoturistico2);

    printf("digite o pib:\n");
    scanf("%f",&pib2);

    printf("digite a area em km:\n");
    scanf("%f",&area2);
    

        
   return 0;
}




