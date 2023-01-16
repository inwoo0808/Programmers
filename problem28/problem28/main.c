//
//  main.c
//  problem28
//
//  Created by 오인우 on 2021/08/09.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* solution(int a, int b)
{
// 2016년 1월1일 기준으로 요일을 순서대로 배열
    const char* days[] = { "FRI","SAT","SUN","MON","TUE","WED","THU" };
    
    // 1월 31일, 2월29일, 3월31일, 4월30일 ~
    int month[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
    
    int cnt = 0;
    
    // 월의 날짜 더하기
    for (int i = 0; i < a - 1; i++)
    {
        cnt += month[i];
    }

    cnt += b - 1;

    return days[cnt % 7];
    
}
