#include <stdio.h>
#include <string.h>
#include <ctype.h>

 

 char* my_downcase(char* param){
    for(char i = 0; param[i]!= '\0'; i++){
        if(param[i] >= 'A' && param[i] <= 'Z'){
            param[i] = param[i] +32;
        }
    }
    return param;
 }