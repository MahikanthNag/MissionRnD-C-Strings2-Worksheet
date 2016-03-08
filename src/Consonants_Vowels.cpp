/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>
#include<stdio.h>
#include<malloc.h>
void count_vowels_and_consonants(char *str,int *consonants, int *vowels)
{
    int i=0,len;*consonants=0;*vowels=0;
    if(str==NULL)
    {
        *consonants=0;
        *vowels=0;
    }
    else{
    for(len=0;str[len]!='\0';len++)
    {

    }
 //   printf("%d is len",len);
    while(i<len)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            *vowels=*vowels+1;
        else if(((int)str[i]>65&&(int)str[i]<69)||((int)str[i]>69&&(int)str[i]<73)||((int)str[i]>73&&(int)str[i]<79)||((int)str[i]>79&&(int)str[i]<85)||((int)str[i]>85&&(int)str[i]<91)||((int)str[i]>97&&(int)str[i]<101)||((int)str[i]>101&&(int)str[i]<105)||((int)str[i]>105&&(int)str[i]<111)||((int)str[i]>111&&(int)str[i]<117)||((int)str[i]>117&&(int)str[i]<123))
            *consonants=*consonants+1;
        i++;
    }
    }
}
/*int main()
{
    int vowels=0;int consonants=0;
    char *str;
    str=(char*) malloc(100);
    scanf("%s",str);
    printf("hai");
    count_vowels_and_consonants(str,&consonants, &vowels);
    printf("%d is no of vowels\n%d is no of consonants",vowels,consonants);
return 0;
}
*/
