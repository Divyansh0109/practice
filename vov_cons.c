//vovwl consonant array seprate
#include<stdio.h>

int main()
{
    int v=0, c=0;
    char str[100], vow[100], con[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
          
            vow[v++] = str[i];
        }
        else
        {
            con[c++] = str[i];
        }
    }
    vow[v] = '\0';
    con[c] = '\0';
    printf("Vowels: %s \n", vow);
    printf("Consonants: %s \n", con);
    return 0;
}