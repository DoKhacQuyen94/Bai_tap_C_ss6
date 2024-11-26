#include<stdio.h>
int main(){
    int number;
    int soChan,soLe;
    printf("Nhập 5 số nguyên bất kì: \n");
    for (int i=1;i<=5;i++){
        printf("Nhập số nguyên thứ %d: \n",i);
        scanf("%d",&number);
        if (number %2 != 0){
            soLe += 1;
        }else if(number %2 ==0){
            soChan +=1;
        }else{
            printf("Không phải số chẵn hoặc số lẻ \n");
        }     
    }
    printf("Số lượng số chẵn là: %d \n",soChan);
    printf("Số lượng số lẻ là: %d \n",soLe);
    return 0;
}