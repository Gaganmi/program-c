// ARITHMETIC OPERATIONS.
#include <stdio.h>

int main()
{
    int a,b,c;
    printf(" GAGANDEEP SINGH");
    printf(" Enter Number");
    scanf("%d",&a);
    printf(" Enter Number");
    scanf("%d",&b);
    c=a+b;
    printf("\n Addition %d",c);
    c=a-b;
    printf("\n Suntraction %d",c);
    c=a/b;
    printf("\n Division %d",c);
    c=a*b;
    printf("\n Multiplication %d",c);
    c=a%b;
    printf("\n Modulus %d",c);

    return 0;
}


-------------------------------------------------------------------------------------------

// Print ASCII value
#include <stdio.h>
int main() 
{  
    char a;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter a character : ");
    scanf("%c", &a);  
    
    printf("\n ASCII value of %c = %d", a, a);
    
    return 0;
}


--------------------------------------------------------------------------------------------

// find circle area and perimeter
#include <stdio.h>
int main() 
{  
    int radius;
    printf(" GAGANDEEP SINGH");
    float pi=3.14,area,perimeter;
    printf("\n Enter the Radius : ");
    scanf("%d",&radius);
    area=pi*radius*radius;
    printf("\n Area of the circle : %f",area);
    perimeter=2*pi*radius;
    printf("\n Perimeter of the circle : %f",perimeter);
    
    return 0;
}


-------------------------------------------------------------------------------------------


// swaping two variables values
#include <stdio.h>
int main() 
{  
    int a=50,b=100,c;
    printf(" GAGANDEEP SINGH");
    c=a;
    // so c value is 50
    a=b;
    // so a value is updated to 100
    b=c;
    //so b value is updated to 50
    printf("\n After the swap value of a is : %d",a);
    printf("\n After the swap value of b is : %d",b);
    
    return 0;
    
}

-------------------------------------------------------------------------------------------

// find the person is elegible for voting or not

#include <stdio.h>
int main() 
{  
    int age;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter Age : ");
    scanf("%d",&age);
    if(age>=18)
    {
    printf("\n You are eligible for voting");
    }
    else
    { 
        printf("\n You are eligible for voting");
    }    
    return 0;
}


------------------------------------------------------------------------------------------

// Find odd even numbers

#include <stdio.h>
int main() 
{  
    int a;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter Number : ");
    scanf("%d",&a);
    if(a%2==0)
    {
    printf("\n Number is Even");
    }
    else
    { 
        printf("\n Number is Odd");
    }    
    return 0;
}

-------------------------------------------------------------------------------------------

// A loop statement

#include <stdio.h>
int main() 
{  
    int a,i;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter Number : ");
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        printf(" %d",i);
    }
    
    return 0;
}

-----------------------------------------------------------------------------------------------

// find the perfect square

#include<stdio.h>
#include<math.h>
int main() 
{  
    int a,b,i,s;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter Number : ");
    scanf("%d",&a);
    printf("\n Enter Number : ");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        s=sqrt(i);
        if(s*s==i)
    {
        printf("\n The Perfect Square is : %d",i);
    }
    }
    return 0;
}


-----------------------------------------------------------------------------------------

// calculator using switch case

#include <stdio.h>
int main()
{
    int a,b,c,choice;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter two Numbers : ");
    scanf(" %d  %d",&a,&b);
    printf("\n Arithmatic Operation ");
    printf("\n 1. Addition");
    printf("\n 2. Subtraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    printf("\n Enter Your Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :
        c=a+b;
        printf("%d",c);
        break;
        case 2 :
        c=a-b;
        printf("%d",c);
        break;
        case 3 :
        c=a*b;
        printf("%d",c);
        break;
        case 4 :
        c=a/b;
        printf("%d",c);
        break;
    }

    return 0;
}


-----------------------------------------------------------------------------------------


// print the size of datatypes

#include <stdio.h>

int main()
{
    int i;
    float f;
    char c;
    double d;
    printf(" GAGANDEEP SINGH");
    printf("\n Size of int is : %d",sizeof(i));
    printf("\n Size of float is : %d",sizeof(f));
    printf("\n Size of char is : %d",sizeof(c));
    printf("\n Size of double is : %d",sizeof(d));

    return 0;
}


------------------------------------------------------------------------------------------

//find the square of the number

#include<stdio.h> 
int main() 
{ 
    int i,a;
    printf("\n Enter Number : "); 
    scanf("%d",&a); 
    for(i=0;i<=a;i++) 
    { 
        printf("\n Number : %d, Its Square is : %d",i,i*i); 
        
    } 
    return 0; 
    
}



-------------------------------------------------------------------------------------------

// find the number is in between 10 to 10000 or not.

#include<stdio.h> 
int main() 
{ 
    int a;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter Number : "); 
    scanf("%d",&a); 
    if(a>10 && a<10000)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0; 
    
}


-------------------------------------------------------------------------------------

// find simple interest and compund interest,

