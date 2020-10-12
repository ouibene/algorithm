#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int isPrime(int num) {
    for (int i = 2; i * i <= num; i++) {
    	if (num % i == 0) return 0;
    }
    return 1;
}

int solution(int nums[], size_t nums_len) {
    int answer = 0;
    int temp = 0;
    
    for (int i = 0; i < nums_len; i++) {
        for (int j = i + 1; j < nums_len; j++) {
            for (int k = j + 1; k < nums_len; k++) {
               	temp = nums[i] + nums[j] + nums[k]; 
                
                if (isPrime(temp) == 1) {
                    answer++;
                }
            }
        }
    }
    
    return answer;
}
