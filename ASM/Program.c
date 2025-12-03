// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

// ==================== CHỨC NĂNG 1 ====================
void kiemtraSoNguyen() {
    float so;
    printf("Moi nhap so: ");
    scanf("%f", &so);

    if (so == (int)so)
        printf("%g la so nguyen\n", so);
    else
        printf("%g khong phai la so nguyen\n", so);

    if (so > 1 && so == (int)so) {
        int sont = (int)so, kiemtra = 1;
        for (int i = 2; i <= sqrt(sont); i++)
            if (sont % i == 0) { kiemtra = 0; break; }

        if (kiemtra) printf("%d la so nguyen to\n", sont);
        else printf("%d khong phai la so nguyen to\n", sont);
    }

    if (so >= 0 && sqrt(so) == (int)sqrt(so))
        printf("%g la so chinh phuong\n", so);
    else
        printf("%g khong phai la so chinh phuong\n", so);
}

// ==================== CHỨC NĂNG 2 ====================

void timUCvaBCcua2so() {
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    if (a == 0 && b == 0) {
        printf("Khong ton tai UC, BC\n");
    }
    else if (a == 0 || b == 0) {
        printf("Khong co BC, UC = %d\n", (a == 0) ? b : a);
    }
    else if (a > 0 && b > 0) {
        int x = a, y = b;   // giữ giá trị gốc
        int bc = a * b;

        while (x != y) {
            if (x > y)
                x = x - y;
            else
                y = y - x;
        }

        printf("UC = %d\n", x);
        printf("BC = %d\n", bc / x);
    }
    else if (a < 0 && b > 0) {
        printf("Khong tinh duoc UC/BC vi a am\n");
    }
}


// ==================== CHỨC NĂNG 3 ====================
void tinhtienquankaraoke() {
    int giobatdau, gioketthuc;
    printf("Gio bat dau: "); scanf("%d", &giobatdau);
    printf("Gio ket thuc: "); scanf("%d", &gioketthuc);

    if (giobatdau < 12 || gioketthuc > 23 || giobatdau >= gioketthuc) {
        printf("Gio bat dau hoac ket thuc KHONG hop le (12-23)\n");
        return;
    }

    int thoigian = gioketthuc - giobatdau;
    float tien = thoigian * 50000;

    if (thoigian > 4) {
        float gialonhon4 = (thoigian - 4) * 50000 * 0.7 + 4 * 50000;
        tien = gialonhon4;
    }

    // giảm 10% nếu giờ rảnh
    if ((giobatdau < 14 || giobatdau >= 17) && thoigian <= 4)
        tien *= 0.9;

    printf("So tien can thanh toan: %.0f\n", tien);
}

// ==================== CHỨC NĂNG 4 ====================
void tinhtiendien() {
    int kwh;
    do {
        printf("Moi nhap so kwh dien: ");
        scanf("%d", &kwh);
        if (kwh < 0) printf("Gia tri khong hop le, nhap lai.\n");
    } while (kwh < 0);

    float tien = 0;
    if (kwh == 0) tien = 0;
    else if (kwh <= 50) tien = kwh * 1.687;
    else if (kwh <= 100) tien = kwh * 1.734;
    else if (kwh <= 200) tien = kwh * 2.014;
    else if (kwh <= 400) tien = kwh * 2.834;
    else tien = kwh * 2.927;

    printf("So tien phai tra: %.3f\n", tien);
}

// ==================== CHỨC NĂNG 5 ====================

void chucnangdoitien() {
    int tien;
    int menhgia[9] = { 500,200,100,50,20,10,5,2,1 };
    int soto[9];

    do {
        printf("Nhap so tien can doi: "); scanf("%d", &tien);
        if (tien <= 0) printf("so tien phai lon hon 0\n");
    } while (tien <= 0);

    int temp = tien;
    for (int i = 0; i < 9; i++) {
        soto[i] = temp / menhgia[i];
        temp %= menhgia[i];
    }

    printf("So tien doi duoc la:\n");
    for (int i = 0; i < 9; i++)
        if (soto[i] > 0)
            printf("%d to %d\n", soto[i], menhgia[i]);
}

// ==================== CHỨC NĂNG 6 ====================
void Xaydungchucnangtinhlaisuatvaynganhangvaytragop() {
    float vay;
    printf("Nhap so tien vay: "); scanf("%f", &vay);
    float goc = vay / 12.0;

    printf("Thang\tTien lai\tTien goc\tTong phai tra\tCon lai\n");
    for (int i = 1; i <= 12; i++) {
        float lai = vay * 0.05;
        float tong = goc + lai;
        vay -= goc;
        printf("%d\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", i, lai, goc, tong, vay);
    }
}

// ==================== CHỨC NĂNG 7 ====================
void Xaydungchuongvaytienmuaxe() {
    float phantram;
    do {
        printf("Nhap so phan tram tien vay (0<phantram<=1): ");
        if (scanf("%f", &phantram) != 1) { // check nhập sai
            while (getchar() != '\n'); continue;
        }
    } while (phantram <= 0 || phantram > 1.0);

    double tien = 500000000;
    double tratruoc = tien * (1 - phantram);
    tien -= tratruoc;
    double goc = tien / 24;

    printf("Tien tra truoc: %.2lf\n", tratruoc);
    printf("Ky\tLai\tGoc\tTong\tCon lai\n");
    for (int i = 1;i <= 24;i++) {
        double lai = tien * 0.072;
        double tong = lai + goc;
        tien -= goc;
        printf("%2d\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", i, lai, goc, tong, tien);
    }
}

