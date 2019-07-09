#include<stdio.h>

int multiplicaDoisNumeros();

int main()
{
   int resultadoMultiplicacao = 0;

   resultadoMultiplicacao = multiplicaDoisNumeros();
   printf("Resultado 1: %d\n",resultadoMultiplicacao);

   printf("Resultado 2: %d\n",multiplicaDoisNumeros());

   return 0;
}

int multiplicaDoisNumeros() {
   int numero1, numero2;
   printf("Digite o 1o. numero: ");
   scanf("%d", &numero1);
   printf("Digite o 2o. numero: ");
   scanf("%d", &numero2);
   return numero1 * numero2;
}