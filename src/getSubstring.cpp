/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/
#include<stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include<malloc.h>
char * get_sub_string(char *str, int i, int j){

    int x=i;int z=0;
    char *res;
    res=(char*)malloc(100);
    if(str==NULL)
        return NULL;
    int len=0;
    for(len=0;str[len]!='\0';len++){}
    if(i>j)
            return NULL;
    else
    {

        while(x<=j)
        {
            res[z]=str[x];
            z++;
            x++;
        }
        return res;

    }


}
/*int main()
{
    char *str;
    str=(char*)malloc(100);
    scanf("%s",str);
    printf("%s is the answer",get_sub_string(str,0,2));
    return 0;

}
*/
