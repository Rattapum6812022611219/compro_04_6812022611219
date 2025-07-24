#include <stdio.h>

int main() {
    char firstInitial = 'R';
    int age = 18;
    float weight = 50.0f;
    char gender[] = "Male";

    printf("ตัวอักษรตัวแรกของชื่อ: %c\n", firstInitial);
    printf("อายุ: %d ปี\n", age);
    printf("น้ำหนัก: %.1f กก.\n", weight);
    printf("เพศ: %s\n", gender);

    return 0;
}
