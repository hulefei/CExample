//
// Created by lefeihu on 2021/9/28.
//

#include "sort.h"
#include "utils.h"

void bubbleSort() {
    int data[] = {5, 4, 3, 2, 1};
    const int length = 5;

    for (int i = 0; i < length; ++i) {
        unsigned int changed = 0;

        for (int j = 1; j < length; ++j) {
            if (data[j-1] > data[j]) {
                int temp = data[j];
                data[j] = data[j-1];
                data[j-1] = temp;
                changed = 1;
            }
        }

        if (changed == 0) break;
    }

    printArray(data, length);
}

void insertSort() {
    int data[] = {5, 4, 3, 2, 1};
    const int length = 5;

    for (int i = 1; i < length; ++i) {
        int j = i;
        int currentValue = data[i];
        for (; j > 0; --j) {
            if (data[j-1] > currentValue) {
                data[j] = data[j-1];
            }
        }

        if (j != i) {
            data[j] = currentValue;
        }
    }

    printArray(data, length);
}

void selectionSort() {
    int data[] = {5, 4, 3, 2, 1};
    const int length = 5;

    for (int i = 0; i < length; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < length; ++j) {
            if (data[minIndex] > data[j]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            int temp = data[i];
            data[i] = data[minIndex];
            data[minIndex] = temp;
        }
    }

    printArray(data, length);
}
