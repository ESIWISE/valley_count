#include <stdio.h>
#include <string.h>

int main()
{
    int valley_count = 0;
    int check_high = 0;
    int previous_high = 0;
    
    char * arr[] = {"u","d","d","d","d","u","d","u","u","u","d","u","d","u","u","u","d","d","d","d","u", "u"};
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) 
    {
        if (!strcmp(arr[i], "u")) 
        {
            check_high += 1;
            printf("high = %d\n", check_high);
        }
        
        if (!strcmp(arr[i], "d")) 
        {
            check_high -= 1;
            printf("high = %d\n", check_high);
        }
        
        if (check_high < 0 && previous_high >= 0)
        {
            valley_count++;
        }
        previous_high = check_high;
    }
    
    printf("valley number = %d\n", valley_count);

    return 0;
}