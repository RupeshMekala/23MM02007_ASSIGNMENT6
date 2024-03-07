#include<stdio.h>
void fun(int arr[],int n){
    int sum=0,avg;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    avg=sum/n;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>avg)
        {
            printf("%d ",arr[i]);
        }
        
    }
    
    return;  
}
int main(){
    int n;
    printf("Enter number of elements you want to enter: ");
    scanf("%d",&n);
    int arr[20];
    for (int i = 0; i < n; i++)
    {
        printf("Enter digit %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Digits greater than average is: ");
    fun(arr,n);
    
    return 0;
    
}