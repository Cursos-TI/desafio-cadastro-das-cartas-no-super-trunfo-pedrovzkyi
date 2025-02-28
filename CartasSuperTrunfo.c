#include <stdio.h>
#include <string.h>

int main(){

        // Variavies das cartas.
    char codigo[10];
    char estado[50];
    char cidade[50];

    float area;
    float PIB;

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

    printf("<<CARTA 1>>\n");
    printf("Código da carta: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade),
    printf("Area total: %.2f km²\n", area);
    printf("PIB: %f \n", PIB);
    printf("População: %d\n", populacao);
    printf("Pontos turisticos: %d\n", turisticos);

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
    
    printf("\n");

    printf("<<CARTA 2>>\n");
    printf("Código da carta: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Area total: %.2f km²\n", area);
    printf("PIB: %f \n", PIB);
    printf("População: %d\n", populacao);
    printf("Pontos turisticos: %d\n", turisticos);

    return 0;
}
