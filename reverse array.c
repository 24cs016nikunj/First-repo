#include<stdio.h>

int main()
{
    int n,i;
    printf("give array size");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<=n-1;i++)
    {
        printf("your %d st element",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        printf("%d",arr[n-1-i]);
    }

}
