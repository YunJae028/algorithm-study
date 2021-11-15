// 비트연산자를 통해 문자의 대소문자 바꾸기
// 왼쪽 6번째 비트값이 0 이면 대문자, 1이면 소문자
// 왼쪽 6번째 비트값이 0 -> 1, 1 -> 0

#include<stdio.h>
#include<string.h>

char *toggleCase(char *a){
    for(int i=0; a[i]!='\0'; i++){
        a[i] ^= 32;
    }
    return a;
}

int main(){
    char str[] = "cHerY";
    printf("Toggle case : %s\n", toggleCase(str));
    printf("Orginal case : %s", toggleCase(str));
    return 0;
}