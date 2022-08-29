#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif


char* my_join(string_array* param_1, char* param_2)
{

int size = param_1->size;

if(size <= 0 ) return NULL;

int new_length =strlen(param_2) * (size -1);

int i = 0;

while (i < size) {
    new_length += strlen(param_1->array[i]);
    i++;
}


new_length++;

char* new_string =  malloc(sizeof(char) * new_length);

strcpy(new_string, param_1->array[0]);


for(int i = 1; i < size; i++)
{
    strcat(new_string, param_2);
    strcat(new_string,  param_1->array[i]);
}

return new_string;
}