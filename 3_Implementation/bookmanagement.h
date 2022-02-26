
#ifndef __BOOKMANAGEMENT_H__
#define __BOOKMANAGEMENT_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct management
{
    int book_no;
    char book_name[50];
    char author_name[50];
}book;


int addnewbook(int b_no,char b_name[],char a_name[]);
int displaybook(void);
int searchbook(int b_no);
int deletebook(int no);


#endif // __BOOKMANAGEMENT_H__
