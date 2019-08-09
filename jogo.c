//Data: 09/08/2019
//Autor: Jeosafá Ferreira

#include <stdio.h>

int main(void) {

  char T1[10][10];
  char T2[10][10];

  //populando matrizes
  for(int lin=0; lin<10; lin++){
    for(int col=0; col<10; col++){
      T1[lin][col] = 'D';
    }
  }

  printf("      A   B   C   D   E   F   G   H   I   J\n");
  printf("    -----------------------------------------\n");
  for(int lin=0; lin<10;lin++){
    printf(" %2d |",lin);
    for(int col=0; col<10;col++){
       printf(" %c |", T1[lin][col]);
    }
      printf("\n    -----------------------------------------\n");
  }
  return 0;
}
