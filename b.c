#include<stdio.h>
int main()
{
int N;

printf("Enter the Number of element (2<N<100):");
scanf("%d",&N);

if(N<2||N>=100){
    printf("Invalid input");
    return 1;
}

int arr[N];
printf("Enter the no. of elements:");
for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);

}

for(int i=0;i<N-1;i++){
    for(int j=i+1;j<N;j++){
        if(arr[i]<arr[j]){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
}
printf("Sorted array in descending order:");
for(int i=0;i<N;i++){
printf("%d ",arr[i]);
}
printf("\n");
return 0;
}