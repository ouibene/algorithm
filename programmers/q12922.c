#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    char* answer = (char*)calloc(sizeof(char *) * n * 3, 2);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
          strcpy(answer + (i * 3), "수");
        else
          strcpy(answer + (i * 3), "박");
    }
    
    return answer;
}
