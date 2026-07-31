#include <stdio.h>

int main() {
    // ประกาศตัวแปรสำหรับเก็บข้อมูล
    char name[31];
    int age;
    float height;
    char drink;
    float price;
    char size;

    // รับข้อมูลบรรทัดที่ 1 : ชื่อ อายุ ส่วนสูง
    scanf("%s %d %f", name, &age, &height);

    // รับข้อมูลบรรทัดที่ 2 : เครื่องดื่ม ราคา ขนาดแก้ว 
    scanf(" %c %f %c", &drink, &price, &size);
    
    // แสดงข้อมูลส่วนบุคคล
    printf("%s is %d years old and is %.1f cm tall.\n", name, age, height);

    // แสดงข้อมูลเครื่องดื่ม
    printf("Favorite drink %c costs %.2f baht and has size %c.\n", drink, price, size);

    return 0;  // จบการทำงานของโปรแกรม
}