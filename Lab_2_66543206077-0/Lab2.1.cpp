#include <stdio.h>
#include <string.h>

void reverse( char str1[ ], char str2[ ] ) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char out[ 50 ] ;
    reverse( text, out ) ;
}//end function

void reverse( char str1[ ], char str2[ ] ) {
    int n = 0;
    
    printf( "Enter Text :" ) ;
    gets( str1 ) ;
     
    for( int i = 0; str1[ i ] != '\0'; i++ ) {
        printf( "%c", str1[ i ] ) ;
        n++ ;
    }//end for loop
     
    printf( "\n" ) ;
     
    for( int j = n; j >= 0; ) {
        printf( "%c", str1[ j ] ) ;
        j = j - 1;
    }//end for loop
}//end function

