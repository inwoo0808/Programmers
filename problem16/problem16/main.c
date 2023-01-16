//
//  main.c
//  problem16
//
//  Created by 오인우 on 2021/07/27.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)calloc(n * (n+1) / 2, sizeof(int));
    int i, j; //반복문 변수
    int x = - 1, y = 0; //배열 좌표
    int num = 1; //배열의 숫자
    int flag = 0; //이동 방향 결정
    int map[1000][1000] = {0}; //달팽이 채우기
    int ans = 0; //answer의 index
    
    j = n;
    while(j != 0)
    {
        for(i = 0; i < j; i++)
        {
            if(flag % 3 == 0)
                x++;
            else if(flag % 3 == 1)
                y++;
            else{
                x--;
                y--;
            }
            
            map[x][y] = num++;
        }
        flag++;
        j--;
    }
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(map[i][j] == 0)
                break;
            answer[ans++] = map[i][j];
        }
    }
    
    return answer;
}
