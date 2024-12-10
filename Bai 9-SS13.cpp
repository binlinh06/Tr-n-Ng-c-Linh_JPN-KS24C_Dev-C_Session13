#include <stdio.h>
#include <math.h>

void nhapMang(int n, int m, int arr[100][100]) {
    printf("Nhap gia tri cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap phan tu tai [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void inMaTran(int n, int m, int arr[100][100]) {
    printf("Ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf(" %d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void inGoc(int n, int m, int arr[100][100]) {
    int result[100][100] = {0};
    result[0][0] = arr[0][0];
    result[0][m-1] = arr[0][m-1];
    result[n-1][0] = arr[n-1][0];
    result[n-1][m-1] = arr[n-1][m-1];
    printf("Cac phan tu o goc ma tran:\n");
    inMaTran(n, m, result);
}

void inDuongBien(int n, int m, int arr[100][100]) {
    int result[100][100] = {0};
    for (int i = 0; i < n; i++) {
        result[i][0] = arr[i][0];
        result[i][m-1] = arr[i][m-1];
    }
    for (int j = 0; j < m; j++) {
        result[0][j] = arr[0][j];
        result[n-1][j] = arr[n-1][j];
    }
    printf("Cac phan tu tren duong bien ma tran:\n");
    inMaTran(n, m, result);
}

void inDuongCheo(int n, int m, int arr[100][100]) {
    int result[100][100] = {0};
    for (int i = 0; i < n && i < m; i++) {
        result[i][i] = arr[i][i];
        result[i][m-1-i] = arr[i][m-1-i];
    }
    printf("Cac phan tu tren duong cheo chinh va cheo phu:\n");
    inMaTran(n, m, result);
}

int laSoNguyenTo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

void inSoNguyenTo(int n, int m, int arr[100][100]) {
    int result[100][100] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (laSoNguyenTo(arr[i][j])) {
                result[i][j] = arr[i][j];
            }
        }
    }
    printf("Cac phan tu la so nguyen to trong ma tran:\n");
    inMaTran(n, m, result);
}

int main() {
    int n, m, choice;
    int arr[100][100] = {0};

    printf("Nhap so hang: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);

    do {
        printf("\n====================MENU===================\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Chon mot chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(n, m, arr);
                break;
            case 2:
                inMaTran(n, m, arr);
                break;
            case 3:
                inGoc(n, m, arr);
                break;
            case 4:
                inDuongBien(n, m, arr);
                break;
            case 5:
                inDuongCheo(n, m, arr);
                break;
            case 6:
                inSoNguyenTo(n, m, arr);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 7);

    return 0;
}

