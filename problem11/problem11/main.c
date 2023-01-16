//
//  main.c
//  problem11
//
//  Created by 오인우 on 2021/07/25.
//

#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    
    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
