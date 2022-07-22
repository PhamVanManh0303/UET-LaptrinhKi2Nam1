#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main() {
	
	// cau a 
	int *a;
	a = (int*)malloc(50*sizeof(int)); 
	for (int i = 0; i < 50; i += 5) {
		a[i] = 9; 
	} 
	for (int i = 1; i < 50; i += 5) {
		a[i] = 120; 
	} 
	int b = 1; 
	for (int i = 2; i < 50; i += 5) {
		a[i] = b;
		b++; 
	} 
	for (int i = 3; i < 50; i += 5) {
		a[i] = 61; 
	}  
	for (int i = 4; i < 50; i += 5) {
		a[i] = a[i-4]*a[i-2]; 
	} 
	for (int i = 0; i < 50; i += 5) {
		printf("%d %c %d %c %d\n", a[i], a[i+1], a[i+2], a[i+3], a[i+4]); 
	} 
	 
	
	int *d; 
	d = (int*)malloc(400*sizeof(int)); 
	for (int i = 0; i < 400; i++) {
		d[i] = 0; 
	} 
	for (int i = 0; i < 50; i++) {
		int c = 8*i+7; 
		while(a[i] > 0) { 
			d[c] = a[i] % 2;
			a[i] /= 2;
			c--; 
		} 
	} 
	printf("\n\n\n"); 
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 8; j++) {
			printf("%d", d[8*i+j]);
		} 
		printf(" ");
		if (i % 5 == 4) printf("\n"); 
	} 
	
	// cau b
	int luaChon;
	do {
		printf("\n1. Tuyen 1: 32kb/s"); 
		printf("\n2. Tuyen 2: 64kb/s");
		printf("\n3. Tuyen 3: 16kb/s");
		printf("\n0. Thoat"); 
		printf("\nLua chon: "); 
		scanf("%d", &luaChon);
		switch(luaChon) {
			case 1: {
				float t = (float) 400/(32*1000);
				printf("%0.5f", t); 
				break;
			} 
			case 2: {
				float t = (float) 400/(64*1000);
				printf("%0.5f", t); 
				break;
			} 
			case 3: {
				float t = (float) 400/(16*1000);
				printf("%0.5f", t); 
				break;
			} 
			default : {
				printf("Nhap lai"); 
				break;
			} 
			
		} 
	} while (luaChon != 0); 
	
	// cau c
	int dem = 0; 
	for (int i = 0; i < 400; i++) {
		if (d[i] == 1) dem ++; 
	} 
	printf("\nSo bit 1 ban dau: %d", dem);
	if (d[0] == 0) {
		d[0] = 1; 
	} else d[0] = 0; 
	if (d[399] == 0) {
		d[399] = 1; 
	} else d[399] = 0;
	
	dem = 0; 
	for (int i = 0; i < 400; i++) {
		if (d[i] == 1) dem ++; 
	} 
	printf("\nSo bit 1 luc sau: %d", dem); 
	
	for (int i = 0; i < 50; i++) {
		a[i] = d[8*i]*pow(2,7) +  d[8*i+1]*pow(2,6) + d[8*i+2]*pow(2,5) + d[8*i+3]*pow(2,4) + d[8*i+4]*pow(2,3) + d[8*i+5]*pow(2,2) + d[8*i+6]*pow(2,1) + d[8*i+7]*pow(2,0);
	} 
	printf("\n"); 
	for (int i = 0; i < 50; i += 5) {
		printf("%d %c %d %c %d\n", a[i], a[i+1], a[i+2], a[i+3], a[i+4]); 
	} 
	
	free (a);
	free(d); 
    return 0;
}

