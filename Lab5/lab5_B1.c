#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h> 
float random( float min, float max )
{
    float scale = rand() / (float) RAND_MAX; /* [0, 1.0] */
    return min + scale * ( max - min );      /* [min, max] */
}

int main() {
	srand((int)time(0));
	int n;
	scanf("%d", &n);
	float diem[n];
	for (int i = 0; i < n; i++) {
		diem[i] = random(0,10); 
	} 
	
	// in ra min max 
	float min = diem[0], max = diem[0]; 
	for (int i = 0; i < n; i++) {
		if (diem[i] < min) {
			min = diem[i]; 
		} 
		if (diem[i] > max) {
			max = diem[i]; 
		}
	} 
	printf("Diem lon nhat: %0.2f", min);
	printf("\nDiem nho nhat: %0.2f\n", max); 
	
	// tong C+
	float sum = 0; 
	for (int i = 0; i < n; i++) {
		if (diem[i] >= 6.50 ) {
			sum += diem[i]; 
		} 
	}  
	printf("Tong diem tu C+ tro len: %0.2f", sum); 
    return 0;
}

