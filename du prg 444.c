#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    for(int y=0; y<9; y++ ){
        for(int x=0; x <9; x++){
            printf("%i", (x+y)%2);
        }
        printf("\n");
    }
    return 0;
}