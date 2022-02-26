#include"bookmanagement.h"

int deletebook(int no)
{
    FILE *fp = NULL;
    FILE *ft = NULL;
    fp=fopen("new.txt","r");
    ft=fopen("dupl.txt","w");

    if(fp==NULL || ft==NULL)
    {
        printf("File don't exist");
        return 0;
    }
    else
    {
        rewind(fp);
        book *deletebook = (book*)malloc(sizeof(book));
        while(fread(deletebook,sizeof(book),1,fp)==1)
        {
            if(no != deletebook->book_no)
            {
                fwrite(deletebook,sizeof(book),1,ft);
            }
        }
        fclose(fp);
        fclose(ft);
        free(deletebook);

        remove("new.txt");
        rename("dupl.txt","new.txt");

        return 1;
    }
}

