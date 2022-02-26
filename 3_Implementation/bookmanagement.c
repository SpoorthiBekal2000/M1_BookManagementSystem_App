#include "bookmanagement.h"


int main(void)

{
    int b_no,option;
    char name[20],authorname[20];
while(option!=5)
{
    printf("\n Press 1 to add new book");
    printf("\n Press 2 to display book");
    printf("\n Press 3 to search book");
    printf("\n Press 4 to delete book");
    printf("\n Press 5 to exit");

    printf("\n\n Please enter your option = ");
    scanf("%d",&option);


    switch(option)
    {
    case 1:
        printf("\n Enter the book number = ");
        scanf("%d",&b_no);
        printf("\n Enter the book name = ");
        scanf("%s",name);
        printf("\n Enter the name of the author = ");
        scanf("%s",authorname);
        addnewbook(b_no,name,authorname);
        break;

    case 2:
        displaybook();
        break;

    case 3:
        printf("\n Enter the book number to be found = ");
        scanf("%d",&b_no);
        searchbook(b_no);
        break;

    case 4:
        printf("\n Enter the book number to be deleted = ");
        scanf("%d",&b_no);
        deletebook(b_no);
        break;

    case 5:
        exit(1);
    }

    return 0;
}
}
