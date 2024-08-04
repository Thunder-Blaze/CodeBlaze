// Check Consonant or Vowel
#include <stdio.h>

int main(){
    char n;
    scanf("%c",&n);
    if (n == 'a' || n == 'A' || n == 'e' || n == 'E' || n == 'i' || n == 'I' || n == 'o' || n == 'O' || n == 'u' || n == 'U')
    {
        printf("Letter is Vowel\n");
    } else {
        printf("Letter is Consonant\n");
    }
    
    return 0;
}