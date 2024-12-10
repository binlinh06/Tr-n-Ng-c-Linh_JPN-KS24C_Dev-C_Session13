#include <stdio.h>

void taoMaTran(int soHang, int soCot, int maTran[100][100]) {
    printf("Nhap cac gia tra cho ma tran %dx%d:\n", soHang, soCot);
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("Nhap gia tri tai vi trí [%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }
}

void inMaTran(int soHang, int soCot, int maTran[100][100]) {
    printf("Ma tran vua nhap là:\n");
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf(" %d\t ", maTran[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int soHang, soCot;
    int maTran[100][100];
    printf("Nhap so hang: ");
    scanf("%d", &soHang);
    printf("Nhap so cot: ");
    scanf("%d", &soCot);
    taoMaTran(soHang, soCot, maTran);
    inMaTran(soHang, soCot, maTran);
    return 0;
}

