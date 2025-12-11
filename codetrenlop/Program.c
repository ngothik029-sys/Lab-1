// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <string.h>

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
 
void demoMang2chieu()
{
    // string - "string.h"
    char kyTu = 'A';
    char mangKyTu[10] = "Anh";
    for (int i = 0; i < 3; i++)
    {
        scanf(" %c", &mangKyTu[i]);
    }
    //fgets(mangKyTu);
    for (int i = 0; i < 3; i++)
    {
        scanf_s(" %c", &mangKyTu[i]);
    }


    int array[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("mang[%d][%d] = ", i, j);
            scanf_s("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("%d", &array[i][j]);
        }
        printf("\n");
    }
}


void demoString()
{
    // string - "string.h"
    char mangKyTu[10];
    //fgets(mangKyTu);

    while (getchar() != '\n');

    printf("Nhap du lieu: ");
    fgets(mangKyTu, sizeof(mangKyTu), stdin);

    printf("%s", mangKyTu);
    printf("\n");
    //puts(mangKyTu);

    printf("String Length: ");
    printf("%d", strlen(mangKyTu) - 1);
    printf("\n");






    /*printf("String Compare The Same As: ");
    printf("%d", strcmp("aBc", "aBc"));
    printf("\n");
    printf("String Compare Less than: ");
    printf("%d", strcmp("A", "C"));
    printf("\n");
    printf("String Compare Greater than: ");
    printf("%d", strcmp("C", "A"));
    printf("\n");*/

    printf("String Reverse (Encryption): ");
    printf("%s", _strrev(mangKyTu));
    printf("\n");
    printf("String Reverse (Decryption): ");
    printf("%s", _strrev(mangKyTu));
    printf("\n");
    printf("String Lower: ");
    printf("%s", _strrev(mangKyTu));
    printf("\n");
    printf("String Upper: ");
    printf("%s", _strrev(mangKyTu));
    printf("\n");
    printf("Find String in String: ");
   
    if (strstr(mangKyTu, "A") != NULL)
    {
        printf("Found: ");
        printf("%s", strstr(mangKyTu, "A"));
    }
    else {
        printf("NOT FOUND");
    }
    printf("\n");
}

struct hocPhan {
    char ten[50];
    char ma[15];
    int sotc;
};





int main()
{
    int chonChucNang;

    do
    {
        printf("Menu");
        printf("\n");
        printf("1.kiemTraSoNguyen");
        printf("\n");
        printf("2.boiChungUocChung ");
        printf("\n");
        printf("3.uocChungBoiChung");
        printf("\n");
        printf("4.sapXepPhanTuMang1Chieu");
        printf("\n");
        printf("5.demoMang2chieu");
        printf("\n");
        printf("6.demoString");
        printf("\n");
        printf("0. thoat");
        printf("\n");
        printf("vui long chon chuc nang: ");
        scanf_s("%d", &chonChucNang);
        if (chonChucNang == 0)
        {
            printf("Thoat chuong trinh.\n");
            break;
        }
        switch (chonChucNang) {
        case 1:
            kiemtraSoNguyen();
            break;
        case 2:
            boiChungUocChung();
            break;
        case 3:
            uocChungBoiChung();
            break;
        case 4:
            sapXepPhanTuMang1Chieu();
            break;
        case 5:
            demoMang2chieu();
            break;
        case 6:
            demoString();
            break;
        case 0:
            printf("Thoat chuong trinh\n");
            break;
        default:
            printf("Lua chon khong hop le, vui long chon chuc nang trong menu.\n");
        }


    }  while (chonChucNang != 0);
    return 0;

}


//int main()
//{
//
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