#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if(argc!=2){
    printf("./fibonacci n_numbers\n");
    return 1;
  }
  int limit = atoi(argv[1]);
  long long int prev = 0, prev2 = 1, next = 0;
  for (size_t i = 0; i < limit; i++) {
    next = prev + prev2;
    printf("%lli", next);
    if(i != limit-1){
      printf(", ");
    }
    prev2 = prev;
    prev = next;
  }
  printf("\n");
}
