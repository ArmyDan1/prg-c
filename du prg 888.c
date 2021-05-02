#include <stdlib.h>  
#include <stdio.h>  
#include <time.h>  
  

int main()
{
    for (int cislo = 1; cislo <= 1024; cislo = cislo * 2)
    {
        printf("%i ", cislo);
    }

    return 0;
}