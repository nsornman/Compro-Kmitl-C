# การเขียนโปรแกรมแบบกำหนดเงื่อนไข

## Contents
- [ผลต่าง](#ผลต่าง)
- [get 3 show (min+max)/max](#get-3-show-minmaxmax)
- [คำสั่ง Switch - Month](#คำสั่ง-Switch---Month)
- [การรับข้อความจากคีย์บอร์ด](#การรับข้อความจากคีย์บอร์ด)
- [สลากกินแบ่งรัฐบาล](#สลากกินแบ่งรัฐบาล)
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

## คำสั่ง Switch - Month
Task :
```c
ให้เขียนโปรแกรม โดยใช้คำสั่ง switch ให้มีคุณลักษณะดังนี้
รับจำนวนเต็ม 1 จำนวน เป็นเลขของเดือน เช่น มกราคม คือเลข 1
ให้แสดงผลจำนวนวันในเดือนนั้นๆ
หากตัวเลขที่ป้อนอยู่นอกเหนือจาก 1 ถึง 12 ให้แสดงผล Invalid!
```
Testcase 1 :
```c
 *** switch control structure ***
Enter a month : 6
30 days
```
Testcase 2 :
```c
 *** switch control structure ***
Enter a month : 2
28/29 days
```
Testcase 3 :
```c
 *** switch control structure ***
Enter a month : 16
Invalid!
```
Testcase 4 :
```c
Hidden
```
<details>
<summary>Ans :</summary>

```c
#include <stdio.h>

int main() {
    int month;
    printf(" *** switch control structure ***\n");
    printf("Enter a month : ");
    scanf("%d", &month);
    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days\n");
            break;
        case 2:
            printf("28/29 days");
            break;
        default:
            printf("Invalid!\n");
            break;
    }
    return 0;
}
```
</details>

## การรับข้อความจากคีย์บอร์ด
Task :
```c
จงเขียนโปรแกรมรับข้อความ 1 บรรทัด
นำข้อความที่รับเข้ามา แสดงผลตามตัวอย่าง
```
Testcase 1 :
```c
 *** Get input from keyboard as string ***
Please input a string : Computer Programming
string : Computer Programming
string : Compute
string : Computer Progra
```
Testcase 2 :
```c
 *** Get input from keyboard as string ***
Please input a string : Kualalumpur seagame 2017
string : Kualalumpur seagame 2017
string : Kualalu
string : Kualalumpur sea
```
Testcase 3 :
```c
 *** Get input from keyboard as string ***
Please input a string : I love Computer Programming subject.
string : I love Computer Programming subject.
string : I love 
string : I love Computer
```
Testcase 4 :
```c
 *** Get input from keyboard as string ***
Please input a string : Today is a beautiful day.
string : Today is a beautiful day.
string : Today i
string : Today is a beau
```
<details>
<summary>Ans :</summary>

```c
#include <stdio.h>

int main() {
    char str[100];
    printf(" *** Get input from keyboard as string ***\n");
    printf("Please input a string : ");
    scanf("%[^\n]", str);
    printf("string : %s\n", str);
    printf("string : %.7s\n", str);
    printf("string : %.15s\n", str);
    return 0;
}
```
</details>

## สลากกินแบ่งรัฐบาล
Task :
```c
เขียนโปรแกรมในการตรวจผลรางวัลสลากกินแบ่งรัฐบาล

ตรวจแค่รางวัลเลขหน้า 3 ตัว, เลขท้าย 3 ตัว, เลขท้าย 2 ตัว

โดยรับ Input เป็นหมายเลขสลาก 6 หลัก

แล้วทำการตรวจสอบว่าตรงกับรางวัลใดบ้าง และได้เงินรางวัลเท่าใด

เลขหน้า 3 ตัว ได้แก่ 367, 653 เงินรางวัล 4000 บาท
เลขท้าย 3 ตัว ได้แก่ 566, 878 เงินรางวัล 4000 บาท
เลขท้าย 2 ตัว ได้แก่ 15 เงินรางวัล 2000 บาท
ในกรณีที่ถูก 2 รางวัล ก็จะได้เงินรวมกันทั้ง 2 รางวัล
```
Testcase 1 :
```c
 *** Lottery ***
Ticket Number : 357015
You Won! [The last two digits]
You get 2000 Baht.
```
Testcase 2 :
```c
 *** Lottery ***
Ticket Number : 653941
You Won! [The first three digits]
You get 4000 Baht.
```
Testcase 3 :
```c
 *** Lottery ***
Ticket Number : 422878
You Won! [The last three digits]
You get 4000 Baht.
```
Testcase 4 :
```c
 *** Lottery ***
Ticket Number : 367115
You Won! [The first three digits]
You Won! [The last two digits]
You get 6000 Baht.
```
Testcase 5 :
```c
 *** Lottery ***
Ticket Number : 497262
Sorry, you didn't win this time.
```
Testcase 6 :
```c
 *** Lottery ***
Ticket Number : 653878
You Won! [The first three digits]
You Won! [The last three digits]
You get 8000 Baht.
```
Testcase 2 :
```c
Hidden
```
<details>
<summary>Ans :</summary>

```c
#include <stdio.h>

int main() {
    int num, money = 0;
    printf(" *** Lottery ***\n");
    printf("Ticket Number : ");
    scanf("%d", &num);
    if (num / 1000 == 367 || num / 1000 == 653){
        money += 4000;
        printf("You Won! [The first three digits]\n");
    }
    if (num % 1000 == 566 || num % 1000 == 878){
        money += 4000;
        printf("You Won! [The last three digits]\n");
    }
    if (num % 100 == 15){
        money += 2000;
        printf("You Won! [The last two digits]\n");
    }
    if (money > 0){
        printf("You get %d Baht.", money);
    }
    if (money == 0) {
        printf("Sorry, you didn't win this time.");
    }
    
    return 0;
}
```
</details>