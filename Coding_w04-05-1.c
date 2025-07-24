#include <stdio.h>

void countCall() {
    static int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}
// Static Variable: ค่า counter จะเพิ่มขึ้นเรื่อย ๆ (1, 2) เพราะ static จะถูกสร้างแค่รอบแรกที่เรียกโปรแกรม
// พอเรียกฟังก์ชันซ้ำ มันไม่เริ่มใหม่ แต่จำค่าครั้งก่อนแล้วนับต่อ
// สรุป static เหมือนของที่เก็บไว้ใช้ต่อได้ ไม่หายไปไหน ฟังก์ชันเรียกใหม่ก็ยังใช้ของเดิม