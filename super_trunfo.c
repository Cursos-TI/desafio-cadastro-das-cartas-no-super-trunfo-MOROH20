#include <stdio.h>

int main() {

  //carta 1
  char  carta_01_Estado;
  char  carta_01_Codigo[3];
  char  carta_01_Nome[50];
  int   carta_01_População;
  float carta_01_Area;
  float carta_01_PIB;
  int   carta_01_Numero_de_Pontos_Turisticos;

  //carta 2
  char  carta_02_Estado;
  char  carta_02_Codigo[3];
  char  carta_02_Nome[50];
  int   carta_02_População;
  float carta_02_Area;
  float carta_02_PIB;
  int   carta_02_Numero_de_Pontos_Turisticos;

  
  //inserindo dados da carta 1
  printf("DIGITE OS DADOS DA CARTA 01/n/n");
  printf("Digite o indetificador do estado (A-H):/n");
  scanf(&carta_01_Estado);
  printf("Digite o Código:/n");
  scanf(&carta_01_Codigo[3]);
  printf("Digite o Nome da Cidade:/n");
  scanf(&carta_01_Nome[50]);
  printf("Digite a População:/n");
  scanf(&carta_01_População);
  printf("Digite a Área:/n");
  scanf(&carta_01_Area);
  printf("Digite o PIB:/n");
  scanf(&carta_01_PIB);
  printf("Digite o Número de Pontos Turísticos:/n");
  scanf(&carta_01_Numero_de_Pontos_Turisticos);

  printf("/n/n");
  //inserindo dados da carta 2
  printf("DIGITE OS DADOS DA CARTA 02/n/n");
  printf("Digite o indetificador do estado (A-H):/n");
  scanf(&carta_02_Estado);
  printf("Digite o Código:/n");
  scanf(&carta_02_Codigo[3]);
  printf("Digite o Nome da Cidade:/n");
  scanf(&carta_02_Nome[50]);
  printf("Digite a População:/n");
  scanf(&carta_02_População);
  printf("Digite a Área:/n");
  scanf(&carta_02_Area);
  printf("Digite o PIB:/n");
  scanf(&carta_02_PIB);
  printf("Digite o Número de Pontos Turísticos:/n");
  scanf(&carta_02_Numero_de_Pontos_Turisticos);


  printf("Carta 1:/n");
  printf("Estado: %c/n",carta_01_Estado);
  printf("Código: %c/n",carta_01_Codigo);
  printf("Nome da Cidade: %c/n",carta_01_Nome);
  printf("População: %c/n",carta_01_População);
  printf("Área: %c/n",carta_02_Estado);
  printf("PIB: %c/n",carta_01_PIB);
  printf("Número de Pontos Turísticos: %c/n",carta_01_Numero_de_Pontos_Turisticos);
  
}
