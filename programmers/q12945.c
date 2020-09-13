#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int arr[100000] = {0, 1, 1, };

int solution(int n) {
    int answer = 0;
    
    answer = fibo(n);
    
    return answer;
}

int fibo(int n) {
   if (n < 2) return n;
   else if (arr[n] != 0) return arr[n];
   else arr[n] = (fibo(n - 2) + fibo(n - 1)) % 1234567;
}
