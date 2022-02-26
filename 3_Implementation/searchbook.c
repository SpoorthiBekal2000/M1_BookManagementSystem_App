#include"bookmanagement.h"

int searchbook(int no)
{
    FILE *fp =NULL;
    fp = fopen("new.txt","r+");

    if(fp==NULL)
    {
        printf("File don't exist");
        return 0;
    }
    else
    {
        book *search = (book*)malloc(sizeof(book));
        while(fread(search,sizeof(book),1,fp))
        {
            if(search->book_no == no)
            {
                printf("\nbook_no: %d\t\tbook_name:%s\t\t author:%s",search->book_no,search->book_name,search->author_name);
                fclose(fp);
                free(search);
                return 1;
            }
        }

        fclose(fp);
        free(search);
        printf("\n Sorry book not found\n");

        return 0;
    }
}
