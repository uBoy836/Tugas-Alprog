#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,c;
    scanf("%d", &a);
    if(a < 2) {
        printf("BUKAN");
        return 0;
    
    }
    b = 0;
    for(c = 1; c <= a; c++) {
        if(a % c ==0) b++;
    }
    if(b ==2){
        printf("PRIMA");
    }
    else{
        printf("BUKAN");
    }
    
    return 0;
}