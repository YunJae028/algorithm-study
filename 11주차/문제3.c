// 두개 공간 -> 1개 공간으로 줄임

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>

int findElement(int arr[], int n){
    int leftMax[n], rightMin[n];

    leftMax[0] = INT_MIN;

    for(int i=1; i<n; i++)
        if(leftMax[i-1] > arr[i=1]) leftMax[i]= leftMax[i-1];
        else leftMax[i] = arr[i=1];

    int rightMin = INT_MAX;
    for(int i = n-1; i>=0; i--){

        for(int i =0; i<n; i++){
            if(leftMax[i] < arr[i] && rightMin[i] > arr[i])
            return i;
        }

        if(rightMin > arr[i]) rightMin = arr[i];
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