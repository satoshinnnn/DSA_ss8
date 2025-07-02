//
// Created by Admin on 01/07/2025.
// insertSort -> linearSearch va binarySearch ) (nhap mang, nhap target)
#include <stdio.h>

void insertSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
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
        int target;
        printf("Phan tu can tim la: ");
        scanf("%d", &target);

        insertSort(arr, n);

        printf("Vi tri cuar phan tu theo linear serach la: %d", linearSearch(arr, n, target));

        printf("Vi tri cua phan tu theo binary searchh la: %d", binarySearch(arr, n, target));
}

