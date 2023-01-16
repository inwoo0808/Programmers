//
//  main.c
//  problem8
//
//  Created by 오인우 on 2021/07/19.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for(int i = 1; i <= n; i++)
        if(n % i == 0)
            answer += i;
    
    return answer;
}
