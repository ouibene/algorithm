#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int arg1 = *(int *)a;
    int arg2 = *(int *)b;
    
    if (arg1 > arg2) return 1;
    if (arg1 < arg2) return -1;
    return 0;
}

int compare_desc(const void *a, const void *b) {
    int arg1 = *(int *)a;
    int arg2 = *(int *)b;
    
    if (arg1 > arg2) return -1;
    if (arg1 < arg2) return 1;
    return 0;
}

int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0;
    
    qsort(A, A_len, sizeof(int), compare);
    qsort(B, B_len, sizeof(int), compare_desc);
    
    for (int i = 0; i < A_len; i++) {
       answer += A[i] * B[i];
    }
    
    return answer;
}
