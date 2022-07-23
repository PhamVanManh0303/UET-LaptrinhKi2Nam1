#include<stdio.h>
#include<math.h>

int goodInteger(int n) {
    int a[20];
    int i = 0;
    while (n > 0) {
        a[i] = n % 10;
        n = n/10;
        i++;
    }
    int count = 0;
    for (int j = 0; j < i; j++) {
        if (a[j] == 3 || a[j] == 4 || a[j] == 7) return 0;
        else {
            if (a[j] == 0 || a[j] == 1 || a[j] == 8) {
                count++;
            }
        }
    }
    if (count == i) return 0;
    else return 1;
    
}

int rotatedDigits(int n){
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if(goodInteger(n) == 1) count++;
    }
    return count;
}
int main() {
	/*
    int n;
    scanf("%d", &n);
    int c = rotatedDigits(n);
    printf("%d", c);
    */
    printf("%d\n", goodInteger(37));
    return 0;
}
