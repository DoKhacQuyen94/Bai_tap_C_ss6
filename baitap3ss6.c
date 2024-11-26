#include<stdio.h>
int main(){
    int password = 94;
    int input;
    do{
        printf("Nhập mật khẩu: ");
        scanf("%d",&input);
        if (input == password){
            printf("Bạn đã nhập đúng mật khẩu \n");
            break;
        }else{
            printf("Bạn Nhập sai mật khẩu rồi \n");
        }
    }while(input != password );
    
    return 0;
}