#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

typedef struct phanso {
	int tuSo;
	int mauSo; 
}ps; 

void nhap(ps *pS) {
	printf("Nhap tu so: ");
	scanf("%d", &pS->tuSo);
	printf("Nhap mau so: ");
	scanf("%d", &pS->mauSo); 
} 

void xuat(ps pS) {
	printf("%d/%d\n", pS.tuSo,pS.mauSo); 
} 

int UCLN(int a, int b) {
	a = abs(a);
	b = abs(b); 
	while (a != b) {
		if (a > b) {
			a = a - b; 
		} else if (a < b) b = b - a; 
	} 
	return a; 
} 

void rutgon(ps *pS) {
	int a =  UCLN(pS->tuSo,pS->mauSo);
	pS->tuSo = pS->tuSo / a;
	pS->mauSo = pS->mauSo / a; 
} 

ps tong (ps a, ps b) {
	ps c;
	c.mauSo = a.mauSo * b.mauSo;
	c.tuSo = a.tuSo*b.mauSo + a.mauSo*b.tuSo;
	return c; 
} 

ps hieu(ps a, ps b){
	ps c;
	c.mauSo = a.mauSo*b.mauSo;
	c.tuSo = a.tuSo*b.mauSo - a.mauSo * b.tuSo;
	return c;	 
} 

ps tich(ps a, ps b) {
	ps c;
	c.mauSo = a.mauSo * b.mauSo;
	c.tuSo = a.tuSo * b.tuSo;
	return c; 
} 

ps thuong(ps a, ps b) {
	ps c;
	c.mauSo = a.mauSo * b.tuSo;
	c.tuSo = a.tuSo * b.mauSo;
	return c; 
} 
int main() {
	ps a,b;
	nhap(&a);
	nhap(&b);
	
	ps to,hi,ti,th;
	
	to = tong(a,b);
	rutgon(&to); 
	printf("Tong hai phan so: ");
	xuat(to); 
	
	hi = hieu(a,b);
	rutgon(&hi); 
	printf("Hieu hai phan so: ");
	xuat(hi);
	
	ti = tich(a,b);
	rutgon(&ti); 
	printf("Tich hai phan so: ");
	xuat(ti);
	
	th = thuong(a,b);
	rutgon(&th); 
	printf("Thuong hai phan so: ");
	xuat(th);
	
	FILE *p;
	p =  fopen("Lab12_1.TXT", "a+"); 
	if (p == NULL) {
		printf("Loi file"); 
		return 1; 
	} 
	char d = '/', e = '\n'; 
	fprintf(p,"%d",to.tuSo);
	fprintf(p,"%c",d);
	fprintf(p, "%d", to.mauSo);
	fprintf(p, "%c",e); 
	
	fprintf(p,"%d",hi.tuSo);
	fprintf(p,"%c",d);
	fprintf(p, "%d", hi.mauSo);
	fprintf(p, "%c",e); 
	
	fprintf(p,"%d",ti.tuSo);
	fprintf(p,"%c",d);
	fprintf(p, "%d", ti.mauSo);
	fprintf(p, "%c",e); ;
	
	fprintf(p,"%d",th.tuSo);
	fprintf(p,"%c",d);
	fprintf(p, "%d", th.mauSo);
	fprintf(p, "%c",e); 
	
	fprintf(p,"%c", e); 
	fprintf(p,"%c", e); 
	
	fclose(p); 
	 
    return 0;
}


