#include <string.h>
#include<stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
    char skills[3][30]; 
};

int main() {
    struct Employee emp[5];  
    int i, j;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &emp[i].id);
        getchar(); 

        printf("Name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = '\0'; 
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        getchar(); 

        for (j = 0; j < 3; j++) {
            printf("Enter skill %d: ", j + 1);
            fgets(emp[i].skills[j], sizeof(emp[i].skills[j]), stdin);
            emp[i].skills[j][strcspn(emp[i].skills[j], "\n")] = '\0';
        }
    }

    printf("\n========== Employee Details ==========\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("Skills: ");
        for (j = 0; j < 3; j++) {
            printf("%s", emp[i].skills[j]);
            if (j < 2) printf(", ");
        }
        printf("\n");
    }

    return 0;
}
