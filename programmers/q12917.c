#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    if (strcmp((char *)a, (char *)b) > 0) {
        return -1;
    } else return 1;
} 

char* solution(const char* s) {
    char* answer = (char*)malloc(sizeof(char *) * strlen(s));
    
    strcpy(answer, s);
    qsort(answer, strlen(answer), sizeof(answer[0]), compare);
    
    return answer;
}
