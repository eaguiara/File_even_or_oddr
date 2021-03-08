#include <stdio.h>

int main() {
  FILE *arquivo;
  arquivo = fopen("a.txt", "r");
  if(arquivo == NULL) {
    printf("arquivo nao existe\n");
    return 0;
  }
  FILE *pares = fopen("pares.txt", "w");
  FILE *impares = fopen("impares.txt", "w");

  int num;
  while(fscanf(arquivo, "%d", &num) != EOF) {
    if(num % 2 == 0)
      fprintf(pares, "%d\n", num);
    else
      fprintf(impares, "%d\n", num);
  }
  fclose(arquivo);
  fclose(pares);
  fclose(impares);
  return 0;
}