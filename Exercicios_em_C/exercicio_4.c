/* 4.Faça um programa para calcular a área e o perímetro de um hexágono. O programa deve implementar uma função chamada calc_hexa que calcula a área e o perímetro de um hexágono regular de lado L. O program deve solicitar ao usuário o lado do polígono, calcular e imprimir a área e o perímetro do polígono. O programa termina quando for digitado um valor negativo
qualquer para o lado.

Dicas:
•Utilize a assinatura: void calcula_hexa(float l, float *area, float *perimetro);
•Cálculo da área de um hexágono: (3 x L² x raiz(3)) / 2

•Utilize a biblioteca math.h.*/

#include <stdio.h>
#include <math.h>

void calc_hexa(){


  double area, perimetro, l;

    while(1){
  
      printf("\nDigite o tamanho do lado do hexágono em centímetros: ");
      scanf("%lf", &l);
      if (l <= 0){
        break;
      }
      area = (3 * (pow(l, 2) * sqrt(3)) / 2);
      perimetro = 6 * l;
      
      printf("\nArea: %.2lf\nPerimetro: %.2lf\n-----------------\n", area, perimetro);}
  
    
    }

int main(void) {
    calc_hexa();
    
    return 0;
}