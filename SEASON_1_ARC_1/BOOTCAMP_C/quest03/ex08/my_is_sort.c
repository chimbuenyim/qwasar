#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
struct s_integer_array{
    int size;
    int* array;
}integer_array;
#endif
bool my_is_sort(struct s_integer_array* param){
    if(param->size <= 1)
        return true;
    int asc = 1;                     // true if [still] have ascending sort
    int desc = 1;                   // true if [still] have descending sort
    int prev = param->array[0];    // the value of the "previous" array element
    int curr;                     // the value of the "current" array element
    for(int x = 0; x < param->size; x++, prev = curr){
        if (!(asc || desc))break;   // early escape - neither direction is in sort
            curr = param->array[x]; // get current array value
            int diff = curr - prev; // compare against previous value
            if(diff == 0)continue;           // elements are the same - no change in status
            if(diff < 0){
                asc = 0;
            }else{
                desc = 0;
        }
    }
    return (asc || desc) ? true : false;
}