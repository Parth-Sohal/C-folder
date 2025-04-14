#include<stdio.h>
int main(){
    // maximum wala -->
    // int a = 3 , b = 5 , c = 7;
    // if(a>b && a>c){
    //     printf("%d",a);
    // }
    // if(b>a && b>c){
    //     printf("%d",b);
    // }
    // if(c>a && a>b){
    //     printf("%d",c);
    // }
    // #include <stdio.h>

    int yearsOfService;
    float basicSalary, bonus = 0;

    printf("Enter the years of service: ");
    scanf("%d", &yearsOfService);

    printf("Enter the basic salary: ₹");
    scanf("%f", &basicSalary);

    if (yearsOfService > 10) {
        bonus = 0.15 * basicSalary;
    } else if (yearsOfService >= 5) {
        bonus = 0.10 * basicSalary;
    } else {
        bonus = 0.05 * basicSalary;
    }

    printf("Years of Service: %d\n", yearsOfService);
    printf("Basic Salary: ₹%.2f\n", basicSalary);
    printf("Bonus: ₹%.2f\n", bonus);

    return 0;
}
// }