#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int isVisited[200];
int compare(const void *a, const void *b);

int* solution(int numbers[], size_t numbers_len) {
    int* answer = (int*)malloc(sizeof(int) * 200);
    int k = 0;
    
    for (int i = 0; i < numbers_len; i++) {
        for (int j = 0; j < numbers_len; j++) {
           if (i != j && isVisited[numbers[i] + numbers[j]] == 0) {
               isVisited[numbers[i] + numbers[j]] = 1;
               answer[k++] = numbers[i] + numbers[j];
           }
        }
    }
    
    qsort(answer, k, sizeof(int), compare);
    return answer;
}

int compare(const void *a, const void *b) {
   int arg1 = *(int *)a;
   int arg2 = *(int *)b;
    
    if (arg1 > arg2) return 1;
    if (arg1 < arg2) return -1;
    return 0;
}
