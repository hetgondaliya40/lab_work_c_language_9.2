/*
Q.1 Write a Program to check if a given password is strong or not by satisfying the below criteria:
- Password must contain at least one letter, one digit & one special symbol.
- Password must be at least 6 characters.For example,
Input:
Create your password: Admin@123

Output:
Your password is Strong.

-----------------------------------------

For example,
Input:
Create your password: hello#89

Output:
Your password is not Strong.
*/

#include<stdio.h>
#include<string.h>

void main(){
	
	char a[100];
	int upr=0,lwr=0,num=0,spe=0;
	int length,i;
	
	printf("Enter string =");
	gets(a);
	
	length = strlen(a);
	for(i=0;i<length;i++){
	
	if(a[i]>='A'&& a[i]<='Z') ++upr;
		if(a[i]>='a' && a[i]<='z') ++lwr;
			if(a[i]==0 && a[i]<=9) ++num;
				if(a[i]=='@' || a[i]=='#' || a[i]=='$') ++spe;
}
	
(upr>0&&lwr>0&&num>0&&spe>0)?printf("Password is strong"):printf("Password is weak");
	
}
