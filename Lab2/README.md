# การเขียนโปรแกรมเบื้องต้นและคำสั่งแสดงผล

## Contents
- [การจัดรูปแบบข้อความ](#การจัดรูปแบบข้อความ)
- [การแสดงข้อความ มากกว่า 1 บรรทัด ไม่ใช้ \n \t](#การแสดงข้อความ-มากกว่า-1-บรรทัด-ไม่ใช้-\n-\t)
- [การแสดงผลจำนวนเต็ม](#การแสดงผลจำนวนเต็ม)
- [การแสดงผลทศนิยม](#การแสดงผลทศนิยม)
- [การแสดงข้อความ %s](#การแสดงข้อความ-%s)
---
## การจัดรูปแบบข้อความ
Task :
```c
ให้นักศึกษา เขียนโปรแกรมตามข้อกำหนดดังนี้ 
แสดงผลลัพธ์ Computer อยู่ด้านซ้ายของจอภาพ
Programming อยู่ด้านขวาของจอภาพ
ใช้คำสั่ง printf ได้เพียงครั้งเดียว
ห้ามใช้ space \t และ \n (ถ้าตรวจพบภายหลังจะได้ ศูนย์คะแนน)
กรณีที่ไม่ทำตามข้อกำหนด คะแนนที่ได้จะถูกปรับเป็น 0 คะแนน 

หมายเหตุ

1. การแสดงผลแต่ละบรรทัดมี 80 ตัวอักษร
```
Testcase :
```c
Computer                                                             Programming
```
<details>
<summary>Ans :</summary>

```c
#include <stdio.h>
int main() {
    printf("%-40s%40s","Computer","Programming");
}
```
</details>

## การแสดงข้อความ มากกว่า 1 บรรทัด ไม่ใช้ \n \t
Task :
```c
ให้เขียนโปรแกรมแสดงผลดังนี้
บรรทัดแรกสุด ด้านซ้ายมือ แสดงผล Computer
บรรทัดแรกสุด ด้านขวามือ แสดงผล Programming
บรรทัดสุุดท้าย (บรรทัดที่ 25) แสดงผลชิดขวา I am a hard-working student.
ห้ามใช้ \n \t


หมายเหตุ

1. การแสดงผลแต่ละบรรทัดมี 80 ตัวอักษร
```
Testcase :
```c
Computer                                                             Programming
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                    I am a hard-working student.
```
<details>
<summary>Ans :</summary>

```c
#include<stdio.h>

int main(){
    printf("%-40s%40s","Computer","Programming");
    printf("%1840s","");
    printf("%80s","I am a hard-working student.");
    return 0;
}
```
</details>

## การแสดงผลจำนวนเต็ม
Task :
```c
จงเติมจำนวนเต็ม ลงในช่องว่างเพื่อให้ได้ผลลัพธ์ ตามตัวอย่าง
พารามิเตอร์ตัวที่ 2 ของคำสั่ง printf ยังไม่มี
ให้เติมจำนวนเต็ม เพื่อให้ได้ผลลัพธ์ตามตัวอย่าง



int main()
{
  printf("%d\n", );
  printf("%x\n", );
  printf("%X\n", );
  
  return 0;
}
```
Testcase :
```c
97                                                                              
7f                                                                              
FF
```
<details>
<summary>Ans :</summary>

```c
int main(){
    printf("%d\n", 97);
    printf("%x\n", 127);
    printf("%X\n", 255);
    return 0;
}
```
</details>

## การแสดงผลทศนิยม
Task :
```c
เติมส่วนของ format string ในคำสั่ง printf ให้เหมาะสม เพื่อให้ผลลัพธ์ ตามตัวอย่าง 

#include<stdio.h>
int main() {
    printf("123456789012345678901234567890123456789012345678901234567890\n");
      printf("%  f\n",3.1415926535897932);
         printf("%  f\n",3.1415926535897932);
    printf("%  f\n",3.1415926535897932);
    printf("%  f\n",3.1415926535897932);
    printf("%  f\n",3.1415926535897932);
    printf("%  f\n",3.1415926535897932);
    printf("%  f\n",3.1415926535897932);
  
    return 0;
}

หมายเหตุ
สำหรับในข้อนี้ ให้แสดงจำนวนทศนิยมให้ตรงกับตัวอย่าง
ไม่ต้องสนใจตัวเลข
เนื่องจาก compiler ที่ใช้ในเครื่อง server อาจเป็นคนละตัวกัน

```
Testcase :
```c
123456789012345678901234567890123456789012345678901234567890                    
3.14                                                                            
3.1415926536                                                                    
3.14159265358979311600                                                          
3.141592653589793115997963468544                                                
3.1415926535897931159979634685441851615906                                      
3.14159265358979311599796346854418516159057617187500                            
3.141592653589793115997963468544185161590576171875000000000000
```
<details>
<summary>Ans :</summary>

```c
#include<stdio.h>
int main() {
    printf("123456789012345678901234567890123456789012345678901234567890\n");
    printf("%.2f\n",3.1415926535897932);
    printf("%.10f\n",3.1415926535897932);
    printf("%.20f\n",3.1415926535897932);
    printf("%.30f\n",3.1415926535897932);
    printf("%.40f\n",3.1415926535897932);
    printf("%.50f\n",3.1415926535897932);
    printf("%.60f\n",3.1415926535897932);
    return 0;
}
```
</details>

## การแสดงข้อความ %s
Task :
```c
เติม พารามิเตอร์ตัวแรก (first parameter) ของ printf ให้เหมาะสม เพื่อแสดงผลตามตัวอย่าง

int main() {
  printf("1234567890123456789012345678901234567890\n");
  printf("%  s\n","I have been a good student.");
  printf("%  s\n","I have been a good student.");
  printf("%     s\n","I have been a good student.");
  printf("%     s\n","I have been a good student.");
  printf("%     s\n","I have been a good student.");
  return 0;
}
```
Testcase :
```c
1234567890123456789012345678901234567890                                        
             I have been a good student.                                        
   I have been a good student.                                                  
    I have                                                                      
I have been a good stu                                                          
                  I have been a good stu
```
<details>
<summary>Ans :</summary>

```c
#include <stdio.h>

int main(){
    printf("1234567890123456789012345678901234567890\n");
    printf("%40s\n","I have been a good student.");
    printf("%30s\n","I have been a good student.");
    printf("%10.6s\n","I have been a good student.");
    printf("%.22s\n","I have been a good student.");
    printf("%40.22s\n","I have been a good student.");
    return 0;
}
```
</details>
