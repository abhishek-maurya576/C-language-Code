#include <stdio.h>
#include <math.h>  
#include <stdlib.h>  
      
// function declarations
   
int addition();  
int subtract();  
int multiply();  
int divide();
int modulus();
int square();  
int squareroot();
int cuberoot();
int power();
 int absolute_value();
 int sine();
 int cosine();
 int tangent();
int multi_addition();
int multi_multiply();
int round_up();
int logbe();
int logb10();
int floating_point_remainder();
void exit();
int main()  
{  
    // declaration a local variable op;  
    int op;  
    do  
    {  
        // displays the multiple operations of the C Calculator  
        printf (" Select an operation to perform the calculation in C Calculator: "); 
 
        printf (" \n 1 Addition  \t \t\t 2 Subtraction \n 3 Multiplication \t\t 4 Division \n 5 Modulus \t \t\t\t 6 Square \n 7 Square Root \t \t\t 8 Cube Root \n 9 Power \t\t \t\t 10 Absolute Value \n 11 Multiple Addition \t 12 Multiple Multiply \n 13 Sine \t\t\t\t 14 Cosine \n 15 Tangent \t\t\t 16 Round up \n 17 log (base e) \t\t 18log (base-10)\n 19 floating-point remainder \n 20 Exit \n \n Please, Make a choice ");              
        scanf ("%d", &op); // accepts a numeric input to choose the operation 

// use switch statement to call an operation  
     switch (op)  
    {  
        case 1:  
            addition(); /* It call the addition() function  to add the given numbers */  
            break; // break the function  
         
 case 2:  
            subtract(); /* It call the subtract() function  to subtract the given numbers */  
            break; // break the function
           
case 3:  
            multiply(); /* It call the multiply() function  to multiply the given numbers */  
            break; // break the function 
 
 case 4:  
            divide(); // It call the divide() function  to divide the given numbers  
            break; // break the function 

case 5:  
            modulus(); /* It call the modulus() function  to get the remainder of given numbers */  
            break; // break the function


 case 6:  
            square(); // It call the square() function  to get the square of given numbers  
            break; // break the function 

case 7:  
            squareroot(); /* It call the squareroot() function  to get the square root of given numbers */  
            break; // break the function 

case 8:  
            cuberoot(); /* It call the cuberoot() function  to get the cube root of given numbers */  
            break; // break the function

case 9:  
            power(); /* It call the power() function  to get raised to power of given numbers */  
            break; // break the function

 
 case 10: 
             absolute_value();
             break; // break the function

  case 11: 
            multi_addition();
            break;// break the function

case 12: 
             multi_multiply();
             break;// break the function

case 13: 
            sine();
            break; // break the function

case 14:
            cosine();
            break; // break the function

case 15: 
            tangent();
            break; // break the function
case 16: 
            round_up();
            break;
case 17: 
        logbe();
        break;
case 18:  
            logb10();
            break;
case 19:
            floating_point_remainder();
            break;
case 20:  
            exit(0); // It call the exit() function  to exit from the program  
            break; // break the function  
 default:  
            printf(" Something is wrong!! ");  
            break; // break the function
                       
    }  
    printf (" \n \n ********************************************** \n ");  
    } while (op != 10);  
    return 0;        
} 

// function definition 
// use addition() function to add two numbers
int addition()  
{  
    int sum = 0, n1, n2; // declare a local variable   
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);   
    sum = n1 + n2;    
    printf (" The addition of %d + %d is: %d", n1, n2, sum);
}  


// use subtract() function to subtract two numbers  
int subtract()  
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    res = n1 - n2;    
    printf (" The subtraction of %d - %d is: %d", n1, n2, res);  
}  
  
// use multiply() function to multiply two numbers  
int multiply()  
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    res = n1 * n2;    
    printf (" The multiply of %d * %d is: %d", n1, n2, res);  
}  

// use divide() function to divide two numbers  
int divide()  
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
      
    if (n2 == 0)  
    {  
        printf (" \n Divisor cannot be zero. Please enter another value ");  
        scanf ("%d", &n2);        
    }  
    res = n1 / n2;    
    printf (" \n The division of %d / %d is: %d", n1, n2, res);  
}  