#include<stdio.h>
#include <math.h>
int main() 
{ 
    float p,r,t,CI,SI;
    printf(" GAGANDEEP SINGH");
    printf(" Enter Principal Amount : ");
    scanf("%f",&p);
    printf(" Enter Rate : ");
    scanf("%f",&r);
    printf(" Enter Time Period : ");
    scanf("%f",&t);
    CI=p*(pow((1+r/100),t));
    printf("\n CI = %f",CI);
    SI=(p*r*t)/100;
    printf("\n SI = %f",SI);
    
    return 0; 
    
}


-------------------------------------------------------------------------------------------------

// find celsius in fahrenheit

#include<stdio.h>

int main() 
{ 
    float c,f;
    printf("\n Enter Temperature is Celsius : ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("\n Temperature in Fahrenheit is : %f",f);
    
    return 0; 
    
}


--------------------------------------------------------------------------------------------------

// find square of the number

#include<stdio.h>

int main() 
{ 
    int a,s;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter Number : ");
    scanf("%d",&a);
    s=a%10;
    if(s==5)
    {
        a=a/10;
        printf("\n Square of the number is : %d%d",a*a++,s*s);
    }
    
    return 0; 
    
}



----------------------------------------------------------------------------------------------------



#include<stdio.h>

int main() 
{ 
    int a,b;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter Number : ");
    scanf("%d",&a);
    printf(" Enter Number : ");
    scanf("%d",&b);
    for(a;b<=a;a--)
    printf(" %d",a);
    
    return 0; 
    
}



---------------------------------------------------------------------------------------------------


#include<stdio.h>

int main() 
{ 
    int a,b;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter Number : ");
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        a=a/10;
        printf(" %d",b);
    }
    
    return 0; 
    
}



----------------------------------------------------------------------------------------

//find the number is armstrong or not

#include<stdio.h>

int main() 
{ 
    int a,b,r,arm=0;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter Number : ");
    scanf("%d",&a);
    b=a;
    while(a>0)
    {
        r=a%10;
        arm=arm+(r*r*r);
        a=a/10;
    }
    if(b==arm)
    {
        printf("\n Armstrong Number");
    }
    else
    {
        printf("\n Not Armstrong Number");
    }
    return 0; 
}



------------------------------------------------------------------------------------------



#include<stdio.h>

int main() 
{ 
    int a,b,r,arm=0;
    printf("\n Enter Number : ");
    scanf("%d",&a);
    b=a;
    while(a>0)
    {
        r=a%10;
        arm=arm+(r*r*r);
        a=a/10;
    }
    if(b==arm)
    {
        printf("\n Armstrong Number");
    }
    else
    {
        printf("\n Not Armstrong Number");
    }
    return 0; 
}



-------------------------------------------------------------------------------------

// find the greatest number 
#include <stdio.h>
int main()
{
    int a,b,c;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter the value of A : ");
    scanf("%d",&a);
    printf(" Enter the value of B : ");
    scanf("%d",&b);
    printf(" Enter the value of C : ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("\n A is greater %d",a);
    }
    else if(b>a && b>c)
    {
        printf("\n B is greater %d",b);
    }
    else 
    {
         printf("\n C is greater %d",c);
    }
    return 0;
}



--------------------------------------------------------------------------------------------

//find the sum using loop

#include <stdio.h>
int main()
{
    int a=1,sum;
    printf(" GAGANDEEP SINGH");
    while(a<=10)
    {
        printf("\n Enter Number %d",a);
        a++;
        sum==a;
        printf(" Sum = %d",sum);
    }
    
    return 0;
}

---------------------------------------------------------------------------------------------


#include <stdio.h>
int main()
{
    int i=30;
    printf(" GAGANDEEP SINGH");
    do
    {
        printf(" %d",i);
        i--;
    }
    while(i>=1);
    return 0;
}


----------------------------------------------------------------------------------------------

// find leap year
#include <stdio.h>

int main()
{
    int a;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter Year : ");
    scanf("%d",&a);
    if(a%400==0 || a%4==0)
    {
        printf(" This is a Leap year");
    }
    else
    {
         printf(" This is not a Leap year");
    }

    return 0;
}


--------------------------------------------------------------------------------------------------

// find sum of the array
#include <stdio.h>
int main()
{
    int a[6],sum=0,i;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter Array : ");
    for(i=0;i<=5;i++)
    {   
    scanf(" %d",&a[i]);
    sum=sum+a[i];
    }
    printf(" The sum of array element is : %d",sum);
    
    return 0;
}


---------------------------------------------------------------------------------------------


#include <stdio.h>
int main()
{
   int a,i;
   printf(" GAGANDEEP SINGH");
   printf("\nEnter the value : ");
   scanf("%d",&a);
   for(i=1;i<=10;i++)
   {
       printf("%d*%d=%d\n",a,i,a*i);
   }
    return 0;
}


--------------------------------------------------------------------------------------------------

//find the post-increment & decrement & pre-increment & decrement

