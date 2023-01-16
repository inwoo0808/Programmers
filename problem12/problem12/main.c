//
//  main.c
//  problem12
//
//  Created by 오인우 on 2021/07/25.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    int N = x;
    
    while(N > 0)
    {
        sum += N % 10;
        N /= 10;
    }
    
    if(x % sum == 0)
        answer = true;
    else
        answer = false;
    
    return answer;
}

