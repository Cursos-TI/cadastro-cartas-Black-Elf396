#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  
  char estado[2], codigoDaCarta[10], nomeDaCidade[50];
  float area, pib;
  int numerosdepontosturisticos, populacao;// Área para definição das variáveis para armazenar as propriedades das cidades
  
  scanf("%s", &estado);
  scanf("%d", &codigoDaCarta);
  scanf("%s", &nomeDaCidade);
  scanf("%d", &populacao);
  scanf("%f", &area);
  scanf("%f", &pib);
  scanf("%d", &numerosdepontosturisticos);// Área para entrada de dados

  printf("Estado: A \n");
  printf("Código da carta: A01 \n");
  printf("Nome da cidade: Rio de Janeiro \n");
  printf("populacao: 6.000.000.00 \n");
  printf("Area: 1.260km² \n");
  printf("PIB: 1.000.000.000.000.00 \n");
  printf("Numero de pontos turisticos: 39 \n");// Área para exibição dos dados da cidade

}

  int main(){

    //Carta 2

  char estado[2], codigoDaCarta[10], nomeDaCidade[50];
  float area, pib;
  int numerosDePontosTuristicos, populacao;// Área para definição das variáveis para armazenar as propriedades das cidades
 
  scanf("%s", &estado);
  scanf("%d", &codigoDaCarta);
  scanf("%s", &nomeDaCidade);
  scanf("%d", &populacao);
  scanf("%f", &area);
  scanf("%f", &pib);
  scanf("%d", &numerosDePontosTuristicos);// Área para entrada de dados

  printf("Estado: B \n");
  printf("Código da carta: B01 \n");
  printf("Nome da cidade: Sao paulo \n");
  printf("populacao: 11.000.000.00 \n");
  printf("Area: 1.523km² \n");
  printf("PIB: 3.000.000.000.000.00 \n");
  printf("Numero de pontos turisticos: 37 \n");// Área para exibição dos dados da cidade

return 0;
} 