#include <stdio.h>
int main()
{
   int a=6,b=5,c=7,d=4;
   printf("\n Hello. My name is GAGANDEEP SINGH");
   
   a++;
   printf("\n The post increment value is : %d",a);
   b--;
   printf("\n The post decrement value is : %d",b);
   ++c;
   printf("\n The pre increment value is : %d",c);
   --d;
    printf("\n The pre decrement value is : %d",d);
    return 0;
}



-------------------------------------------------------------------------------------------------------

//print your details

#include <stdio.h>

int main()
{
    printf("\n NAME - GAGANDEEP SINGH ");
    printf("\n AGE - 18");
    printf("\n QUALIFICATION - 10+2 PASSOUT");
    printf("\n BOARD - CBSE");
    printf("\n UNIVERSITY - GGSIPU");
    printf("\n INSTITUTE - TECNIA INSTITUTE OF ADVANCED STUDIES ");
    printf("\n COURSE - BCA");
    printf("\n MOBILE NO. - 8383066060");
    printf("\n EMAIL ID - gaganqqq@gmail.com");

    return 0;
}

-----------------------------------------------------------------------------------------

// find quotient and remainder

#include <stdio.h>

int main()
{
    int a=56,b=3,q,r;
    printf(" GAGANDEEP SINGH");
    q=a/b;
    r=a%b;
    printf("\n quotient : %d",q);
    printf("\n remainder : %d",r);
    
    return 0;
}

------------------------------------------

//find the gretest number

#include <stdio.h>

int main()
{
    int a,b,c,g;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter First Number : ");
    scanf("%d",&a);
    printf("\n Enter Second Number : ");
    scanf("%d",&b);
    printf("\n Enter Third Number : ");
    scanf("%d",&c);
    g=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("\n The Greatest Number is : %d",g);
    return 0;
}


------------------------------------------------------------

// find the size of bits 

#include <stdio.h>

int main()
{
    int a;
    printf(" GAGANDEEP SINGH");
    printf("\n %d bits",sizeof(a));
    return 0;
}

------------------------------------------------------------


// find the value of G.

#include <stdio.h>

int main()
{
    char a;
    printf(" GAGANDEEP SINGH");
    a='G';
    printf("\n %c",a);
    
    
    return 0;
}


--------------------------------------------

// find no. is even or odd.

#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter Value : ");
    scanf("%d",&a);
    if(a%2==0)
    goto even;
    else
    goto odd;
    even:
    printf("\n Even");
    return;
    odd:
    printf("\n Odd");
    
    getch();
}

-----------------------------------------------------------



#include <stdio.h>

int main()
{
    char*string="444";
    printf(" GAGANDEEP SINGH");
    printf("\n Enter The Value : %55.5s",string);
    
    return 0;
}

-----------------------------------------------------------


// find the number is prime or composite

#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,r=0;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter Number : ");
    scanf("%d",&a);
    for(b=2;b<a-1;b++)
    {
    if(a%b==0)
    r=1;
    break;
}
if(r==0)
{
    print("\n Prime Number");
}
else
{
    printf("\n Composite Number");
}
    

    getch();
}

--------------------------------------------------------------------

//find the time

#include <stdio.h>

int main()
{
    int time;
    printf("\n GAGANDEEP SINGH");
    printf("\n ENTER TIME : ");
    scanf("\n %d",&time);
    if(time<12)
    {
        printf("\n GOOD MORNING");
    }
    else if(time>=12 && time<17)
    {
    printf("\n GOOD AFTERNOON  ");
    }
    else if (time>=17 && time<=19)
    {
        printf("\n GOOD EVENING");
    }
    else 
    {
    printf("\n GOOD NIGHT ");
    }

    return 0;
}


---------------------------------------------------------------------------------------------

// print values using while loop

#include <stdio.h>

int main()
{
    int i=0;
    printf("\n GAGANDEEP SINGH");
    while(i<10)
    {
        i++;
        if(i==0)
        {
        continue;
        }
        printf("\n %d",i);
    }

    return 0;
}

--------------------------------------------------------------------------

//find matrix 

#include<stdio.h> 
#include<conio.h>

int main() 
{
    int a[3][2],i,j,row,col;
 printf("\n GAGANDEEP SINGH"); 
 printf("\n Enter Number : ");
for(i=0;i<3;i++) 
for(j=0;j<2;j++)
scanf(" %d",&a[i][j]);
printf("\n Main Matrics : "); 
for(i=0;i<3; i++) 
{
    for(j=0;j<2; j++)
printf(" %d",a[i][j]); 
printf("\n");
}
printf ("\n Transpose Matrics : ");

for(i=0; i<2; i++) 
{
    for(j=0; j<3; j++)
printf (" %d",a[i][j]);
printf("\n");
}
return 0;
}

----------------------------------------------------------------------------

//find the factoraial no.

#include<stdio.h>
#include<conio.h> 
int main()
{
int a,b=1;
printf("\n GAGANDEEP SINGH");
printf("\n Enter A Number : "); 
scanf("%d",&a);
do
{
    b=b*a;
a--;
}
while(a>0);
printf("\n Factorial of Number is : %d",b);

return 0;
}

