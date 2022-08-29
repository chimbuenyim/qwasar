
#include <stdio.h>
#include <string.h>

int my_string_index(char *param_1, char param_2){
    int length = strlen(param_1);
    int a = 0;
    
    while (a < length) {
        if(param_1[a] == param_2) return a;
        a++;

    }
    return -1;
}