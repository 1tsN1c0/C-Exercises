#include <stdio.h>

int main() {

  int l = 0;
  
  while(l <= 5) {
    
    int A, a, b;
  
    printf("Inserisci il primo lato: ");
    scanf("%d", &a);

    printf("Inserisci il secondo lato: ");
    scanf("%d", &b);

    if(a == b) {
      printf("La tua figura è un quadrato. \n");
      A = a * a;
      printf("La sua area è %d", A);
    }

    if(a != b) {
      printf("La tua figura è un rettangolo. \n");
      A = a * b;
      printf("La sua area è %d \n", A);
    }

    l = l + 1;
    
  }

}
