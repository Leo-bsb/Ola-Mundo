\*Faça um programa que lê dois valores e
imprime:
• se o primeiro valor for menor que o segundo, a
lista de valores do primeiro até o segundo;
• se o primeiro valor for maior que o segundo a
lista de valores do segundo até o primeiro em
ordem decrescente;
• se ambos forem iguais a mensagem: valores
iguais.*\



#include <stdio.h>


int main (void){
	
int num1, num2, i = 0;
	
printf("\nDigite um valor numérico inteiro: ");
scanf("%d", &num1);

printf("\nDigite outro valor numérico inteiro: ");
scanf("%d", &num2);  
	
	
if (num1 < num2){
for (i=num1; i<=num2; i++){
	printf("%d ", i);	}}


else if (num1 > num2){
for (i=num1; i>=num2; i--){
	printf("%d ", i);	}}
	
else{
	printf("\nvalores iguais");
}
	
	return 0;
}