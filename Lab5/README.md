# การเขียนโปรแกรมแบบวนซ้ำ

## Contents
- [แสดงผลบวกตัวเลข](#แสดงผลบวกตัวเลข)
- [สะกดชื่อถอยหลัง](#สะกดชื่อถอยหลัง)
- [to upper](#to-upper)
- [แค่จำนวนเฉพาะ](#แค่จำนวนเฉพาะ)
- [แสดงผลรวมแอสกี ของข้อความ](#แสดงผลรวมแอสกี-ของข้อความ)
---
## แสดงผลบวกตัวเลข
Task :
```c
ให้เขียนโปรแกรมรับตัวเลขจำนวนเต็ม 2 จำนวน

แล้วคำนวณหาผลรวมของตัวเลข แล้วแสดงผลตามตัวอย่าง
```
Testcase 1 :
```c
 *** Sequence summation ***
Enter start end : 1 1
1 = 1
```
Testcase 2 :
```c
 *** Sequence summation ***
Enter start end : 1 5
1 + 2 + 3 + 4 + 5 = 15
```
Testcase 3 :
```c
 *** Sequence summation ***
Enter start end : 5 1
1 + 2 + 3 + 4 + 5 = 15
```
Testcase 4 :
```c
 *** Sequence summation ***
Enter start end : 10 20
10 + 11 + 12 + 13 + 14 + 15 + 16 + 17 + 18 + 19 + 20 = 165
```
<detials>
<summary>More testcase</summary>
Testcase 5 :
```c
 *** Sequence summation ***
Enter start end : 17 29
17 + 18 + 19 + 20 + 21 + 22 + 23 + 24 + 25 + 26 + 27 + 28 + 29 = 299
```
Testcase 6 :
```c
 *** Sequence summation ***
Enter start end : 97 113
97 + 98 + 99 + 100 + 101 + 102 + 103 + 104 + 105 + 106 + 107 + 108 + 109 + 110 + 111 + 112 + 113 = 1,785
```
Testcase 7 :
```c
 *** Sequence summation ***
Enter start end : 3111 3119
3111 + 3112 + 3113 + 3114 + 3115 + 3116 + 3117 + 3118 + 3119 = 28,035
```
Testcase 8 :
```c
 *** Sequence summation ***
Enter start end : 123456 123456
123456 = 123,456
```
Testcase 9 :
```c
 *** Sequence summation ***
Enter start end : 3322 3311
3311 + 3312 + 3313 + 3314 + 3315 + 3316 + 3317 + 3318 + 3319 + 3320 + 3321 + 3322 = 39,798
```
</details>

<details>
<summary>Ans :</summary>

```c
#include <stdio.h>

int main() {
    int num1, num2, count = 1, max, min, sum = 0, hd, th;
    printf(" *** Sequence summation ***\n");
    printf("Enter start end : ");
    scanf("%d %d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;
    min = (num1 < num2) ? num1 : num2;
    if (num1 != num2){
        while (min <= max) {
            sum += min;
            if (sum % 1000 > 0){
                th = sum / 1000;
                hd = sum % 1000;
            }
            if (min == max){
                if (sum / 1000 > 0){
                    th = sum / 1000;
                    hd = sum % 1000;
                    printf("%d = %d,%03d", min, th, hd);
                }
                else{
                    printf("%d = %d", min, sum);  
                }   
            }
            else{
                printf("%d + ", min);
            }
            min++;
        }
        
    }
    else{
        if (num1 / 1000 > 0){
            th = num1 / 1000;
            hd = num1 % 1000;
            printf("%d = %d,%03d", num1, th, hd);
        }
        else{
            printf("%d = %d", num1,num2);
        }
    }
}
```
</details>

## สะกดชื่อถอยหลัง
Task :
```c
นักศึกษาเกิดนึกสนุกอยากลองอ่านชื่อตัวเองกลับหลังดู แต่เมื่อมันกลับหลังแล้ว
ทำให้ไม่รู้ว่าชื่อตัวเองมันอ่านออกเสียงอย่างไร จึงได้เขียนโปรแกรมสะกดชื่อแบบถอยหลัง
โดยจะสะกดอย่างเสียงดังฟังชัด !!

INPUT :
text ชุดนึง ยาวไม่เกิน 20 ตัวอักษร

OUTPUT :
ตัวอักษรพิมพ์ใหญ่ที่มาจาก input บรรทัดละ 1 ตัว แบบเรียงถอยหลัง
บรรทัดสุดท้ายแสดงความยาวของ input

ห้ามใช้ #include <string.h>

ปล. แสดงให้เหมือนเป๊ะ ๆ นะ

ปล2. ลองทำความรู้จักกับตัวอักษรนี้ดู \0
```
Testcase 1 :
```c
Enter your name : cat
T
A
C
Name length : 3
```
Testcase 2 :
```c
Enter your name : best
T
S
E
B
Name length : 4
```
Testcase 3 :
```c
Hidden
```

<detials>
<summary>Ans :</summary>

```c
#include <stdio.h>
#include <ctype.h>
int main() {
    char text[20];
    int count = 0, sum;
    printf("Enter your name : ");
    scanf("%s",text);
    while (text[count] != '\0'){
        count++;
        sum = count;
    }
    while (count > 0){
        count--;
        printf("%c\n", toupper(text[count]));
    }
    printf("Name length : %d", sum);
}
```
</detials>

## to upper
Task :
```c
จงเขียนโปรแกรมรับข้อความ แล้วแสดงผลเป็นตัวพิมพ์ใหญ่ทั้งหมดดังตัวอย่าง

ข้อความในภาษาซี จะมี character พิเศษ เพื่อแสดงถึงจุดสิ้นสุดข้อความ '\0' หรือ NULL character

ไม่ต้องแสดง NULL ออกทางจอภาพ



hint: ตัวอักษร 'a' มีค่าเป็น 97, ตัวอักษร 'A' มีค่าเป็น 65 >>>>> 97 - 65 = 32
```
Testcase 1 :
```c
 *** To Upper Case ***
Enter a string : Hello, World!
Output : HELLO, WORLD!
```
Testcase 2 :
```c
 *** To Upper Case ***
Enter a string : wE aRe ThE loVeSiCk GiRlS
Output : WE ARE THE LOVESICK GIRLS
```
Testcase 3 :
```c
 *** To Upper Case ***
Enter a string : The C Language is developed by Dennis Ritchie.
Output : THE C LANGUAGE IS DEVELOPED BY DENNIS RITCHIE.
```
Testcase 4 :
```c
Hidden
```
<detials>
<summary>Ans :</summary>

```c
#include <stdio.h>
#include <ctype.h>

int main() {
    char text[100];
    int count = 0;
    printf(" *** To Upper Case ***\n");
    printf("Enter a string : ");
    scanf("%[^\n]", text);
    while (text[count] != 0) {
        text[count] = toupper(text[count]);
        count++;
    }
    printf("Output : %s", text);
    return 0;
}
```
</detials>

## แค่จำนวนเฉพาะ
Task :
```c
ให้นักศึกษาพยายามเขียนโปรแกรมคำนวณว่าตัวเลขที่ใส่เข้าไป เป็นจำนวณเฉพาะหรือไม่
พยามให้เต็มที่ล่ะ !!

INPUT :
ตัวเลข 1 ตัว
ถ้าinput < 2 จะทำให้นักศึกษารู้สึกเสียใจ เพราะคิดว่าไม่คุ้มเลยกับการที่เขียนโปรแกรมนี้ขึ้นมา

OUTPUT :
บอกผลลัพธ์ว่าเป็น/ไม่เป็น หรือ :(
สังเกตุเพิ่มเติมจาก test case

ปล. แสดงผลให้เหมือนเป๊ะ ๆ นะ
```
Testcase 1 :
```c
Enter number : 6
'6' is not a prime number!
```
Testcase 2 :
```c
Enter number : 2
'2' is a prime number!
```
Testcase 3 :
```c
Enter number : 27
'27' is not a prime number!
```
Testcase 4 :
```c
Enter number : 1
:(
```
Testcase 5 6 7 8 :
```c
Hidden
```
<detials>
<summary>Ans :</summary>

```c
#include <stdio.h>

int main() {
    int num, di = 2;
    printf("Enter number : ");
    scanf("%d", &num);
    if (num < 2){
        printf(":(");
    }
    else if (num == 2){
        printf("'%d' is a prime number!",num);
    }
    
    else {
       while (di < num) {
            if (num % di == 0){
                printf("'%d' is not a prime number!",num);
                break;
            }
            if (di == num - 1) {
                printf("'%d' is a prime number!", num);
            }
            di++;
        } 
    }
}
```
</detials>

## แสดงผลรวมแอสกี ของข้อความ
Task :
```c
จงเขียนโปรแกรม รับข้อความ 1 บรรทัด แล้วแสดงผลรวมของรหัสแอสกี 
```
Testcase 1 :
```c
 *** Summation of ASCII code ***
Enter a string : Apple 1
output : 65  + 112 + 112 + 108 + 101 + 32 + 49 = 579
```
Testcase 2 :
```c
 *** Summation of ASCII code ***
Enter a string : come into my world. 2
output : 99  + 111 + 109 + 101 + 32 + 105 + 110 + 116 + 111 + 32 + 109 + 121 + 32 + 119 + 111 + 114 + 108 + 100 + 46 + 32 + 50 = 1868
```
Testcase 3 :
```c
 *** Summation of ASCII code ***
Enter a string : when you are down in trouble, and you need some loving care. You got a friend. 3
output : 119  + 104 + 101 + 110 + 32 + 121 + 111 + 117 + 32 + 97 + 114 + 101 + 32 + 100 + 111 + 119 + 110 + 32 + 105 + 110 + 32 + 116 + 114 + 111 + 117 + 98 + 108 + 101 + 44 + 32 + 97 + 110 + 100 + 32 + 121 + 111 + 117 + 32 + 110 + 101 + 101 + 100 + 32 + 115 + 111 + 109 + 101 + 32 + 108 + 111 + 118 + 105 + 110 + 103 + 32 + 99 + 97 + 114 + 101 + 46 + 32 + 89 + 111 + 117 + 32 + 103 + 111 + 116 + 32 + 97 + 32 + 102 + 114 + 105 + 101 + 110 + 100 + 46 + 32 + 51 = 7160
```
Testcase 4 :
```c
 *** Summation of ASCII code ***
Enter a string : We are the world !
output : 87  + 101 + 32 + 97 + 114 + 101 + 32 + 116 + 104 + 101 + 32 + 119 + 111 + 114 + 108 + 100 + 32 + 33 = 1534
```
Testcase 5 :
```c
 *** Summation of ASCII code ***
Enter a string : The quick brown fox jumps over the lazy dog. 5
output : 84  + 104 + 101 + 32 + 113 + 117 + 105 + 99 + 107 + 32 + 98 + 114 + 111 + 119 + 110 + 32 + 102 + 111 + 120 + 32 + 106 + 117 + 109 + 112 + 115 + 32 + 111 + 118 + 101 + 114 + 32 + 116 + 104 + 101 + 32 + 108 + 97 + 122 + 121 + 32 + 100 + 111 + 103 + 46 + 32 + 53 = 4188
```