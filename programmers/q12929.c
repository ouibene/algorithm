#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
   	
   	answer = c(n); 
    return answer;
}

int c(int n) {
    return n ? 2 * (2 * n - 1) * c(n - 1) / (1 + n) : 1;
}
