//
//  main.c
//  problem23
//
//  Created by 오인우 on 2021/08/03.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len) {
    int answer = 0;
    int gcd = 1;
    
    for (int i=0; i < arr_len - 1; i++){
        int a = arr[i];
        int b = arr[i + 1];
        
        if (a>b){
            int t;
            t=a;
            a=b;
            b=t;
        }
        
        for (int j = 1; j < b; j++){
            if (a % j == 0 && b % j == 0) {
                gcd = j;
            }
        }
        arr[i + 1] = a * b / gcd;
    }
    answer = arr[arr_len-1];

    return answer;
}
