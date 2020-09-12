#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* phone_number) {
    int len = strlen(phone_number);
    char* answer = (char*)calloc(len, sizeof(char *) * len);
    
    for (int i = 0; i < len; i++) {
       	if (i >= len - 4) answer[i] = phone_number[i];
        else answer[i] = '*';
    }
    
    return answer;
}
