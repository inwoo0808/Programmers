//
//  main.c
//  problem25
//
//  Created by 오인우 on 2021/08/06.
//

char* solution(const char* phone_number) {
   int len = strlen(phone_number);
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char *answer = (char *)malloc(20);
    strcpy(answer, phone_number);
    for (int i = 0; i < len - 4; i++)
    {
        answer[i] = '*';
    }
    return answer;
}