-------------------------------------------------------------------


#include <stdio.h>
#include <conio.h>
#include <limits.h>
#include <float.h>
void main()
{
    printf("\n GAGANDEEP SINGH");
    printf("\n char store value from %d to %d",CHAR_MIN,CHAR_MAX);
    printf("\n unsigned char store value from %d to %d",UCHAR_MAX);
    printf("\n short store values from %d to %d",SHRT_MIN,SHRT_MAX);
    printf("\n unsigned short store values from 0 to %u",USHRT_MAX);
    
    getch();
}

-------------------------------------------------------------

// find the salary

#include<stdio.h>
int main() 
{ 
    int sales,salary,salary2;
printf("\n GAGANDEEP SINGH");
printf("\n Enter Sales : ");
scanf("%d",&sales);
if(sales>=100000)
salary=3000+(0.2*3000)+(1.10*3000)+500+(0.1*sales)+500; 
{
printf("\n The Salary would be %d", salary); 
}
if(salary2<100000)
salary2=3000+(0.2*3000)+(1.10*3000)+500+(0.05*sales)+200;
{
printf("\n The salary is %d", salary2);
}
return 0;

}

-------------------------------------------------------------

// find the condition is satisfied or not

#include <stdio.h>

int main()
{
    int age, weight; 
    printf(" GAGANDEEP SINGH"); 
printf("Enter your age:");

scanf("%d",&age);
printf("Enter your weight");
scanf("%d",&weight);
if(age>=25||weight>=50)
{
 printf("The condition is not satisfied");
}
else
{
     printf("The condition is satisfied");
while(age<25 && weight<50);
}
return 0;
}

-------------------------------------------------------------


//find the sum of two variables

#include <stdio.h>

void function();
int main() 
{
printf(" GAGANDEEP SINGH");
function();
return 0;
}
void function()
{
    int a,b,c; 

printf("\n Enter the value of a:"); 
scanf("%d",&a); 
printf("\n Enter the value of b:"); 
scanf("%d",&b); 
c=a+b; 
printf(" The sum is %d",c);

}

----------------------------------------------------------

#include <stdio.h>

void function(int a, int b); 
int main() 
{
    int a,b;

printf("\n GAGANDEEP SINGH"); 
function(a,b);
}
void function(int a,int b) 
{ 
    int c;
printf("\n Enter the value of a : "); 
scanf("%d",&a); 
printf("\n Enter the value of b : "); 
scanf("%d",&b);
c=a+b;
printf(" The sum is %d",c);
}

--------------------------------------------------------

#include<stdio.h>

int sum();
int main()
{
    int c;
printf(" GAGANDEEP SINGH"); 
c=sum();
printf("The sum is %d",c);

return 0;
}
int sum()
{
    int a,b,c; 
printf("\n Enter the value of a : "); 
scanf("%d",&a); 
printf("\n Enter the value of b : "); 
scanf("%d",&b);
c=a+b;
return c;
}


------------------------------------------------

#include<stdio.h>

int sum(int a, int b);
int main() 
{
int a;
printf(" GAGANDEEP SINGH"); 
a=sum(2,15);
printf("\n The sum is %d",a);
return 0;
}
int sum(int a, int b)
{
int c; 
c=a+b;
return c;
}

-------------------------------------------------------



#include <stdio.h>

void function(); 
int main()
{ 
    printf(" GAGANDEEP SINGH");
function();

return 0;
}
void function()
{
    int a,b,c;
    printf("\n Enter the value of a : ");
    scanf("%d",&a); 
    printf("\n Enter the value of b : "); 
    scanf("%d",&b); 
    c=a+b; 
    printf("\n The sum is %d",c);
}
-------------------------------------------------------------------------


#include <stdio.h>

int main()
{ 
    int line,row,col,value=0; 
    printf("\n GAGANDEEP SINGH");
    printf("\nEnter the lines : ");
    scanf("%d",&line);

for (row=1;row<=line;row++)
{
    for(col=1;col<=row;col++)
    {
    value++;
    printf("%d\t",value);
    }
printf("\n");
}
return 0;
}


---------------------------------------------------------------------------

#include<stdio.h>

int main()
{ int rows, i, j;

char x='A'; 
printf("\n GAGANDEEP SINGH");
printf("\n Enter the number of rows : "); 
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{ 
    for(j=1;j<=i;j++)
    { 
        x++; 
        printf("%c",x);
} 
printf("\n");
} 
return 0;
}

---------------------------------------------------------------------------


#include<stdio.h>

int main()
{
    printf("\n GAGANDEEP SINGH");

int num, i, j,value; 
printf("\n Enter the number of rows:"); 
scanf("%d",&num); 
value=num-1;
for(j=1;j<=num;j++)
{
for(i=1;i<=value;i++) 
printf(" "); 
value--; 
for(i=1;i<=2*j-1;i++) 
printf("*"); 
printf("\n");
}
value=1;
for(j=1;j<=num-1;j++)
{
for(i=1;i<=value;i++) 
printf(" ");
value++;
for(i=1;i<=2*(num-j)-1;i++) 
printf("*");
printf("\n");
}
return 0;
}


