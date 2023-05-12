#include <stdio.h>

int bin_search(int proc, int ini, int fim, int vetor[]){
  if(ini > fim) return -1;
  int meio = (ini+fim)/2;
  int ans = 0;

  if(vetor[meio] == proc) ans = meio;
  else if(vetor[meio] > proc) ans = bin_search(proc, ini, meio-1, vetor);
  else ans = bin_search(proc, meio+1, fim, vetor);

  return ans;  
}

int main() {
  int tam = 10;  
  int lista[10] = {2, 3, 4, 6, 7, 8, 10, 21, 23, 90};

  int valor;
  printf("Digite o valor a ser buscado: ");
  scanf("%d", &valor);

  printf("%d\n", bin_search(valor, 0, tam-1, lista));

  return 0;  
}