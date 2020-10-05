#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int a, int b);
int lcm(int a, int b);

int solution(int arr[], size_t arr_len) {
    int answer = arr[0];
    int temp = 0;
    
    for (int i = 0; i < arr_len; i++) {
        answer = lcm(answer, arr[i]);
    }
    
    return answer;
}

int gcd(int a, int b) {
   	while(b != 0) {
        int r = a % b;
        a = b;
        b = r;
    } 
    return a;
}

int lcm(int a, int b) {
   return a * b / gcd(a, b); 
}
