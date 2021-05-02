#include <stdlib.h>  
#include <stdio.h>  
#include <time.h>  
// Tohle bude házet random čísla v obdelníku. Dole pak jdou upravit rozměry.     

void random ( int n )  
{  
int i;  
for( i = 0; i < n; i++ )  
printf( "  %6d\n", rand() );  
}  
 void range( int min, int max, int n )  
{  
}  
int main( void )  
{  
srand( (unsigned)time( NULL ) );  
  
random( 10 );  
printf("\n");  
range( -100, 100, 10 );  
}  