-----------------------------------------------------

#include <stdio.h>

void wrong_swap(int a,int b);

int main() 
{ 
    int a=2,b=3;
    printf("\n GAGANDEEP SINGH");
    printf("\n Before calling the function the value are %d and %d",a,b); 
    wrong_swap(a,b); 
    printf("\n After calling the function, the values are %d and %d",a,b);
return 0;
}
void wrong_swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
}

--------------------------------------------------------

#include <stdio.h> 
void swap(int*a, int*b);
int main() 
{
    int a=2,b=3;
    printf("\n GAGANDEEP SINGH"); 
    printf("\n The values before call by reference is %d and %d",a,b); 
    swap(&a,&b); 
    printf("\n The values after call by reference is %d and %d",a,b);

return 0;
} 
void swap(int*a, int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

------------------------------------------------------
#include<stdio.h>

int addNumber(int n); 
int main()
{
    int num = 5; 
    printf("\n GAGANDEEP SINGH"); 
    printf("\n Sum = %d",addNumber(num));
}
int addNumber(int n)
{ 
    if(n!=0)
return n + addNumber(n-1);
else 
return n;
}

-------------------------------------------------------

#include<stdio.h> 
int sum_of_digit(int n)
{
    if (n == 0) 
    return 0;
return (n % 10 + sum_of_digit(n / 10));
}
int main()
{
    int num;
    printf("\n GAGANDEEP SINGH"); 
    printf("\n Enter a Number: ");
    scanf("%d",&num); 
    int result = sum_of_digit(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}

--------------------------------------------------------------

#include<stdio.h> 
int main()
{
    int size;
    printf("\n GAGANDEEP SINGH"); 
    printf("\n Enter the value of array size :");
    scanf("%d",&size); 
    int arr[size]; 
    for(int i=0;i<size;i++)
    {
        printf("Enter array value :\t"); 
        scanf("%d",&arr[i]);

}
for(int i = 0; i < size; i++)
{
printf("Value of array is %d\n",arr[i]);
}
}

-----------------------------------------------------

#include<stdio.h> 
#include<conio.h>
int main()
{
 int n,last=10;
 printf("\n GAGANDEEP SINGH"); 
 printf("\n Even Number List :");
 n=2;
 while(n<=last)
 {
 printf(" %d",n);
 n=n+2;
}
printf("\n Odd Number List :");
n=1; 
while(n<=last)
{
printf(" %d",n);
n=n+2;
}
return 0;
}

---------------------------------------------------

#include<stdio.h> 
int main() 
{
    char str[1008], ch; 
    int count = 0; 
    printf("\n GAGANDEEP SINGH"); 
    printf("\n Enter a string: ");
    fgets(str, sizeof(str), stdin); 
printf(" Enter a character to find its frequency: ");

scanf("%c", &ch); 
for(int i = 0; str[i] != '\0'; ++i) 
{ 
    if (ch == str[i])
    ++count;
}
    printf(" Frequency of %c = %d", ch, count);

return 0;
}

--------------------------------------------------

#include<stdio.h> 
int main()
{ 
    int x[3][2],i,j,row,col;
    printf("\n GAGANDEEP SINGH");
    printf("\n Enter the elements of array "); 
    for(i=0;i<3;i++) 
    for(j=0;j<2;j++) 
    scanf("%d",&x[i][j]);

printf("\n Main matrix\n");

for(i=0;i<3;i++)
{
    for(j=0;j<2;j++)
    printf(" %d",x[i][j]);
    printf("\n"); 
}
printf(" Transpose matrix\n");

for(i=0;i<2;i++)
{
    for(j=0;j<3;j++) 
    printf(" %d",x[i][j]);
    printf("\n");
    }

return 0;
}

----------------------------------------------------------------

#include<stdio.h> 
int main()
{
    int a=10;
    int*ptr=&a;
    printf("\n GAGANDEEP SINGH");
    printf("\n The value of a is %d",*ptr);
    printf("\n The address of a is %p",ptr);
    
    return 0;
}

--------------------------------------



#include <stdio.h>
int main() 
{
    int data[5];
    printf("\n GAGANDEEP SINGH");

    printf("\n Enter elements: ");
    for (int i = 0; i < 5; ++i)
        scanf("%d", data + i);

    printf(" You entered: \n");
    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(data + i));
    return 0;
}

---------------------------------------------

#include <stdio.h>
#include<stdlib.h>

int main()

{ 
    printf("GAGANDEEP SINGH");

 int *ptr;
 ptr=(int*)malloc(6 *sizeof(int));
for (int i=0;i<6;i++)
{
    printf("\n Enter the value of %d elements:",i); 
    scanf("%d",&ptr[i]);
}
for(int i=0;i<6;i++)
{
    printf("\n The value of %d elements is %d",i,ptr[i]);
}
return 0;
}

-------------------------------------------------------------
#include <stdio.h>
#include<stdlib.h>

int main()

{ 
    printf("GAGANDEEP SINGH");
    int *ptr;
    ptr=(int*)calloc(6,sizeof(int));
    for(int i=0;i<6;i++)
    {
        printf("\n The value of %d elements is %d",i,ptr[i]);
    }
return 0;
}
--------------------------------------
#include<stdio.h> 
#include<stdlib.h>

int main()
{ 
    printf("GAGANDEEP SINGH");
int *ptr; 
int *ptr2;
ptr=(int*)malloc(6*sizeof(int));
for(int i=0;i<600;i++)
{
ptr2=(int*)malloc(60000*sizeof(int));
printf("\n Enter the value of %d elements:", i);
scanf("%d",&ptr[i]);
free(ptr2);
}
for (int i=0;i<6;i++)
{ 
    printf("\n The value of %d elements is %d",i,ptr[i]);
}
return 0;
}

-------------------------------------
#include<stdio.h> 
#include<string.h>

int main()
{ 
    char ptr[22]="Gagandeep";
    char q[22]=" Singh";
    strcat(ptr,q);
    printf(" Concatenation is %s",ptr);

return 0;
}

----------------------------
#include<stdio.h> 
#include<string.h>

int main()
{ 
    char *ptr="Gagandeep";
    char s[22];
    int a;
    strcpy(s,ptr);
    printf("Now the s value is %s",s);
    
return 0;
}

------------------------------------

#include<stdio.h> 
void function (int*ptr,int n);
int main()
{ 
    printf("GAGANDEEP SINGH");
    int a[]={1,2,3,4,5,6,7};
    function(a,7);
    for(int i=0;i<7;i++)
    {
        printf("\n The value of %d of element is %d\n",i,a[i]);
    }
return 0;
}
void function (int*ptr,int n)
{
    int temp;
    for(int i=0;i<(n/2);i++)
    {
    temp=ptr[i];
    ptr[i]=ptr[n-i-1];
    ptr[n-i-1]=temp;
    }
}

------------------------------------------------

#include <stdio.h>
#include <conio.h>
int main()
{
    int num,r;
    printf("\n GAGANDEEP SINGH");
    printf("\n Enter Number : ");
    scanf("%d",&num);
    r=num%10;
    if(r==5)
    {
        num=num/10;
        printf("\n The square is = %d%d",num*num++,r*r);
    }

    return 0;
}

-------------------------------------

#include <stdio.h>

int main()
{
    int i;
    char g[6]={'g','a','g','a','n','\0'};
    
    for(i=6;i>=0;i--)
    {
        printf("%c",g[i]);
    }

    return 0;
}


--------------------------------------------

#include <stdio.h>
int main()
{
  float celsius, fahrenheit;
  printf(" GAGANDEEP SINGH");
  printf("\n Enter Temperature in Celsius: ");
  scanf("%f", &celsius);
  fahrenheit = (celsius * 9 / 5) + 32;
  printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
  return 0;
}


--------------------------------------------


#include<stdio.h>

int main()
{ 
    int line,row,col,value=0; 
    printf("\n GAGANDEEP SINGH");
    printf("\n Enter the lines : ");
    scanf("%d",&line);

for (row=1;row<=line;row++)
{
    for(col=1;col<=row;col++)
    {
    value++;
    printf(" %d\t",value);
    }
printf("\n");
}
return 0;
}


---------------------------------



#include<stdio.h>
int main()
{
int a[5],i,j,temp;
printf(" GAGANDEEP SINGH");
printf("\n Enter array elements:");

for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<5;i++)
{
    for(j=0;j<4-i;j++)
    {
    if(a[j]>a[j+1])
    {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
    }
}
}
for(i=0;i<5;i++)
printf("\n %d",a[i]);
return 0;
}

