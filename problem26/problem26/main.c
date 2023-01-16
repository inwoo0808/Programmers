//
//  main.c
//  problem26
//
//  Created by 오인우 on 2021/08/06.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
 
int solution(int n) {
    int answer;
 
    long long up = 1;
    for(int i = n+2; i<=2*n; i++){
        up *= i;
    }
    
    long long down = 1;
    for(int i = 1; i <= n; i++){
        down *= i;
    }
    answer = up/down;
    return answer;
}
