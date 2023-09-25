
#include <stdio.h>
int main() {
    int n, first = 0, second = 1, next;

    printf("Nhap so luong so Fibonacci muon tao: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong.\n");
        return 1; // Thoat voi ma loi
    }

    printf("Chuoi Fibonacci co %d so la: ", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    return 0;
}
