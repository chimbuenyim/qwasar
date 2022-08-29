#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_spaceship (char* paths) {

  int x = 0;
  int y = 0;

  char* direction = "up";

  char* return_result = malloc(sizeof(char)*500); 

    for (int i = 0; i < strlen(paths); i++) {
      
      char path = paths[i];

      
        if(path == 'R'){ 
          if(strcmp(direction, "down") == 0) {direction = "left"; continue; }
          if(strcmp(direction, "left") == 0) {direction = "up"; continue;}
          if(strcmp(direction, "up") == 0) {direction = "right"; continue;}
          if(strcmp(direction, "right") == 0) {direction = "down";  continue;}
        }
        
        if(path == 'L'){ 
            if (strcmp(direction, "right") == 0) { direction = "up"; continue;}
            if(strcmp(direction, "down") == 0) {direction = "right"; continue;}
            if(strcmp(direction, "up") == 0) {direction = "left"; continue;}
            if(strcmp(direction, "left") == 0) {direction = "down"; continue;}
        }
        
        if(path == 'A') {
            if(strcmp(direction, "up") == 0) y--;
            if(strcmp(direction, "down") == 0) y++;
            if(strcmp(direction, "left") == 0) x--; 
            if(strcmp(direction, "right") == 0) x++; 
        }
  
    }


    sprintf(return_result, "{x: %d, y: %d, direction: '%s'}", x, y, direction );

    return return_result;
}
  
