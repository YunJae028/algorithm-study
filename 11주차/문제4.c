// 배열의 모든 왼쪽은 자신의 값보다 작고, 모든 오른쪽 값은 자신의 값보다 큰 항목 찾기
// 모든 조건 충족하는 배열 출력

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>

int findElement(int arr[], int n){
    int leftMax[n], rightMin[n];

    leftMax[0] = INT_MIN;

    for(int i=1; i<n; i++)
        if(leftMax[i-1] > arr[i=1]) leftMax[i]= leftMax[i-1];
        else leftMax[i] = arr[i-1];

    int rightMin = INT_MAX;
    for(int i = n-1; i>=0; i--){
        if rightMin[i+1] > arr[i+1]rightMin[i] = arr[i+1];
        else rightMin[i] = rightMin[i+1];

        int sts=0;

        for(int i =0; i<n; i++){
            if(leftMax[i] < arr[i] && rightMin[i] > arr[i])
            printf("%d", i);
            sts =1;
        }

        if(sts == 0)
            printf("-1");
    }

    return -1;

}

int main(){
    int arr[] = {5,1,4,3,6,8,10,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx = findElement(arr, n);

    print("%d", idx);

    return 0;
}