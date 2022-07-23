#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include <time.h> 

float float_rand( float min, float max )
{
    float scale = rand() / (float) RAND_MAX; 
    return min + scale * ( max - min );      
}
void phat_ham(float a[], int n, float m) {
	for (int i = 0; i < n; i++) {
		a[i] = 0; 
	} 
	for (int i = 0; i < n; i++) {
		a[i] = float_rand(0,m); 
	} 
}

void lam_tron(float a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = (int) round(a[i]); 
	} 
} 

void xuat(float a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%0.2f ", a[i]);
	} 
} 

void tinh_tan_suat(float a[], int n) {
	int mark[1000] = {0};
	int max = 0; 
	lam_tron(a,n); 
	for (int i = 0; i < n; i++) {
		mark[(int) a[i]] ++;
		if (max <= a[i]) max = a[i]; 
	} 
	for (int i = 0; i <= max; i++) {
		if (mark[i] != 0) {
			printf("%d %d\n", i, mark[i]); 
		} 
	} 
	 
} 

int main() {
	srand((int)time(0)); 
	int n;
	float m;  
	do {
		printf("Nhap n va m: "); 
		scanf("%d%f", &n, &m); 
	} while (n < 0 || m < 0 || n != (int) n ); 
	float a[100];
	phat_ham(a,n,m);
	lam_tron(a,n); 
	tinh_tan_suat(a,n); 
	xuat(a,n); 
    return 0;
}


