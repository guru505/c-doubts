/*
Here you will be going to Learn about Conditionals and Switch cases

Links to Read :
->
->
Practice Links :
->http://www.includehelp.com/c-programs/c-if-else-aptitude-questions-and-answers.aspx

*/

#include <stdio.h>
#define __FILL_THIS__ ;

int main(){

    int grade;

    //Take input from keyboard into grade .

    /*
        TASK1: WRITE a if ,else if ,else blocks which prints DISTINCTION if grade is >70 , AVERAGE if <=70 and >40 , FAIL if <=40.
    */
    __FILL_THIS__
    __FILL_THIS__
    __FILL_THIS__
    __FILL_THIS__


    //Q1)Code Sample 1 : What does below code print .Why ?
    int x=22;
    if(x=10){
        printf("TRUE\n");
    }
    else{
        printf("FALSE\n");
    }


    int color=0;
    //TAKE input into color
    __FILL_THIS__

    /*
    TASK 2 : Write a switch case block which prints "Nothing" if 0 is entered ,"RED" for 1 ,"BLUE" for 2 ,"GREEN" for 3 .and anything
    above 3 will print "Invalid Value entered "
    */

    switch(color){
    __FILL_THIS__
    __FILL_THIS__
    __FILL_THIS__
    __FILL_THIS__
    }


    /*
        Q2)Code Sample 2 :What does the below code print why ?
    */
    char test='b';

    switch(test){
        case 'a':printf("A\n");
        case 'b':printf("B\n");
        case 'c':printf("C\n");
        case 'd':printf("D\n");
        default:printf("Default\n");

    }


    /*
        Shouldnt it print only B ? can you correct the above program ?
    */



    /*
        TASK 3 : Can you write a program to find if a letter is Consonant or vowel ?
        Hint : Use && , or combine multiple switch cases .
    */

    char letter;
    //TAKE Input into letter

    __FILL_THIS__

    //Actual code for task 3

    __FILL_THIS__
    __FILL_THIS__
    __FILL_THIS__
    __FILL_THIS__
    __FILL_THIS__
}

/*
Answers :
1)

2)
*/
