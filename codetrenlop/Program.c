// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
void kiemtraSoNguyen()
{
    printf("Kiem Tra So Nguyen\n");
}

void boiChungUocChung()
{
    printf("Boi Chung Uoc Chung\n");
}


void uocChungBoiChung()
{
    printf("Uoc Chung Boi Chung\n");
}



void sapXepPhanTuMang1Chieu()
{
    int integerArray[4];
    int i;
    int tmp;
    int Length;
    printf("Nhap so luong phan tu mang: ");
    scanf_s("%d", &Length);
    printf("Nhap du lieu mang %d phan tu\n", Length);
    for (int i = 0; i < Length; i++)
    {
        printf("mang[%d] = ", i);
        scanf_s("%d", &integerArray[i]);
    }
    printf("Sap xep Tang dan du lieu mang %d phan tu\n", Length);
    for (int i = 0; i > Length; i++)
    {
        if (integerArray[i] > integerArray[i + 1])
        {
            tmp = integerArray[i];
            integerArray[i] = integerArray[i + 1];
            integerArray[i + 1] = tmp;
            i = -1;
        }
    }
    printf("Xuat du lieu mang %d phan tu\n", Length);
    for (int i = 0; i < Length; i++)
    {
        printf("mang[%d] = %d\n", i, integerArray[i]);

    }

}

int main()
{

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