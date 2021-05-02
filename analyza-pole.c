#include <stdlib.h>  
#include <stdio.h>  
#include <time.h>  


int main()
    {
        int pole [15];
        int Soucet = 0;
        int i;
        
        srand(time(0));
        
        for (i = 0; i < 30; i++)
        {
            pole [i] = rand() % 100 + 1;
        }
        
        int Min = pole [0];
        int Max = pole [0];
        int Prumer;
        int Prumer2;
        
        for (i = 0; i < 30; i++)
        {
            printf ("pole [%d] = %d\n", i, pole[i]);
        }
        
        for (i = 0; i < 30; i++)
        {
            if (Max < pole [i])
                Max = pole [i];
            if (Min > pole [i])
                Min = pole [i];
                Soucet += pole [i];
            
        }
            printf ("\nSoučet = %d", Soucet);
            printf ("\nMinimum = %d", Min);
            printf ("\n\n\nMaximum = %d", Max);
            printf ("\nPrůměr = %.2f",Soucet / (float) 10 );
            printf ("\nPrůměr bez maximální a minimální hodnoty = %.2f", (Soucet - Min - Max) / (float) 8);

     return 0;
    }