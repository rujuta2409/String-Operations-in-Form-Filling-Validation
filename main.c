#include <stdio.h>

int containsDigit(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            return 1;
    }
    return 0;
}

int isValidEmail(char email[]) {
    int atFound = 0, dotFound = 0;
    
    for (int i = 0; email[i] != '\0'; i++) {
        if (email[i] == '@')
            atFound = 1;
        if (email[i] == '.')
            dotFound = 1;
    }
    return (atFound && dotFound); // must contain @ and .
}

int isValidPhone(char phone[]) {
    int i = 0;
    while (phone[i] != '\0') {
        if (!(phone[i] >= '0' && phone[i] <= '9'))
            return 0;
        i++;
    }
    return (i == 10); // phone must contain 10 digits
}


int main() {
    char name[50], phone[20], email[50];

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Phone Number: ");
    scanf("%s", phone);

    printf("Enter Email: ");
    scanf("%s", email);

    if (containsDigit(name))
        printf("Invalid Name! Name should not contain digits.\n");
    else
        printf("Valid Name!\n");

    if (isValidPhone(phone))
        printf("Valid Phone Number!\n");
    else
        printf("Invalid Phone Number! It must contain 10 digits only.\n");

    if (isValidEmail(email))
        printf("Valid Email!\n");
    else
        printf("Invalid Email! Must contain '@' and '.'.\n");

 return 0;
}
