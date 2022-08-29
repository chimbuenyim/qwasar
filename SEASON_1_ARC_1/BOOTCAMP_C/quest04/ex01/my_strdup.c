#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strdup(char *param_1)
{
    int param_1_size;

    static char *duplicate;

    char *duplicate_offset;

    param_1_size = strlen(param_1);

    duplicate = (char *)malloc(sizeof(char)*param_1_size+1);

    if( duplicate == NULL) return( (char *)NULL);

    duplicate_offset = duplicate;

    while(*param_1) 
    {
        *duplicate_offset = *param_1;
    
        duplicate_offset++;
    
        param_1++;
    }
    
    *duplicate_offset = '\0';

    return (duplicate);
}