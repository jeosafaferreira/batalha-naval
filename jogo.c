//Data: 09/08/2019
//Autor: Jeosafá Ferreira

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {

  char T1[10][10];
  char T2[10][10];

  //populando matrizes
  for(int lin=1; lin<11; lin++){
    for(int col=1; col<11; col++){
      T1[lin][col] = ' ';
    }
  }

  //ESCONDENDO OS PRECIOSOS
  srand(time(NULL));
  //barco 1: (Tipo T)
  int lin_ini = 2 + rand() % 7;
  int col_ini = 2 + rand() % 7;
  printf("linha %d; coluna %d.\n\n", lin_ini, col_ini);
  T1[lin_ini][col_ini] = '#';
  T1[lin_ini+1][col_ini] = '#';
  T1[lin_ini+2][col_ini] = '#';
  T1[lin_ini][col_ini-1] = '#';
  T1[lin_ini][col_ini+1] = '#';

  //barco 2:
  lin_ini = 1 + rand() % 9;
  col_ini = 1 + rand() % 9;
  printf("linha %d; coluna %d.\n\n", lin_ini, col_ini);
  T1[lin_ini+1][col_ini] = '#';
  T1[lin_ini+2][col_ini] = '#';
  T1[lin_ini+3][col_ini] = '#';
  T1[lin_ini+4][col_ini] = '#';

  //exibindo tabuleiro 1
  printf("      A   B   C   D   E   F   G   H   I   J\n");
  printf("    -----------------------------------------\n");
  for(int lin=1; lin<11;lin++){
    printf(" %2d |",lin);
    for(int col=1; col<11;col++){
       printf(" %c |", T1[lin][col]);
    }
      printf("\n    -----------------------------------------\n");
  }
  return 0;

  int col_usu;
  int lin_usu;
  printf("informe uma linha: ");
  scanf("%d", &lin_usu);
  printf("informe uma coluna: ");
  scanf("%d", &col_usu);
}
