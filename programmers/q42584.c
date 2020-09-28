#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int prices[], size_t prices_len) {
    int* answer = (int*)malloc(sizeof(int *) * (prices_len + 1));
    
    for (int i = 0; i<prices_len; i++) {
        int cnt = 0;
        
        for (int j = i + 1; j < prices_len; j++) {
           if (prices[i] <= prices[j]) cnt++;
           else { 
               cnt++;
           	   break;
           }
        }
        
        answer[i] = cnt;
    }
    
    return answer;
}
