# การเขียนโปรแกรมภาษาซีเบื้องต้น


## Contents
- [แสดงผลตามตัวอย่าง 1](#1-แสดงผลตามตัวอย่าง-1)
- [แสดงผลตามตัวอย่าง 2](#2-แสดงผลตามตัวอย่าง-2)
---
### 1) แสดงผลตามตัวอย่าง 1
Task :
```c
ให้นักศึกษาส่ง โปรแกรม HelloKMITL.c ซึ่งมีข้อมูลดังนี้
#include<stdio.h>
int main() {
    printf("Hello, Thailand!\n");
    return 0;
}
นามสกุลของไฟล์ ต้องเป็น .c  เท่านั้น
ถ้านามสกุลเป็น .cpp ให้ทำการ rename ก่อนส่ง
```
Testcase :
```c
Hello, Thailand!
```
<details>
<summary>Ans :</summary>

```c
#include<stdio.h>
int main() {
    printf("Hello, Thailand!\n");
    return 0;
}
```
</details>

### 2) แสดงผลตามตัวอย่าง 2
Task :
```c
ให้นักศึกษาเขียนโปรแกรมแสดงผลตามตัวอย่าง

บรรทัดแรก แสดงผล Hello, Ladkrabang. 
บรรทัดที่สอง แสดงผล Hello, KMITL. 
บรรทัดที่สาม แสดงผล Hello, Bangkok.  
บรรทัดที่สี่ แสดงผล Hello, Thailand. 
```
Testcase :
```c
Hello, Ladkrabang.                                                              
Hello, KMITL.                                                                   
Hello, Bangkok.                                                                 
Hello, Thailand.
```
<details>
<summary>Ans :</summary>

```c    
#include <stdio.h>

int main() {
    printf("Hello, Ladkrabang.\n");
    printf("Hello, KMITL.\n");
    printf("Hello, Bangkok.\n");
    printf("Hello, Thailand.\n");
}
```
</details>
