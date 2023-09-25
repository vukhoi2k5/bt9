#include <stdio.h>
#include <string.h>

int main() {
    char y[100]; // Tăng kích thước mảng để chứa cả dòng
    printf("Cau co yeu to khong?\n");

    do {
        scanf(" %[^\n]", y); // Đọc cả dòng, bao gồm cả dấu xuống dòng
        if (strcmp(y, "to_cx_the") == 0 || strcmp(y, "To_cx_the") == 0) {
            printf("Tớ cung thich cau!\n");

        } else if (strcmp(y, "xin_loi") == 0 || strcmp(y, "Xin_loi") == 0) {
            printf("To chi coi cau la ban thoi.\n");
        } else {
            printf("Cậu khong hieu y cua to.\n");
        }
    } while (strcmp(y, "to_cx_the") != 0 && strcmp(y, "To_cx_the") != 0 && strcmp(y, "xin_loi") != 0 && strcmp(y, "Xin_loi") != 0);

    return 0;
}

