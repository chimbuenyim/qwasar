#include <stdio.h>
#include <string.h>

char* my_strchr(char* param_a, int param_b){
    while ( *param_a && *param_a != param_b ) 
    param_a++;
    return ( char * )
    ( param_b == *param_a ? param_a : NULL );  

}