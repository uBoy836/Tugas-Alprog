#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char A[101], B[101];
    
    scanf("%s", A);
    scanf("%s", B);
    if(strlen(A) != strlen(B))
          printf("BERBEDA");
    else
          if(strcmp(A,B)==0)
          printf("IDENTIK");
    else
          printf("MIRIP");
    return 0;
}
