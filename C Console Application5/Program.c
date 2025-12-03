// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>

void kiemtraSoNguyen() {
    float so;
    printf("Moi nhap so: ");
    scanf("%f", &so);

    // kiểm tra số nguyên
    if (so == (int)so) {
        printf("%g la so nguyen\n", so);
    }
    else {
        printf("%g khong phai la so nguyen\n", so);
    }

    // kiểm tra số nguyên tố
    if (so > 1 && so == (int)so) {
        int sont = (int)so;
        int kiemtra = 1;

        for (int i = 2; i <= sqrt(sont); i++) {
            if (sont % i == 0) {
                kiemtra = 0;
                break;
            }
        }

        if (kiemtra == 1)
            printf("%d la so nguyen to\n", sont);
        else
            printf("%d khong phai la so nguyen to\n", sont);
    }

    // kiểm tra số chính phương
    if (so >= 0 && sqrt(so) == (int)sqrt(so)) {
        printf("%g la so chinh phuong\n", so);
    }
    else {
        printf("%g khong phai la so chinh phuong\n", so);
    }
}  // <-- ĐÃ ĐÓNG ĐÚNG HÀM KIEMTRASONGUYEN()

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
void tinhtienquankaraoke() {
    int giobatdau, gioketthuc, thoigian, gioglangla;
    float tien, giangla, gialonhon4;
    const int gio = 4;

    printf("gio bat dau: \n");
    scanf("%d", &giobatdau);
    printf("gio ket thuc: \n");
    scanf("%d", &gioketthuc);

    thoigian = gioketthuc - giobatdau;
    gioglangla = thoigian - 4;

    tien = thoigian * 50000;
    giangla = gioglangla * 50000;

    if (giobatdau >= 12 && gioketthuc <= 23) {

        if (thoigian <= 4 && (giobatdau < 14 || giobatdau >= 17)) {
            printf("so tien can thanh toan la: %g\n", tien);
        }
        else {

            if (thoigian <= 4 && (giobatdau < 14 || giobatdau >= 17)) {
                printf("so tien can thanh toan la: %g\n", tien - (tien * 0.1));
            }
            else {
                gialonhon4 = (gioglangla * 50000) + (giangla - (gioglangla * 0.3));
                printf("so tien can thanh toan la: %g\n", gialonhon4 - (gialonhon4 * 0.1));
            }
        }

    }   // <-- ĐÓNG IF BÊN NGOÀI ĐÚNG CHỖ NÀY
    else {
        printf("Gio bat dau hoac ket thuc KHONG hop le (phai từ 12 đến 23)\n");
    }
}
void tinhtiendien() {
    int kwh;

    do {
        printf("Moi nhap so kwh dien: \n");
        scanf("%d", &kwh);

        if (kwh < 0) {
            printf("Gia tri kwh khong hop le, nhap lai.\n");
        }
        else if (kwh == 0) {
            printf("Khong can tra tien\n");
        }
        else if (kwh > 0 && kwh <= 50) {
            printf("So tien phai tra la: %g\n", kwh * 1.687);
        }
        else if (kwh <= 100) {
            printf("So tien phai tra la: %g\n", kwh * 1.734);
        }
        else if (kwh <= 200) {
            printf("So tien phai tra la: %g\n", kwh * 2.014);
        }
        else if (kwh <= 400) {
            printf("So tien phai tra la: %g\n", kwh * 2.834);
        }
        else {
            printf("So tien phai tra la: %g\n", kwh * 2.927); // sửa 2*927 -> 2.927
        }

    } while (kwh < 0);  // vòng lặp yêu cầu nhập lại khi < 0
} // <-- ĐÓNG ĐÚNG HÀM tinhtiendien()

