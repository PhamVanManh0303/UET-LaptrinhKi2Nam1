#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

struct phanso {
	int tuso;
	int mauso;
};
typedef struct phanso ps;

ps nhapps() {
	ps a;
	printf("Nhap tu so: ");
	scanf("%d", &(a.tuso));
	printf("Nhap mau so: ");
	scanf("%d", &(a.mauso));
	return a;
}

void inps(ps a) {
	if (a.tuso==0) printf("0");
	else if (a.tuso % a.mauso == 0) printf("%d", a.tuso/a.mauso);
	else printf("%d/%d", a.tuso,a.mauso); 
}

int UCLN(int a,int b) {
	if (a < 0) a= -a;
	if (b < 0) b = -b;
	if (a==b) return a;
	else {
		if (a>b) a-=b;
		else b -= a;
	}
	return UCLN(a,b);
}

int BCNN(int a,int b) {
	return a*b/UCLN(a,b);
}

ps rutgon(ps a) {
	if (a.tuso != 0) {
		int c = UCLN(a.tuso,a.mauso);
		a.tuso /= c;
		a.mauso /= c;
		return a;
	}  
}

ps tong(ps a, ps b) {
	ps c;
	int bcnn = BCNN(a.mauso,b.mauso);
	c.mauso = bcnn;
	c.tuso = a.tuso*(bcnn/a.mauso) + b.tuso*(bcnn/b.mauso);
	c = rutgon(c);
	return c;
}

ps hieu(ps a, ps b) {
	ps c;
	int bcnn = BCNN(a.mauso,b.mauso);
	c.mauso = bcnn;
	c.tuso = c.mauso/a.mauso*a.tuso - c.mauso /b.mauso*b.tuso ;
	c= rutgon(c);
	return c;
}

ps tich(ps a, ps b) {
	ps c;
	c.tuso = a.tuso * b.tuso;
	c.mauso = a.mauso * b.mauso;
	c = rutgon(c);
	return c;
}

ps thuong(ps a, ps b) {
	ps c;
	c.tuso = a.tuso * b.mauso;
	c.mauso = a.mauso * b.tuso;
	c = rutgon(c);
	return c;
}
int main() {
	int n;
	do {
		printf("Lua chon:\n");
		printf("1. Rut gon phan so.\n");
		printf("2. Tinh tong.\n");
		printf("3. Tinh hieu.\n");
		printf("4. Tinh tich.\n");
		printf("5. Tinh thuong.\n");
		printf("0. Thoat.\n");
		scanf("%d", &n);
		switch(n) {
			case 1: {
				ps a = nhapps();
				a = rutgon(a);
				printf("Phan so rut gon la: ");
				inps(a);
				break;
			}
			case 2: {
				ps a = nhapps();
				ps b = nhapps();
				printf("Tong: ");
				inps(tong(a,b));
				break;
			}
			case 3: {
				ps a = nhapps();
				ps b = nhapps();
				printf("Hieu: ");
				inps(hieu(a,b));
				break;
			}
			case 4: {
				ps a = nhapps();
				ps b = nhapps();
				printf("Tich: ");
				inps(tich(a,b));
				break;
			}
			case 5: {
				ps a = nhapps();
				ps b = nhapps();
				printf("Thuong: ");
				inps(thuong(a,b));
				break;
			}
		}
		printf("\n\n\n");
	} while(n != 0);
	/*
	ps a = nhapps();
	ps b = nhapps();
	printf("Tong: ");
	inps(tong(a,b));
	printf("\n");
	printf("Hieu: ");
	inps(hieu(a,b));
	printf("\n");
	printf("Tich: ");
	inps(tich(a,b));
	printf("\n");
	printf("Thuong");
	inps(thuong(a,b));
	*/

	return 0;
}

