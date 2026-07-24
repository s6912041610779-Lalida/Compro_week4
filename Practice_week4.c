#include  <stdio.h> //header   

int main() {
    char name_first;
    int age;
    float height;

    printf("Enter the first name character of your name: ");
    scanf("%c", &name_frist);

    printf("Enter your age: ");
    scanf("%d", &age, &height);

    printf("Hi %c. you are %d years oid. your height is %f\n", name_first, age, height);

    return 0;
}