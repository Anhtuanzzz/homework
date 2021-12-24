#include <stdio.h>
#include <math.h>

int main() {
    float n;
    printf("Nhap so ban can tra: ");
    scanf("%f", &n);
    if (ceil(n) == floor(n)) {
        printf("Day la so nguyen");
    }
    else {
        printf("Day khong phai la so nguyen");
    }
    return 0;
}