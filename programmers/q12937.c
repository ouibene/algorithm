#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    char* answer = (char*)calloc(2, sizeof(char *) * 4);
   	 
    if (num % 2 == 0) answer = "Even";
    else answer = "Odd";
    
    return answer;
}
