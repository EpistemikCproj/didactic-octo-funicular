#include <stdio.h>

/* find out how many people in a room before 
   chance of a common birthday is gt 50/50  */
int main( int argc, char* argv[] )
{
  int count = 1 ;
  float res = 1.0 ;
  
  while( res > 0.5 )
  {
    res *= ( (365.0 - (float)count) / 365.0 );
    
    printf( "res = %f ; count = %d \n", res, count );
  
    count++ ;
  }
  
  printf( "Need %d people in the room.\n", count );
  
  return 0 ;
}
