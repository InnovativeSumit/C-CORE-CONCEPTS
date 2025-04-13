// AT FIRST WE HAVE TO CALL A HEADER FILE
#include<stdio.h> // stdio.h => standard input output header file
int main(){
    //PRIMARY DATATYPES
          int a;           //INTEGER
          float b;         //FLOAT
          char c;          //CHARACTER
          double d;        //DOUBLE

//%d is the format specifier of integer
     printf(" Enter the value of a:");
      scanf("%d",&a);
     printf("variable of a = %d is of type: int\n\n",a);
//.3 represent the position upto 3 rd decimal space & %f is the format specifier of float
     printf(" Enter the value of b:");
     scanf("%f",&b);
     printf("variable of b = %.3f is of type: float\n\n",b);
//%c is the format specifier of character
     printf(" Enter the value of c:");
     scanf(" %c",&c);
     printf("variable of c = %c is of type: character\n\n",c);
//.2 represent the position upto 2 rd decimal space & %lf is the format specifier of double
     printf(" Enter the value of d :");
     scanf("%lf",&d);
     printf("variable of d = %.2lf is of type: double\n\n",d);

return 0;

}
