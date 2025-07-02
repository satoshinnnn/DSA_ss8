//
// Created by Admin on 01/07/2025.
// buble sort (nhap mang)

#include <stdio.h>

void bubleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j =0; j < n-i -1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mang sau khi sap xep la: \n");

    bubleSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
