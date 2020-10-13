#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int ternary[100000];
int solution(int n) {
    int answer = 0;
    int i = 0, k = 0;
    
    while (n > 0) {
        ternary[i] = n % 3;
        n /= 3;
        i++;
    } 
    
    for (int j = i - 1; j >= 0; j--) {
        answer += ternary[j] * pow(3, k);
        k++;
    }
    
    return answer;
}
