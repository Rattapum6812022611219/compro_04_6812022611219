#include <stdio.h>

void countCall() {
    int counter = 0;
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
// Non-Static Variable: ค่า counter จะเป็น 1 ทุกครั้ง (1, 1) เพราะตัวแปรถูกสร้างใหม่ทุกครั้งที่เรียกฟังก์ชัน
// เริ่มจาก 0 แล้วนับเป็น 1 ตลอด ไม่จำค่าครั้งก่อน
// สรุป non-static เหมือนของใช้แล้วทิ้ง ใช้เสร็จก็หาย พอเรียกใหม่ก็เริ่มใหม่หมด
