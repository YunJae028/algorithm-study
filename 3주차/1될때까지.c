#include<stdio.h>
int n,k;
int result;
int main(void){
    scanf("%d %d", &n, &k)
    while(1){
        // N이 K로 나누어 떨어지는 수 될 때까지 빼기
        int target = (n/k) * k;
        result += (n - target);
        n = target;

        if (n<k) break;

        result ++;
        n /= k;
    }

    result += (n-1);
    printf("%d", result);
    return 0;
}