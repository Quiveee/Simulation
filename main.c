#include <stdio.h>
#include <string.h>

int main() {
    char name[20] = "General Jimmy";
    int  age = 20;
    char likes[20] = "Cake";

    char food[20];

    printf("What food would you give to %s?\n", name);
    scanf("%s", food);   
    
    if (strcmp(food, likes) == 0)
    {
        printf("%s liked the %s and survived\n", name, food);
    }
    else
    {
        printf("%s did not like the %s and died\n", name, food);
    }
}