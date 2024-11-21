#include <stdio.h>

int main(){
	float toan, van, anh;
	printf("Moi ban nhap vao diem toan ");
	scanf("%f", &toan);
	printf("Moi ban nhap vao diem van ");
	scanf("%f", &van);
	printf("Moi ban nhap vao diem anh ");
	scanf("%f", &anh);
	float tong = toan + van + anh;
	float tb = tong / 3;
	printf("tong diem ba mon cua ban la: %.2f \n", tong);
	printf("diem trung binh ba mon cua ban la: %.2f", tb);
	return 0;
}
