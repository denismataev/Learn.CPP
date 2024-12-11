#include "array.h"
int sum(int* massive, int size, int begin, int end) {    
    if (begin < 0 || end >= size || begin > end) {
        printf("ќшибка: ”казаны неверные границы.\\n");
        return 0; 
    }
    int total = 0;
    for (int i = begin; i <= end; i++) {
        total += massive[i];
    }
    return total;
}
int max(int left, int right) {
    return (left > right) ? left : right;
}

int min(int left, int right) {
    return (left < right) ? left : right;
}

int min_index(int* massive, int size) {
    if (size <= 0) return -1;

    int minIdx = 0;
    for (int i = 1; i < size; ++i) {
        if (massive[i] < massive[minIdx]) {
            minIdx = i;
        }
    }
    return minIdx;
}

int max_index(int* massive, int size) {
    if (size <= 0) return -1;

    int maxIdx = 0;
    for (int i = 1; i < size; ++i) {
        if (massive[i] > massive[maxIdx]) {
            maxIdx = i;
        }
    }
    return maxIdx;
}