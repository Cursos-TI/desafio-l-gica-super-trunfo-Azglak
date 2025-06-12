#include <stdio.h>

struct Cidade {
    int População;
    float Area;
    float PIB;
    int NPTuristicos;
    char Estado;
    char Nome[];
};

int main() {
    struct Cidade cidade1;
    struct Cidade cidade2;
    
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
    
    printf("%s é o lar de %d pessoas, tem %f de área, %f de PIB e possui %d pontos turísticos, além de possuir %f de densidade demográfica e %f de PIB per capta!\n", cidade1.Nome, cidade1.População, cidade1.Area, cidade1.PIB, cidade1.NPTuristicos, cidade1.População/cidade1.Area, cidade1.PIB/cidade1.População);
    
    printf("Já %s é populada por %d pessoas, tem %f de área, %f de PIB e possui %d pontos turísticos, além de possuir %f de densidade demográfica e %f de PIB per capta!\n\n",cidade2.Nome, cidade2.População, cidade2.Area, cidade2.PIB, cidade2.NPTuristicos, cidade2.População/cidade2.Area, cidade2.PIB/cidade2.População);
    
    if(cidade1.PIB/cidade1.População > cidade2.PIB/cidade2.População){
        printf("A cidade de %s tem o maior PIB per capta e, portanto, é a vencedora!", cidade1.Nome);
    } else {
        printf("A cidade de %s tem o maior PIB per capta e, portanto, é a vencedora!", cidade2.Nome);
    }

    return 0;
}
