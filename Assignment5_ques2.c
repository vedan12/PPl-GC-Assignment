/*Implement following programs in lab sessions show me the output and then take a backup
2) C program to count upper case, lower case and special characters in a string.
*/
#include<stdio.h>
int main(){
    int L,u=0,l=0,s=0,n=0;
    char word[100],w,upper[50],lower[50],special[50],num[50];
    printf("Enter lenth of Word : ");
    scanf("%d",&L);
    scanf("%c",&w);
    printf("Enter word : ");
    for (int i = 0; i < L; i++)
    {
        scanf("%c",&word[i]);
    }
    printf("Your word is : ");
    for (int i = 0; i < L; i++)
    {
        printf("%c",word[i]);
    }
    for (int i = 0; i < L; i++)
    {
        if((int)word[i] >= 65 && (int)word[i] <= 90)
        {
            upper[u]=word[i];
            u++;
        }
        else if((int)word[i] >= 97 && (int)word[i] <= 122)
        {
            lower[l]=word[i];
            l++;
        }
        else if((int)word[i] >= 48 && (int)word[i] <= 57)
        {
            num[n]=word[i];
            n++;
        }
        else{
            special[s]=word[i];
            s++;
        }
    }
    printf("\nThere are %d uppercase letters in word and those are : ",u);
    for (int i = 0; i < u; i++)
    {
        printf("%c ",upper[i]);
    }
    printf("\nThere are %d lowercase letters in word and those are : ",l);
    for (int i = 0; i < l; i++)
    {
        printf("%c ",lower[i]);
    }
    printf("\nThere are %d special characters in word and those are : ",s);
    for (int i = 0; i < s; i++)
    {
        printf("%c ",special[i]);
    }
    printf("\nThere are %d numbers in word and those are : ",n);
    for (int i = 0; i < n; i++)
    {
        printf("%c ",num[i]);
    }   
}