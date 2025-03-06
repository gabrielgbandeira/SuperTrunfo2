#include <stdio.h>
#include <string.h>

int main() {
    int PopulacaoCarta1, PopulacaoCarta2, NumerosTuristicos1, NumerosTuristicos2;
    char Estado1[2], Estado2[2], CodigoDaCarta1[10], CodigoDaCarta2[10], NomeDaCidade1[50], NomeDaCidade2[50];
    float Area1, Area2, PIB1, PIB2, PIBperCapita1, PIBperCapita2, DensidadePopulacional1, DensidadePopulacional2, SuperPoder1, SuperPoder2;

    printf("*** Super Trunfo em C: Fundamentos e Técnicas Avançadas ***\n\n");

    // Cadastro da Carta 1
    printf("Vamos Começar a Cadastrar as Informações da Carta 1\n\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf("%1s", Estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04: ");
    scanf("%9s", CodigoDaCarta1);

    printf("Digite o Nome da Cidade: ");
    getchar(); // Limpa buffer antes de fgets()
    fgets(NomeDaCidade1, sizeof(NomeDaCidade1), stdin);
    NomeDaCidade1[strcspn(NomeDaCidade1, "\n")] = 0; // Remove o '\n'

    printf("Digite a População da Cidade: ");
    scanf("%d", &PopulacaoCarta1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &Area1);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &NumerosTuristicos1);

    DensidadePopulacional1 = (float)PopulacaoCarta1 / Area1;
    PIBperCapita1 = (float)(PIB1 / PopulacaoCarta1) * 1000000000;
    SuperPoder1 = PopulacaoCarta1 + Area1 + PIB1 + NumerosTuristicos1 + (1 / DensidadePopulacional1) + PIBperCapita1;

    printf("\n");

    // Cadastro da Carta 2
    printf("Vamos Começar a Cadastrar as Informações da Carta 2\n\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf("%1s", Estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04: ");
    scanf("%9s", CodigoDaCarta2);

    printf("Digite o Nome da Cidade: ");
    getchar(); // Limpa buffer antes de fgets()
    fgets(NomeDaCidade2, sizeof(NomeDaCidade2), stdin);
    NomeDaCidade2[strcspn(NomeDaCidade2, "\n")] = 0; // Remove o '\n'

    printf("Digite a População da Cidade: ");
    scanf("%d", &PopulacaoCarta2);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &Area2);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &NumerosTuristicos2);

    DensidadePopulacional2 = (float)PopulacaoCarta2 / Area2;
    PIBperCapita2 = (float)(PIB2 / PopulacaoCarta2) * 1000000000;
    SuperPoder2 = PopulacaoCarta2 + Area2 + PIB2 + NumerosTuristicos2 + (1 / DensidadePopulacional2) + PIBperCapita2;

    printf("\n");

    // Exibição dos Dados
    printf("====================================\n");
    printf("            CARTA 1\n");
    printf("====================================\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", CodigoDaCarta1);
    printf("Nome da Cidade: %s\n", NomeDaCidade1);
    printf("População: %d\n", PopulacaoCarta1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", NumerosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita1);
    printf("Super Poder: %.2f", SuperPoder1);

    printf("\n");

    printf("====================================\n");
    printf("            CARTA 2\n");
    printf("====================================\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", CodigoDaCarta2);
    printf("Nome da Cidade: %s\n", NomeDaCidade2);
    printf("População: %d\n", PopulacaoCarta2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumerosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
    printf("Super Poder: %.2f", SuperPoder2);

    
    printf("====================================\n");
    printf("  Comparação de Cartas: População.   \n");
    printf("====================================\n");

    printf("\n");

    printf("Carta 1 - %s: %d\n", NomeDaCidade1, PopulacaoCarta1);
    printf("Carta 1 - %s: %d\n",NomeDaCidade2, PopulacaoCarta2);

    printf("\n");

    if (PopulacaoCarta1 > PopulacaoCarta2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade1);
    }else{
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade2);
    }

    printf("\n");

    printf("====================================\n");
    printf("    Comparação de Cartas: Área.   \n");
    printf("====================================\n");

    printf("\n");

    printf("Carta 1 - %s: %.2f\n", NomeDaCidade1, Area1);
    printf("Carta 1 - %s: %.2f\n",NomeDaCidade2, Area2);

    printf("\n");

    if (Area1 > Area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade1);
    }else{
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade2);
    }
    
    printf("\n");

    printf("====================================\n");
    printf("      Comparação de Cartas: PIB.   \n");
    printf("====================================\n");

    printf("\n");

    printf("Carta 1 - %s: %.2f\n", NomeDaCidade1, PIB1);
    printf("Carta 1 - %s: %.2f\n",NomeDaCidade2, PIB2);

    printf("\n");

    if (PIB1 > PIB2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade1);
    }else{
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade2);
    }

    printf("\n");

    printf("===========================================================\n");
    printf("     Comparação de Cartas: Número de pontos turísticos.   \n");
    printf("===========================================================\n");

    printf("\n");

    printf("Carta 1 - %s: %d\n", NomeDaCidade1, NumerosTuristicos1);
    printf("Carta 1 - %s: %d\n",NomeDaCidade2, NumerosTuristicos2);

    printf("\n");

    if (NumerosTuristicos1 > NumerosTuristicos2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade1);
    }else{
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade2);
    }

    printf("\n");

    printf("===========================================================\n");
    printf("  Comparação de Cartas: Densidade Populacional.   \n");
    printf("===========================================================\n");

    printf("\n");

    printf("Carta 1 - %s: %.2f\n", NomeDaCidade1, DensidadePopulacional1);
    printf("Carta 1 - %s: %.2f\n",NomeDaCidade2, DensidadePopulacional2);

    printf("\n");

    if (DensidadePopulacional1 < DensidadePopulacional2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade1);
    }else{
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade2);
    }

    printf("\n");

    printf("===========================================================\n");
    printf("          Comparação de Cartas: PIB Per Capita.   \n");
    printf("===========================================================\n");

    printf("\n");

    printf("Carta 1 - %s: %.2f\n", NomeDaCidade1, PIBperCapita1);
    printf("Carta 1 - %s: %.2f\n",NomeDaCidade2, PIB2);

    printf("\n");

    if (PIBperCapita1 > PIBperCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade1);
    }else{
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade2);
    }

    printf("\n");

    printf("===========================================================\n");
    printf("         Comparação de Cartas: Super Poder.  \n");
    printf("===========================================================\n");

    printf("\n");

    printf("Carta 1 - %s: %.2f\n", NomeDaCidade1, SuperPoder1);
    printf("Carta 1 - %s: %.2f\n",NomeDaCidade2, SuperPoder2);

    printf("\n");

    if (SuperPoder1 > SuperPoder2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade1);
    }else{
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade2);
    }

    return 0;
}
