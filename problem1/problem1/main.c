//
//  main.c
//  problem1
//
//  Created by 오인우 on 2021/07/12.
//

#include <stdio.h>
#include <stdlib.h>

int isPrime(int num)
{
    for(int i = 2; i < num - 1; i++)
        if(num % i == 0)
            return 1;
    
    return 0;
}

int solution(int nums[], int numlen)
{
    int count = 0;
    
    for(int i = 0; i < numlen; i++)
        for(int j = i + 1; j < numlen; j++)
            for(int k = j + 1; k < numlen; k++)
                if(isPrime(nums[i] + nums[j] + nums[k]) == 0)
                    count++;
    
    return count;
                    
}

int main()
{
    int* num;
    int numlen = 0;
    
    scanf("%d", &num);
    
    num = (int*)malloc(sizeof(int*)*numlen);
    
    printf("%d", solution(num, numlen));
}
