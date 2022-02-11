#include<stdio.h>
#include<string.h>
int bcount(int count)
{
    printf("\n Total number of books available: %d",count);
}

struct management
{
char bookname[50];
char author[50];
int pages;
};

int main()
{
struct management m[100];
char bookname[50];
int i,a,count;
i=a=count=0;

while(a!=5)
{
printf("\n1 Add book details\n");
printf("2 Display the book details\n");
printf("3 Enter the book name to be found\n");
printf("4 Number of books present\n");
printf("5 Exit\n");

printf ("\n Enter your option : ");
scanf("%d",&a);

switch (a)
{

case 1:

printf("Enter book name = ");
scanf ("%s",m[i].bookname);

printf ("Enter author name = ");
scanf ("%s",m[i].author);

printf ("Enter pages = ");
scanf ("%d",&m[i].pages);
count++;
break;

case 2:
printf("BOOK DETAILS\n");
if(count==0)
{
    printf("NO books available \n");
}
else
{
for(i=0; i<count; i++)
{
printf ("\n book name = %s\n",m[i].bookname);

printf ("\n author name = %s\n",m[i].author);

printf ("\n  pages = %d\n",m[i].pages);
}
}
break;

case 3:
printf ("Enter book name : ");
scanf ("%s",bookname);
for (i=0; i<count; i++)
{
if (strcmp(bookname,m[i].bookname) == 0)
{
printf ("%s \n %s \n %d \n ",m[i].bookname,m[i].author,m[i].pages);
}
else
{
    printf("Book not found \n");
}
}
break;

case 4:
bcount(count);
break;

case 5:
exit (0);

}
}
return 0;

}
