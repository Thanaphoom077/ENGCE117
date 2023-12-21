#include <stdio.h>

char *reverse( char str1[ ] ) ;
char *reverse2( char str2[ ] ) ;

int main() {
    char texta[ 50 ] = "I Love You" ;
    char textb[ 50 ] = "Hello World" ;
    char *out ;
    char *out2 ;    
    out = reverse( texta ) ;
    printf( "\n" ) ;
    out2 = reverse2( textb ) ;

    return 0 ;
}//end function

char *reverse( char str1[ ] ) {
    int num = 0;
    while ( str1[ num ] != '\0' ) {
        num++ ;
    }//end while loop

    for ( int i = 0, j = num - 1; i < j; i++, j-- ) {
        char save = str1[ i ] ;
        str1[ i ] = str1[ j ] ;
        str1[ j ] = save ;
    }//end for loop

    for ( int i = 0; i < num; i++ ) {
        printf( "%c", str1[ i ] ) ;
    }//end for loop

    return str1 ;
}//end function

char *reverse2( char str2[ ] ) {
    int num = 0 ;
    while ( str2[ num ] != '\0' ) {
        num++ ;
    }//end while loop

    for ( int i = 0, j = num - 1; i < j; i++, j-- ) {
        char save = str2[ i ] ;
        str2[ i ] = str2[ j ] ;
        str2[ j ] = save ;
    }//end for loop

    for ( int i = 0; i < num; i++ ) {
        printf( "%c", str2[ i ] ) ;
    }//end for loop

    return str2 ;
}//end function
