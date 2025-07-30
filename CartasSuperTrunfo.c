#include <stdio.h>



int main() {
   
    char estado[2];
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pturismo;

    printf("Digite uma letra de A a Z \n");
    scanf("%s", estado);

    printf("Digite 01 a 04: \n");
    scanf("%s", &codigo);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade);

    printf("População total: \n");
    scanf("%d", &populacao);

    printf("Digite a área total: \n");
    scanf("%f", &area);

    printf("Pib per capta: \n");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: \n");
    scanf("%u", &pturismo);


    printf("Estado digitado: %s \n", estado);
    printf("Código digitado: %s%s \n",estado, codigo);
    printf("Cidade:%s \n", cidade);
    printf("População total: %d \n", populacao);
    printf("Área total: %f \n", area);
    printf("Pib total: %f \n", pib);
    printf("Número total turistas: %u \n", pturismo);
 
   char estado2[2];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pturismo2;

    printf("Digite uma letra de A a Z \n");
    scanf("%s", estado2);

    printf("Digite 01 a 04: \n");
    scanf("%s", &codigo2);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade2);

    printf("População total: \n");
    scanf("%d", &populacao2);

    printf("Digite a área total: \n");
    scanf("%f", &area2);

    printf("Pib per capta: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%u", &pturismo2);


    printf("Estado digitado: %s \n", estado2);
    printf("Código digitado: %s%s \n",estado2, codigo2);
    printf("Cidade:%s \n", cidade2);
    printf("População total: %d \n", populacao2);
    printf("Área total: %f \n", area2);
    printf("Pib total: %f \n", pib2);
    printf("Número total turistas: %u \n", pturismo2);
    

    return 0;

}
