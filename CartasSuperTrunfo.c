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
 
   
    

    return 0;

}
