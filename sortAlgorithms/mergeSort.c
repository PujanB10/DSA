#include<stdio.h>

void merge(int arr[], int low, int mid, int high){
    int temp[high];
    int lpointer = low, rpointer = mid, tpointer = low; 
        while(lpointer < mid && rpointer <= high){
            if(arr[lpointer] < arr[rpointer]){
                temp[tpointer] = arr[lpointer];
                tpointer++;
                lpointer++;
            }
            else{
                temp[tpointer] = arr[rpointer];
                tpointer++;
                rpointer++;
            }
        }
        while(lpointer < mid){
            temp[tpointer] = arr[lpointer];
            lpointer++;
            tpointer++;
        }
        while(rpointer <= high){
            temp[tpointer] = arr[rpointer];
            rpointer++;
            tpointer++;
        }

    for(int i = low;i<=high;i++){
        arr[i] = temp[i];
    }
}


void mergeSort(int arr[], int low, int high){
    if(low<high){
        int mid = (low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid+1,high);
    }
}


int main(){
    int n;
    printf("Enter the number of elements ::");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element::",i+1);
        scanf("%d",&arr[i]);
    }
    int low = 0;
    int high = n-1;
    mergeSort(arr,low,high);
    for(int i=0;i<=high;i++){
        printf("%d\t",arr[i]);
    }
}