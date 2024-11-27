#include <stdio.h>
#include <string.h>
void rev(char *s) {
    char *strt = s;
    char *end = s + strlen(s) - 1;
    char temp;
    while (strt<end)
	{
        temp = *strt;
        *strt = *end;
        *end = temp;
        strt++;
        end--;
    }
}
int main() 
{
    char s[100];
    printf("Enter string: ");
    gets(s);
    rev(s);
    printf("Reversed string: %s", s);
    return 0;
}
