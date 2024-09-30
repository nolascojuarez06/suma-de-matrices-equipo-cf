#include <stdio.h>
#define TAM 1000

int main(){
  int a[TAM][TAM], b[TAM][TAM], c[TAM][TAM];
  int f1, c1, f2, c2;
  int i, j;

  do{
    printf("Ingresa las dimensiones de la primer matriz\n");
    scanf("%d %d", &f1, &c1);
    printf("Ingresa las dimensiones de la segunda matriz\n");
    scanf("%d %d", &c2, &c2);
  }while(f1!=f2 || c1!=c2 || f1 <=0 || c1<=0);

//Leer los elementos de la primera matriz
  for(i =0; i <f1; i++){
    for(j=0; j <c1 ; j++){
      printf("Ingresa los elementos de la primera matriz:\n");
      scanf("%d", &a[i][j]);
    }
  }

  //Leer los elementos de la segunda matriz
  for(i =0; i <f2; i++){
    for(j=0; j <c2 ; j++){
      printf("Ingresa los elementos de la segunda matriz:\n");
      scanf("%d", &b[i][j]);
    }
  }

 // Sumar las matrices
  for (int i = 0; i < f1; i++) {
    for (int j = 0; j < c1; j++) {
      c[i][j] = a[i][j] + b[i][j];
    }
  }

  // Imprimir la matriz resultante
  printf("La matriz resultante de la suma es:\n");
  for (int i = 0; i < f1; i++) {
    for (int j = 0; j < c1; j++) {
      printf("%d ", c[i][j]);
    }
    printf("\n");
  } 

  return 0;
}
