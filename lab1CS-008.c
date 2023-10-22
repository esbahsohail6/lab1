#include <stdio.h>
#include <stdlib.h>


// QUESTION 1
int main()
{
   int id;
   printf("enter your employee id");
   scanf("%d",&id);
   int totalworkedhours;
   printf("enter total worked hours");
   scanf("%d",&totalworkedhours);
   int amountperhour;
   printf("amount received per hour:");
   scanf("%d",&amountperhour);
   printf("your employee id is %d, total worked hour is %d and amount received per hour is %d",id,totalworkedhours,amountperhour);
   return 0;
}



//QUESTION 2
int main()
{
   int height;
   printf("enter height ");
   scanf ("%d",&height);
   int width;
   printf("enter width ");
   scanf("%d",&width);
   int perimeter=2*(height+width);
   int area=height*width;
   printf("the perimeter of the rectangle is:%d",perimeter);
   printf("the area of the rectangle is:%d",area);
   return 0;
}



//QUESTION 3
int main()
{
   int height;
   printf("enter your height ");
   scanf("%d",&height);
   if (height<150) {
       printf("dwarf");
   }else if (height==150) {
       printf("average");
   }else if (height<=165) {
       printf("tall");
   }return 0;
}


//QUESTION 4
void decimalToBinary(int n) {
   if (n > 0) {
       decimalToBinary(n / 2);
       printf("%d", n % 2);
   }
}
int main() {
   int decimalNumber;

   printf("Enter a decimal number: ");
   scanf("%d", &decimalNumber);

   if (decimalNumber == 0) {
       printf("Binary: 0\n");
   } else {
       printf("Binary: ");
       decimalToBinary(decimalNumber);
       printf("\n");
   }
   return 0;
}


//QUESTION 5
int fibonacci(int n) {
   if (n <= 1) {
       return n;
   }
   return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciSeries(int n, int count) {
   if (count < n) {
       printf("%d ", fibonacci(count));
       printFibonacciSeries(n, count + 1);
   }
}
int main() {
   int num;
   printf("Enter the number of terms in the Fibonacci series: ");
   scanf("%d", &num);
   if (num <= 0) {
       printf("Please enter a positive number.\n");
   } else {
       printf("Fibonacci Series: ");
       printFibonacciSeries(num, 0);
       printf("\n");
   }
   return 0;
}


//task 1
void function() {
   int number;
   printf("enter any number: ");
   scanf("%d",&number);
   if (number % 2 ==0) {
       printf("even");
   } else {
       printf("odd");
   }
}
int main() {
   function();
   return 0;
}


//task 2

void value() {
   int num1;
   printf("enter 1st num \n");
   scanf("%d",&num1);
   int num2;
   printf("enter 2nd num \n");
   scanf("%d",&num2);
   if (num1>5 && num2>5) {
       int num=num1+num2;
       printf("the value is %d\n",num);

   }else if (num1>5 || num2>5) {
       int num=(num1*num2);
       printf("the value is %d\n",num);
   }else if (num1<5 && num2<5) {
       int num1=num1+1;
       int num2=num2+1;
       printf("the values are %d\n",num1,"and",num2);

   }else {
       printf("hello world");
   }
}
int main() {
   value();
   return 0;
}


//task 3
#include <stdio.h>

void printTable(int num, int multiplier) {
    if (multiplier > 10) {
        return;
    }

    printf("%d x %d = %d\n", num, multiplier, num * multiplier);
    printTable(num, multiplier + 1);
}

int main() {
    int num1, num2;

    printf("Enter the first positive integer: ");
    scanf("%d", &num1);

    printf("Enter the second positive integer: ");
    scanf("%d", &num2);

    if (num1 > 0 && num2 > 0) {
        printf("Multiplication Table for %d:\n", num1);
        printTable(num1, 1);

        printf("Multiplication Table for %d:\n", num2);
        printTable(num2, 1);
    } else {
        printf("Please enter two positive integers.\n");
    }

    return 0;
}

