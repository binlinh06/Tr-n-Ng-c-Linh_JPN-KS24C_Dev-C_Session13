#include <stdio.h>

int timUCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int soThuNhat, soThuHai, ucln;
    printf("Nhap so thu nhat: ");
    scanf("%d", &soThuNhat);
    printf("Nhap so thu hai: ");
    scanf("%d", &soThuHai);
    ucln = timUCLN(soThuNhat, soThuHai);
    printf("Uoc chung lon nhat cua %d v� %d la: %d\n", soThuNhat, soThuHai, ucln);
    return 0;
}

