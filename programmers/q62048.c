#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    } 
    return a;
}

long long solution(long long w, long long h) {
    long long answer = 1;
    long long x = 0;
    long long s = 0;
    
    if (w < h) {
        long long temp = w;
        w = h;
        h = temp;
    } else if (w == h) {
        return w * h - w;
    }

    x = gcd(w, h);
    s = w + h - x;
    
    answer = (w * h) - s; 
    return answer;
}
