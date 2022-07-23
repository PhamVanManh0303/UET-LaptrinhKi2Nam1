#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// voi cac so nho hon 4000 
/*
I = 1
V = 5
X = 10
L = 50
C = 100
D = 500
M = 1000
*/

void chuyensanglama(int n) {
	int a[100];
	int i = 0;
	int m = n;
	b = 1000;
	c = 500; 
	while (m > 0) {
		a[i] = m / b;
		m = m-m*a[i]/b;
		if (b / 2 == c) {
			b = b/2;
			c = c/10; 
		} else {
			if (b = 10*c) {
				b = b/5; 
			} 
		}
		i++; 
	} 
	for (int j = 0; j < i; j++) {
		for (d = 0; d < a[j]; ) 
	} 
} 

int main() {
    return 0;
}

