#include <stdio.h>

int main() {
    
    // ตัวแปรเก็บอักษรแรกของชื่อเล่น
    char name = 'a';

    // ตัวแปรเก็บอายุ
    int age = 19;

    // ตัวแปรเก็บน้ำหนัก
    float weight = 60.5;

    // เเสดงผลลัพธ์บบรรทัดแรก
    printf("Student %c is %d years old.\n", name, age);

    //เเสดงผลลัพธ์บรรทัดที่สอง
    printf("His weighs is %.1f kg.\n", weight);

    return 0;
}