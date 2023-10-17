//DOCUMENTATION SECTION 
//PRE-PROSECCOR SECTION
#include&lt;stdio.h> 
//GLOBAL VARIABLE SECTION 
int sum(); 
//MAIN FUNCTION SECTION
void main(){ 
printf("\nGoing to calculate the area of the square");
float area = square();
printf("\nThe area of the square : %.2f",area); } 
//USE-DEFINED int square() 
{ float side; 
 printf("\nEnter the length of the side in meter : "); 
 scanf(" %f",&amp;side); 
 return side * side;}
