//
// Created by Admin on 01/07/2025.
// binaru search --> in ra index (nhap mang, nhap target)
#include <stdio.h>

void binarySearch(int arr[], int n, int target) {
    int startI = 0, endI = n - 1;
    int targetI;
    while (startI <= endI) {
        int mid = (startI + endI) / 2;
        if (arr[mid] == target) {
             targetI = mid;
        }
        if (arr[mid] < target) {
            startI = mid + 1;
        }
        if (arr[mid] > target) {
            endI = mid - 1;
        }
    }
    printf("Vi tri phan tu can tim la: %d", targetI);
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

    binarySearch(arr, n, target);
}
