#include "../include/array_function.h"

void join_int_arrays(int *src1, size_t size_src1, int *src2, size_t size_src2, int *dest) {
    int dest_index = 0;
    for (int i = 0; i < size_src1; i++ ) {
        dest[dest_index++] = src1[i];
    }
    for (int i = 0; i < size_src2; i++ ) {
        dest[dest_index++] = src2[i];
    }
}

void join_and_sort_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {}

void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {
    int min_num = src[0];
    int max_num = src[0];
    for (int i = 0; i < size; i++) {
        if (src[i] < min_num) {
            min_num = src[i];
        }
        if (src[i] > max_num) {
            max_num = src[i];
        }
    }
    (*min) = min_num;
    (*max) = max_num;
}
