#include <stdio.h>
#include <string.h>


int my_strlen(char* param){
    size_t len = 0;
    if (param != NULL) {
        while (*param != '\0'){
            len++;
            param++;
        }
        return len;
    }
}
