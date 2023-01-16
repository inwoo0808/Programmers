//
//  main.c
//  problem4
//
//  Created by 오인우 on 2021/07/18.
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * numbers_len * 10);

    int a[201] = {0};
    int count = 0;

    for(int i = 0 ; i < numbers_len - 1 ; i++)
    {
        for(int j = i + 1 ; j < numbers_len; j++)
        {
            a[numbers[i] + numbers[j]]++;
        }
    }

    for(int k = 0; k <= 200; k++)
    {
        if(a[k] != 0){
            answer[count++] = k;
        }
    }

    return answer;
}
