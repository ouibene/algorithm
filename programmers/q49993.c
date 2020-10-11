#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* s;

int find_char(char* skill_tree) {
    int cnt = 0;
    for (int i = 0; i < strlen(skill_tree); i++) {
    	for (int j = 0; j < strlen(s); j++) {
            if (skill_tree[i] == s[j]) {
               if (cnt == j) cnt++;
               else return 0;
            }
        }
    }
    return 1;
}

int solution(const char* skill, const char* skill_trees[], size_t skill_trees_len) {
    int answer = 0;
    
    s = skill;
   	for (int i = 0; i < skill_trees_len; i++) {
       answer += find_char(skill_trees[i]); 
    } 
    
    return answer;
}
