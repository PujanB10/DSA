#include<stdio.h>

void insertionSort(int arr[], int N){
    int temp,i,j,index;
    for(i=1;i<N;i++){
        temp = arr[i];
        for(int k=i-1; k>=0; k--){
            if(temp < arr[k]){
                arr[k+1] = arr[k];
                index = k;
            }
        }
        arr[index] = temp;
    }
}

int main(){
    int num;
    printf("Enter the number of elements to be sorted::");
    scanf("%d",&num);
    int arr[num];
    for(int i=0; i<num; i++){
        printf("Elements at index %d::",i);
        scanf("%d",&arr[i]);
    }
    insertionSort(arr,num);

    for(int j=0; j<num; j++){
        printf("%d \t",arr[j]);
    }
}