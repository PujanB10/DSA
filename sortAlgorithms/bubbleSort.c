#include<stdio.h>

void bubbleSort(int arr[], int N){
    int temp;
    for(int i=0; i<N-1; i++){
        for(int j=0; j < N-i-1; j++){
            temp = arr[j];
            if(arr[j]>arr[j+1]){
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int num,n;
    printf("Enter the number of elements to be sorted::");
    scanf("%d",&num);
    int arr[num];
    for(int i=0; i<num; i++){
        printf("Elements at index %d::",i);
        scanf("%d",&arr[i]);
    }
    n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,n);
    for(int j=0; j<n; j++){
        printf("%d \t",arr[j]);
    }
}