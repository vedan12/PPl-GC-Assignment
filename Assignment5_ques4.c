/*Implement following programs in lab sessions show me the output and then take a backup
4) C program to remove alphabets from an alphanumeric string
*/
#include<stdio.h>
int main(){
    int L,j=0;
    char word[100],w,new[100];
    printf("Enter lenth of Alphanumeric string : ");
    scanf("%d",&L);
    scanf("%c",&w);
    printf("Enter the string : ");
    for (int i = 0; i < L; i++)
    {
        scanf("%c",&word[i]);
    }
    printf("You Entered : ");
    for (int i = 0; i < L; i++)
    {
        printf("%c",word[i]);
    }
    for (int i = 0; i < L; i++)
    {
        if ((int)word[i] >= 48 && (int)word[i] <= 57)
        {
            new[j]=word[i];
            j++;;
        }
        else if ((int)word[i] >=0 && (int)word[i] < 65)
        {
            printf("\nPlease enter only alphanumeric.");
            return 0;
        }
        else if ((int)word[i] >=0 && (int)word[i] < 48)
        {
            printf("\nPlease enter only alphanumeric.");
            return 0;
        }
        else if ((int)word[i] > 57 && (int)word[i] < 65)
        {
            printf("\nPlease enter only alphanumeric.");
            return 0;
        }
        else if ((int)word[i] > 90 && (int)word[i] < 97)
        {
            printf("\nPlease enter only alphanumeric.");
            return 0;
        }
        else if ((int)word[i] > 122)
        {
            printf("\nPlease enter only alphanumeric.");
            return 0;
        }
    }    
    printf("\nHere is letterless string : ");
    for (int i = 0; i < j; i++)
    {
        printf("%c",new[i]);
    }
      return 0;
}