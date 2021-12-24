#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%i", &n);
    if (n <= 2) {
        printf("So khong hop le");
    }
    else {
        if (n == 2) {
            printf("2 la so nguyen to");
        }
        else {
            for (int i = 2; i <= sqrt(n); i++) {
                if (n % i == 0) {
                    printf("%i khong phai la so nguyen to", n);
                    return 0;
                }
            }
        }
        printf("%i la so nguyen to", n);
        return 0;
    }
}
