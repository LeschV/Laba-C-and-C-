#include <stdio.h>
typedef struct Student
{
    char Name[20];
    int age;
    float average_mark;
} Student;

int main(void)
{

    Student Student;
    printf("Input name:\n");
    scanf("%s", Student.Name);
    printf("Input age:\n");
    scanf("%d", &Student.age);
    printf("Input average mark:\n");
    scanf("%f", &Student.average_mark);
    printf("\n\n");
    printf("Name:%s\nAge:%d\nAverage Mark:%.2f\n", Student.Name, Student.age, Student.average_mark);

    return 0;
}