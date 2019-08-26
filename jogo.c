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
      T2[lin][col] = ' ';
    }
  }

  //ESCONDENDO OS PRECIOSOS (TABULEIRO 1)
  srand(time(NULL));
  //BARCO 1: (Tipo T)
  int lin_ini = 2 + rand() % 7;
  int col_ini = 2 + rand() % 7;
  T1[lin_ini][col_ini] = 'A';
  T1[lin_ini+1][col_ini] = 'A';
  T1[lin_ini+2][col_ini] = 'A';
  T1[lin_ini][col_ini-1] = 'A';
  T1[lin_ini][col_ini+1] = 'A';

  //BARCO 2:
  lin_ini = 1 + rand() % 9;
  col_ini = 1 + rand() % 9;
  //VERIFICA SE JÁ TEM BARCO NO LOCAL
  while(T1[lin_ini][col_ini] != ' ' || T1[lin_ini+1][col_ini] != ' ' || T1[lin_ini+2][col_ini] != ' ' || T1[lin_ini+3][col_ini] != ' '){
    lin_ini = 1 + rand() % 9;
    col_ini = 1 + rand() % 9;
  }
  T1[lin_ini][col_ini] = 'B';
  T1[lin_ini+1][col_ini] = 'B';
  T1[lin_ini+2][col_ini] = 'B';
  T1[lin_ini+3][col_ini] = 'B';

  //BARCO 3:
  lin_ini = 1 + rand() % 9;
  col_ini = 1 + rand() % 9;
  //verificando
  while(T1[lin_ini][col_ini] != ' ' || T1[lin_ini+1][col_ini] != ' ' || T1[lin_ini+2][col_ini] != ' '){
    lin_ini = 1 + rand() % 9;
    col_ini = 1 + rand() % 9;
  }
  T1[lin_ini][col_ini] = 'C';
  T1[lin_ini+1][col_ini] = 'C';
  T1[lin_ini+2][col_ini] = 'C';

  //BARCO 4:
  lin_ini = 1 + rand() % 9;
  col_ini = 1 + rand() % 9;
  //verificando
  while(T1[lin_ini][col_ini] != ' ' || T1[lin_ini+1][col_ini] != ' '){
    lin_ini = 1 + rand() % 9;
    col_ini = 1 + rand() % 9;
  }
  T1[lin_ini][col_ini] = 'D';
  T1[lin_ini+1][col_ini] = 'D';
    
  //BARCO 5:
  lin_ini = 1 + rand() % 9;
  col_ini = 1 + rand() % 9;
  //verificando
  while(T1[lin_ini][col_ini] != ' ' || T1[lin_ini+1][col_ini] != ' '){
    lin_ini = 1 + rand() % 9;
    col_ini = 1 + rand() % 9;
  }
  T1[lin_ini][col_ini] = 'E';
  T1[lin_ini+1][col_ini] = 'E';

  //BARCO 6:
  lin_ini = 1 + rand() % 9;
  col_ini = 1 + rand() % 9;
  while(T1[lin_ini][col_ini] != ' '){
    lin_ini = 1 + rand() % 9;
    col_ini = 1 + rand() % 9;
  }
  T1[lin_ini][col_ini] = 'F';
  
  //BARCO 7:
  lin_ini = 1 + rand() % 9;
  col_ini = 1 + rand() % 9;
  //verificando
  while(T1[lin_ini][col_ini] != ' '){
    lin_ini = 1 + rand() % 9;
    col_ini = 1 + rand() % 9;
  }
  T1[lin_ini][col_ini] = 'G';

  //BARCO 8:
  lin_ini = 1 + rand() % 9;
  col_ini = 1 + rand() % 9;
  //verificando
  while(T1[lin_ini][col_ini] != ' '){
    lin_ini = 1 + rand() % 9;
    col_ini = 1 + rand() % 9;
  }
  T1[lin_ini][col_ini] = 'H';

  //ESCONDENDO OS PRECIOSOS (TABULEIRO 2)
  //BARCO 1: (Tipo T)
  lin_ini = 2 + rand() % 7;
  col_ini = 2 + rand() % 7;
  T2[lin_ini][col_ini] = 'A';
  T2[lin_ini+1][col_ini] = 'A';
  T2[lin_ini+2][col_ini] = 'A';
  T2[lin_ini][col_ini-1] = 'A';
  T2[lin_ini][col_ini+1] = 'A';

  //BARCO 2:
  lin_ini = 1 + rand() % 9;
  col_ini = 1 + rand() % 9;
  //VERIFICA SE JÁ TEM BARCO NO LOCAL
  while(T2[lin_ini][col_ini] != ' ' || T2[lin_ini+1][col_ini] != ' ' || T2[lin_ini+2][col_ini] != ' ' || T2[lin_ini+3][col_ini] != ' '){
    lin_ini = 1 + rand() % 9;
    col_ini = 1 + rand() % 9;
  }
  T2[lin_ini][col_ini] = 'B';
  T2[lin_ini+1][col_ini] = 'B';
  T2[lin_ini+2][col_ini] = 'B';
  T2[lin_ini+3][col_ini] = 'B';

  //BARCO 3:
  lin_ini = 1 + rand() % 9;
  col_ini = 1 + rand() % 9;
  //verificando
  while(T2[lin_ini][col_ini] != ' ' || T2[lin_ini+1][col_ini] != ' ' || T2[lin_ini+2][col_ini] != ' '){
    lin_ini = 1 + rand() % 9;
    col_ini = 1 + rand() % 9;
  }
  T2[lin_ini][col_ini] = 'C';
  T2[lin_ini+1][col_ini] = 'C';
  T2[lin_ini+2][col_ini] = 'C';

  //BARCO 4:
  lin_ini = 1 + rand() % 9;
  col_ini = 1 + rand() % 9;
  //verificando
  while(T2[lin_ini][col_ini] != ' ' || T2[lin_ini+1][col_ini] != ' '){
    lin_ini = 1 + rand() % 9;
    col_ini = 1 + rand() % 9;
  }
  T2[lin_ini][col_ini] = 'D';
  T2[lin_ini+1][col_ini] = 'D';
    
  //BARCO 5:
  lin_ini = 1 + rand() % 9;
  col_ini = 1 + rand() % 9;
  //verificando
  while(T2[lin_ini][col_ini] != ' ' || T2[lin_ini+1][col_ini] != ' '){
    lin_ini = 1 + rand() % 9;
    col_ini = 1 + rand() % 9;
  }
  T2[lin_ini][col_ini] = 'E';
  T2[lin_ini+1][col_ini] = 'E';

  //BARCO 6:
  lin_ini = 1 + rand() % 9;
  col_ini = 1 + rand() % 9;
  while(T2[lin_ini][col_ini] != ' '){
    lin_ini = 1 + rand() % 9;
    col_ini = 1 + rand() % 9;
  }
  T2[lin_ini][col_ini] = 'F';
  
  //BARCO 7:
  lin_ini = 1 + rand() % 9;
  col_ini = 1 + rand() % 9;
  //verificando
  while(T2[lin_ini][col_ini] != ' '){
    lin_ini = 1 + rand() % 9;
    col_ini = 1 + rand() % 9;
  }
  T2[lin_ini][col_ini] = 'G';

  //BARCO 8:
  lin_ini = 1 + rand() % 9;
  col_ini = 1 + rand() % 9;
  //verificando
  while(T2[lin_ini][col_ini] != ' '){
    lin_ini = 1 + rand() % 9;
    col_ini = 1 + rand() % 9;
  }
  T2[lin_ini][col_ini] = 'H';
  
  //exibindo tabuleiro 1
  printf("TABULEIRO 1:\n");
  printf("      A   B   C   D   E   F   G   H   I   J\n");
  printf("    -----------------------------------------\n");
  for(int lin=1; lin<11;lin++){
    printf(" %2d |",lin);
    for(int col=1; col<11;col++){
       printf(" %c |", T1[lin][col]);
    }
      printf("\n    -----------------------------------------\n");
  }
  printf("\nTABULEIRO 2:\n\n");
  //exibindo tabuleiro 2
  printf("      A   B   C   D   E   F   G   H   I   J\n");
  printf("    -----------------------------------------\n");
  for(int lin=1; lin<11;lin++){
    printf(" %2d |",lin);
    for(int col=1; col<11;col++){
       printf(" %c |", T2[lin][col]);
    }
      printf("\n    -----------------------------------------\n");
  }

  printf("\nExibi os tabuleiros apenas pra debug.\n");
  int r;
  while(r != 1){
    printf("Deseja começar a jogar? \n1.SIM\n2.NÃO\n\nSUA RESPOSTA: ");
    scanf("%d", &r);
  }
  //limpa a tela
  system("cls");

  int col_usu;
  int lin_usu;
  printf("informe uma linha: ");
  scanf("%d", &lin_usu);
  printf("informe uma coluna: ");
  scanf("%d", &col_usu);
  
  return 0;
}