void chucnangdoitien() {
    int tien;
    int menhgia[9] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    int soto[9];

    do {
        printf("Moi nhap so tien: \n");
        scanf("%d", &tien);

        if (tien <= 0) {
            printf("So tien phai lon hon 0, nhap lai!\n");
            continue; // quay lại đầu vòng lặp
        }

        // reset mảng soto
        for (int j = 0; j < 9; j++) soto[j] = 0;

        int temp = tien;
        for (int i = 0; i < 9; i++) {
            if (temp >= menhgia[i]) {
                soto[i] = temp / menhgia[i];
                temp = temp % menhgia[i];
            }
        }

        printf("Doi duoc: \n");
        for (int i = 0; i < 9; i++) {
            if (soto[i] > 0) {
                printf("%d to %d\n", soto[i], menhgia[i]);
            }
        }

        break; // thoát vòng do-while sau khi đổi tiền xong

    } while (1); // kết thúc do-while
}
void Xaydungchucnangtinhlaisuatvaynganhangvaytragop() {
    float tien, vay, lai, trahangthang, tong;
    int i, thang;
    printf("Moi nhap so tien vay: \n");
    scanf("%d", &vay);
    printf("Ky han\n");
    printf("Tien lai phai tra\n");
    printf("Tien goc phai tra\n");
    printf("So tien phai tra\n");
    printf("So tien con lai\n");
       /* Tien lai phai tra\n Tien goc phai tra\n So tien phai tra\n So tien con lai\n");*/
    trahangthang = vay / 12;
    for (i = 1; i < 12; i++); {
        lai = vay * 0.05;
        tong = vay + trahangthang;
        vay -= trahangthang;
        printf("\n % d\t % 2.f\t\t % 2", i, lai, trahangthang, tong, vay);
        printf("\n");
    }
}

void Xaydungchuongvaytienmuaxe() {
    int i;
    float phantram;

    printf("Moi nhap so phan tram tien vay (0 < phan tram <= 1): ");
    scanf("%f", &phantram);

    if (phantram <= 0 || phantram > 1.0) {
        printf("Gia tri phan tram khong hop le!\n");
        return; // thoát hàm nếu nhập sai
    }

    double phantramtratruoc = 1.0 - phantram;
    double tien = 500000000; // Giá trị xe
    double tientratruoc = tien * phantramtratruoc;
    tien -= tientratruoc;
    double trahangnam = tien / 24; // trả gốc theo 24 tháng
    double laisuatnam = 7.2 / 100; // lãi 7.2%

    printf("So tien phai tra truoc: %.2lf\n", tientratruoc);
    printf("So tien con lai phai tra: %.2lf\n", tien);
    printf("Ky han\tTien lai\tTien goc\tTong tien\tTien con lai\n");

    for (i = 1; i <= 24; i++) {
        double laiphaitra = tien * laisuatnam;
        double tong = laiphaitra + trahangnam;
        tien -= trahangnam;
        printf("%2d\t%.2lf\t\t%.2lf\t\t%.2lf\t\t%.2lf\n", i, laiphaitra, trahangnam, tong, tien);
    }
}



int main(){


    int chon;
    int tieptuc;

    do {
        printf("- - - - - M e N u - - - - -\n");
        printf("1.Kiem tra so nguyen\n");
        printf("2.Tim UC va BC cua 2 so\n");
        printf("3.Tinh tien quan karaoke\n");
        printf("4.Tinh tien dien\n");
        printf("5.Chuc nang doi tien\n");
        printf("6.Tinh lai suat vay tra gop\n");
        printf("7.Vay tien mua xe\n");
        printf("8.Sap xep thong tin sinh vien\n");
        printf("9.FPOLY-LOTT\n");
        printf("10.Tinh toan phan so\n");
        printf("11.Demo mang 2 chieu\n");
        printf("0.Thoat\n");
        printf("Vui long chon chuc nang: ");

        scanf("%d", &chon);

        switch (chon) {
        case 1: kiemtraSoNguyen(); break;
        case 2: timUCvaBCcua2so(); break;
        case 3: tinhtienquankaraoke(); break;
        case 4: tinhtiendien(); break;
        case 5: chucnangdoitien(); break;
        case 6: Xaydungchucnangtinhlaisuatvaynganhangvaytragop(); break;
        case 7: Xaydungchuongvaytienmuaxe(); break;
        case 8: /*SapxepThongtinSinhvien()*/; break;
        case 9: /* game */ break;
        case 10: /* phan so */ break;
        case 0: printf("Thoat.\n"); break;
        default: printf("Lua chon khong hop le.\n");
        }

        printf("\nBan co muon tiep tuc? (1-Co / 0-Khong): ");
        scanf("%d", &tieptuc);

    } while (tieptuc == 1);

    return 0;
}s


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

//