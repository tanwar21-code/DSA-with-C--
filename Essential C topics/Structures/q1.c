#include<stdio.h>
int main(){
    struct student{
        int roll,marks;
        char name[25];
    };

    struct student s1;
    printf("Enter student details:- \n");
    scanf("%d", &s1.roll);
    scanf("%d", &s1.marks);
    scanf("%s", &s1.name);
    printf("Student's name is %s with roll number- %d and obtained %d marks. ", s1.name , s1.roll, s1.marks);
}