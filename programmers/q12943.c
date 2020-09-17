#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(long num) {
    int cnt = 0;
    
    if (num == 1) return 0;
    while (num != 1 && cnt < 500) {
        if (num % 2 == 0) num /= 2;
        else num = (num * 3) + 1;
        
        cnt++;    
        if (num == 1) return cnt;
    }

    return -1;
}
