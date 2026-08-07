#include <stdio.h>

int main() {

    //กำหนดค่าของตัวแปร
    int a= 5, b = 2;
    float x = 3.0, y = 4.5;

    printf("ค่าเริ่มต้นของตัวแปร\n");
    printf("a =%d\n", a);
    printf("b =%d\n", b);
    printf("x = %.2f\n", x);
    printf("y =%.2f\n\n", y);

    // ข้อ 1
    int r1 =a++ * b + (int)y % 3;
    printf("r1 = %d\n", r1);

    // ข้อ 2
    int r2 = a++ * b + (int)y % 3;
    printf("r2 = %d\n", r1);

    // ข้อ 3
    float r3 = ++x * y - a / 2;
    printf("r3 = %.2f\n", r3);

    // ข้อ 4
    float r4 = ((x += 1.5) > y) || (b-- > 0);
    printf("r4 = %.2f\n\n", r4);

    // แสดงค่นตัวแปรหลังคำนวณ
    printf("ค่าตัวแปรหลังคำนวณ\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);

    return 0;
}