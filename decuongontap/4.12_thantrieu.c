#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void nhap(int a[], int n) {
	for (int i = 0; i<n; i++) {
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]); 
	} 
} 

void chen(int a[], int n, int x, int vitri) {
	for (int i = n; i>vitri-1;i--) {
		a[i] =  a[i-1];  
	} 
	a[vitri -1] = x; 
} 

void xuat (int a[], int n) {
	for (int i = 0;i<=n; i++) {
		printf("%d\n", a[i]); 
	} 
} 

int main() {
	int n;
	printf("So phan tu: "); 
	scanf("%d", &n); 
	int a[n];
	nhap(a,n);
	int x, vitri;
	printf("Gia tri can chen: ");
	scanf("%d", &x);
	printf("Vi tri chen: ");
	scanf ("%d", &vitri);
	chen(a,n,x,vitri);
	xuat(a,n); 
    return 0;
}

