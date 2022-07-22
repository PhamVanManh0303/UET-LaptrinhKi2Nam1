#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

typedef struct ngaySinh {
	int ngay;
	int thang;
	int nam; 
}ns; 

typedef struct sinhVien {
	char ten[30];
	ns sn;
	float diemLT;
	float diemToan;
	float diemAnh;
	float diemTB; 
}sv; 

void nhap(sv *a, int n) {
	for (int i = 0; i < n; i++) {
		printf("Nhap ten sinh vien: ");
		fflush(stdin);
     	gets(a[i].ten);
		printf("Nhap ngay thang nam sinh: ");
		scanf("%d%d%d",&a[i].sn.ngay, &a[i].sn.thang, &a[i].sn.nam ); 
		printf("Diem lap trinh: ");
		scanf("%f", &a[i].diemLT);
		printf("Diem toan: ");
		scanf("%f", &a[i].diemToan);
		printf("Diem Anh: ");
		scanf("%f", &a[i].diemAnh); 
	} 
} 

float DiemTB(sv a) {
	a.diemTB = (a.diemAnh + a.diemLT +a.diemToan) /3;
	return a.diemTB; 
} 


void inBang() {
	printf("-------------------------------\n");
	printf("Danh sach sinh vien sap xep theo diem tin: \n");
	printf("----------- Thong tin sinh vien ----\n");
	printf("Ho ten \t\t\tNgay sinh \t Tin \t Toan\t Anh\t Trungbinh\t Xep loai \n");
	 
} 
char *xeploai(sv a) {
	if (a.diemTB >= 9) {
		return "Xuat sac"; 
	} else if (a.diemTB >= 8 && a.diemTB < 9) {
		return "Gioi"; 
	} else if (a.diemTB >= 6.5 && a.diemTB < 8) {
		return "Kha"; 
	} else if (a.diemTB >= 5 && a.diemTB < 6.5) {
		return "Trung binh"; 
	} else return  "Yeu";
}

void xuat(sv a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i].diemTB = DiemTB(a[i]); 
		printf("%s\t\t",a[i].ten);
		printf("%d/%d/%d\t", a[i].sn.ngay,a[i].sn.thang, a[i].sn.nam);
		printf(" %0.2f\t", a[i].diemLT); 
		printf(" %0.2f\t", a[i].diemToan);
		printf(" %0.2f\t", a[i].diemAnh);
		printf(" %0.2f\t\t", a[i].diemTB);
		printf("%s\n", xeploai(a[i])); 
	} 
} 

void xuat1sv(sv a) {
	a.diemTB = DiemTB(a); 
	printf("%\ns\t\t",a.ten);
	printf("%d/%d/%d\t", a.sn.ngay,a.sn.thang, a.sn.nam);
	printf(" %0.2f\t", a.diemLT); 
	printf(" %0.2f\t", a.diemToan);
	printf(" %0.2f\t", a.diemAnh);
	printf(" %0.2f\t\t", a.diemTB);
	printf("%s\n", xeploai(a));
} 

sv tim(char *ht, sv *a, int n) {
	int index = 0; 
	for (int i = 0; i < n; i++) {
		if (strcmp(ht,a[i].ten) == 0) {
			index = i; 
		} 
	} 
	return a[index]; 
} 

void HoanVi(sv *a1, sv *a2){
	char s[1000];
	strcpy(s,a1->ten);
	strcpy(a1->ten,a2->ten);
	strcpy(a2->ten,s);
	
	int temp1;
	float temp2; 
	temp1 = a1->sn.ngay;
	a1->sn.ngay = a2->sn.ngay;
	a2->sn.ngay = temp1;
	
	temp1 = a1->sn.thang;
	a1->sn.thang = a2->sn.thang;
	a2->sn.thang = temp1;
	
	
	temp1 = a1->sn.nam;
	a1->sn.nam = a2->sn.nam;
	a2->sn.nam = temp1;
	
	temp2 = a1->diemLT;
	a1->diemLT = a2->diemLT;
	a2->diemLT = temp2;
	
	temp2 = a1->diemToan;
	a1->diemToan = a2->diemToan;
	a2->diemToan = temp2;
	
	temp2 = a1->diemAnh;
	a1->diemAnh = a2->diemAnh;
	a2->diemAnh = temp2;
	
	temp2 = a1->diemTB;
	a1->diemTB = a2->diemTB;
	a2->diemTB = temp2;
} 

void sapXep(sv *a, int n) {
	for (int i = 0; i < n; i++) {
		if (a[i].diemLT < a[i+1].diemLT) {
			HoanVi(&a[i], &a[i+1]); 
		} 
	} 
} 

void xoak(sv *a, int *n, int k) {
	for (int i = k; i < n-1; i++) {
		HoanVi(&a[i], &a[i+1]); 
	} 
	*n--; 
} 

void xoaSV(sv *a, int *n) {
	char s[100];
	fflush(stdin);
    gets(s);
	int index = -1; 
	if (s != NULL) {
		for (int i = 0; i < n; i++) {
			if (strcmp(s,a[i].ten) == 0) {
				index = i; 
			} 
			xoak(a,&n,index);
			*n--; 
		} 
	} 
} 
int main() {
	int n = 2;
	sv a[10];
	nhap(a,n);
	//xuat(a,n);
	sapXep(a,n);
	inBang(); 
	xuat(a,n); 
	
	printf("Tim sinh vien: ");
	char s[100];
	scanf("%[^\n]s", s); 
	sv b = tim(s,a,n);
	xuat1sv(b); 
	
//	FILE *p;
//	p = fopen("Lab12_B2.TXT", "r+"); 
//	if ( p == NULL) {
//		printf("File khong ton tai");
//		return 0; 
//	} 
	
	
    return 0;
}


