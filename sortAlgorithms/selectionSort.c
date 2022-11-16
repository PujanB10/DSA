#include<stdio.h>

void selectionSort(int arr[],int num){
    int temp,index;
    for(int i=0;i<num;i++){
         int smallest = arr[i];
        for(int j=i+1;j<num;j++){
            if(arr[j] <= smallest){
                smallest = arr[j];
                index = j;
        }
    }
        if(smallest != arr[i]){
            temp = arr[i];
            arr[i] = smallest;
            arr[index] = temp;
        }
    }

}


int main(){
    int n;
    printf("Enter the no of elements to sort::");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("element %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,n);
    printf("Sorted elemets::");
    for(int j=0; j<n ; j++){
        printf("%d ",arr[j]);
    }

}