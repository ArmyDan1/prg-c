#include <stdlib.h>  
#include <stdio.h>  
#include <string.h>

int main()
{
    char str[] ="A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";
    int length = strlen(str);
    char code;
    printf("\n ZNAKY:\n");
    for (int i = 0; i < length; i++)
    printf("%c: %d\n", str[i], str[i]);
    for (int i = 0; i < length; i++)
    {
        if('A' < str[i] && str[i] < 'Z')
        {
            code = str[i] + 9;
            if(code > 'Z') code = code - 26;
        }
        else code = str[i];
        printf("%c",code);
    
    }
    return 0;
}
