#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int soNT(int n) {
    int count = 0;
    for (int i = 1; i<=n; i++) {
        if (n % i == 0) {
            count ++;
        }
    }
    if (count == 2) return 1;
    else return 0;
}

int a[1000];

void phantich(int n) {
    int j = 0;
    for (int i = 1; i<=n; i++) {
        if (n%i == 0 && soNT(i) == 1) {
            a[j] = i;
            j++;
        }
    }
    for (int i = 0; i<j; i++) {
        if (i != j-1) printf("%d, ", a[i]);
        else printf("%d", a[i]);
    }
}


int main() {
	int n;
	scanf("%d", &n); 
	phantich(n); 
    return 0;
}

