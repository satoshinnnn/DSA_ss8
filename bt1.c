//
// Created by Admin on 01/07/2025.
// linear search in ra index  (nhap mang, nhap target)
#include <stdio.h>

void linearSearch(int arrr[], int n, int target) {
    int targetIndex;
    for (int i = 0; i < n; i++) {
        if (arrr[i] == target) {
            targetIndex = i;
        }
    }
    printf("Vi tri cua phan tu la: %d", targetIndex);
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu: ");
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Nhap phan tu can tim vi tri: ");
    scanf("%d", &target);

    linearSearch(arr, n, target);
}

