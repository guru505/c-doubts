/*
Here you are going to learn about Different Data types available in C ,How To take input ,print output etc.
Links to Read or watch:
->https://www.youtube.com/watch?v=OSyjOvFbAGI&index=6&list=PL2_aWCzGMAwLSqGsERZGXGkA5AfMhcknE
->http://www.tutorialspoint.com/cprogramming/c_data_types.htm
->http://www.tutorialspoint.com/cprogramming/c_input_output.htm


*/
#include <stdio.h>
#define __FILL_THIS__ ;

int main(){

    int a,b;
    int temp=10;
    //Q0)What does below line print ?
    printf("Temp value is %d\n",temp);
    //Q1)What Does below printf Print and why ?
    printf("%d,%d\n",a,b);

    a=5;

    //Q2)What Does below printf Print and why ?
    printf("%d\n",a);

    //Take an integer as input from keyboard and store it in b. Hint : Use scanf
    __FILL_THIS__

    //Print the B value .
    __FILL_THIS__


    int sum=0;
    //Calculate sum of a and b and store it in sum
    __FILL_THIS__

    //PRINT SUM
    __FILL_THIS__

    //Q3)What does the below line do ? why
    printf("%4d\n",sum);
    //Q4)Does below line work ? , Uncomment and check and why ?
    //float a=7.65;
    float f1=7.65765;

    //Try printing a float value (f1)
    __FILL_THIS__

    //q5)What does the below line do , why ?
    printf("%.2f\n",f1);

    char c='a';
    //Print the above character
    __FILL_THIS__

    //q6)What does below line print ? why ?
    printf("%d\n",c);

    char oneChar='1';

    //q7)What does below line print ? why ? Observe clearly what is printing
    printf("%c = %d\n",oneChar,oneChar);

    int oneInt;

    //Now copy value 1 into oneInt using oneChar ,(Hint:49 is 1 ,50 is 2 . Think)
    __FILL_THIS__

    return 0;
}

/*
Answers :
0)It prints "Temp value is 10", because temp is assigned to 10 ,in prev line .
1)
2)
3)
4)
5)
6)
7)
*/
