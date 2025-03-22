#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
      
          float populacao;
          int turisticos;
          int opcao;
      
          float superpoder;
      
          char codigo2[10];
          char estado2[50];
          char cidade2[50];
      
          float area2;
          float PIB2;
          float densidade2;
          float pib_per_capita2;
      
          float populacao2;
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
          scanf("%f", &populacao);
      
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
          printf("População: %.2f de habitantes\n", populacao);
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
          scanf("%f", &populacao2);
      
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
          printf("População: %2.f de habitantes\n", populacao2);
          printf("Pontos turisticos: %d\n", turisticos2);
          printf("Densidade populacional; %.2f hab/km²\n", densidade2);
          printf("PIB per Capita: %.2f de reais\n", pib_per_capita2);
          printf("O super poder da carta é %.2f\n", superpoder2);
      
          printf("\n");

          printf("**** Hora de comparar as cartas ****\n");
          printf("1. População\n");
          printf("2. Area\n");
          printf("3. PIB\n");
          printf("4. Densidade\n");
          printf("5. Superpoder\n");
          printf("Selecione um atributo de acordo com o número indicado.\n");
          scanf("%d", &opcao);

    switch (opcao){
    case 1:
        if (populacao > populacao2){
        printf("População - A carta 1 %s, venceu pelo total de %.2f habitantes!\n", cidade, populacao);
         }   else if(populacao < populacao2){
        printf("População - A carta 2 %s, venceu pelo total de %.2f habitantes!\n", cidade2, populacao2);
         }   else{
        printf("Tivemos um empate!\n");
         }   break;

    case 2:
        if(area > area2){
        printf("Area - A carta 1 %s venceu pela área total de %.2f km²!\n", cidade, area);    
         }   else if(area < area2){
        printf("Area - A carta 2 %s venceu pela área total de %.2f km²!\n", cidade2, area2); 
         }   else{
        printf("Tivemos um empate!\n");
         }   break;

    case 3:
        if(PIB > PIB2){
        printf("PIB - A carta 1 %s venceu pelo total de R$ %.2f!\n", cidade, PIB);    
         }   else if(PIB < PIB2){
        printf("PIB - A carta 2 %s venceu pelo total de R$ %.2f!\n", cidade2, PIB2);
         }   else{
        printf("Tivemos um empate!\n");
         }   break;

    case 4:
        if(densidade < densidade2){
        printf("Densidade - A carta 1 %s venceu pela sua densidade total de %.2f\n", cidade, densidade);    
         }   else if(densidade > densidade2){
        printf("Densidade - A carta 2 %s venceu pela sua densidade total de %.2f\n", cidade2, densidade2); 
         }   else{
        printf("Tivemos um empate!\n");
         }   break;

    case 5:
         if(superpoder > superpoder2){
         printf("Superpoder - A carta 1 %s venceu pelo seu poder total de %2.f pontos!\n", cidade, superpoder);    
        }    else if(superpoder < superpoder2){
         printf("Superpoder - A carta 2 %s venceu pelo seu poder total de %2.f pontos!\n", cidade2, superpoder2);  
        }    else{
         printf("Tivemos um empate!\n");
        }    break;
    }
        return 0;
    }