-----------------------------------------



#include <stdio.h>
#include <string.h>
int main()
{
 char s[20];
 int i, l;
 int f=0;
 printf(" GAGANDEEP SINGH");
 printf("\n Enter a string:");
 scanf("%s", s);
 l = strlen(s);
 
    for(i=0;i < l ;i++){
    if(s[i] != s[l-i-1]){
    break;
   }
}
    if(f=1)
    {
    printf(" %s is not a palindrome", s);
    }    
    else{
    printf(" %s is a palindrome", s);
    }
    return 0;
}


-------------------------------------------




#include <stdio.h>

int main()
{
    printf(" GAGANDEEP SINGH\n");
    int a, b, *p, *q, sum , mul, divide, sub;
    printf(" Enter two numbers : ");
    scanf(" %d %d", &a, &b);
    p = &a;
    q = &b;
    sum = *p + *q;
    sub = *p - *q;
    mul = *p * *q;
    divide = *p / *q;
    printf("Sum of entered numbers = %d\n",sum);
    printf("Subtact of entered numbers = %d\n",sub);
    printf("Multiply of entered numbers = %d\n",mul);
    printf("Divide of entered numbers = %d\n",divide);
    return 0;
}

--------------------------------------------------------------------



#include <stdio.h>

struct employee
{
    int EmployeeId;
    char EmployeeName[100];
    int Age;
    char Address[100];
    char Department[100];
    int salary;
};

