//
// Created by Admin on 01/07/2025.
// selection sort (nhap mang)
#include  <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int minE = arr[i];
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < minE) {
                minE = arr[j];
            }
        }
    }
};

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

    selectionSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
