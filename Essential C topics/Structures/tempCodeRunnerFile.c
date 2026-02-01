#include<stdio.h>
int main(){
    struct date{
        int day,month,year;
    };

    struct employee{
        char name[50];
        int id,salary;
        struct date doj;

    };

    int n;
    printf("How many employess, youe company have?\n");
    scanf("%d\n",&n);

    struct employee data[n];
    int i = 0;
    for ( i = 0; i<n; i++){
        printf("Enter details of employee : %d\n ", i+1);
        printf("Name:-\n");
        scanf("%s\n",&data[i].name);
        printf("ID:-\n");
        scanf("%d\n",&data[i].id);
        printf("Salary:-\n");
        scanf("%d\n",&data[i].salary);
        printf("Enter date of joining:-\n");
        printf("Enter year of joining:-\n");
        scanf("%d\n",&data[i].doj.year);
        printf("Enter month of joining:-\n");
        scanf("%d\n",&data[i].doj.month);
        printf("Enter day of joining:-\n");
        scanf("%d\n",&data[i].doj.day);
    }

    printf("Employee details:-\n\n\n");
    for(i = 0; i <n;i++){
        printf("Employee's ID: %d , Salary: %d, Name - %s, Date of Joining- %d/%d/%d\n\n\n\n\n\n ",data[i].id,data[i].salary,data[i].name,data[i].doj.day,data[i].doj.month,data[i].doj.year);
    }

    int top_index;
    for (i = 0; i <n; i++){
        if(data[i].salary> data[top_index].salary){
            top_index = i;
        }
    }

    printf("Employee with the most salry is: %s .",data[top_index].salary);

}