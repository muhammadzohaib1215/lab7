#include<stdio.h>
int main()
{
    int i=0,j=0,last;
    int arr[5];

    printf("Enter 5 integers in an array \n");
    for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
}
last=arr[4];
    for(i=4;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=last;
    printf("Output");
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    printf("\n");




    return 0;
}
