#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct Qg {
	char ten[20];
	double GDP;
	int danso;
	int tileCovid; 
}; 

void nhapQG(struct Qg *qg, int n) {
	for (int i = 0; i < n; i++) {
		printf("Nhap ten quoc gia %d: ", i+1);
		fflush(stdin);
     	gets((qg+i)->ten); 
     	printf("GDP: ");
		scanf("%d", &(qg+i)->GDP);
		printf("Dan so: ");
		scanf("%d", &(qg+i)->danso);
		printf("Ti le mac Covid-19: ");
		scanf("%d", &(qg+i)->tileCovid);
		printf("\n");  
	} 
} 

void xuatQG(struct Qg qg[], int i) {
	printf("Quoc gia %s\n", qg[i].ten);
	printf("GDP: %d\n", qg[i].GDP);
	printf("Dan so: %d\n", qg[i].danso);
	printf("Ti le mac covid: %d\n", qg[i].tileCovid);
} 
int main() {
	int n;
	printf("Nhap so quoc gia: ");
	scanf("%d", &n);
	struct Qg *qg;
	qg = (struct Qg*)malloc(sizeof(struct Qg)); 
	nhapQG(qg,n); 
	
	// hien thi quoc gia co GDP thap nhat
	double min = qg[0].GDP; 
	int index = 0; 
	for (int i = 0; i < n; i++) {
		if (qg[i].GDP < min ) {
			index = i;
			min = qg[i].GDP; 
		} 
	} 
	printf("Quoc gia co GDP thap nhat: ");
	xuatQG(qg,index);
	
	// hien thi quoc gia co ti le mac covid cao nhat
	double max = qg[0].tileCovid; 
	index = 0; 
	for (int i = 0; i < n; i++) {
		if (qg[i].tileCovid > max ) {
			index = i;
			max = qg[i].tileCovid; 
		} 
	} 
	printf("Quoc gia co ti le max covid cao nhat: ");
	xuatQG(qg,index);
	 
	
    return 0;
}


