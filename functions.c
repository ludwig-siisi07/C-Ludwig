#include<stdio.h>
#include<stdbool.h>

bool GreaterNum(int num1, int num2){
    return num1 > num2;
}
int main(){
    int num1 = 0.0;
    int num2 = 0;

    printf("NUM 1: ");
    scanf("%d", &num1);
    printf("NUM 2: ");
    scanf("%d", &num2);

    if(GreaterNum(num1,num2)){
        printf("%d is greater than %d", num1,num2);
    }
    else if(num1 == num2){
        printf("%d is equal to %d", num1 ,num2);
    }
    else{
        printf("%d is less than %d", num1 ,num2);
        
    }

    return 0;
}