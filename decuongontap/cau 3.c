#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

float swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

void sapxep(float *p,int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (*(p+i) < *(p+j)) {
                swap(p+i,p+j);
            }
        }
    }
}

int main() {
	int n;
	scanf("%d", &n);
	float a[100]; 
	for (int i = 0; i<n; i++) scanf("%f", &a[i]); 
	sapxep(a,n); 
	for (int i = 0; i<n; i++) printf("%0.2f ", a[i]); 
    return 0;
}

