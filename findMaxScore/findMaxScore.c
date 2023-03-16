/*
프로그램 내용 : 입력받은 값을 배열에 넣고 최대값을 찾는 프로그램
실습일 : 2023.03.07
실습자 : 박현규
학번 : 202111678
*/

#include <stdio.h>

#define MAX_ELEMENTS 5

int find_max_score(int score[], int n) {
    int i, tmp;
    tmp = score[0];
    for (i = 1; i < n; i++) {
        if (score[i] > tmp) {
            tmp = score[i];
        }
    }
    return tmp;
}

int main(void)
{
    int score[MAX_ELEMENTS];
    int i, res;

    for (i = 0; i < MAX_ELEMENTS; i++) {
        printf("Enter the number >>");
        scanf("%d", &score[i]);
    };
    res = find_max_score(score, MAX_ELEMENTS);
    printf("Max number = %d \n", res);
    return 0;
}