#include<stdio.h>
int main()
{
    char a[20];
    printf("Enter a Word : ");
    scanf("%s",&a);
    if(a[0]=='A'||a[0]=='E'||a[0]=='I'||a[0]=='O'||a[0]=='U'||a[0]=='a'||a[0]=='e'||a[0]=='i'||a[0]=='o'||a[0]=='u')
        printf("Entired alphabet of the word is a Vowel..");
    else
        printf("Entired alphabet of the word is a Consonant.");
    return 0;
}