# การใช้งานคำสั่ง Input Output และการคำนวณต่างๆ

## Contents
- [เลขนี้ตัวอะไรน้า ??](#เลขนี้ตัวอะไรน้า-)

---
## เลขนี้ตัวอะไรน้า ??
Task :
```c
ให้นักศึกษาใช้ความสามารถทั้งหมดที่มีในการเขียนโปรแกรม
รับค่าตัวเลขฐานสิบ 1 ตัว แล้วแสดงผลตัวอักษรของตัวเลขนั้น (อ้างอิงจาก ASCII table)

ปล. แสดงผลให้เหมือนเป๊ะ ๆ เลยนะ
```
Testcase 1 :
```c
Enter 1 number : 65
The char of '65' is A
```
Testcase 2 :
```c
Enter 1 number : 97
The char of '97' is a
```
Testcase 3 :
```c
Hidden
```
<details>
<summary>Ans :</summary>

```c
#include <stdio.h>

int main() {
    int num;
    printf("Enter 1 number : ");
    scanf("%d", &num);
    printf("The char of '%d' is %c", num, (char)num);
    return 0;
}
```
</details>
