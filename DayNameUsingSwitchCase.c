// Program to display the day name using switch case
#include <stdio.h>
int main(){
    int gender;
    char day;
    printf("Enter the day you were born: \n");
    printf("M = Monday, T = Tuesday, W = Wednesday, Th = Thursday, F = Friday, S = Saturday, Su = Sunday \n");
    scanf(" %c", &day);
    printf("What's your gender: \n");
    printf("1. Male  2. Female \n");
    scanf("%d", &gender);

    switch(day)
    {
    case 'M' :
        if(gender == 1){
            printf("Your day name is Kodjo");
        }
        else if(gender == 2){
            printf("Your day name is Adjoa");
        }
        else{
            printf("Invalid gender");
        }
        break;
    case 'T' :
        if(gender == 1){
            printf("Your day name is Kwabena");
        }
        else if(gender == 2){
            printf("Your day name is Abena");
        }
        else{
            printf("Invalid gender");
        }
        break;
    case 'W' :
        if(gender == 1){
            printf("Your day name is Kweku");
        }
        else if(gender == 2){
            printf("Your day name is Akua");
        }
        else{
            printf("Invalid gender");
        }
        break;
    case 'Th' :
        if(gender == 1){
            printf("Your day name is Yaw");
        }
        else if(gender == 2){
            printf("Your day name is Yaa");
        }
        else{
            printf("Invalid gender");
        }
        break;
    case 'F' :
        if(gender == 1){
            printf("Your day name is Kofi");
        }
        else if(gender == 2){
            printf("Your day name is Afia");
        }
        else{
            printf("Invalid gender");
        }
        break;
    case 'S' :
        if(gender == 1){
            printf("Your day name is Kwame");
        }
        else if(gender == 2){
            printf("Your day name is Ama");
        }
        else{
            printf("Invalid gender");
        }
        break;
    case 'Su' :
        if(gender == 1){
            printf("Your day name is Kwesi");
        }
        else if(gender == 2){
            printf("Your day name is Akosua");
        }
        else{
            printf("Invalid gender");
        }
        break;
    default:
        printf("Invalid day");
    }
    return 0;
}
