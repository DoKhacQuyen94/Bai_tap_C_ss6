#include<stdio.h>
int main(){
    int number;
    int sum = 0;
    printf("Nhập 5 số nguyên bất kì: \n");
    for (int i=1;i<=5;i++){
        printf("Nhập số nguyên thứ %d: \n",i);
        scanf("%d",&number);
        if (number %2 != 0){
            sum += number;
        }  
    }
    printf("Tổng số lẻ là: %d",sum);
    return 0;
}