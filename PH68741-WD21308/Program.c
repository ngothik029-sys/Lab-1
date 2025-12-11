// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.


#include <stdio.h>

void Thongtinthucung() {
    char ma[20];
    char ten[50];
    int namsinh;
    int tuoi;
    int namHienTai = 2025;

    printf("Nhap ma thu cung: ");
    scanf("%s", ma);

    printf("Nhap ten thu cung: ");
    scanf("%s", ten);

    printf("Nhap nam sinh cua thu cung: ");
    scanf("%d", &namsinh);


    tuoi = namHienTai - namsinh;


    printf("Thong tin thu cung\n");
    printf("Ma thu cung: %s\n", ma);
    printf("Ten thu cung: %s\n", ten);
    printf("Nam sinh: %d\n", namsinh);
    printf("Tuoi cua thu cung: %d\n", tuoi);

    return 0;

}

void Tinhtong() {
    int n;
    int tong = 0;

    do {
        printf("Nhap so nguyen duong n (n > 3): ");
        scanf("%d", &n);
    } while (n <= 3);

    for (int i = 1; i <= n; i += 2) {
        tong += i;
    }
    printf("\nTong cac so le tu 1 den %d la: %d\n", n, tong);

    if (n % 5 == 0) {
        printf("So %d chia het cho 5.\n", n);
    }
    else {
        printf("So %d KHONG chia het cho 5.\n", n);
    }

    return 0;

}

void Thongtincuahang() {
    int n;
    float cannang[1000];
    do {
        printf("Nhap so luong thu cung: \n");
        scanf("%d", &n);
    } while (n <= 0);


}


void lapChucNang(int chonChucNang) {
    int tiepTuc = 1;

    while (tiepTuc == 1) {
        switch (chonChucNang) {
        case 1:
            Thongtinthucung();
            break;
        case 2:
            Tinhtong();
            break;
        case 3:
            Thongtincuahang();
            break;
        case 0:
            return;
        default:
            printf("Hay chon lai [1-3]\n");
        }

        printf("\nTiep tuc chuc nang nay? [1=Co | 0=Khong]: ");
        scanf("%d", &tiepTuc);
        system("cls");
    }
}


int main()
{
    int chonChucNang;
    do {
        printf("- - - Menu - - -\n");
        printf("1.Thong tin thu cung\n");
        printf("2.Tinh tong\n");
        printf("3.Thong tin cua hang\n");
        printf("0.Thoat\n");
        printf("Vui long chon chuc nang: ");
        scanf("%d", &chonChucNang);

        lapChucNang(chonChucNang);
    } while (chonChucNang != 0);
    return 0;

}




//#include <stdio.h>
//
//int main()
//{
//    printf("Hi there!\n");
//}

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