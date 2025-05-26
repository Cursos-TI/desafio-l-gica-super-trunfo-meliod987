#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    //carta 1
    char estado1[50];
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float PIB1;
    int pontos1;

    //carta 2
    char estado2[50];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int pontos2;
    
    //Cadastro das cartas 1
    printf("Digite o Estado: \n");
    scanf("%s", estado1);

    printf("Digite o código: \n");
    scanf("%s", codigo1);

    printf("Digite a Cidade: \n");
    scanf("%s", cidade1);
    
    printf("Digite o número da população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite a pontuação: \n");
    scanf("%d", &pontos1);



    //Cadastro das cartas 2
    printf("Digite o Estado: \n");
    scanf("%s", estado2);

    printf("Digite o código: \n");
    scanf("%s", codigo2);

    printf("Digite a Cidade: \n");
    scanf("%s", cidade2);
    
    printf("Digite o número da população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite a pontuação: \n");
    scanf("%d", &pontos2);
    
    //Execultar os Dados
    printf("\n==== Carta 1 ====\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %f\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("Pontuação: %d\n", pontos1);

    printf("\n==== Carta 2 ====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Pontuação: %d\n", pontos2);

    //comparação dos atribultos das cartas
    printf("\n====RESULTADO====\n");
    if(populacao1 > populacao2){
        printf("POPULAÇÃO: Carta 2 venceu! \n");
    } else{
        printf("POPULAÇÃO: carta 1 venceu! \n");
    }
    if(area1 > area2){
        printf("Área em km²: Carta 2 venceu! \n");
    }else{
        printf("Área em km²: Carta 1 venceu! \n");
    }
    if(PIB1 > PIB2){
        printf("PIB: Carta 2 venceu! \n");
    }else{
        printf("PIB: Carta 1 venceu! \n");
    }
    if(pontos2 > pontos1){
        printf("Pontuação: Carta 2 venceu! \n");
    }else{
        printf("Pontuação: Carta 1 venceu! \n");
    }

    return 0;
}
