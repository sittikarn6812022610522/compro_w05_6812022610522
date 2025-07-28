#include <stdio.h>   // ไลบารี่
#include <stdlib.h>  // ไลบารี่
#include <string.h>  // ไลบารี่

struct Person { // โครงสร้างข้อมูลบุคคล
    char nickname; // ชื่อเล่น (char)
    int age; // อายุ (int)
    float height_cm; // ความสูง (float) 
    float weight_kg; // น้ำหนัก (float
    char grade_code; // เกรด (char)
};

int main() {
    struct Person people[3]; // อาร์เรย์ข้อมูล 3 คน
    int i;
    char buffer[100]; // Buffer สำหรับเก็บข้อมูล

    printf("===== โปรแกรมรับข้อมูลและแสดงผลตาราง =====\n");  // หัวข้อ
    printf("ป้อนข้อมูลของแต่ละคนในรูปแบบ: *ชื่อเล่น อายุ ส่วนสูง(cm) น้ำหนัก(kg) รหัสเกรด\n"); // คำเเนะนำ
    printf("เช่น: *K 13 167.5 56.0 A\n\n"); // ตัวอย่างการป้อนข้อมูล

    for (i = 0; i < 3; i++) { // วนลูปรับข้อมูลเเต่ล่ะคน
        printf("ป้อนข้อมูลสำหรับคนที่ %d: ", i + 1); // ตัวเลขกำกับลำดับคน
        
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) { // อ่านข้อมูลจาก stdin
            printf("Error reading input. Exiting.\n"); // ตรวจสอบความถูกต้องข้อมูล
            return 1; //ย้อนกลับหากไม่ถูกต้อง
        }

        int num_read = sscanf(buffer, " *%c %d %f %f %c", // ใช้ sscanf เเยกข้อมูลจาก  buffer
                              &people[i].nickname, // ชื่อเล่น
                              &people[i].age, // อายุ
                              &people[i].height_cm, // ความสูง
                              &people[i].weight_kg, // น้ำหนัก
                              &people[i].grade_code); // สัญลักษณ์เกรด
        
        if (num_read != 5) { // ตรวจสอบว่าอ่านข้อมูลครบทุกฟิลด์หรือไม่
            printf("รูปแบบข้อมูลไม่ถูกต้องสำหรับคนที่ %d. กรุณาป้อนใหม่\n", i + 1); // ถ้าไม่ครบให้เขียนข้อมูลใหม่
            i--; // ลดค่า i เพื่อให้วนซ้ำไปใส่ข้อมูลคนเดิม
        }
    }


    printf("+-------+-----+------------+------------+------------+\n"); // เส้นตาราง
    printf("| %-5s | %-3s | %-10s | %-10s | %-10s |\n", 
           "Name", "Age", "Height(cm)", "Weight(kg)", "Grade Code"); // หัวข้อ
    printf("+-------+-----+------------+------------+------------+\n"); // เส้นตาราง

    // แสดงข้อมูล
    for (i = 0; i < 3; i++) { // วนรูปเเสดงข้อมูลคนเเต่ล่ะคน
        
        printf("| %-5c | %3d | %10.1f | %10.1f | %10c |\n", // เเสดงข้อมูลในตาราง
               people[i].nickname, // ชื่อเล่น
               people[i].age, // อายุ
               people[i].height_cm, // ความสูง
               people[i].weight_kg, // น้ำหนัก
               people[i].grade_code); // สัญลักษณ์เกรด
    }

    printf("+-------+-----+------------+------------+------------+\n"); //เส้นตาราง

    return 0; // สิ้นสุดโปรเเกรม
}