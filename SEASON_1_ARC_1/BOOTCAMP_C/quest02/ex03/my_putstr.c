#include <stdio.h>

void my_putstr(char *param){
    while(*param){
        write(1, param, 1);
        param++;
    };
}