#include <stdio.h>
int main() {
    float a, b, c;
    printf("Moi ban nhap do dai 3 canh: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        printf("La 3 canh tam giac\n");
    } else {
        printf("Khong phai 3 canh tam giac\n");
    }
    return 0;
}
 