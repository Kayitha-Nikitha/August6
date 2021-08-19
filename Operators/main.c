#include<stdio.h>
int main()
{
    int a=10, b=7, c=10, answer, number = 10, result;;

    printf("The Addition of %d and %d is: %d\n",a,b,a+b);
    printf("The Subtraction of %d and %d is: %d\n",a,b,a-b);
    printf("The Multiplication of %d and %d is: %d\n",a,b,a*b);
    printf("The Division of %d and %d is: %d\n",a,b,a/b);
    printf("The Modulus operation of %d and %d is: %d\n",a,b,a%b);
    printf("The Incremented value ++a is: %d\n",++a);
    printf("The Decremented value --b is: %d\n",--b);

    printf("For %d == %d : The output is: %d \n", a, b, a == b);
    printf("For %d == %d : The output is: %d \n", a, c, a == c);
    printf("For %d != %d : The output is: %d \n", a, c, a != c);
    printf("For %d != %d : The output is: %d \n", a, b, a != b);
    printf("For %d > %d : The output is: %d \n", a, b, a > b);
    printf("For %d > %d : The output is: %d \n", a, c, a > c);
    printf("For %d < %d : The output is: %d \n", a, b, a < b);
    printf("For %d < %d : The output is: %d \n", a, c, a < c);
    printf("For %d >= %d : The output is: %d \n", a, b, a >= b);
    printf("For %d >= %d : The output is: %d \n", a, c, a >= c);
    printf("For %d <= %d : The output is: %d \n", a, b, a <= b);
    printf("For %d <= %d : The output is: %d \n", a, c, a <= c);

    answer = (a == b) && (c > b);
    printf("For (%d == %d) && (%d != %d), the output is: %d \n",a,b,b,c,answer);
    answer = (a == b) && (c < b) && (c>0);
    printf("For (%d == %d) && (%d <= %d), the output is: %d \n",a,b,b,c,answer);
    answer = (a == b) || (b > c);
    printf("For (%d == %d) || (%d < %d), the output is: %d \n",a,b,c,b,answer);
    answer = (a != b) || (a <= b) || (a>c);
    printf("For (%d != %d) || (%d < %d), the output is: %d \n",a,b,c,b,answer);
    answer = !(a == b);
    printf("For !(%d == %d), the output is: %d \n",a,b,answer);
    answer = !(a != b);
    printf("For !(%d == %d), the output is: %d \n",a,b,answer);

    result = number;
    printf("result = %d \n", result);
    result += number;
    printf("result = %d \n", result);
    result -= number;
    printf("result = %d \n", result);
    result *= number;
    printf("result = %d \n", result);
    result /= number;
    printf("result = %d \n", result);
    result %= number;
    printf("result = %d \n", result);

    printf(" Bitwise AND operation %d & %d : %d\n",a,b,a&b);
    printf(" Bitwise OR operation %d | %d : %d\n",a,b,a|b);
    printf(" Bitwise XOR operation %d ^ %d : %d\n",a,b,a^b);
    printf(" Bitwise ONE'S COMPLEMENT ~ %d operation : %d\n",a,~a);

    return 0;
}
