// GLOBAL VARIABLE
#include <stdio.h>
// int main() {
// EXTERN VARIABLE

// ----------myfile.h------------extern int x=10; //external variable (also global)

// ----------program1.c----------
int x = 10;
#include <stdio.h>
void printValue(){printf("Global variable: %d", x);}
int main(){
 printValue();
return 0;
}