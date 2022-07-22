#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct diaChiNguon {
	int ma1;
	int ma2;
	int ma3;
	int ma4; 
}; 

struct diaChiDich {
	int ma1;
	int ma2;
	int ma3;
	int ma4; 
}; 

struct IP {
	short Khac;
	struct diaChiNguon dcn; 
	struct diaChiDich dcd; 
	short doDai;
	char data[1000]; 
}; 
 
int main() {
	struct IP ip1;
	
	// doi khac sang nhi phan  
	ip1.Khac = 165;
	int khac[8]; 
	int m = 165; 
	int c = 7; 
	while(m > 0) { 
		khac[c] = m % 2;
		m /= 2;
		c--; 
	} 
	printf("Khac: "); 
	for (int i = 0; i <8; i++) {
		printf("%d", khac[i]); 
	} 
	printf("\n");
	
	// doi dia chi nguon sang nhi phan 
	ip1.dcn.ma1 = 192;
	ip1.dcn.ma2 = 168;
	ip1.dcn.ma3 = 1;
	ip1.dcn.ma4 = 100;
	
	int m1 = 192;
	int m11[8] = {0};
	c = 7;
	while (m1 > 0) {
		m11[c] = m1 % 2;
		m1 = m1 / 2;
		c--; 
	} 
	
	int m2 = 168;
	int m22[8] = {0};
	c = 7;
	while (m2 > 0) {
		m22[c] = m2 % 2;
		m2 = m2 / 2;
		c--; 
	} 
	
	int m3 = 1;
	int m33[8] = {0};
	c = 7;
	while (m3 > 0) {
		m33[c] = m3 % 2;
		m3 = m3 / 2;
		c--; 
	} 
	
	int m4 = 100;
	int m44[8] = {0};
	c = 7;
	while (m4 > 0) {
		m44[c] = m4 % 2;
		m4 = m4 / 2;
		c--; 
	} 
	
	printf("Dia chi nguon: "); 
	for (int i = 0; i <8; i++) {
		printf("%d", m11[i]); 
	} 
	printf("."); 
	for (int i = 0; i <8; i++) {
		printf("%d", m22[i]); 
	} 
	printf(".");
	for (int i = 0; i <8; i++) {
		printf("%d", m33[i]); 
	} 
	printf(".");
	for (int i = 0; i < 8; i++) {
		printf("%d", m44[i]); 
	} 
	printf("\n");
	
	// doi dia chi dich sang nhi phan 
	ip1.dcd.ma1 = 200;
	ip1.dcd.ma2 = 169;
	ip1.dcd.ma3 = 2;
	ip1.dcd.ma4 = 101;
	
	int d1 = 200;
	int d11[8] = {0};
	c = 7;
	while (d1 > 0) {
		d11[c] = d1 % 2;
		d1 = d1 / 2;
		c--; 
	} 
	
	int d2 = 169;
	int d22[8] = {0};
	c = 7;
	while (d2 > 0) {
		d22[c] = d2 % 2;
		d2 = d2 / 2;
		c--; 
	} 
	
	int d3 = 2;
	int d33[8] = {0};
	c = 7;
	while (d3 > 0) {
		d33[c] = d3 % 2;
		d3 = d3 / 2;
		c--; 
	} 
	
	int d4 = 101;
	int d44[8] = {0};
	c = 7;
	while (d4 > 0) {
		d44[c] = d4 % 2;
		d4 = d4/2;
		c--; 
	} 
	
	printf("Dia chi dich: "); 
	for (int i = 0; i <8; i++) {
		printf("%d", d11[i]); 
	} 
	printf("."); 
	for (int i = 0; i <8; i++) {
		printf("%d", d22[i]); 
	} 
	printf(".");
	for (int i = 0; i <8; i++) {
		printf("%d", d33[i]); 
	} 
	printf(".");
	for (int i = 0; i <8; i++) {
		printf("%d", d44[i]); 
	} 
	printf("\n");
	
	// nhap du lieu cho goi tin
	char a[1000] = "Toi rat thich hoc lap trinh! Con ban thi sao? Hoc ky nay toi se co gang dat diem 10.";
	strcpy(ip1.data,a); 
	// tong do dai goi tin
	ip1.doDai = 8 + 8*4 + 8*4 + sizeof(ip1.data);
	printf("Do dai goi tin: %d", ip1.doDai); 
	
	float time = (float) ip1.doDai / 64000;
	printf("\nThoi gian truyen tin: %0.2f", time);
	
	// bit loi
	m11[0] = 0;
	if (m44[7] == 0) m44[7] = 1;
	else m44[7] == 0;
	
	printf("Dia chi nguon sau khi loi: \n");
	printf("Dang nhi phan: ");
	for (int i = 0; i <8; i++) {
		printf("%d", m11[i]); 
	} 
	printf("."); 
	for (int i = 0; i <8; i++) {
		printf("%d", m22[i]); 
	} 
	printf(".");
	for (int i = 0; i <8; i++) {
		printf("%d", m33[i]); 
	} 
	printf(".");
	for (int i = 0; i < 8; i++) {
		printf("%d", m44[i]); 
	} 
	printf("\n");
	
	m1 = m11[7]*pow(2,0) + m11[6]*pow(2,1) + m11[5]*pow(2,2) + m11[4]*pow(2,3) + m11[3]*pow(2,4) + m11[2]*pow(2,5) + m11[1]*pow(2,6) + m11[0]*pow(2,7); 
	m2 = m22[7]*pow(2,0) + m22[6]*pow(2,1) + m22[5]*pow(2,2) + m22[4]*pow(2,3) + m22[3]*pow(2,4) + m22[2]*pow(2,5) + m22[1]*pow(2,6) + m22[0]*pow(2,7);
	m3 = m33[7]*pow(2,0) + m33[6]*pow(2,1) + m33[5]*pow(2,2) + m33[4]*pow(2,3) + m33[3]*pow(2,4) + m33[2]*pow(2,5) + m33[1]*pow(2,6) + m33[0]*pow(2,7);
	m4 = m44[7]*pow(2,0) + m44[6]*pow(2,1) + m44[5]*pow(2,2) + m44[4]*pow(2,3) + m44[3]*pow(2,4) + m44[2]*pow(2,5) + m44[1]*pow(2,6) + m44[0]*pow(2,7);
	
	ip1.dcn.ma1 = m1;
	ip1.dcn.ma2 = m2;
	ip1.dcn.ma3 = m3;
	ip1.dcn.ma4 = m4;
	
	printf("Dang thap phan: %d.%d.%d.%d", ip1.dcn.ma1,ip1.dcn.ma2,ip1.dcn.ma3,ip1.dcn.ma4); 
    return 0;
}


