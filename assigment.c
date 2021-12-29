#include <stdio.h>
#include <math.h>

main() {
    printf("Bai 1\n");
    int n;
    printf("Nhap so nguyen: ");
    scanf("%i", &n);
    prime(n);
    factorial(n);
    printf("Bai 2\n");
    list();
}

void prime(int n) {
    if (n < 2) {
        printf("So khong hop le\n");
    }
    else {
        if (n == 2) {
            printf("2 la so nguyen to\n");
        }
        else {
            for (int i = 2; i <= sqrt(n); i++) {
                if (n % i == 0) {
                    printf("%i khong phai la so nguyen to\n", n);
                    return;
                }
            }
        }
        printf("%i la so nguyen to\n", n);
        return;
    }
}

void factorial(n) {
    int f = 1;
    for (int i = 2; i <= n; i++) {
        f *= i;
    }
    printf("n! la: %i\n", f);
}

void list() {
    //Khai bao mang
    int array[100];
    int size;
    printf("Nhap kich co cua mang: ");
    scanf("%i", &size);
    if (size < 2) {
        printf("Kich co khong hop le!");
        return;
    }

    //Nhap lieu cho mang
    for (int i = 0; i < size; i++) {
        printf("Nhap phan tu [%i]: ", i);
        scanf("%i", &array[i]);
    }

    //In mang ra
    printf("\nMang ban dau la: ");
    for (int i = 0; i < size; i++) {
        printf(" %i", array[i]);
    }

    //Sap xep mang
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                array[i] += array[j];
                array[j] = array[i] - array[j];
                array[i] -= array[j];
            }
        }
    }

    //In mang ra phat nua
    printf("\nMang da sap xep la: ");
    for (int i = 0; i < size; i++) {
        printf(" %i", array[i]);
    }

    //Mang da duoc loai bo
    for (int i = 0; i< size; i++){
        for (int j = i + 1; j < size; j++){
            if (array[i] == array[j]){
                for (int k = j; k < size; k++){
                    array[k] = array[k+1];
                }
                j--;
                size--;
            }
        }
    }

    //In lai phat nua nao
    printf("\nMang da duoc loai bo la: ");
    for (int i = 0; i < size; i++) {
        printf(" %i", array[i]);
    }
    return;
}