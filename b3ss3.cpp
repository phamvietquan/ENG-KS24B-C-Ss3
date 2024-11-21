#include <stdio.h>

int main(){
	float r;
	printf(" moi ban nhap vao ban kinh hinh tron ");
	scanf("%f", &r);
	float chuvi = 2* 3.14* r;
	float dientich = r * r * 3.14;
	printf(" Chu vi hinh tron la: %.2f \n", chuvi);
	printf(" Dien tich hinh tron la: %.2f", dientich);
	
	return 0;
}
