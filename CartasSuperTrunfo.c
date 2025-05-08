#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
  // Sugestão: Defina variáveis separadas para cada atributo da cidade.
  // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //carta 1
    char  carta_01_Estado;
    char  carta_01_Codigo[4];
    char  carta_01_Nome[50];
    int   carta_01_Populacao;
    float carta_01_Area;
    float carta_01_PIB;
    int   carta_01_Numero_de_Pontos_Turisticos;
    float carta_01_Densidade;
    float carta_01_Renda_PerCapita;
    float carta_01_SuperPower;
  
    //carta 2
    char  carta_02_Estado;
    char  carta_02_Codigo[4];
    char  carta_02_Nome[50];
    int   carta_02_Populacao;
    float carta_02_Area;
    float carta_02_PIB;
    int   carta_02_Numero_de_Pontos_Turisticos;
    float carta_02_Densidade;
    float carta_02_Renda_PerCapita;
    float carta_02_SuperPower;

    int cartaVencedora;
    int Resultado;
    
  // Cadastro das Cartas:
  // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
  // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //inserindo dados da carta 1
    printf("====COLETANDO DADOS DAS CARTAS====\n\n");
    printf("DIGITE OS DADOS DA CARTA 01 \n");
    printf("Digite o indetificador do estado (A-H):");
    scanf("%c",&carta_01_Estado);
    getchar();
    printf("Digite o Código:");
    scanf("%s",carta_01_Codigo);
    getchar();
    printf("Digite o Nome da Cidade:");
    scanf("%[^\n]",carta_01_Nome);
    getchar();
    printf("Digite a População:");
    scanf("%i",&carta_01_Populacao);
    printf("Digite a Área:");
    scanf("%f",&carta_01_Area);
    printf("Digite o PIB:");
    scanf("%f",&carta_01_PIB);
    printf("Digite o Número de Pontos Turísticos:");
    scanf("%i",&carta_01_Numero_de_Pontos_Turisticos);
  
    printf("\n\n");
    
    //inserindo dados da carta 2
    printf("DIGITE OS DADOS DA CARTA 02\n\n");
    printf("Digite o indetificador do estado (A-H):");
    scanf("%c",&carta_02_Estado);
    getchar();
    printf("Digite o Código:");
    scanf("%s",carta_02_Codigo);
    getchar();
    printf("Digite o Nome da Cidade:");
    scanf("%[^\n]",carta_02_Nome);
    getchar();
    printf("Digite a População:");
    scanf("%i",&carta_02_Populacao);
    printf("Digite a Área:");
    scanf("%f",&carta_02_Area);
    printf("Digite o PIB:");
    scanf("%f",&carta_02_PIB);
    printf("Digite o Número de Pontos Turísticos:");
    scanf("%i",&carta_02_Numero_de_Pontos_Turisticos);


    //calculando deside e renda
    carta_01_Densidade = (float)carta_01_Populacao/carta_01_Area;
    carta_01_Renda_PerCapita = (carta_01_PIB*1000000000)/carta_01_Populacao;

    carta_02_Densidade = (float)carta_02_Populacao/carta_02_Area;
    carta_02_Renda_PerCapita = (carta_02_PIB*1000000000)/carta_02_Populacao;

    //calculando power
    carta_01_SuperPower = 
    (float) carta_01_Populacao+
    (float) carta_01_Area+
    (float) carta_01_PIB+
    (float) carta_01_Numero_de_Pontos_Turisticos+
    (float) (1/carta_01_Densidade)+
    (float) carta_01_Renda_PerCapita;

    carta_02_SuperPower = 
    (float) carta_02_Populacao+
    (float) carta_02_Area+
    (float) carta_02_PIB+
    (float) carta_02_Numero_de_Pontos_Turisticos+
    (float) (1/carta_02_Densidade)+
    (float) carta_02_Renda_PerCapita;
    
  // Exibição dos Dados das Cartas:
  // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
  // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n\n");
    printf("=== EXIBINDO DADOS DAS CARTAS ===\n\n");
  
    printf("Carta 1\n");
    printf("========\n");
    printf("Estado: %c\n",carta_01_Estado);
    printf("Código: %s\n",carta_01_Codigo);
    printf("Nome da Cidade: %s\n",carta_01_Nome);
    printf("População: %i\n",carta_01_Populacao);
    printf("Área: %.2f km2\n",carta_01_Area);
    printf("PIB: %.2f bilhões de reais\n",carta_01_PIB);
    printf("Número de Pontos Turísticos: %i\n",carta_01_Numero_de_Pontos_Turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n",carta_01_Densidade);
    printf("PIB per Capita: %.2f reais\n",carta_01_Renda_PerCapita);
    printf("Super Poder: %.2f reais\n",carta_01_SuperPower);
    
    printf("\n\n");  
    printf("Carta 2\n");
    printf("========\n");
    printf("Estado: %c\n",carta_02_Estado);
    printf("Código: %s\n",carta_02_Codigo);
    printf("Nome da Cidade: %s\n",carta_02_Nome);
    printf("População: %i\n",carta_02_Populacao);
    printf("Área: %.2f km2\n",carta_02_Area);
    printf("PIB: %.2f bilhões de reais\n",carta_02_PIB);
    printf("Número de Pontos Turísticos: %i\n",carta_02_Numero_de_Pontos_Turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n",carta_02_Densidade);
    printf("PIB per Capita: %.2f reais\n",carta_02_Renda_PerCapita);
    printf("Super Poder: %.2f reais\n",carta_02_SuperPower);

    //comparacao das cartas
    //usado apenas os operadores do conteudo de aula 
    //para definir qual nr da carta foi usado a logica carta2 > carta1 + 1; se carta 2 maior q carta 1 resultado 1 = 1 = 2 (carta 2 vence)); se carta 2 menor q carta 1 resultado 0+1 = 1 (carta 1 vence);
    //para o resultado da operacao mantive carta1 > carta2 conforme logica sugerido na demonstracao da saida na atividade (População: Carta 1 venceu (1)/Densidade Populacional: Carta 2 venceu (0))
    printf("\n\n");  
    printf("Comparação de Cartas:\n");
    cartaVencedora = (carta_02_Populacao>carta_01_Populacao)+1;
    Resultado = carta_01_Populacao>carta_02_Populacao;
    printf("População: Carta %i venceu (%i)\n",cartaVencedora,Resultado);
    cartaVencedora = (carta_02_Area>carta_01_Area)+1;
    Resultado = carta_01_Area>carta_02_Area;
    printf("Área: Carta %i venceu (%i)\n",cartaVencedora,Resultado);
    cartaVencedora = (carta_02_PIB>carta_01_PIB)+1;
    Resultado = carta_01_PIB>carta_02_PIB;
    printf("PIB: Carta %i venceu (%i)\n",cartaVencedora,Resultado);
    cartaVencedora = (carta_02_Numero_de_Pontos_Turisticos>carta_01_Numero_de_Pontos_Turisticos)+1;
    Resultado = carta_01_Numero_de_Pontos_Turisticos>carta_02_Numero_de_Pontos_Turisticos;
    printf("Pontos Turísticos: Carta %i venceu (%i)\n",cartaVencedora,Resultado);
    cartaVencedora = (carta_02_Densidade>carta_01_Densidade)+1;
    Resultado = carta_01_Densidade>carta_02_Densidade;
    printf("Densidade Populacional: Carta %i venceu (%i)\n",cartaVencedora,Resultado);
    cartaVencedora = (carta_02_Renda_PerCapita>carta_01_Renda_PerCapita)+1;
    Resultado = carta_01_Renda_PerCapita>carta_02_Renda_PerCapita;
    printf("PIB per Capita: Carta %i venceu (%i)\n",cartaVencedora,Resultado);
    cartaVencedora = (carta_02_SuperPower>carta_01_SuperPower)+1;
    Resultado = carta_01_SuperPower>carta_02_SuperPower;
    printf("Super Poder: Carta %i venceu (%i)\n",cartaVencedora,Resultado);

  return 0;

}
