// AT FIRST WE HAVE TO CALL A HEADER FILE
#include<stdio.h> // stdio.h => standard input output header file
int main(){
    //PRIMARY DATATYPES
          int a= 2;           //INTEGER
          float b=2.25;       //FLOAT
          char c='d';         //CHARACTER
          double d=2.256789;  //DOUBLE

//%d is the format specifier of integer
     printf("variable of a = %d is of type: int\n",a);
//.3 represent the position upto 3 rd decimal space & %f is the format specifier of float
     printf("variable of b = %.3f is of type: float\n",b);
//%c is the format specifier of character
     printf("variable of c = %c is of type: character\n",c);
//.2 represent the position upto 2 rd decimal space & %lf is the format specifier of double
    printf("variable of d = %.2lf is of type: double\n",d);

return 0;

}
