#include <stdlib.h>  
#include <stdio.h>  
#include <time.h>  
  

int main()
{

    for (int j = 1; j <= 5; j++)
    {
        if (j == 1)
        {
           
        }
        if (j == 11)
        {
           
        }
        printf("%3i:", j);
        for (int i = 1; i <= 10; i++)
        {
            printf("\t%3i", i * j);
        }
        printf("\n");
    }
    return 0;
}