/*
1. Faça um programa em C que determine se um número inteiro lido é par ou ímpar.
*/

#include <stdio.h>

int main() {
  int numero;

  printf("Entre com um numero inteiro: ");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo) {
    int numero_eh_divisivel_por_2 = numero % 2 == 0;
    if (numero_eh_divisivel_por_2) {
      printf("O numero %i eh par!\n", numero);
    } else {
      printf("O numero %i eh impar!\n", numero);
    }
  } else {
    printf("Numero invalido! Tente novamente\n");
  }
  return 0;
}