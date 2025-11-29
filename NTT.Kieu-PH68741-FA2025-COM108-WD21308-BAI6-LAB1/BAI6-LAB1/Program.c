// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Moi nguoi dung nhap gia tri n: ");
    scanf("%d", &n);

    int* mang = (int*)malloc(n * sizeof(int));

    float tong = 0;
    float tb;
    int count = 0;

    // Nhap mang
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &mang[i]);
    }

    // Tinh tong cac so chia het cho 3
    for (int i = 0; i < n; i++)
    {
        if (mang[i] % 3 == 0)
        {
            tong += mang[i];
            count++;
        }
    }

    if (count > 0)
    {
        tb = tong / count;
        printf("Trung binh cac so chia het cho 3: %.2f", tb);
    }
    else
    {
        printf("Khong co so nao chia het cho 3!");
    }

    free(mang);
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