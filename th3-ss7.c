#include<stdio.h>
int main(){
    int a,b,c,interest,moneyReceived ;
	printf("nhap so tien gui:");
	scanf("%d",&a);
	printf("nhap so thang gui:");
	scanf("%d",&b)	;
	printf("nhap lai xuat:");
	scanf("%d",&c);
    interest = a*(c/100)*(b/12);
	moneyReceived=a+interest;
	printf("so tien lai:%.2f\n",interest);
	printf("so tien nhan duoc:%.2f\n",moneyReceived);
	return 0;
}
