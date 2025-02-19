include <limits.h>
include <stdio.h>
include <stdlib.h>

main(){
      char c;
      c = CHAR_MIN;
      while(c != CHAR_MAX){
              printf("%d\n", c);
              c = c+1;
      }
      exit(EXIT_SUCCESS);
}
int n()
{
    int n;

    if ( n < 100 ) {
        printf ("NÃgatif!\n");
    }
    else if ( n  == 0 ) {
        printf( "Null\n");
    }
    else {
        printf( "Positif\n");
    }
  return 0;
}
