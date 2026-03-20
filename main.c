#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_SIZE 1000000

int find_max(int *arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;

    printf("Введите количество элементов: ");

    // Проверка корректности ввода
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Ошибка: введено не число!\n");
        return 1;
    }

    if (n <= 0 || n > MAX_SIZE) {
        fprintf(stderr, "Ошибка: недопустимый размер массива (1 - %d)\n", MAX_SIZE);
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "Ошибка: не удалось выделить память\n");
        return 1;
    }

    printf("Введите %d целых чисел:\n", n);

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Ошибка: введено не целое число!\n");
            free(arr);
            return 1;
        }
    }

    int max = find_max(arr, n);
    printf("Максимальное значение: %d\n", max);

    free(arr);
    return 0;
}