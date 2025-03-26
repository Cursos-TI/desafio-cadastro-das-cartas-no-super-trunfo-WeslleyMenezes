#include <stdio.h>

int main (){

    printf("Carta 1\n");

    char estado1[12];
    char codigo1[25];
    char cidade1[25];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;
    float quociente = populacao1 / area1;
    float quociente2 = populacao1 / pib1;

    printf("Digite seu estado: \n");
    scanf("%s", &estado1);

    printf("Digite seu codigo: \n");
    scanf("%s", &codigo1);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a populaçao: \n");
    scanf("%d", &populacao1);

    printf("Digite a area: \n");
    scanf("%f", &area1);

    printf("Digite seu pib: \n");
    scanf("%f", &pib1);

    printf("Digite seus pontos turisticos: \n");
    scanf("%d", &pontosturisticos1);

    printf("Codigo do estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populaçao: %d\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("Pib: %.2f Bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    
    densidadepopulacional1 = (float)(populacao1 / area1);
    printf("A desinsidade populacional e: %.2f Hab/km²\n", densidadepopulacional1);

    pibpercapita1 = (float)(populacao1 / pib1);
    printf("O pib per capita e: %.2f Reais\n", pibpercapita1);


    //Carta de Numero 2

    

    printf("Carta 2\n");

    char estado2[12];
    char codigo2[25];
    char cidade2[25];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float quociente3 = populacao2 / area2;
    float quociente4 = populacao2 / pib2;

    printf("Digite seu estado: \n");
    scanf("%s", &estado2);

    printf("Digite seu codigo: \n");
    scanf("%s", &codigo2);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a populaçao: \n");
    scanf("%d", &populacao2);

    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite seu pib: \n");
    scanf("%f", &pib2);

    printf("Digite seus pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    printf("Codigo do estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populaçao: %d\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("Pib: %.2f Bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    
    densidadepopulacional2 = (float)(populacao2 / area2);
    printf("A desinsidade populacional e: %.2f Hab/km²\n", densidadepopulacional2);

    pibpercapita2 = (float)(populacao2 / pib2);
    printf("O pib per capita e: %.2f Reais\n", pibpercapita2);

    return 0;





}

