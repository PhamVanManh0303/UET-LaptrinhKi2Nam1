#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void swap(double *a, double *b) {
	double temp = *a;
	*a =*b;
	*b = temp; 
} 

void Nhap(double *p, int n) {
	for (int i = 0; i < n; i++) {
		scanf("%lf", &p[i]); 
	} 
} 

void Xuat(double *p, int n) {
	printf("\nMang la: "); 
	for (int i = 0; i < n; i++) {
		printf("%lf ", p[i]); 
	} 
}
double *Max(double *p, int n) {
	if (n == 0) {
		return NULL; 
	} else {
		double max = p[0];
		int index = 0; 
		 
		for (int i = 0; i < n; i++) {
			if (p[i] > max) {
				max = p[i];
				index = i; 
			} 
		}
		double *a;
		a = &p[index];
		return a; 
	} 
} 

void SapXep1(double *p, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (p[i] > p[j]) {
				swap(&p[i], &p[j]); 
			} 
		} 
	} 
} 

void SapXep2(double *p, int n) {
	
	int i, j, min_idx;
	for (i = 0; i < n - 1; i++) {
		min_idx = i;
		for (j = i + 1; j < n; j++)
		if (p[j] > p[min_idx])
			min_idx = j;
		swap(&p[min_idx], &p[i]);
	}
} 

void Xoa(double *p, int *n, double x) {
	int index = 0 ;
	int check = 0; 
	for (int i = 0; i < *n ; i++) {
		if (p[i] == x) {
			index = i; 
			check ++; 
		} 
	} 
//	printf("\n%d\n", index); 
	if (check != 0) {
		for (int i = index; i < *n - 1; i++) {
			p[i] = p[i+1];  
		} 
		--*n;
	} else printf("\nKhong co so de xoa\n"); 
} 

void Chen(double *p, int *n, int vt, double x) {
	for (int i = *n; i > vt; i--) {
		p[i] = p[i-1]; 
	} 
	p[vt] = x;
	++*n; 
} 

void XoaTrung(double *p, int *n) {
	for (int i = 0; i < *n; i++) {
		for (int j = i + 1; j < *n; j++) {
			if (p[j] == p[i]) {
				Xoa(p,n,p[j]); 
			}
		} 
	} 
} 

int main() {
	double *p;
	int n;
	scanf("%d", &n);
	p = (double*)malloc (n*sizeof(double));
	Nhap(p,n);
	Xuat(p,n);
	
	double *x = Max(p,n);
	printf("\nMax la %lf", *x); 
	
	//sap xep 
	printf("\nSau tang dan:");
	SapXep1(p,n);
	Xuat(p,n); 
	printf("\nSau giam dan:");
	SapXep2(p,n);
	Xuat(p,n);
	
	// xoa 
	double y; 
	printf("\nNhap so can xoa: ");
	scanf("%lf", &y); 
	Xoa(p,&n,y); 
	Xuat(p,n); 
	
	// chen
	double z; 
	int vt; 
	printf("\nNhap so can chen: ");
	scanf("%lf",&z);
	printf("\nNhap vi tri can chen: ");
	scanf("%d", &vt); 
	Chen(p,&n,vt,z);
	Xuat(p,n);
	
	// xoa trung
	printf("\nSau khi xoa trung nhau:"); 
	XoaTrung(p,&n); 
	Xuat(p,n); 
	free(p); 
    return 0;
}


