#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

const char* weekdays[7]={"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
int month[12]={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

char* solution(int a, int b) {
    char* answer = (char*)malloc(sizeof(char *));
    int sum = 0; 
    int day = 0;
    for (int i = 0; i < a; i++) {
        sum += month[i];
    }

    sum -= month[a - 1] - b;
    if ((day = (sum % 7) - 1) == -1) day = 6;
    answer = weekdays[day];

    return answer;
}
