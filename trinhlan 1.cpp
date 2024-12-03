/*
	MSSV:110124103
	HO TEN:Nguyen Thi Truc Lam
	Lop: DA24TTA
*/
#include"stdio.h"
#include<stdlib.h>
struct hoctap{
	char gio[10];
	float thu2[10];
	float thu3[10];
	float thu4[10];
	float thu5[10];
	float thu6[10];
	float thu7[10];
	float chunhat[10];
};
typedef hoctap HT;

void nhap(HT &a);
float xuat(HT a);
float tong(HT a);
int main()
{
	float kq;
	HT a;
	printf("nhap thoi gian hoc(0 <=gio hoc<=  15.0):");
	nhap(a);
	
	xuat(a);
	
	kq=tong(a);
	printf("\ntong la:%.2f",kq);
	return 0;
}
void nhap(HT &a)
{
	printf("\nthu 2: ");
	fflush(stdin);
	scanf("%f ",&a.thu2);
	gets(a.gio);
	
	printf("\nthu 3: ");
	fflush(stdin);
	scanf("%f ",&a.thu3);
	gets(a.gio);
	
	printf("\nthu 4: ");
	fflush(stdin);
	scanf("%f ",&a.thu4);
	gets(a.gio);
	
	printf("\nthu 5: ");
	fflush(stdin);
	scanf("%f ",&a.thu5);
	gets(a.gio);
	
	printf("\nthu 6: ");
	fflush(stdin);
	scanf("%f ",&a.thu6);
	gets(a.gio);
	
	printf("\nthu 7: ");
	fflush(stdin);
	scanf("%f ",&a.thu7);
	gets(a.gio);

	printf("\nChu nhat: ");
	fflush(stdin);
	scanf("%f ",&a.chunhat);
	gets(a.gio);
	
	
	
	
}
float xuat(HT a)
{
	printf("\nthu 2: %.2f %s",a.thu2,a.gio);
	printf("\nthu 3:%.2f %s",a.thu3,a.gio);
	printf("\nthu 4: %.2f %s",a.thu4,a.gio);
	printf("\nthu 5: %.2f %s",a.thu5,a.gio);
	printf("\nthu 6: %.2f %s",a.thu6,a.gio);
	printf("\nthu 7: %.2f %s",a.thu7,a.gio);
	printf("\nchu nhat: %.2f %s",a.chunhat,a.gio);
}
float tong(HT a)
{
	float tong =a.thu2+a.thu3+a.thu4+a.thu5+a.thu6+a.thu7+a.chunhat;
	return tong;
}

