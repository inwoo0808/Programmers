//
//  main.c
//  problem5
//
//  Created by 오인우 on 2021/07/18.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    while(n > 0)
    {
        answer += n % 10;
        n /= 10;
    }
    
    return answer;
}
