#include <stdio.h>
#include <string.h>
#include <ctype.h>

 

 char* my_upcase(char* param){
    for(char i = 0; param[i]!= '\0'; i++){
        if(param[i] >= 'a' && param[i] <= 'z'){
            param[i] = param[i] -32;
        }
    }
    return param;
 }