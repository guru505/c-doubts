/*

Given 6 Integers x1,y1,x2,y2,x3,y3 ,Find what Type of Triangle can be formed from (x1,y1)(x2,y2)(x3,y3)

Input : 0,0,2,0,0,2
Output : "Isosceles Triangle"

Types will be "Scalene","Equilateral","Isosceles","Cannot be a traingle"

Hint : Find 3 sides lengths ,and Find the type .You can use the formula for distance between two points .

Bonus Task : Also print whether its Acute , Obtuse or Right Angled Triangle
*/

void typeofTraingle(int x1,int y1,int x2,int y2,int x3,int y3){

    printf("Not Yet Implemented\n");

}

int main(){

    typeofTraingle(0,0,2,0,0,2); //Should print "Iscosceles"

    typeofTraingle(0,0,2,3,4,0); //Should print "Equilateral"

    typeofTraingle(0,0,0,2,2,7); //Should print "Scalene"

    return 0;
}
