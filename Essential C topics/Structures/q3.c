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
    printf("How many employees does your company have?\n");
    scanf("%d", &n);

    struct employee data[n];
    int i;

    for (i = 0; i < n; i++){
        printf("\nEnter details of employee %d\n", i+1);

        printf("Name: ");
        scanf(" %[^\n]", data[i].name);

        printf("ID: ");
        scanf("%d", &data[i].id);

        printf("Salary: ");
        scanf("%d", &data[i].salary);

        printf("Enter year of joining: ");
        scanf("%d", &data[i].doj.year);

        printf("Enter month of joining: ");
        scanf("%d", &data[i].doj.month);

        printf("Enter day of joining: ");
        scanf("%d", &data[i].doj.day);
    }

    printf("\nEmployee details:\n");
    for(i = 0; i < n; i++){
        printf("ID: %d | Salary: %d | Name: %s | DOJ: %02d/%02d/%d\n",
               data[i].id, data[i].salary, data[i].name,
               data[i].doj.day, data[i].doj.month, data[i].doj.year);
    }

    int top_index = 0;
    for (i = 1; i < n; i++){
        if(data[i].salary > data[top_index].salary){
            top_index = i;
        }
    }

    printf("\nEmployee with the highest salary is: %s (Salary: %d)\n",
           data[top_index].name, data[top_index].salary);

    return 0;
}
