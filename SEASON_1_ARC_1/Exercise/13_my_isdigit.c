// Description

// Create a my_isdigit function.

// Reproduce the behavior of isdigit() function. It returns 1 if the character sent as argument is a digit (0 to 9). It returns 0 otherwise.


#include <stdio.h>
#include <ctype.h>


int my_isdigit(char param_1)
{
    if (isdigit(param_1)) {
        return 1;
    }
    else {
        return 0;
    }
}