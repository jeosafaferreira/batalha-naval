//Data: 09/08/2019
//Autor: Jeosafá Ferreira

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void) {

  char T1[10][10];
  char T2[10][10];
  char T1_descoberto[10][10];
  char T2_descoberto[10][10];

  //populando matrizes
  for(int lin=1; lin<11; lin++){
    for(int col=1; col<11; col++){
      T1[lin][col] = ' ';
      T2[lin][col] = ' ';
      T1_descoberto[lin][col] = ' ';
      T2_descoberto[lin][col] = ' ';
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
  int jogador = 1;
  while (1){
    if(jogador == 1){
      printf("      A   B   C   D   E   F   G   H   I   J\n");
      printf("    -----------------------------------------\n");
      for(int lin=1; lin<11;lin++){
        printf(" %2d |",lin);
        for(int col=1; col<11;col++){
          printf(" %c |", T2_descoberto[lin][col]);
        }
        printf("\n    -----------------------------------------\n");
      }
    }else{
      printf("      A   B   C   D   E   F   G   H   I   J\n");
      printf("    -----------------------------------------\n");
      for(int lin=1; lin<11;lin++){
        printf(" %2d |",lin);
        for(int col=1; col<11;col++){
          printf(" %c |", T1_descoberto[lin][col]);
        }
        printf("\n    -----------------------------------------\n");
      }
    }

    printf("JOGADOR %d:\n", jogador);
    printf("Informe uma linha: ");
    scanf(" %d", &lin_usu);
    printf("informe uma coluna: ");
    char col;
    scanf(" %c", &col);
    
    switch(col){
      //maiúsculas
       case 'A':
        col_usu = 1;
        break;
      case 'B':
        col_usu = 2;
        break;
      case 'C':
        col_usu = 3;
        break;
      case 'D':
        col_usu = 4;
        break;
      case 'E':
        col_usu = 5;
        break;
      case 'F':
        col_usu = 6;
        break;
      case 'G':
        col_usu = 7;
        break;
      case 'H':
        col_usu = 8;
        break;
      case 'I':
        col_usu = 9;
        break;
      case 'J':
        col_usu = 10;
        break;
      
      //minúsculas
      case 'a':
        col_usu = 1;
        break;
      case 'b':
        col_usu = 2;
        break;
      case 'c':
        col_usu = 3;
        break;
      case 'd':
        col_usu = 4;
        break;
      case 'e':
        col_usu = 5;
        break;
      case 'f':
        col_usu = 6;
        break;
      case 'g':
        col_usu = 7;
        break;
      case 'h':
        col_usu = 8;
        break;
      case 'i':
        col_usu = 9;
        break;
      case 'j':
        col_usu = 10;
        break;
    }
    //verifica se tem algo
    if(jogador == 1){
      jogador=2;
      if(T2[lin_usu][col_usu] == ' '){
        T2_descoberto[lin_usu][col_usu] = 'A';
        printf("Acertou água.\n\n");
      }else{
        if(T2[lin_usu][col_usu] =='F' || T2[lin_usu][col_usu] =='G' || T2[lin_usu][col_usu] =='H'){
          T2_descoberto[lin_usu][col_usu] = 'X';
          printf("\nDestruiu completamente uma embarcação.\n\n");
        }else{
          T2_descoberto[lin_usu][col_usu] = 'P';
          printf("\nDestruiu parcialmente uma embarcação.\n\n");
        }
      }
    }else{
      jogador=1;
      if(T1[lin_usu][col_usu] == ' '){
        T1_descoberto[lin_usu][col_usu] = 'A';
        printf("Acertou água.\n\n");
      }else{
        if(T1[lin_usu][col_usu] =='F' || T1[lin_usu][col_usu] =='G' || T1[lin_usu][col_usu] =='H'){
          T1_descoberto[lin_usu][col_usu] = 'X';
          printf("Destruiu completamente uma embarcação.\n\n");
        }else{
          T1_descoberto[lin_usu][col_usu] = 'P';
          printf("Destruiu parcialmente uma embarcação.\n\n");
        }
      }
    }
  }
  return 0;
}
