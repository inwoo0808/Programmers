//
//  main.c
//  problem22
//
//  Created by 오인우 on 2021/08/03.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)calloc(2, sizeof(int));
    int s_len = strlen(s);
    int sum = 0, sub_sum = 0;
    int num_BiTrans = 0;
    int zCount = 0;
    int i;
    
    for (i = 0; i < s_len; i++)
    {
        if (s[i] == '1')
            sum++;
    }
    
    zCount = s_len - sum;
    num_BiTrans++;
    while (sum != 1)
    {
        if (sum % 2 == 0)
            zCount++;
        else if (sum % 2 == 1)
            sub_sum++;
        
        sum /= 2;
        if (sum == 1 && sub_sum != 0)
        {
            sum = ++sub_sum;
            sub_sum = 0;
            num_BiTrans++;
        }
        else if (sum == 1)
        {
            num_BiTrans++;
        }
    }
    
    answer[0] = num_BiTrans;
    answer[1] = zCount;
    return answer;
}
