#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter the no. of rows:");
    scanf("%d",&row);

    for(i=1;i<=row;i++){
        for(j=1;j<=1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}