#include <stdio.h>
#include <stdbool.h>

void eh_primo_it(int num){
  if(num == 1){
    printf("Não é primo, nem composto!");
    return;
  }
  for(int i = 2; i*i <= num; i++){
    if(num % i == 0){
      printf("É composto!");
      return;
    }
  }
  printf("É primo!");
  return;
}

bool eh_primo_rec(int num, int pos){
  if(num == 1){
    printf("Não é primo, nem composto!");
    return false;
  }
  if(pos*pos > num){
    printf("É primo!");
    return true;
  }

  if(num % pos == 0){
    printf("É composto!");
    return false;
  }
  
  return eh_primo_rec(num, pos+1);
}

int main(void) {
  int n;
  printf("Digite um inteiro maior ou igual a 2: ");
  scanf("%d", &n);

  eh_primo_it(n);
  printf("\n");
  eh_primo_rec(n, 2);

  return 0;  
}