// ==================== CHỨC NĂNG 8 ====================
typedef struct {
    char TenSV[50];
    float diemTB;
} SinhVien;

void nhapSinhVien(SinhVien sv[], int* n) {
    printf("Nhap so luong sinh vien: "); scanf("%d", n); getchar();
    for (int i = 0;i < *n;i++) {
        printf("Nhap ten sinh vien %d: ", i + 1);
        fgets(sv[i].TenSV, sizeof(sv[i].TenSV), stdin);
        size_t len = strlen(sv[i].TenSV);
        if (sv[i].TenSV[len - 1] == '\n') sv[i].TenSV[len - 1] = '\0';
        printf("Nhap diem trung binh: "); scanf("%f", &sv[i].diemTB); getchar();
    }
}

void sapXepGiamDan(SinhVien sv[], int n) {
    for (int i = 0;i < n - 1;i++) {
        for (int j = i + 1;j < n;j++) {
            if (sv[i].diemTB < sv[j].diemTB) {
                SinhVien tmp = sv[i]; sv[i] = sv[j]; sv[j] = tmp;
            }
        }
    }
}

void inThongTinSinhVien(SinhVien sv[], int n) {
    printf("\n--- DANH SACH SINH VIEN ---\n");
    for (int i = 0;i < n;i++) {
        printf("Ten: %s\n", sv[i].TenSV);
        printf("Diem: %.2f\n", sv[i].diemTB);
        printf("Hoc luc: ");
        if (sv[i].diemTB >= 9.0) printf("Xuat sac\n");
        else if (sv[i].diemTB >= 8.0) printf("Gioi\n");
        else if (sv[i].diemTB >= 6.5) printf("Kha\n");
        else if (sv[i].diemTB >= 5.0) printf("Trung binh\n");
        else printf("Yeu\n");
    }
}

void sapxepthongtinsinhvien() {
    SinhVien sv[100];
    int n;
    nhapSinhVien(sv, &n);
    sapXepGiamDan(sv, n);
    inThongTinSinhVien(sv, n);
}

// ==================== CHỨC NĂNG 9 ====================
void FPOLY_LOTT() {
    int so1, so2;
    int r1, r2;
    int trung = 0;
    srand(time(NULL));

    do { printf("Nhap so thu nhat (1-15): "); scanf("%d", &so1); } while (so1 < 1 || so1>15);
    do { printf("Nhap so thu hai (1-15): "); scanf("%d", &so2); } while (so2 < 1 || so2>15);

    r1 = rand() % 15 + 1; r2 = rand() % 15 + 1;
    printf("So ban chon: %d - %d\n", so1, so2);
    printf("So may tinh: %d - %d\n", r1, r2);

    if (so1 == r1 || so1 == r2) trung++;
    if (so2 == r1 || so2 == r2) trung++;

    if (trung == 0) printf("Chuc may man lan sau!\n");
    else if (trung == 1) printf("Chuc mung! Trung giai NHI\n");
    else printf("Tuyet voi! Trung giai NHAT\n");
}

// ==================== CHỨC NĂNG 10 ====================
void tinhToanPhanSo() {
    printf("Chua co chuc nang phan so!\n");
}
void lapChucNang(int chonChucNang)
{
    int tiepTuc = 1;
    while (tiepTuc == 1)
    {
        switch (chonChucNang)
        {
        case 1:
            kiemtraSoNguyen();
            break;
        case 2:
            timUCvaBCcua2so();
            break;
        case 3:
            // goi TEN ham CN3
            tinhtienquankaraoke();
            break;
        case 4:
            tinhtiendien();
            break;
        case 5:
            chucnangdoitien();
            break;
        case 6:
            Xaydungchucnangtinhlaisuatvaynganhangvaytragop();
            break;
        case 7:
            Xaydungchuongvaytienmuaxe();
            break;
        case 8:
            sapxepthongtinsinhvien();
            break;
        case 9: FPOLY_LOTT();
            break;
        case 10: tinhToanPhanSo();
            break;
        case 0:
            return;
        default:
            printf("Hay chon lai [1-10]");
            break;
        }

        printf("\n");
        printf("Tiep tuc CN nay? [1=Co | 0=Khong]: ");
        scanf("%d", &tiepTuc);
        system("cls");
    }
}


int main()
{
    int chonChucNang;
    do
    {
        printf("-.-.-.-.-.- M e N u -.-.-.-.-.-");
        printf("\n");
        printf("1.kiemTraSoNguyen");
        printf("\n");
        printf("2.boiChungUocChung ");
        printf("\n");
        printf("3.tinh tien quan karaoke");
        printf("\n");
        printf("4.tinh tien dien");
        printf("\n");
        printf("5.chuc nang doi tien");
        printf("\n");
        printf("6.tinh lai suat vay ngan hang vay tra gop");
        printf("\n");
        printf("7.xay dung chuong tinh vay tien mua xe");
        printf("\n");
        printf("8.sap xep thong tin sinh vien");
        printf("\n");
        printf("9.FPOLY-LOTT");
        printf("\n");
        printf("10.tinh toan phan so");
        printf("\n");
        printf("0. thoat");
        printf("\n");
        printf("vui long chon chuc nang: ");
        scanf("%d", &chonChucNang);
        lapChucNang(chonChucNang);
    } while (chonChucNang != 0);
}







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