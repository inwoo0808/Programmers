//
//  main.c
//  problem14
//
//  Created by 오인우 on 2021/07/25.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// A_len은 배열 A의 길이입니다.
// B_len은 배열 B의 길이입니다.

int compare(const void *a, const void *b);

int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0;
    int i;
    
    if(A_len != B_len)
        return 0;
    
    qsort(A, A_len, sizeof(int), compare);
    qsort(B, B_len, sizeof(int), compare);
    
    for(i = 0; i < A_len; i++)
        answer += A[i] * B[B_len - i - 1];
    
    return answer;
}

int compare(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    
    if(num1 < num2)
        return -1;
    else if(num1 > num2)
        return 1;
    
    return 0;
}
