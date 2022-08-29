#include <stdio.h>
#include <string.h>

char* my_strcpy(char* param_1, char* param_2)
{
    int n = strlen(param_2);

    for(int i = 0; i <= n; i++)
    {
        param_1[i]=param_2[i];
    }
    return param_1;
}