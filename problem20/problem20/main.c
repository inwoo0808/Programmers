//
//  main.c
//  problem20
//
//  Created by 오인우 on 2021/07/31.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int max=0;

void oddCheck(char *word,int len , int position) {
    int cnt =1;
    for(int i=1;i<=len;i++)
    {
        if ((position - i < 0) || (position + i >= len))
            break;
        if (word[position - i] == word[position + i])
            cnt += 2;
        else
            break;
    }
    if (cnt > max)
            max = cnt;

}

void evenCheck(char *word,int len ,int position)
{
    int cnt =0;
    for(int i=0;i<len;i++)
    {
        if ((position - i < 0) || (position + i+1 >= len))
            break;
        if (word[position - i] == word[position + i + 1])
            cnt += 2;
        else
            break;
    }
    printf("cnt is %d\n",cnt);
    if (cnt > max)
            max = cnt;

}

int solution(const char* s)
{
    int len = strlen(s);
    max=0;
    for(int i=0;i<len;i++)
    {
        oddCheck(s, len,i);
        evenCheck(s, len, i);
    }
    return max;

}
