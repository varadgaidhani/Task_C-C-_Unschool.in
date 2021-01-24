#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char Name[30];
    int Employee_ID;
    int Experience;
    int Salary;
}Employee;
int main()
{
    int i,n=5;

    Employee emp[n];

    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
        printf("Employee %d: \n",i+1);

        printf("Name: ");
        scanf("%s",emp[i].Name);

        printf("Employee ID: ");
        scanf("%d",&emp[i].Employee_ID);

        printf("Experience: ");
        scanf("%d",&emp[i].Experience);

        printf("Salary: ");
        scanf("%d",&emp[i].Salary);

        printf("\n");
    }

    printf("----Employee Details----\n");
    for(i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",emp[i].Name);

        printf("Employee ID \t: ");
        printf("%d \n",emp[i].Employee_ID);

        printf("Experience \t: ");
        printf("%d \n",emp[i].Experience);

        printf("Salary \t: ");
        printf("%d \n",emp[i].Salary);

        printf("\n");
    }
    return 0;
}
