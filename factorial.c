#include<stdio.h>

int factorial(int n){
    if(n==1 ||n==0){
        return 1;  //for stopping the code
    }
    int result=0;
    result=factorial(n-1)*n;
    return result;
}

int main()
{
    int x;
    printf("Enter number");
    scanf("%d",&x);
    printf("%d",factorial(x));

}