// use modulus() function to find remainder 
int modulus()  
{  
    double res;
    int n1,n2;
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
      
    if (n2 == 0)  
    {  
        printf (" \n Divisor cannot be zero. Please enter another value ");  
        scanf ("%d", &n2);        
    }  
    res = fmod(n1,n2);    
    printf (" \n The modulus of %d and %d is: %.1f", n1, n2, res);
}

// use square() function to get the square of the given number  
int square()  
{  
    int n1, res;  
    printf (" Enter a number to get the Square: ");  
    scanf ("  %d", &n1);    
    res = n1*n1;    
    printf (" \n The Square of %d is: %d", n1, res);  
}  
  
// use squareroot() function to get the square root of the given number   
int squareroot()  
{  
    float res;  
    int n1;  
    printf (" Enter a number to get the Square Root: ");  
    scanf ("  %d", &n1);  
    res = sqrt(n1);   
    printf (" \n The Square Root of %d is: %.1f", n1, res);  
}  


// use cuberoot() function to get the cube root of the given number
int cuberoot()  
{  
    float res;  
    int n1;  
    printf (" Enter a number to get the Cube Root: ");  
    scanf ("  %d", &n1);  
    res = cbrt(n1);   
    printf (" \n The Cube Root of %d is: %.1f", n1, res);  
} 

// use power() function to get the raised to the power of the given number 
int power()  
{  
    float res;  
    int n1,n2;  
    printf (" Enter a base number: ");  
    scanf ("  %d", &n1);  
    printf (" Enter a exponent number: ");  
    scanf ("  %d", &n2);
    res = pow(n1,n2);   
    printf (" \n The base %d rasied to the power %d: %.1f", n1, n2, res);  
} 
int sine() {
        float x;
    printf("Enter the angle which you find radian of sine: ");
    scanf("%f",&x);
    printf("The radian of sin(%.1f) is: %.2f",x,sin(x));
    return 0;
}
int cosine() {
    float x;
    printf("Enter the angle which you find radian of cosine: ");
    scanf("%f",&x);
    printf("The radian of cos(%.1f) is: %.2f",x,cos(x));
    return 0;
}
  
  int tangent() {
      float x;
    printf("Enter the angle which you find radian of tangent: ");
    scanf("%f",&x);
    printf("The radian of tan(%.1f) is: %.2f",x,tan(x));
      return 0;
  }
  int multi_addition() {
    int i,n1,n2,sum = 0;
     printf("Enter the number of integers you want to add: ");
     scanf("%d",&n1);
     for(i=1;i<=n1;i++){
         printf("Enter the number %d: ",i);
         scanf("%d",&n2);
          sum += n2;
     }
     printf("The sum of all integers you entered: %d",sum);
    return 0;
}
int multi_multiply(){
    int i,n1,n2,multi=1;
     printf("Enter the number of integers you want to multiply: ");
     scanf("%d",&n1);
     for(i=1;i<=n1;i++){
         printf("Enter the number %d: ",i);
         scanf("%d",&n2);
          multi *= n2;
     }
     printf("The multiply of all integers you entered: %d",multi);
    return 0;
}
int absolute_value() {
    float n1;
    printf("Enter a random number or floating number: ");
    scanf("%f", &n1);  
    printf("The absolute value of %.3f is %.3f\n", n1, fabs(n1)); 
    return 0;
}
int round_up() {
float n1;
printf("Enter a random number or floating number: ");
scanf("%f",&n1);
printf("The round up number %.1f",ceil(n1));
return 0;
}
int logbe() {
    int n1;
    printf("Enter a Number: ");
    scanf("%d", &n1); 
    printf("The log e %d is %.2f\n", n1, log(n1));
    return 0;
}
int logb10() {
    int n1;
    printf("Enter a Number: ");
    scanf("%d", &n1); 
    printf("The log10 %d is %.2f\n", n1, log10(n1));
    return 0;
}
int floating_point_remainder() {
    double n1, n2;  
    printf("Enter a Number 1: ");
    scanf("%lf", &n1);  
    printf("Enter a Number 2: ");
    scanf("%lf", &n2);
    printf("Floating point remainder is: %.2lf\n", fmod(n1, n2)); 
    return 0;
}

