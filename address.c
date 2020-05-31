/*Declare a union containing 5 string variables each with a length of C_SIZE . Then, read and display the address of a
person using a variable of the union*/


#include <stdio.h>
#include <string.h>
#define C_SIZE 50
union Address
{
        char name[C_SIZE];
        char housename[C_SIZE];
        char cityname[C_SIZE];
        char statename[C_SIZE];
        char pin[C_SIZE];
};

int main()
 {
    union Address record1;
  
    printf("Enter name:");
    scanf("%[^\n]",record1.name);
    getchar();
    printf("Enter house name:");
    scanf("%[^\n]",record1.housename);
    getchar();
    printf("Enter city name:");
    scanf("%[^\n]",record1.cityname);
    getchar();
    printf("Enter state name:");
    scanf("%[^\n]",record1.statename);
    getchar();
    printf("Enter pin:");
    scanf("%[^\n]",record1.pin);

    printf("Union record1 values\n");
    printf(" Names:%s\n", record1.name);
    printf(" House Name: %s\n", record1.housename);
    printf(" City Name: %s\n", record1.cityname);
    printf(" State name: %s\n", record1.statename);
    printf(" Pin: %s\n", record1.pin); //print only Pin because the union will hold only one value at a time 
 }
