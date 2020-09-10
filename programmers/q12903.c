#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    char* answer = (char*)calloc(sizeof(char*) * 3, 1);
    char *str = NULL;
    str = s;
    
    if ((int)strlen(str) % 2 == 1) {
        *answer = str[strlen(str)/2];
    } else {
        answer[0] = str[strlen(str)/2 - 1];
        answer[1] = str[strlen(str)/2];
    }
    
    return answer;
}
