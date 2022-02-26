#include"bookmanagement.h"

int addnewbook(int b_no,char name[],char author[])
{
    FILE *fp = NULL;
    fp=fopen("new.txt","a+");

    if(fp == NULL)
    {
        printf("\n File don't exist");
        return 0;
    }
    else
    {
        book *newbook = NULL;
        newbook = malloc(sizeof(book));

        newbook->book_no = b_no;
        strcpy(newbook->book_name,name);

        strcpy(newbook->author_name,author);

        fwrite(newbook,sizeof(book),1,fp);
        fclose(fp);
        free(newbook);

        return 1;
    }
}
