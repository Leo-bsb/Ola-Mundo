/* Escreva um programa que declare uma
  matriz 10x10 de inteiros. Crie uma função void para preencher a matriz com números de
  99 a 0, usando ponteiro para matriz como parâmetro. Por fim, o programa deve
  imprimir a matriz através de outra função. */


#include <stdio.h>

void criar_matriz(int matriz[10][10]){
  int linha = 0;
  int coluna = 0;
  int numero = 99;
  int *ptr = &matriz[0][0];

  for (linha = 0; linha < 10; linha++){
    for (coluna = 0; coluna < 10; coluna++){
      *ptr = numero;
      numero -= 1;
      ptr += 1;

    }
    }
}

void imprimir_matriz(int matriz[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("[%2d] ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main (void){

  int matriz[10][10];
  criar_matriz(matriz);
  imprimir_matriz(matriz);

  return 0;
}