#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
   int vowel=0, consonant=0;
    printf("Enter the string (0 <string length <100):");
    gets(str);

    for(int i=0;i<strlen(str);i++){
        char ch =str[i];
        
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z' ));
        {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'|| ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            vowel++;
        }
        else
        {
    
          consonant++;
        }
    }
    }
    printf("The no of vowels are: %d",vowel);
    printf("\nThe no of consonant are: %d",consonant);


return 0;
}