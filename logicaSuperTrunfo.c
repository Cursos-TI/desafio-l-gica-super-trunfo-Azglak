#include <stdio.h>

//Criação de um Struct Cidade que permite que o sistema seja ampliado para além de duas cidades no futuro.

struct Cidade {
    int População;
    float Area;
    float PIB;
    int NPTuristicos;
    float PpC;
    float DP;
    char Estado;
    char Nome[];
};

//Criação de atributos de suporte para definir as varíaveis checadas e quais são vitoriosas.

int AtributoChecado1 = 0;
int AtributoChecado2 = 0;
int Resultado1 = 0;
int Resultado2 = 0;

int main() {
    struct Cidade cidade1;
    struct Cidade cidade2;

    //Inserção de dados

    printf("Olá, bem-vindo ao Super Trunfo Cidades!\nPor favor, insira os dados da primeira cidade.\n");
    printf("Nome:\n");
    scanf(" %s", &cidade1.Nome);
    getchar();
    printf("Estado:\n");
    scanf(" %c", &cidade1.Estado);
    printf("População:\n");
    scanf("%d", &cidade1.População);
    printf("Área:\n");
    scanf("%f", &cidade1.Area);
    printf("PIB:\n");
    scanf("%f", &cidade1.PIB);
    printf("Número de pontos turísticos:\n");
    scanf("%d", &cidade1.NPTuristicos);
    cidade1.DP = cidade1.Area / cidade1.População;
    cidade1.PpC = cidade1.PIB / cidade1.População;

    printf("Ótimo.\nAgora insira os da segunda cidade.\n");
    printf("Nome:\n");
    scanf("%s", &cidade2.Nome);
    getchar();
    printf("Estado:\n");
    scanf(" %c", &cidade2.Estado);
    printf("População:\n");
    scanf("%d", &cidade2.População);
    printf("Área:\n");
    scanf("%f", &cidade2.Area);
    printf("PIB:\n");
    scanf("%f", &cidade2.PIB);
    printf("Número de pontos turísticos:\n");
    scanf("%d", &cidade2.NPTuristicos);
    cidade2.DP = cidade2.Area / cidade2.População;
    cidade2.PpC = cidade2.PIB / cidade2.População;

    //Anúincio dos dados cadastrados.

    printf("%s é o lar de %d pessoas, tem %f de área, %f de PIB e possui %d pontos turísticos, além de possuir %f de densidade demográfica e %f de PIB per capta!\n", cidade1.Nome, cidade1.População, cidade1.Area, cidade1.PIB, cidade1.NPTuristicos, cidade1.População/cidade1.Area, cidade1.PIB/cidade1.População);

    printf("Já %s é populada por %d pessoas, tem %f de área, %f de PIB e possui %d pontos turísticos, além de possuir %f de densidade demográfica e %f de PIB per capta!\n\n",cidade2.Nome, cidade2.População, cidade2.Area, cidade2.PIB, cidade2.NPTuristicos, cidade2.População/cidade2.Area, cidade2.PIB/cidade2.População);

    //Define o atributo checado e pede que o usuário repita a entrada caso um valor inválido seja colocado, como, por exemplo, a escolha de dois valores iguais.
    
    while (AtributoChecado1 <= 0 || AtributoChecado1 > 6) {
           printf("Qual o primeiro atributo que será usado para a comparação?\n\n    1: População\n    2: Área\n    3: PIB\n    4: Número de Pontos Turísticos\n    5: PIB per Capta\n    6: Densidade Populacional\n\n");
           scanf("%d", &AtributoChecado1);
    }

    while (AtributoChecado2 <= 0 || AtributoChecado2 > 6 || AtributoChecado2 == AtributoChecado1) {
           printf("Qual o segundo atributo que será usado para a comparação? (Não pode ser o mesmo que o primeiro)\n\n    1: População\n    2: Área\n    3: PIB\n    4: Número de Pontos Turísticos\n    5: PIB per Capta\n    6: Densidade Populacional\n\n");
           scanf("%d", &AtributoChecado2);
    }


    //Verifica os atributos selecionados e adiciona 1 à variável do primeiro resultado caso a cidade 1 seja vitoriosa, subtrai 1 caso a cidade 2 seja vitoriosa, e mantém como 0 em caso de empate.
    //Depois disso, ela fez o mesmo para o segundo resultado.
    
    switch (AtributoChecado1) {
        case 1:
            printf("Comparando População:\n\n");
            (cidade1.População > cidade2.População) ? (Resultado1 = 1) : (Resultado1 = -1);
            (cidade1.População == cidade2.População) ? (Resultado1 = 0) : (0);
            break;

        case 2:
            printf("Comparando Área:\n\n");
            (cidade1.Area > cidade2.Area) ? (Resultado1 = 1) : (Resultado1 = -1);
            (cidade1.Area == cidade2.Area) ? (Resultado1 = 0) : (0);
            break;

        case 3:
            printf("Comparando PIB:\n\n");
            (cidade1.PIB > cidade2.PIB) ? (Resultado1 = 1) : (Resultado1 = -1);
            (cidade1.PIB == cidade2.PIB) ? (Resultado1 = 0) : (0);
            break;

        case 4:
            printf("Comparando Número de Pontos Turísticos:\n\n");
            (cidade1.NPTuristicos > cidade2.NPTuristicos) ? (Resultado1 = 1) : (Resultado1 = -1);
            (cidade1.NPTuristicos == cidade2.NPTuristicos) ? (Resultado1 = 0) : (0);
            break;

        case 5:
            printf("Comparando PIB per Capta:\n\n");
            (cidade1.PpC > cidade2.PpC) ? (Resultado1 = 1) : (Resultado1 = -1);
            (cidade1.PpC == cidade2.PpC) ? (Resultado1 = 0) : (0);
            break;

        case 6:
            printf("Comparando Densidade Populacional:\n\n");
            (cidade1.DP < cidade2.DP) ? (Resultado1 = 1) : (Resultado1 = -1);
            (cidade1.DP == cidade2.DP) ? (Resultado1 = 0) : (0);
            break;

        default:
            printf("Erro?");

        }

    switch (AtributoChecado2) {
        case 1:
            printf("Comparando População:\n\n");
            (cidade1.População > cidade2.População) ? (Resultado2 = 1) : (Resultado2 = -1);
            (cidade1.População == cidade2.População) ? (Resultado2 = 0) : (0);
            break;

        case 2:
            printf("Comparando Área:\n\n");
            (cidade1.Area > cidade2.Area) ? (Resultado2 = 1) : (Resultado2 = -1);
            (cidade1.Area == cidade2.Area) ? (Resultado2 = 0) : (0);
            break;

        case 3:
            printf("Comparando PIB:\n\n");
            (cidade1.PIB > cidade2.PIB) ? (Resultado2 = 1) : (Resultado2 = -1);
            (cidade1.PIB == cidade2.PIB) ? (Resultado2 = 0) : (0);
            break;

        case 4:
            printf("Comparando Número de Pontos Turísticos:\n\n");
            (cidade1.NPTuristicos > cidade2.NPTuristicos) ? (Resultado2 = 1) : (Resultado2 = -1);
            (cidade1.NPTuristicos == cidade2.NPTuristicos) ? (Resultado2 = 0) : (0);
            break;

        case 5:
            printf("Comparando PIB per Capta:\n\n");
            (cidade1.PpC > cidade2.PpC) ? (Resultado2 = 1) : (Resultado2 = -1);
            (cidade1.PpC == cidade2.PpC) ? (Resultado2 = 0) : (0);
            break;

        case 6:
            printf("Comparando Densidade Populacional:\n\n");
            (cidade1.DP < cidade2.DP) ? (Resultado2 = 1) : (Resultado2 = -1);
            (cidade1.DP == cidade2.DP) ? (Resultado2 = 0) : (0);
            break;

        default:
            printf("Erro?");
    }

    //Lógica final. Caso a cidade 1 ganhe duas vezes, ou ganhe uma vez e tenha um empate, o resultado das somas será positivo. Caso a cidade 2 ganhe duas vezes ou ganhe uma e empate outra, o resultado será negativo.
    //No caso de dois empates ou de uma vitória de cada, o resultado será 0.
    
    if (Resultado1 + Resultado2 > 0) {
        printf("%s é a vencedora!\n", cidade1.Nome);
    } else if (Resultado1 + Resultado2 < 0) {
        printf("%s é a vencedora!\n", cidade2.Nome);
    } else {
        printf("É um empate.\n");
    }

    printf("Obrigado por jogar e até mais.\n\n");

    return 0;
}
