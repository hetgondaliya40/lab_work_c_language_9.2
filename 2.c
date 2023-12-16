/*
Q.2 Write a Program to create a login mechanism by entering the right email & password. You can compare it with your desired email & password.
For example,
Input:
Enter your email: admin@gmail.com
Enter your password: 123456

Output:
Login Successful...

-----------------------------------------

For example,
Input:
Enter your email: xyz@gmail.com
Enter your password: 123456

Output:
Login Failed. Invalid Credentials.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char email1[50];
     char password1[50];
    
    char email[] = "taksh234@gmail.com";
    char password[] = "12345678";

    printf("Enter your email: ");
    scanf("%s",email);

    printf("Enter your password: ");
    scanf("%s",password);

    if (strcmp(email,email1) == 0 && strcmp(password,password1) == 0) {
        printf("Login successful");
    } else {
        printf("Invalid email and password");
    }

}


