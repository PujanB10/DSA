#include<stdio.h>


void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int lpointer = low;
    int rpointer = high;
    while(lpointer<rpointer){
        while(arr[lpointer] <= pivot){
            lpointer++;
        }
        while(arr[rpointer] > pivot){
            rpointer--;
        }
        if(lpointer<rpointer){
            swap(&arr[lpointer],&arr[rpointer]);
        }
    }
    arr[low] = arr[rpointer];
    arr[rpointer] = pivot;
    return rpointer;

}

void quickSort(int arr[],int low,int high){
    int pivot;
    if(low < high){
    pivot = partition(arr,low,high);
    quickSort(arr,low,pivot-1);
    quickSort(arr,pivot+1,high);
    }
}


int main(){
    int high;
    printf("Enter the number of elements::");
    scanf("%d",&high);
    int arr[high];
    int low= 0;
    for(int i=0;i<high;i++){
        printf("Element %d::",i+1);
        scanf("%d",&arr[i]);
    }
    high--;
    quickSort(arr,low,high);
    for(int i=0;i<=high;i++){
        printf("%d\t",arr[i]);
    }
}