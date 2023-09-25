#include "stdio.h"
int main() {
    int a, b, min, max, i;
    int tong = 0;
    printf("num1  =");
    scanf("%d", &a);
    printf("num2 =");
    scanf("%d", &b);
    // Xác định số lớn là max, số bé là min
    if(a == b){
        printf("nhap a khac b");
    }else{
        if(a<b){
            min = a;
            max = b;
        } else{
            min = b;
            max = a;
        }
    }
    // tìm tổng caác số lẻ
    for(i=min; i<=max; i++)
    {
        if(i%2 == 1)
        {
            tong = tong + i;
        }
    }
    printf("%d",tong);
    return 0;
}