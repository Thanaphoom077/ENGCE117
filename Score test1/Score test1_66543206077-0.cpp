#include <stdio.h>
#include <string.h>

int main() {
	int numa[ 6 ] ;
    int numb[ 6 ] ;
    int numsw[ 6 ] ;
    int minus = 0 ;
    int equalminus = 0;
    int Answer[ 7 ] ;
    char operater ;
	int i = 0 ;
	int j = 0 ;
	
	int k = 0 ;
	int m = 0 ;
	
	//????????? Number A
	printf( "Enter Number A \n" ) ;
    do {
        printf( "A[%d] :", i ) ;
        scanf( "%d", &numa[ i ] ) ;
        i = i + 1 ;
    }while( i < 6 ) ;
    //???????? Number A
    
    //?????? Operater
    printf( "Operater [+ or -] :" ) ;
    scanf( " %c", &operater ) ;
    //??????????? Operater
    
    //????????? Number B
    printf( "\nEnter Number B \n" ) ;
    do{
        printf( "B[%d] :", k ) ;
        scanf( "%d", &numb[k] ) ;
        k = k + 1 ;
    }while( k < 6 ) ;
    //???????? Number B
    
    printf( "\nIndex      x 0 1 2 3 4 5\n" ) ;
    
    //??????? Number A
    printf( "Number A :  " ) ;
    do{
        printf( " %d", numa[j] ) ;
        j = j + 1 ;
    }while( j < 6 ) ;
    //????????????
    
    //????????????????
    printf( "\nOperater:              %c", operater ) ;
    
    //??????? Number B
    printf( "\n" ) ;
    printf( "Number B :  " ) ;
    do{
        printf( " %d", numb[ m ] ) ;
        m = m + 1 ;
    }while( m < 6 ) ;
    //???????????? Number B
    
    printf( "\n-----------------------------------" ) ;  
    
    printf( "\nAnswer :   " ) ;
    
    if( operater == '+' ) { //???????????????????
        Answer[ 6 ] = numa[ 5 ] + numb[ 5 ] ; //?????? Answer[6]
        Answer[ 5 ] = numa[ 4 ] + numb[ 4 ] ; //?????? Answer[5]
        Answer[ 4 ] = numa[ 3 ] + numb[ 3 ] ; //?????? Answer[4]
        Answer[ 3 ] = numa[ 2 ] + numb[ 2 ] ; //?????? Answer[3]
        Answer[ 2 ] = numa[ 1 ] + numb[ 1 ] ; //?????? Answer[2]
        Answer[ 1 ] = numa[ 0 ] + numb[ 0 ] ; //?????? Answer[1]
        
        //?????????????????
        if( Answer[ 6 ] >= 10 ) {
            Answer[ 6 ] = Answer[ 6 ] - 10 ;
            Answer[ 5 ] = Answer[ 5 ] +1 ;
        }
        if( Answer[ 5 ] >= 10 ) {
            Answer[ 5 ] = Answer[ 5 ] - 10 ;
            Answer[ 4 ] = Answer[ 4 ] +1 ;
        }
        if( Answer[ 4 ] >= 10 ) {
            Answer[ 4 ] = Answer[ 4 ] - 10 ;
            Answer[ 3 ] = Answer[ 3 ] + 1 ;
        }
        if( Answer[ 3 ] >= 10 ) {
            Answer[ 3 ] = Answer[ 3 ] - 10 ;
            Answer[ 2 ] = Answer[ 2 ] + 1 ;
        }
        if( Answer[ 2 ] >= 10 ) {
            Answer[ 2 ] = Answer[ 2 ] - 10 ;
            Answer[ 1 ] = Answer[ 1 ] + 1 ;
        }
        if( Answer[ 1 ] >= 10 ) {
            Answer[ 1 ] = Answer[ 1 ] - 10 ;
            Answer[ 0 ] = Answer[ 0 ] + 1 ;
        }
        
        //?????????
        printf( "%d ", Answer[ 0 ] ) ;    
        printf( "%d ", Answer[ 1 ] ) ;
        printf( "%d ", Answer[ 2 ] ) ;
        printf( "%d ", Answer[ 3 ] ) ;
        printf( "%d ", Answer[ 4 ] ) ;
        printf( "%d ", Answer[ 5 ] ) ;
        printf( "%d ", Answer[ 6 ] ) ;
    printf("\n===================================");
    
    } else if( operater == '-' ) { //???????????????????
        if(numa[ 0 ] <= numb[ 0 ]){
            if(numa[ 0 ] < numb[ 0 ]){
                minus++;
            }
            if(numa[ 1 ] < numb[ 1 ]){
                minus++;
            }
            if(numa[ 2 ] < numb[ 2 ]){
                minus++;
            }
            if(numa[ 3 ] < numb[ 3 ]){
                minus++;
            }
            if(numa[ 4 ] < numb[ 4 ]){
                minus++;
            }
            if(numa[ 5 ] < numb[ 5 ]){
                minus++;
            }
            if(minus > 0){
                numsw[ 0 ] = numb[ 0 ];
                numsw[ 1 ] = numb[ 1 ];
                numsw[ 2 ] = numb[ 2 ];
                numsw[ 3 ] = numb[ 3 ];
                numsw[ 4 ] = numb[ 4 ];
                numsw[ 5 ] = numb[ 5 ];
            }
            Answer[ 6 ] = numsw[ 5 ] - numa[ 5 ] ; //?????? Answer[6]
            Answer[ 5 ] = numsw[ 4 ] - numa[ 4 ] ; //?????? Answer[5]
            Answer[ 4 ] = numsw[ 3 ] - numa[ 3 ] ; //?????? Answer[4]
            Answer[ 3 ] = numsw[ 2 ] - numa[ 2 ] ; //?????? Answer[3]
            Answer[ 2 ] = numsw[ 1 ] - numa[ 1 ] ; //?????? Answer[2]
            Answer[ 1 ] = numsw[ 0 ] - numa[ 0 ] ; //?????? Answer[1]
            if( Answer[ 6 ] < 0 ) {
                Answer[ 6 ] = Answer[ 6 ] + 10 ;
                Answer[ 5 ] = Answer[ 5 ] - 1 ;
            }
            if( Answer[ 5 ] < 0 ) {
                Answer[ 5 ] = Answer[ 5 ] + 10 ;
                Answer[ 4 ] = Answer[ 4 ] - 1 ;
            }
            if( Answer[ 4 ] < 0 ) {
                Answer[ 4 ] = Answer[ 4 ] + 10 ;
                Answer[ 3 ] = Answer[ 3 ] - 1 ;
            }
            if( Answer[ 3 ] < 0 ) {
                Answer[ 3 ] = Answer[ 3 ] + 10 ;
                Answer[ 2 ] = Answer[ 2 ] - 1 ;
            }
            if( Answer[ 2 ] < 0 ) {
                Answer[ 2 ] = Answer[ 2 ] + 10 ;
                Answer[ 1 ] = Answer[ 1 ] -1 ;
            }
            if( Answer[ 1 ] < 0 ) {
                Answer[ 1 ] = Answer[ 1 ] + 10 ;
                Answer[ 0 ] = Answer[ 0 ] -1 ;
            }
        }else{
            Answer[ 6 ] = numa[ 5 ] - numb[ 5 ] ; //?????? Answer[6]
            Answer[ 5 ] = numa[ 4 ] - numb[ 4 ] ; //?????? Answer[5]
            Answer[ 4 ] = numa[ 3 ] - numb[ 3 ] ; //?????? Answer[4]
            Answer[ 3 ] = numa[ 2 ] - numb[ 2 ] ; //?????? Answer[3]
            Answer[ 2 ] = numa[ 1 ] - numb[ 1 ] ; //?????? Answer[2]
            Answer[ 1 ] = numa[ 0 ] - numb[ 0 ] ; //?????? Answer[1]
            if( Answer[ 6 ] < 0 ) {
                Answer[ 6 ] = Answer[ 6 ] + 10 ;
                Answer[ 5 ] = Answer[ 5 ] - 1 ;
            }
            if( Answer[ 5 ] < 0 ) {
                Answer[ 5 ] = Answer[ 5 ] + 10 ;
                Answer[ 4 ] = Answer[ 4 ] - 1 ;
            }
            if( Answer[ 4 ] < 0 ) {
                Answer[ 4 ] = Answer[ 4 ] + 10 ;
                Answer[ 3 ] = Answer[ 3 ] - 1 ;
            }
            if( Answer[ 3 ] < 0 ) {
                Answer[ 3 ] = Answer[ 3 ] + 10 ;
                Answer[ 2 ] = Answer[ 2 ] - 1 ;
            }
            if( Answer[ 2 ] < 0 ) {
                Answer[ 2 ] = Answer[ 2 ] + 10 ;
                Answer[ 1 ] = Answer[ 1 ] -1 ;
            }
            if( Answer[ 1 ] < 0 ) {
                Answer[ 1 ] = Answer[ 1 ] + 10 ;
                Answer[ 0 ] = Answer[ 0 ] -1 ;
            }
        }
        if(numa[ 0 ] == numb[ 0 ]){
            if(numa[ 0 ] == numb[ 0 ]){
                equalminus++;
            }
            if(numa[ 1 ] == numb[ 1 ]){
                equalminus++;
            }
            if(numa[ 2 ] == numb[ 2 ]){
                equalminus++;
            }
            if(numa[ 3 ] == numb[ 3 ]){
                equalminus++;
            }
            if(numa[ 4 ] == numb[ 4 ]){
                equalminus++;
            }
            if(numa[ 5 ] == numb[ 5 ]){
                equalminus++;
            }
            if(equalminus == 6){
                Answer[ 6 ] = 0 ;
                Answer[ 5 ] = 0 ;
                Answer[ 4 ] = 0 ;
                Answer[ 3 ] = 0 ;
                Answer[ 2 ] = 0 ;
                Answer[ 1 ] = 0 ;
            }
        }
            //????????
        if(equalminus == 6){
            Answer[ 0 ] = 0 ;
            Answer[ 1 ] = 0 ;
            Answer[ 2 ] = 0 ;
            Answer[ 3 ] = 0 ;
            Answer[ 4 ] = 0 ;
            Answer[ 5 ] = 0 ;
            printf( "%d ", Answer[ 0 ] ) ;    
            printf( "%d ", Answer[ 1 ] ) ;
            printf( "%d ", Answer[ 2 ] ) ;
            printf( "%d ", Answer[ 3 ] ) ;
            printf( "%d ", Answer[ 4 ] ) ;
            printf( "%d ", Answer[ 5 ] ) ;
            printf( "%d ", Answer[ 6 ] ) ;
        }else{
            if(minus == 0 ){
                printf( "%d ", Answer[ 0 ] ) ;    
                printf( "%d ", Answer[ 1 ] ) ;
                printf( "%d ", Answer[ 2 ] ) ;
                printf( "%d ", Answer[ 3 ] ) ;
                printf( "%d ", Answer[ 4 ] ) ;
                printf( "%d ", Answer[ 5 ] ) ;
                printf( "%d ", Answer[ 6 ] ) ;
            }else if(minus > 0){
                Answer[ 0 ] = '-' ;
                printf( "%c ", Answer[ 0 ] ) ;    
                printf( "%d ", Answer[ 1 ] ) ;
                printf( "%d ", Answer[ 2 ] ) ;
                printf( "%d ", Answer[ 3 ] ) ;
                printf( "%d ", Answer[ 4 ] ) ;
                printf( "%d ", Answer[ 5 ] ) ;
                printf( "%d ", Answer[ 6 ] ) ;
            }
        }
        printf( "\n===================================" ) ;
    }
}
