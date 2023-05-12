#include <stdio.h>

int fib_it(int x){
  int fibo[x];
  fibo[1] = 1;
  fibo[2] = 1;
  for(int i = 3; i <= x; i++){
    fibo[i] = fibo[i-1] + fibo[i-2];
  }
  return fibo[x];
}

int fib_rec(int x){
  if(x <= 2) return 1;

  return fib_rec(x-1) + fib_rec(x-2);  
}

int main(){
  int n;
  scanf("%d", &n);
  printf("%d\n", fib_it(n));
  printf("%d\n", fib_rec(n));
  return 0;  
}