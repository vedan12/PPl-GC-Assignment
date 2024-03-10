/*Implement following programs in lab sessions show me the output and then take a backup
3) C Program to remove all spaces from a given string in C
*/
#include<stdio.h>
int main(){
    int L,j=0;
    char word[100],w,new[100];
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
        if ((int)word[i]!=32)
        {
            new[j]=word[i];
            j++;;
        }
    }
    printf("\nNew spaceless word is : ");
    for (int i = 0; i < L; i++)
    {
        printf("%c",new[i]);
    }
}