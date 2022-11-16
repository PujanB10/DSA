#include<stdio.h>


int binarySearch(int n,int arr[],int hi){
    int max = hi;
    int min = 0;
    while(min <= max){
        int mid = ((max + min) / 2);
        int guess = arr[mid];
        if(guess == n){
            printf("Found at index %d\n",mid);
            return 0;
            
        }
        else if(n > guess){
            min = mid+1;
        }
        else if(n < guess){
            max = mid-1;
        } 
    }
    printf("Not found!!\n");
}

int main(){
    int num=9;
    int arr[] = {2,4,6,7,9,10,14};
    printf("Enter the number ranging from 1-10::");
    scanf("%d",&num);
    int high = (sizeof(arr)/sizeof(arr[0]))-1;
    binarySearch(num,arr,high);

}