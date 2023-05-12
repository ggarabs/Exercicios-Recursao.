#include <stdio.h>
#define MAXN 33

void to_binary_it(int value, char ans[]){
  int pos = 0;
  
  while(value > 0){
    char digit = (value % 2) + '0';
    ans[pos] = digit;
    value /= 2;
    pos++;
  }
  ans[pos] = '\0';

  for(int i = 0; i < pos/2; i++){
    char temp = ans[i];
    ans[i] = ans[pos-1-i];
    ans[pos-1-i] = temp;
  }
  
}

int to_binary_rec(int value, char ans[], int pos){
  if(value == 0) return pos;

  int i = to_binary_rec(value/2, ans, pos+1);
  i -= pos+1;

  char digit = (value % 2) + '0';
  ans[i] = digit;

  return 0;  
}

int main(){
  int dec;
  char solution[MAXN] = "";
  
  printf("Digite um número na base decimal: ");
  scanf("%d", &dec);

  to_binary_it(dec, solution);
  printf("%s\n", solution);
  
  to_binary_rec(dec, solution, 0);
  printf("%s\n", solution);
  
  return 0;
}