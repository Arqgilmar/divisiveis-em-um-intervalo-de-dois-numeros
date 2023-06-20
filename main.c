#include <stdio.h>

int main(void) {
  
  int n1, n2;
  
  printf("Digite um número:\n");
  scanf("%d", &n1);
  printf("Digite outro número:\n");
  scanf("%d", &n2);

  while (n1 <= n2){
    if(n1 % 3 == 0 && n1 % 5 == 0){
      printf("%d\n", n1);
    }
    n1 = n1 + 1;
  }
  return 0;
}
