#include <stdio.h>

int main(){
   
    float celsius;
        printf(" Moi ban nhap vào nhiet do theo do celsius ");
        scanf("%f", &celsius);
    float fahrenheit = (celsius * 1.8) + 32;
        printf(" Nhiet do theo do Fahrenheit la %.2f", fahrenheit);

    
    return 0;
}

