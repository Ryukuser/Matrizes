#include <math.h>
#include <stdio.h>
//#include <locale.h>
int i, j;

int mat[50][50];

void inicia_mat() {
  for (i = 0; i < 50; i++) {
    for (j = 0; j < 50;j++) {
      mat[i][j] = 0;
      //printf("%d ", mat[i][k]);
    }
    printf("\n");
  }
  printf("\n\n");
}


void desenha_triangulo() {
  int arco = 0;
  j = 25;
  for (i = 12; i < 32; i++) {
    //for (j = 10; j < 40; j++) {
    if (i == 12) {
        mat[i][j] = 1;
        arco++;
      } else {
        mat[i][j+arco] = 1;
        mat[i][j-arco] = 1;
        arco++;
    }
    printf("\n");
  }
}


void desenha_quadrado() {
  for (i = 31; i < 50; i++) {
    for (j = 7; j < 44; j++) {
      mat[i][j] = 1;
    }
  }
}



void somatorio_mat() {
  int somatorio = 0;
  for (i = 0; i < 50; i++) {
    for (j= 0; j < 50; j++) {
      somatorio = somatorio + mat[i][j];
      if (mat[i][j] > 0)
        printf("%d ", mat[i][j]);
      else
        printf("  ");
    }
    printf("\n");
  }
  printf("O somatório é: %d", somatorio);
}

int main(void) {


  inicia_mat();

  desenha_quadrado();
  desenha_triangulo();
  somatorio_mat();
  return 0;
}
