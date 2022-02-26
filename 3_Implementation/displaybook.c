#include"bookmanagement.h"

int displaybook()
{
    FILE *fp =NULL;
    fp=fopen("new.txt","r+");

    if(fp==NULL)
    {
        printf("File don't exist");
        return 0;
    }
    else
    {
        book *display = (book*)malloc(sizeof(book));
        while(fread(display,sizeof(book),1,fp)==1)
        {
            printf("\nbook_no = %d \t book name = %s \t author = %s",display->book_no,display->book_name,display->author_name);
        }
        fclose(fp);
        free(display);

        return 1;
    }
}
