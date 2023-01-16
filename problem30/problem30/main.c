//
//  main.c
//  problem30
//
//  Created by 오인우 on 2021/08/11.
//


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
// skill_trees_len은 배열 skill_trees의 길이입니다.
int solution(const char* skill, const char* st[], size_t skill_trees_len) {
    int answer = 0;
    int cnt = 1;
    int skills[26];
    
    for(int i = 0; i < 26; i++)
        skills[i] = 0;
    
    for(int i = 0; skill[i] != NULL; i++){
        skills[skill[i] - 'A'] = cnt++;
    }
    for(int i = 0; i < skill_trees_len; i++){
        cnt = 1;
        bool flag = true;
        
        for(int j = 0; st[i][j] != NULL; j++){
            if(!skills[st[i][j] - 'A'])
                continue;
            if(skills[st[i][j] - 'A'] == cnt)
                cnt++;
            else {
                flag = false; break;
                
            }
        }
    if(flag)
        answer++;
    }
    return answer;
}
