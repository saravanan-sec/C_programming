#include<stdio.h>

struct employee{
    char name[20];
    int emp_no;
    float attendance;
};

int main(){
    struct employee e1;

    printf("Enter name :");
    scanf("%s",e1.name);

    printf("Enter the employee no. ");
    scanf("%d",&e1.emp_no);

    printf("Enter attendance percentage :");
    scanf("%f",&e1.attendance);
    printf("-------------------------------------\n");

    printf("NAME : %s\n",e1.name);
    printf("............................\n");
    printf("EMPLOYEE NO. :%d\n",e1.emp_no);
    printf("............................\n");
    printf("ATTENDANCE PERCENTAGE : %2f\n",e1.attendance);
    printf("-------------------------------------\n");

    return 0;

}
