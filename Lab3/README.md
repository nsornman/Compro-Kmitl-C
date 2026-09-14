# การใช้งานคำสั่ง Input Output และการคำนวณต่างๆ

## Contents
- [เลขนี้ตัวอะไรน้า ??](#เลขนี้ตัวอะไรน้า-)
- [แสดงเลขในแบบต่าง ๆ](#แสดงเลขในแบบต่าง-ๆ)
- 

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

## แสดงเลขในแบบต่าง ๆ
Task :
```c
ให้นักศึกษาเขียนโปรแกรมรับจำนวนเต็ม 1 ตัว แล้วแสดงผลดังนี้
แสดงจำนวนเต็ม
แสดงทศนิยม 2 ตำแหน่ง
แสดงค่า ตัวเลขหารด้วย 3 เป็นทศนิยม 3 ตำแหน่ง
แสดงค่ากำลังสอง
ปล. แสดงผลให้เหมือนเป๊ะ ๆ ด้วย

ห้ามใช้  Type casting (การแปลงชนิดของตัวแปรให้เป็นอีกชนิด)
เช่น (int) 3.6 จะได้ 3 (การทำแบบนี้จะปัดเศษทิ้ง!!)

ให้ใช้ จำนวนเต็ม * 1.0 แทน
เช่น 3 * 1.0 จะได้ 3.000000
```
Testcase 1:
```c
 *** Show a number in variety formats. *** 
Enter integer : 12
Int	-> 12
Float	-> 12.00
Int/3	-> 4.000
Int^2	-> 144
```
Testcase 2:
```c
 *** Show a number in variety formats. *** 
Enter integer : 17
Int	-> 17
Float	-> 17.00
Int/3	-> 5.667
Int^2	-> 289
```
Testcase 3:
```c
Hidden
```
Testcase 4:
```c
 *** Show a number in variety formats. *** 
Enter integer : 65
Int	-> 65
Float	-> 65.00
Int/3	-> 21.667
Int^2	-> 4225
```

<details>
<summary>Ans :</summary>

```c
#include <stdio.h>

int main() {
    int num;
    printf(" *** Show a number in variety formats. ***\n");
    printf("Enter integer : ");
    scanf("%d", &num);
    printf("Int	-> %d\n", num);
    printf("Float	-> %.2f\n", num*1.0);
    printf("Int/3	-> %.3f\n", num/3.0);
    printf("Int^2	-> %d\n", num*num);
    return 0;
}
```
</details>
