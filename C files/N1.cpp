#include <stdio.h>
void greetUser(char name[]) {
    printf("Hello, %s! Welcome to Dreamizer's Programming Class!\n", name);
}
const char* thankUser() {
    return "Thank you for practicing coding today!";
}

int main() {
    char name[100];
    printf("Enter your name: ");
    scanf("%99s", name); 
    greetUser(name);
    printf("%s\n", thankUser());
    
    return 0;}