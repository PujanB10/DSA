#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *num,total=0;
    printf("Enter the number of elements::");
    scanf("%d",&n);
    num = malloc(sizeof(int)*n);

    for(int i = 1;i<=n;i++){
        printf("Number %d::",i);
        scanf("%d",num+i);
        total += *num+i;
    }

    printf("The total of the numbers is %d",total);
    free(num);

}