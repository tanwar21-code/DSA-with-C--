#include <stdio.h>
int main(){
    struct student{
        int roll, marks;
        char name[25];
    };
    struct student data[5];
    
    int i,top_index;
    
    for (i= 0;i<5;i++){
        printf("Enter details for student %d :-", i + 1);
        printf("name:-\n");
        scanf("%s",&data[i].name);
        printf("roll number:- \n");
        scanf("%d",&data[i].roll);
        printf("marks:- \n");
        scanf("%d",&data[i].marks);
    }

    top_index = 0;
    for (i = 0;i<5; i++){
        if(data[i].marks> data[top_index].marks){
            top_index= i;
        }

    }
    printf("%s has maximum marks.",data[top_index].name);
}