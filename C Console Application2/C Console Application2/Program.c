// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
void KiemTraSoNguyen() {

}
void TimUocSoChungVaBoiSoChungCua2so() {

}
void ChuongTrinhTinhTienchoQuanKareoke() {

}
void TinhTienDien() {

}
void ChucNangDoiTien() {

}
void ChucNangTinhlaiSuatVayNganHangTraGop() {

}
void XayDungChuongTrinhVayTienMuaXe() {

}
void SapXepThongTinSinhVien() {

}
void XayDungGameFPOLY_LOTT() {
}
void sapXepPhanTuMang1Chieu()
{

    int integerArray[100];
    int i;
    int tmp;
    int length;
    printf("Nhap so luong phan tu mang: ");
    scanf("%d", &length);
    printf("Nhap du lieu mang %d phan tu\n", length);
    for (int i = 0; i < length; i++)
    {
        printf("mang[%d] = ", i);
        scanf("%d", &integerArray[i]);
    }
    printf("Sap xep Tang dan du lieu mang %d phan tu\n");
    for (i = 0; i < length - 1; i++)
    {
        if (integerArray[i] > integerArray[i + 1]);
        {
            tmp = integerArray[i];
            integerArray[i + 1] = integerArray[i + 1];
            integerArray[i + 1] = tmp;
            i = -1;
        }
    }
    printf("Xuat du lieu mang %d phan tu Giam dan\n", length);
    for (int i = 0; i = length - 1; i > -1, i--)
    {
        printf("mang[%d] = %d\n", i, integerArray[i]);
        scanf("%d", &integerArray[i]);
    }
    printf("Xuat du lieu mang %d phan tu Tang dan\n", length);
    for (int i = 0; i = length; i++)
    {
        printf("mang[%d] = %d\n", i, integerArray[i]);
        scanf("%d", &integerArray[i]);
    }

    int main()
    {
        int tiepTuc = 1;
        while (tiepTuc == 1);

        int chon;
        do
        {

            printf("menu"); printf(" \n");
            printf("1.Kiem Tra So Nguyen  "); printf("\n");
            printf("2.Tim Uoc Chung Va Boi So Cua 2 So "); printf("\n");
            printf("3.Tinh Tien cho Quan Kareoke  "); printf("\n");
            printf("4.Tinh Tien Dien  "); printf("\n");
            printf("5.Chuc Nang Doi Tien  "); printf("\n");
            printf("6.Tinh Lai Suat Vay Ngan Hang Tra Gop "); printf("\n");
            printf("7.Chuong Trinh Vay Mua Xe "); printf("\n");
            printf("8.Sap Xep Thong Tin Sinh Vien "); printf("\n");
            printf("9.Game FPOLY_LOTT "); printf("\n");
            printf("0.thoat "); printf("\n");
            printf("vui long chon chuc nang: ");
            scanf("%d", &chon);


            switch (chon) {

            case 1:
                printf("Ban da chon: KiemTraSoNguyen\n");
                break;

            case 2:
                printf("Ban da chon: TimUocChungVaBoiSoCua2So\n");
                break;

            case 3:
                printf("Ban da chon: TinhTienChoQuanKaraoke\n");
                break;

            case 4:
                printf("Ban da chon: TinhTienDien\n");
                break;

            case 5:
                printf("Ban da chon: ChucNangDoiTien\n");
                break;

            case 6:
                printf("Ban da chon: TinhLaiSuatVayNganHangTraGop\n");
                break;

            case 7:
                printf("Ban da chon: ChuongTrinhVayMuaXe\n");
                break;

            case 8:
                printf("Ban da chon: SapXepThongTinSinhVien\n");
                break;

            case 9:
                printf("Ban da chon: Game FPOLY_LOTT\n");
                break;

            case 0:
                printf("Dang thoat chuong trinh...\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long chon trong menu (0–9).\n");
            }
            printf("Ban co muon tiep tuc hay khong? [1-Co | Khac-khong]: ");
            scanf_s("%d", &chon);

        } while (chon != 0);
        return 0;

    }