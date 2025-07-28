#include <stdio.h> // ไลบารี่
#include <string.h>  // ไลบารี่


int main() {
// ประกาศตัวแปรข้อมูลบุคคล
char name[31];   // ชื่อ (char)
int age;         // อายุ (int)
float height;    // ส่วนสูง (float)


printf("ป้อนชื่อ อายุ ส่วนสูง (เช่น Palmy 19 178.5): "); // เเสดงข้อความตัวอย่างให้ป้อนข้อมูล
    

scanf("%30s %d %f", name, &age, &height); // scanf ชื่อ, อายุ, ส่วนสูง


// ประกาศตัวแปรลผลการเรียน
char subject_name[31]; // ชื่อวิชา (string)
float grade_value;     // เกรดที่ได้ (float)
char grade_symbol;     // ตัวอักษรแทนเกรด (char)

// บรรทัดที่ 2: รับข้อมูลผลการเรียน
printf("ป้อนชื่อวิชา เกรดที่ได้ และตัวอักษรแทนเกรด (เช่น Art 3.75 B): "); // แสดงข้อความแนะนำให้ป้อนข้อมูล

scanf("%30s %f %c", subject_name, &grade_value, &grade_symbol); // scanf ชื่อวิชา, เกรดที่ได้, และตัวอักษรแทนเกรด


printf("%c is %d years old and %.1f centimeters tall.\n", name[0], age, height); 
    // แสดงตัวอักษรตัวเเรกของชื่อ, อายุ, ส่วนสูง
    // %c ตัวอักษร, %d integer, %.1f float ทศนิยม 1 ตำแหน่ง

printf("In subject %c, %c got %.2f which is symbolized as '%c'.\n",
    subject_name[0], name[0], grade_value, grade_symbol);   
    // แสดงชื่อวิชา, ตัวอักษรตัวแรกของชื่อเล่น, เกรด, ตัวอักษรแทนเกรด
    // %c สำหรับตัวอักษร, %.2f สำหรับ float ทศนิยม 2 ตำแหน่ง


    return 0; // สิ้นสุดโปรเเกรม
}