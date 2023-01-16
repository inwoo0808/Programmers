//
//  main.c
//  problem24
//
//  Created by 오인우 on 2021/08/06.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;
    int count = 0;
    int i = 0;

    while (s[i++])
        count++;
    i = 0;
    if (count == 4 || count == 6)
    {
        while (s[i])
        {
        if(s[i] < 48 || s[i] > 57)
        {
            answer = false;
            break;
        }
            i++;
        }
    }
    else
        answer = false;
    return answer;
}
