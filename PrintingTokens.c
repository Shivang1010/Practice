//Printing Tokens

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
/*                                                                   //logic 1
    char *s;
// Important approach to be remembered
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
//logic
    for(int i = 0; i < strlen(s) ; i++)
    {
        if(s[i] == ' ')
            printf("\n");
        else
            printf("%c",s[i]);
    }    */
   char name[1000];
    //fgets(name, sizeof(name), stdin);  // read string              //logic2
    gets(name);  // read string                                      //logic3
    int b;
    b=strlen(name);
    for(int i=0;i<b;i++)
    {
        if(name[i]==' ')
        printf("\n");
        else {
        printf("%c",name[i]);
        }
    }
    //puts(name);    // display string
    return 0;

}
