#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "circulo.h"
typedef struct Circulo {
  float x; // Coordenada X do centro
  float y; // Coordenada Y do centro
  float r; // Raio do círculo
} Circulo;

/* Cria um circulo com centro (x,y) e raio r */ 
Circulo *circ_cria(float x, float y, float r){
    Circulo *circulo =malloc(sizeof(Circulo));
    if(circulo==NULL){//verifica se foi criado o circulo
        printf("falha ao alocar \n");
        exit(1);
    }
    circulo->x=x;//associa o x dado ao x do circulo
    circulo->y=y;//associa o y dado ao y do circulo
    circulo->r=r;//associa o r dado ao raio do circulo
    return circulo;
}

/* Libera a memoria de um Circulo */ 
void circ_libera(Circulo *circulo){
    if(circulo!=NULL){
        free(circulo);
    }
} 

/* Calcula a area de um circulo */ 
float circ_area(Circulo *circulo){
    return M_PI*pow(circulo->r,2);
}

/* Verifica se dois circulos tem o mesmo centro */ 
int circ_concentricos(Circulo *c1, Circulo *c2){
    return(c1->x==c2->x && c1->y==c2->y);
}

/* Obtem o raio de um circulo */ 
float circ_raio(Circulo *circulo){
    return circulo->r;
}