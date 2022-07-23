#include<stdio.h>

void phantich(unsigned int n) {
    unsigned i = 2;
    if (n < 1) printf("Nhap n duong");
    else  if (n == 1) printf("2^0");
    else {
        int count = 0;
        // vong lap in ra luy thua cac so nguyen to
        while(n>1) {
            // bat dau voi i = 2, chia n cho so nguyen to 2 den khi nao khong con 2 trong n thi tang i
            if (n%i == 0) {
                count++;
                if (n == i) { // n = i la ket thuc phep lap
                    printf("%d^%d",i,count);
                }
                n /= i;
            } else {
                if (count > 0) {
                    printf("%d^%d*", i,count);
                    count = 0;
                }
                i++;
            }
        }
    }
}

int main() {
	int n;
	scanf("%d", &n); 
	phantich(n);
	return 0; 
} 
