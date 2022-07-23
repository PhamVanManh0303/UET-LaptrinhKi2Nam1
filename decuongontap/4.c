#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

void sapxep(int *a, int n) {
    for (int i = 0; i<n; i++) {
        for (int j = i+1; j<n; j++) {
            if (*(a+i) > *(a+j)) {
                swap((a+i),( a+j));
            }
        }
    }
}
int main() {
	int n;
	scanf("%d", &n); 
	int a[100]; 
	for (int i = 0; i<n; i++) scanf("%d", &a[i]);
	sapxep(a,n);
	for (int i = 0; i<n; i++) printf("%d", a[i]); 
    return 0;
}

