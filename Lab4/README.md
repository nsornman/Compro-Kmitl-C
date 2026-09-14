# การเขียนโปรแกรมแบบกำหนดเงื่อนไข

## Contents
- [ผลต่าง](#ผลต่าง)
- [get 3 show (min+max)/max](#get-3-show-minmaxmax)
- 
- 
- 
---
## ผลต่าง
Task :
```c
จงเขียนโปรแกรมหาผลต่างของจำนวนเต็ม 2 จำนวน
```
Testcase 1 :
```c
 *** Max-Min ***
Enter 2 numbers : 15 25
Max - Min = 25 - 15 = 10
```
Testcase 2 :
```c
 *** Max-Min ***
Enter 2 numbers : 99 8
Max - Min = 99 - 8 = 91
```
<details>
<summary>Ans :</summary>

```c
#include <stdio.h>

int main() {
    int num1, num2;
    printf(" *** Max-Min ***\n");
    printf("Enter 2 numbers : ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) {
        printf("Max - Min = %d - %d = %d", num1,num2, num1-num2);
    }
    else {
        printf("Max - Min = %d - %d = %d", num2,num1, num2-num1);
    }
}
```
</details>

## get 3 show (min+max)/max
Task :
```c
รับจำนวนเต็ม 3 จำนวน แล้วแสดงผลตามตัวอย่าง ทศนิยม 5 ตำแหน่ง
```
Testcase 1 :
```c
 *** Find (Minimum + Maximum) / Maximum ***
Enter 3 integers : 1 2 3
(Min + Max) / Max = (1 + 3) / 3 = 1.33333
```
Testcase 2 :
```c
 *** Find (Minimum + Maximum) / Maximum ***
Enter 3 integers : 77 23 101
(Min + Max) / Max = (23 + 101) / 101 = 1.22772
```
Testcase 3 :
```c
 *** Find (Minimum + Maximum) / Maximum ***
Enter 3 integers : 179 17 61
(Min + Max) / Max = (17 + 179) / 179 = 1.09497
```
Testcase 4 :
```c
 *** Find (Minimum + Maximum) / Maximum ***
Enter 3 integers : 9 9 9
(Min + Max) / Max = (9 + 9) / 9 = 2.00000
```
Testcase 5 :
```c
 *** Find (Minimum + Maximum) / Maximum ***
Enter 3 integers : 9 1 1
(Min + Max) / Max = (1 + 9) / 9 = 1.11111
```
<details>
<summary>Ans :</summary>

```c
#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf(" *** Find (Minimum + Maximum) / Maximum ***\n");
    printf("Enter 3 integers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    int min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    printf("(Min + Max) / Max = (%d + %d) / %d = %.5f", min, max, max, (min + max) * 1.0 / max);
    return 0;
}
```
</details>