int main(void)
{
    struct employee emp[100];
    int n, i, key;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter the number of employees:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the details of employee %d:\n", i + 1);
        printf("Employee ID:\n");
        scanf("%d", &emp[i].EmployeeId);
        printf("Employee name:\n");
        scanf("%s", emp[i].EmployeeName);
        printf("Employee Age:\n");
        scanf("%d", &emp[i].Age);
        printf("Employee Address:\n");
        scanf("%s", emp[i].Address);
        printf("Employee Department:\n");
        scanf("%s", emp[i].Department);
        printf("Employee Salary:\n");
        scanf("%d", &emp[i].salary);
        printf("\n");
    }
    printf("Enter the id of employee to print the details:\n");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (emp[i].EmployeeId == key)
        {
            printf("Details of employee %d is :\n", emp[i].EmployeeId);
            printf("Name=%s\n", emp[i].EmployeeName);
            printf("Age=%d\n", emp[i].Age);
            printf("Address=%s\n", emp[i].Address);
            printf("Department=%s\n",emp[i].Department);
            printf("Salary=%d\n", emp[i].salary);
            break;
        }
    }
    return 0;
}

-----------------------------------------------



#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, count, rem, sum, choice, nu, m;
    long int n, a, b, c, d, e, f, i;
    printf(" GAGANDEEP SINGH");
    printf("\n Press 1 for armstrong  number");
    printf("\n Press 2 for prime numbers");
    printf("\n Press 3 for reverse of an integer\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the number to which you want to find armstrong number:");
        scanf("%d", &nu);
        while (count <= nu)
        {
            num = count;
            sum = 0;
            while (num)
            {
                rem = num % 10;
                sum = sum + (rem * rem * rem);
                num = num / 10;
            }
            if (count == sum)
            {
                printf("%d is an armstrong number\n", count);
            }
            count++;
        }
        break;
    case 2:
        printf("Enter the number till which you want prime numbers\n");
        scanf("%d", &nu);

        printf("Prime numbers are:-\n");
        for (i = 2; i <= nu; i++)
        {
            int c = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    c++;
                }
            }
            if (c == 2)
            {
                printf("%ld ",i);
            }
        }
        break;
    case 3:
        printf("\nEnter a five digit number: ");
        scanf("%li", &n);
        b = (n % 10);
        c = (n / 10) % 10;
        d = (n / 100) % 10;
        e = (n / 1000) % 10;
        f = (n / 10000) % 10;
        a = (b * 10000) + (c * 1000) + (d * 100) + (e * 10) + (f);
        printf("\nThe number obtained by reversing the number: %li", a);
    }
    return 0;
}


------------------------------------------------------

//hexadecimal to binary

#include <stdio.h>
#include <string.h>

int main()
{
    char hex[17], bin[65] = "";
    int i = 0;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter any hexadecimal number: ");
    gets(hex);
    for(i=0; hex[i]!='\0'; i++)
    {
        switch(hex[i])
        {
            case '0':
                strcat(bin, "0000");
                break;
            case '1':
                strcat(bin, "0001");
                break;
            case '2':
                strcat(bin, "0010");
                break;
            case '3':
                strcat(bin, "0011");
                break;
            case '4':
                strcat(bin, "0100");
                break;
            case '5':
                strcat(bin, "0101");
                break;
            case '6':
                strcat(bin, "0110");
                break;
            case '7':
                strcat(bin, "0111");
                break;
            case '8':
                strcat(bin, "1000");
                break;
            case '9':
                strcat(bin, "1001");
                break;
            case 'a':
            case 'A':
                strcat(bin, "1010");
                break;
            case 'b':
            case 'B':
                strcat(bin, "1011");
                break;
            case 'c':
            case 'C':
                strcat(bin, "1100");
                break;
            case 'd':
            case 'D':
                strcat(bin, "1101");
                break;
            case 'e':
            case 'E':
                strcat(bin, "1110");
                break;
            case 'f':
            case 'F':
                strcat(bin, "1111");
                break;
            default:
                printf("Invalid hexadecimal input.");
        }
    }
    printf("Hexademial number = %s\n", hex);
    printf("Binary number = %s", bin);
    return 0;
}


-----------------------------------------------------------------------------------




#include<stdio.h>
long int multiplyNumbers(int n);
int fibonacci(int);
int main() {
    int n,i;
    printf(" GAGANDEEP SINGH\n");
    printf(" Enter a positive integer:\n");
    scanf("%d",&n);
    printf("Factorial of %d = %ld\n", n, multiplyNumbers(n));
     
	printf("Enter the number of element you want in series :\n"); 
	scanf("%d",&n); 
	printf("fibonacci series is : \n");
	for(i=0;i<n;i++) { 
		printf("%d ",fibonacci(i));
	}
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}

