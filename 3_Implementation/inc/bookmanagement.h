/**
 * @file bookmanagement.h
 * @author Spoorthi Bekal
 * @brief Header file for Book Management
 *
 */
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

/**
* @brief Add the details of the book
* @param[in] b_no 
* @param[in] b_name
* @param[in] a_name
* @return 1 after adding all the details
*/
int addnewbook(int b_no,char b_name[],char a_name[]);

/**
* @brief Display the details of the book
* @return 1 after displaying the details of the book
*/
int displaybook(void);

/**
* @brief Search for the details of the book based on the book number entered
* @param[in] b_no 
* @return 1 after finding the book details
*/
int searchbook(int b_no);

/**
* @brief Delete the details of the book of which book number is entered
* @param[in] b_no 
* @param[in] b_name
* @param[in] a_name
* @return 1 after deleting the details
*/
int deletebook(int no);


#endif // __BOOKMANAGEMENT_H__
