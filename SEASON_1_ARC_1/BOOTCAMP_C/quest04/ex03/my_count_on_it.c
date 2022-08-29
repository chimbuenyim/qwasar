
#include <stdlib.h>
#include <string.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY


typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


integer_array *my_count_on_it(string_array *param)
{
    integer_array *pointer = malloc(sizeof(integer_array));
    int i = 0;

    pointer->size = param->size;

    pointer->array = malloc(sizeof(int) * pointer->size);

    while(i < param->size)
    {
        pointer->array[i] = strlen(param->array[i]);
        i++;
    }

    return pointer;
}