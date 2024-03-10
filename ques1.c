/*Implement following programs in lab sessions show me the output and then take a backup
1) C program to print all VOWEL and CONSONANT characters separately.
*/
#include<stdio.h>
int main(){
    int j=0,k=0,l=0;
    char letters[50],vowels[50],consonants[50];
    printf("Array of Alfabets is : ");
    for (char i = 'A'; i <= 'Z'; i++)
    {
        letters[j]=i;
        j++;
    }
    for (int j = 0; j < 27; j++)
    {
        printf("%c ",letters[j]);
    }
    for (int j = 0; j < 27; j++)
    {
        if (letters[j]=='A' || letters[j]=='E' || letters[j]=='I' || letters[j]=='O' || letters[j]=='U')
        {
            vowels[k]=letters[j];
            k++;
        }
        else{
            consonants[l]=letters[j];
            l++;
        }
    }
    printf("\nArray of vowels is : "); 
    for (int t = 0; t < k; t++)
    {
        printf("%c ",vowels[t]);
    }   
    printf("\nArray of consonants is : ");    
    for (int t = 0; t < l; t++)
    {
        printf("%c ",consonants[t]);
    }
}