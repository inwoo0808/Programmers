//
//  main.c
//  problem3
//
//  Created by 오인우 on 2021/07/14.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int num = n;
    int remain;

    while (num != 0)
    {
        remain = num % 3;
        answer *= 3;
        answer += remain;
        num /= 3;
    }

    return answer;
}
