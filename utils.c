//
// Created by lefeihu on 2021/9/28.
//

#include <stdio.h>
#include "utils.h"

void printArray(int array[], int length) {
    for (int i = 0; i < length; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}