int fibonacci(int i){ 
	if(i==0) return 0; 
	else if(i==1) return 1; 
	else return (fibonacci(i-1)+fibonacci(i-2));
}


----------------------------------------------------------------------------


//matrix

#include<stdio.h>
#include<stdlib.h>

void add(int m[3][3], int n[3][3], int sum[3][3])
{
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      sum[i][j] = m[i][j] + n[i][j];
}


void subtract(int m[3][3], int n[3][3], int result[3][3])
{
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      result[i][j] = m[i][j] - n[i][j];
}

void multiply(int m[3][3], int n[3][3], int result[3][3])
{
  for(int i=0; i < 3; i++)
  {
    for(int j=0; j < 3; j++)
    {
      result[i][j] = 0;
      for (int k = 0; k < 3; k++)
      result[i][j] += m[i][k] * n[k][j];
    }
  }
}

void transpose(int matrix[3][3], int trans[3][3])
{
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      trans[i][j] = matrix[j][i];
}

void display(int matrix[3][3])
{
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
      printf("%d\t",matrix[i][j]);

    printf("\n"); 
  }
}

int main()
{
  int a[][3] = { {5,6,7}, {8,9,10}, {3,1,2} };
  int b[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
  int c[3][3];

  printf(" GAGANDEEP SINGH\n");
  printf(" First Matrix:\n");
  display(a);
  printf(" Second Matrix:\n");
  display(b);

  int choice;

  do
  {
    printf("\nChoose the matrix operation,\n");
    printf("----------------------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Transpose\n");
    printf("5. Exit\n");
    printf("----------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        add(a, b, c);
        printf("Sum of matrix: \n");
        display(c);
        break;
      case 2:
        subtract(a, b, c);
        printf("Subtraction of matrix: \n");
        display(c);
        break;
      case 3:
        multiply(a, b, c);
        printf("Multiplication of matrix: \n");
        display(c);
        break;
      case 4:
        printf("Transpose of the first matrix: \n");
        transpose(a, c);
        display(c);
        printf("Transpose of the second matrix: \n");
        transpose(b, c);
        display(c);
        break;
      case 5:
        printf("Thank You.\n");
        exit(0);
      default:
        printf("Invalid input.\n");
        printf("Please enter the correct input.\n");
    }
  }while(1);

  return 0;
}


---------------------------------------------------------------------------------



#include<stdio.h>
#include<string.h>
#define MAX 2
#define SUBJECTS 2

struct student
{
    char name[20];
    int roll_no;
    float marks[SUBJECTS];
};

int main()
{
    struct student arr_student[MAX];
    int i, j;
    float sum = 0;
    printf(" GAGANDEEP SINGH\n");

    for(i = 0; i < MAX; i++ )
    {
        printf("\nEnter details of student %d\n\n", i+1);

        printf("Enter name: ");
        scanf("%s", arr_student[i].name);

        printf("Enter roll no: ");
        scanf("%d", &arr_student[i].roll_no);

        for(j = 0; j < SUBJECTS; j++)
        {
            printf("Enter marks: ");
            scanf("%f", &arr_student[i].marks[j]);
        }
    }
    printf("\n");
    printf("Name\tRoll no\tAverage\n\n");
    for(i = 0; i < MAX; i++ )
    {
        sum = 0;
        for(j = 0; j < SUBJECTS; j++)
        {
            sum += arr_student[i].marks[j];
        }
        printf("%s\t%d\t%.2f\n",
        arr_student[i].name, arr_student[i].roll_no, sum/SUBJECTS);
    }
    return 0;
}

----------------------------------------------------------------

// find length, concatination and comaprision 

#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, choice;
    char st1[20] = "GAGANDEEP ", st2[20] = "SINGH";
    printf(" GAGANDEEP SINGH\n");
    printf("Pick one out of the following\n");
    printf("1) Length of string\n");
    printf("2) Concatinate 2 strings\n");
    printf("3) Copy one string to another\n");
    printf("4) Compare two strings\n");
    printf("\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        a = strlen(st1);
        b = strlen(st2);
        printf("Length of string1 = %d, Length of string2 = %d", a, b);
        break;
    case 2:
        strcat(st1, st2);
        printf("string1 = %s", st1);
        break;
    case 3:
        printf("(before) string1 = %s", st1);
        strcpy(st1, st2);
        printf("(after) string1 = %s", st1);
        break;
    case 4:
        printf("Comparison of two strings = %d", strcmp(st1, st2));
        break;
    }
    return 0;
}


-------------------------------------------------------------------


//find the average and sum of 10 values

#include<stdio.h>

int main(){

{
    int a[10],i,s=0;
    float avg;
    printf(" GAGANDEEP SINGH");
    printf("\n Enter 10 values : ");
    for(i=0;i<10;i++)
    {
        scanf(" %d",&a[i]);
    }
for(i=0;i<10;i++)
{
    s=s+a[i];

}
printf("sum is %d",s);
avg=s/10;
printf("\naverage is %f",avg);
}
return 0;
}
