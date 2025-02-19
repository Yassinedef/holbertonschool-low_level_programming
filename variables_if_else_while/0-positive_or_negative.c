include < limits.h >
include < stdio.h >
include < stdlib.h >

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
    printf( "Please enter your age: ");
    scanf( "%d", &age );
    if ( age < 100 ) {
        printf ("You are pretty young!\n");
    }
    else if ( age == 100 ) {
        printf( "You are old\n");
    }
    else {
        printf( "You are really old\n");
    }
  return 0;
}
