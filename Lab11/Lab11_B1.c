#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct sinhvien {
	int msv;
	char ten[30];
	int tuoi;
	double diem; 
}; 


void nhapSV(struct sinhvien *sv, int n) {
	for (int i = 0; i < n; i++) {
		printf("Nhap ma sinh vien %d: ", i+1);
		scanf("%d", &(sv+i)->msv );
		printf("Nhap ten sinh vien %d: ", i+1);
		fflush(stdin);
     	gets((sv+i)->ten); 
		printf("Nhap tuoi sinh vien %d: ", i+1);
		scanf("%d", &(sv+i)->tuoi);
		printf("Nhap diem sinh vien %d: ", i+1);
		scanf("%lf", &(sv+i)->diem); 
		printf("\n\n"); 
	} 
} 

void xuatSV(struct sinhvien sv[], int i) {
	printf("Sinh vien %d:\n", i+1);
	printf("Ma sinh vien: %d\n", sv[i].msv);
	printf("Ten sinh vien: %s\n", sv[i].ten);
	printf("Tuoi sinh vien: %d\n", sv[i].tuoi);
	printf("Diem sinh vien: %0.2lf\n", sv[i].diem); 
} 


int main() {
	struct sinhvien *sv;
	int n = 10; 
	sv = (struct sinhvien*)malloc(sizeof(struct sinhvien)); 
	nhapSV(sv,n); 
	
	// in ra sinh vien co diem cao nhat
	double max = 0;
	int index = 0; 
	for (int i = 0; i < n; i++) {
		if (sv[i].diem > max) {
			index = i;
			max = sv[i].diem; 
		} 
	} 
	printf("Sinh vien co diem cao nhat la: "); 
	xuatSV(sv, index); 
	printf("\n\n"); 
	//in ra sinh vien co ho ten dai nhat
	max = 0;
	index = 0;
	for (int i = 0; i < n; i++) {
		if (strlen(sv[i].ten) > max) {
			max = strlen(sv[i].ten);
			index = i; 
		} 
	} 
	printf("Sinh vien co ten dai nhat la: "); 
	xuatSV(sv, index); 
	printf("\n\n");
	
	// in ra diem trung bình cua 10 sinh vien
	double diemTB, s = 0; 
	for (int i = 0; i < n; i++) {
		s += sv[i].diem; 
	} 
	diemTB = s/10;
	printf("Diem trung binh 10 sinh vien: %0.2lf", diemTB); 
    return 0;
}


