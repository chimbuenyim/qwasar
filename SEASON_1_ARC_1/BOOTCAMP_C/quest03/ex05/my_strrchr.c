#include <stdio.h>
#include <string.h>


char* my_strrchr(char* param_1, int param_2)
{
    char* swap = NULL;

    for(;;){
        if(*param_1 == (char)param_2) swap = param_1;
        if(*param_1++ == '\0') return (char *)swap;
    }
}