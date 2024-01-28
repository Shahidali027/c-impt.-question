#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    int vowel=0,consonant=0;

    printf("Enter the string 0<string length<100:");
    gets(str);

    for(int i=0;i<strlen(str);i++){
    char ch=str[i];

    if((ch>='a' && ch <='z')||(ch >='A' && ch <='Z')){

    if(ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u'||ch=='A'||ch=='I'||ch=='E'||ch=='O'||ch=='U'){
        vowel++;
    }
else{
    consonant++;
}

    }

    }

printf("Number of vowels: %d",vowel);
printf("\nNumber of consonants: %d",consonant);
}

