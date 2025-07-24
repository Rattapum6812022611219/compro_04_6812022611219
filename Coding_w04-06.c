#include <stdio.h>

const int GLOBAL_RATE = 10; // ค่าคงที่ระดับ Global

void calculate() {
  const int LOCAL_BONUS = 50; // ค่าคงที่ระดับ Local
  
  printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
  printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
  calculate();
  printf("GLOBAL_RATE from main = %d\n", GLOBAL_RATE); // แสดงค่า Global rate จาก main

  // ลองพยายามพิมพ์ LOCAL_BONUS ใน main - จะทำให้เกิด compile-time error
  // หากต้องการทดสอบ ให้ลบคอมเมนต์บรรทัดด้านล่างออก
  // printf("LOCAL_BONUS from main = %d\n", LOCAL_BONUS); 

  return 0;
 }
// GLOBAL_RATE ค่าคงที่แบบ Global ใช้ได้ทุกที่ เพราะประกาศไว้ข้างนอกฟังก์ชัน
// LOCAL_BONUS ค่าคงที่แบบ Local ใช้ได้แค่ในฟังก์ชัน calculate() เท่านั้น
// ถ้าไปแก้ค่าพวกนี้จะ error ตอนคอมไพล์ เพราะ const คือค่าคงที่ ห้ามเปลี่ยน
// main() ใช้ LOCAL_BONUS ไม่ได้ เพราะมันอยู่แค่ใน calculate() main() มองไม่เห็น
// สรุป ค่าคงที่มี 2 แบบ — Global ใช้ได้ทั้งโปรแกรม / Local ใช้เฉพาะในที่ที่ประกาศไว้
