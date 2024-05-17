#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    const char *command1 = "start C:\\PC\\Msgbox.vbs";
    const char *command2 = "mkdir C:\\PC";

    system(command2);

    FILE *fptr;
    fptr = fopen("C:\\PC\\Msgbox.vbs", "w");
    fprintf(fptr, "x=msgbox(\"virus\",16+4,\"virus\")");
    fclose(fptr);

    for(i = 0;i<10;i++)
    {
        system(command1);
    }
    
    return 0;
}