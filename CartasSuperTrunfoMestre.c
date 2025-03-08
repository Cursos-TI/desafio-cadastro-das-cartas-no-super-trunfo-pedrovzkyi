#include <stdio.h>
#include <string.h>

int main(){

        // Variavies das cartas.
    char codigo[10];
    char estado[50];
    char cidade[50];

    float area;
    float PIB;
    float densidade;
    float pib_per_capita;

    unsigned int populacao;
    int turisticos;

    float superpoder;

    char codigo2[10];
    char estado2[50];
    char cidade2[50];

    float area2;
    float PIB2;
    float densidade2;
    float pib_per_capita2;

    unsigned int populacao2;
    int turisticos2;

    float superpoder2;

    int resultadopopulacao;
    int resultadoarea;
    int resultadoPIB;
    int resultadoturisticos;
    int resultadopib_per_capita;
    int resultadodensidade;
    int resultadopoder;

    printf("Digite o estado:\n");
    fgets(estado, 50, stdin);
    estado[strcspn(estado, "\n")] = 0;

    printf("Digite o código:\n");
    scanf("%9s", codigo);
    getchar();

    printf("Digite a cidade\n");
    fgets(cidade , 50, stdin); // Permite nomes compostos
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Area total:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite a população:\n");
    scanf("%u", &populacao);

    printf("Quantidade de pontos turistiscos:\n");
    scanf("%d", &turisticos);

    densidade = (float)populacao / area;

    pib_per_capita = (float)PIB / populacao;

    superpoder = (float)populacao + area + PIB + pib_per_capita + densidade;

    printf("<<CARTA 1>>\n");
    printf("Código da carta: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade),
    printf("Area total: %.2f km²\n", area);
    printf("PIB: %.2f de reais\n", PIB);
    printf("População: %u de habitantes\n", populacao);
    printf("Pontos turisticos: %d\n", turisticos);
    printf("Densidade populacional; %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f de reais\n", pib_per_capita);
    printf("O super poder da carta é %.2f",superpoder);

    printf("\n");
    getchar();


    printf("Agora insira os dados para a segunda carta:\n");
    
    printf("Digite o estado:\n");
    fgets( estado2, 50, stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Digite o código:\n");
    scanf("%9s", codigo2);
    getchar();

    printf("Digite a cidade\n");
    fgets(cidade2 , 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Area total:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);

    printf("Digite a população:\n");
    scanf("%u", &populacao2);

    printf("Quantidade de pontos turistiscos:\n");
    scanf("%d", &turisticos2);

    densidade2 = (float)populacao2 / area2;

    pib_per_capita2 = (float)PIB2 / populacao2; // o float faz o resultado aparecer corretamente

    superpoder2 = (float)populacao2 + area2 + PIB2 + pib_per_capita2 + densidade2;
    
    printf("\n");

    printf("<<CARTA 2>>\n");
    printf("Código da carta: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Area total: %.2f km²\n", area2);
    printf("PIB: %.2f de reais\n", PIB2);
    printf("População: %u de habitantes\n", populacao2);
    printf("Pontos turisticos: %d\n", turisticos2);
    printf("Densidade populacional; %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f de reais\n", pib_per_capita2);
    printf("O super poder da carta é %.2f\n", superpoder2);

    printf("\n");

    resultadopopulacao = populacao > populacao2;
    resultadoarea = area > area2;
    resultadoPIB = PIB > PIB2;
    resultadoturisticos = turisticos > turisticos2;
    resultadodensidade = densidade < densidade2;
    resultadopib_per_capita =  pib_per_capita > pib_per_capita2;
    resultadopoder = superpoder > superpoder2;



    printf("Comparação das cartas\n");
    printf("População: Carta 1 venceu? %d\n", resultadopopulacao);
    printf("Area: Carta 1 venceu? %d\n", resultadoarea);
    printf("PIB: Carta 1 venceu? %d\n", resultadoPIB);
    printf("Pontos Turísticos: Carta 1 venceu? %d\n", resultadoturisticos);
    printf("Densidade populacional: Carta 1 venceu? %d\n", resultadodensidade);
    printf("PIB per Capita: Carta 1 venceu? %d\n", resultadopib_per_capita);
    printf("Superpoder: Carta 1 venceu? %d\n", resultadopoder);


    return 0;
}
