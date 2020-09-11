#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    long long answer = 0;
    int num = sqrt(n); 
    
    if (sqrt(n) == num) {
        num = sqrt(n);
    	num += 1;
        answer = pow(num, 2);
    } else answer = -1;
    
    return answer;
}
