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

    int populacao;
    int turisticos;

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
    scanf("%d", &populacao);

    printf("Quantidade de pontos turistiscos:\n");
    scanf("%d", &turisticos);

    densidade = (float)populacao / area;

    pib_per_capita = (float)PIB / populacao;

    printf("<<CARTA 1>>\n");
    printf("Código da carta: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade),
    printf("Area total: %.2f km²\n", area);
    printf("PIB: %.2f de reais\n", PIB);
    printf("População: %d de habitantes\n", populacao);
    printf("Pontos turisticos: %d\n", turisticos);
    printf("Densidade populacional; %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f de reais\n", pib_per_capita);

    printf("\n");
    getchar();


    printf("Agora insira os dados para a segunda carta:\n");
    
    printf("Digite o estado:\n");
    fgets( estado, 50, stdin);
    estado[strcspn(estado, "\n")] = 0;

    printf("Digite o código:\n");
    scanf("%9s", codigo);
    getchar();

    printf("Digite a cidade\n");
    fgets(cidade , 50, stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Area total:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite a população:\n");
    scanf("%d", &populacao);

    printf("Quantidade de pontos turistiscos:\n");
    scanf("%d", &turisticos);

    densidade = (float)populacao / area;

    pib_per_capita = (float)PIB / populacao; // o float faz o resultado aparecer corretamente
    
    printf("\n");

    printf("<<CARTA 2>>\n");
    printf("Código da carta: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Area total: %.2f km²\n", area);
    printf("PIB: %.2f de reais\n", PIB);
    printf("População: %d de habitantes\n", populacao);
    printf("Pontos turisticos: %d\n", turisticos);
    printf("Densidade populacional; %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f de reais\n", pib_per_capita);

    return 0;
}