// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.


#include <stdio.h>
#include <stdlib.h>

void thongtinmonhoc() {
	char ten[50], ma[20];
	int tinchi;

	printf("Nhap ten mon hoc: \n");
	scanf("%s", ten);
	printf("Nhap ma mon hoc: \n");
	scanf("%s", ma);
	printf("Nhap so tin chi: \n");
	scanf("%d", tinchi);
	printf("\n Ten mon: %s\nMa mon: %s\nHoc phi: %d VND\n",ten, ma,tinchi, tinchi*500000);

	return;
}
  
void tinhtongsole() {
	printf("moi nhap so le: \n");
}

void thongtindiemlab() {
	printf("nhap so sinh vien: \n");
}
 
void lapChucNang(int chonChucNang) {
	int tiepTuc = 1;
	while (tiepTuc == 1) {
		switch (chonChucNang) {
		case 1:
			thongtinmonhoc();
			break;
		case 2:
			tinhtongsole();
			break;
		case 3:
			thongtindiemlab();
			break;
		case 0:
		
			break;
		default:
			printf("Hay chon lai [1-3] \n");

		}
		printf("\nTiep tuc chuc nang nay? [1=Co |  0-Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}
}

int main() {
	int chonchucnang;
	do {
		printf("- - - M e n u - - -");
		printf("\n");
		printf("1.thong tin moc hoc");
		printf("\n");
		printf("2.tinh tong so le");
		printf("\n");
		printf("3.thong tin diem lab");
		printf("\n");
		printf("0.thoat");
		printf("\n");
		printf("vui long chon chuc nang: ");
		scanf("%d", &chonchucnang);

		lapChucNang(chonchucnang);
		

	} while (chonchucnang != 0);
	return 0;
}




// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Dung "Solution Explorer window" de them/quan ly cac files
//   2. Dung "Output window" de kiem tra "build output" va "cac thong bao khac"
//   3. Dung "Error List window" de xem loi
//   4. Chon "Project > Add New Item" de tao moi file code,
//      hoac "Project > Add Existing Item" de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//      chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//      bam phim chuot phai vao "Solution" > chon "Open Folder in File Explorer"

// GV: AnhTT184