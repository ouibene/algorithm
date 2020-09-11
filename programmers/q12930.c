#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    char* answer = (char*)calloc(sizeof(char*) * strlen(s), sizeof(char*));
    int j = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') { 
            answer[i] = ' '; 
            j = 0;
            continue; 
        }
        
        if (j % 2 == 0) answer[i] = toupper(s[i]);
        else answer[i] = tolower(s[i]);
        j++;
    }
    
    return answer;
}
