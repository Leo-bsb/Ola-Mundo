/* Faça um programa que, para um número
indeterminado de pessoas: leia a idade de cada uma, sendo que a idade 0 (zero)
indica o fim da leitura e não deve ser considerada. Em seguida calcule:

1-o número de pessoas;


2-a idade média do grupo;


3-a menor idade e a maior idade.
*/


#include <stdio.h>
int main (void){
int idade = 1;
int contador = 0;
int soma = 0;
int media;
int menor = 9999;
int maior = -9999;

while (1){
printf("Digite o valor da idade: ");
scanf("%d", &idade);

if (idade == 0){
    break;
}
contador += 1;
soma += idade;
if (idade < menor){
    menor = idade;
}

if (idade > maior){
    maior = idade;
}

}

media = (soma/contador);

printf("\n Há %d pessoas", contador);
printf("\n A média das idades é de  %d", media);
printf("\n A menor idade é %d e a maior idade é %d", menor, maior);



return 0;
}

