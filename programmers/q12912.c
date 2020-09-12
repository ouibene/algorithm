#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    
    if (a == b) return a;
    else if (a > b) {
       int temp = 0;
       temp = b;
       b = a;
       a = temp;
    }
    
    for (int i = a; i <= b; i++) {
       answer += i;
    }
    
    return answer;
}
