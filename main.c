#include <stdio.h>
#include <stdlib.h>


int mat[50][50];
int i, j;
void inicia_mat(){ // fun��o que inicializa a fun��o

  for(i=0; i< 50; i++){ //percorrer a matriz iniciando em 0 indo at� 50 i++ faz a contagem das linhas
    for(j=0; j<50;j++){ //percorrer a matriz iniciando em 0 indo at�50 k++ faz a contagem das colunas
     // mat[i][j] = 1;//inicializa a matriz com 1
       //printf("%d", mat[i][j]);//printa a matriz

    }
    //printf("\n");//espa�amento nas linhas
  }
   //printf("\n\n");//espa�amento
}
void print_quad(){

  for(i=30; i< 49; i++){ //percorrer a matriz iniciando em 0 indo at� 50 i++ faz a contagem das linhas
    for(j=0; j<49;j++){
      //if(i==j)
      // mat[i][j] = 2;
     // else{
      //  if((i+j)==49)
       // mat[i][j] = 0;
        mat[i][j] = 1;
         printf("%d", mat[i][j]);
      }
        printf("\n");

        }
      printf("\n");
    }

void desenha_retangulo() {
  for (i = 25; i < 30; i++) {
    for (j = 0; j < 49; j++) {
      mat[i][j] = 1;
       printf("%d", mat[i][j]);
    }
    printf("\n");
  }
}
void somatorio_mat() {
  int somatorio = 0;
  for (i = 0; i < 50; i++) {
    for (j= 0; j < 50; j++) {
      somatorio = somatorio + mat[i][j];
      //if (mat[i][j] > 0)
        //printf("%d ", somatorio);
      //else
     //printf("  ");
    }
   // printf("\n");
 }
  printf("O somat�rio �: %d", somatorio);
}

int main(void) { //fun��o principal

  inicia_mat();

  print_quad();
  desenha_retangulo();
  somatorio_mat();
}
