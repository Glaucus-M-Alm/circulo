#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "circulo.h"

int main() {
  // Cria dois círculos
  Circulo *circulo1 = circ_cria(2.0, 2.0, 4.0);
  Circulo *circulo2 = circ_cria(2.0, 2.0, 5.0);

  // Calcula a área do primeiro círculo
  float area_c1 = circ_area(circulo1);
    // Calcula a área do segundo círculo
  float area_c2 = circ_area(circulo2);

  // Verifica se os círculos são concêntricos
  int concentricos = circ_concentricos(circulo1, circulo2);

  // Obtem o raio do primeiro círculo
  float raio_c1 = circ_raio(circulo1);

  // Obtem o raio do segundo círculo
  float raio_c2 = circ_raio(circulo2);

  // Imprime os resultados
  printf("Área do primeiro círculo: %.2f\n", area_c1);
  printf("Área do segundo círculo: %.2f\n", area_c2);
  printf("Círculos concêntricos? %s\n", concentricos ? "Sim" : "Não");//o ? é como se fizéssemos um if else
//com o "verdadeiro ou falso" que a função retorna, com o "Sim" acontecendo no verdadeiro e o "Não" no falso
  printf("Raio do primeiro círculo: %.2f\n", raio_c1);
  printf("Raio do segundo círculo: %.2f\n", raio_c2);

  // Liberar a memória dos círculos
  circ_libera(circulo1);
  circ_libera(circulo2);

  return 0;
}