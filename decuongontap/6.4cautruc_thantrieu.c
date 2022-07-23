#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

struct Hoten {
	char ho[10];
	char tendem[10];
	char ten[10];
};

struct Diem {
	float toan;
	float  van;
	float anh;
	float dtb;
};

struct sv {
	int msv;
	struct Hoten hoten;
	int tuoi;
	struct Diem diem;
};

void nhapHoten( struct Hoten *ten) {
	printf("Nhap ten: ");
	scanf("%s %s %s", ten->ho,ten->tendem,ten->ten); 
}

void nhapDiem (struct Diem *diem) {
	printf("Nhap diem: \n");
	printf("Toan: ");
	scanf ("%f", &diem->toan);
	printf("Van: ");
	scanf("%f", &diem->van);
	printf("Anh: ");
	scanf("%f", &diem->anh);
}

void nhapsv(struct sv sinhvien) {
	printf("Nhap ma sinh vien: ");
	scanf("%d", &sinhvien.msv);
	nhapHoten(&sinhvien.hoten);
	printf("Tuoi: ");
	scanf("%d", &sinhvien.tuoi);
	nhapDiem(&sinhvien.diem);
}

void xuatTen(struct Hoten ten) {
	printf("Ho va ten: ");
	printf("%s %s %s\n", ten.ho,ten.tendem,ten.ten);
}

void xuatDiem(struct Diem diem) {
	printf("Diem:\n");
	printf("Toan: %0.1f\n", diem.toan);
	printf("Van: %0.1f\n", diem.van);
	printf("Anh: %0.1f\n", diem.anh);
}
void xuatDs (struct  sv sinhvien) {
	printf("Ma sinh vien: %d\n", sinhvien.msv);
	xuatTen(sinhvien.hoten);
	printf("Tuoi: %d\n", sinhvien.tuoi);
	xuatDiem(sinhvien.diem);
	printf("\n\n");
}

int main() {
	/*
	printf("Nhap so luong sinh vien: ");
	int n;
	scanf("%d", &n);
	struct sv sinhvien[n];
	for (int i = 0; i<n; i++) {
		nhapsv (sinhvien[i]);
	}
	for (int i = 0; i<n; i++) {
		xuatDs (sinhvien[i]);
	}
	*/
	struct sv sinhvien;
	nhapsv(sinhvien);
	xuatDs(sinhvien); 
	printf("%d", sinhvien.tuoi); 
	return 0;
}

