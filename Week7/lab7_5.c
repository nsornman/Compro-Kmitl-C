#include <stdio.h>

void print_id_card(char name[], char job[], int age){
    printf("======================\n");
    printf("| %-19s|\n", name);
    printf("| ------------------ |\n");
    printf("| Age : %-12d |\n", age);
    printf("| Job : %-12s |\n", job);
    printf("======================\n");
}

int main()
{
    char name[22], job[22];
    int age;
    printf("Enter name, age, job : ");
    scanf("%s %d %s", name, &age, job);
    print_id_card(name, job, age);
}