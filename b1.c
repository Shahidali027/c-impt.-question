#include<stdio.h>
int main()
{
    int N;
    printf("Enter non negative no.");
    scanf("%d",&N);

if(N<0||N>10000){
    printf("invalid no.");
    return 1;
}
 long long result =1;
for(int i=1;i<=N;i++){
 result = result*i;  

}
printf("factorial of %d is %lld ",N,result);
return 0;
}