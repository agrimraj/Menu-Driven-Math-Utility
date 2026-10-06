// menu driven calculator using switch
#include <stdio.h>

int main() {
    int n;
    printf("--------MENU--------\n");
    printf("Enter 1 for addition\n");
    printf("Enter 2 for subtraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for division\n");
    printf("Enter 5 for factorial\n");
    printf("Enter 6 for reversing a number\n");
    printf("Enter 7 for checking armstrong number\n");
    printf("Enter 8 for checking palindrome number\n");
    printf("Enter 9 for checking perfect number\n");
    printf("Enter 10 for exponents\n");
    printf("Enter 11 to get fibonacci series\n");
    printf("Enter 12 to get a table of a number\n\n");
    printf("Enter your option: ");
    scanf("%d", &n);

    switch(n) {
        case 1: {
            printf("Enter number of numbers you want to add: ");
            int n1;
            scanf("%d", &n1);
            float t1 = 0;
            for(int i = 1; i <= n1; i++) {
                printf("Enter number %d: ", i);
                float num;
                scanf("%f", &num);
                t1 += num;
            }
            printf("The sum is %.2f\n", t1);
            break; 
        }
        case 2: {
            printf("Enter number of numbers you want to subtract: ");
            int n2;
            scanf("%d", &n2);
            float t2 = 0;
            for(int i = 1; i <= n2; i++) {
                printf("Enter number %d: ", i);
                float num;
                scanf("%f", &num);
                if(i == 1) {
                    t2 = num;
                } else {
                    t2 -= num;
                }
            }
            printf("The difference of all numbers is %.2f\n", t2);
            break;
        }
        case 3: {
            printf("Enter number of numbers you want to multiply: ");
            int n3;
            scanf("%d", &n3);
            float t3 = 1;
            for(int i = 1; i <= n3; i++) {
                printf("Enter number %d: ", i);
                float num;
                scanf("%f", &num);
                t3 *= num;
            }
            printf("The product of all numbers is %.2f\n", t3);
            break;
        }
        case 4: {
            float n4, n5;
            printf("Enter dividend: ");
            scanf("%f", &n4);
            printf("Enter divisor: ");
            scanf("%f", &n5);
            if (n5 == 0) {
                printf("Error: Division by zero is undefined!\n");
            } else {
                printf("%.2f when divided by %.2f gives %.2f\n", n4, n5, n4 / n5);
            }
            break;
        }
        case 5: {
            int n6; 
            printf("Enter a number you want to find factorial of: ");
            scanf("%d", &n6);
            int t = 1;
            for(int i = 2; i <= n6; i++) {
                t *= i;
            }
            printf("The factorial of %d is %d\n", n6, t);
            break;
        }
        case 6: {
            int n7;
            printf("Enter a number: ");
            scanf("%d", &n7);
            int og = n7, rev = 0;
            while (n7 != 0) {
                rev = (n7 % 10) + rev * 10;
                n7 = n7 / 10;
            }
            printf("The reverse order of %d is %d\n", og, rev);
            break;
        }
        case 7: { 
            int n7_arm, og, remainder, result = 0, digits = 0;
            printf("Enter an integer: ");
            scanf("%d", &n7_arm);
            og = n7_arm;
            
           
            int temp = n7_arm;
            while (temp != 0) {
                temp /= 10;
                digits++;
            }
            
            temp = n7_arm;
            while (temp != 0) {
                remainder = temp % 10;
                int pow_res = 1;
                for(int i = 1; i <= digits; i++) pow_res *= remainder;
                result += pow_res;
                temp /= 10;
            }
            if (result == og)
                printf("%d is an Armstrong number.\n", og);
            else
                printf("%d is not an Armstrong number.\n", og);
            break;
        }
        case 8: {
            int n8; 
            printf("Enter a number: ");
            scanf("%d", &n8);
            int og = n8;
            int t4 = 0;
            while (n8 != 0) { 
                t4 = t4 * 10 + n8 % 10;
                n8 = n8 / 10;
            }
            if (t4 == og) {
                printf("%d is a palindrome number\n", og);
            } else {
                printf("%d is not a palindrome number\n", og);
            }
            break;
        }
        case 9: {
            int n9;
            printf("Enter a number: ");
            scanf("%d", &n9);
            int t5 = 0;
            for (int i = 1; i <= n9 / 2; i++) {
                if (n9 % i == 0) {
                    t5 += i;
                }
            }
            if (t5 == n9) {
                printf("%d is a perfect number\n", n9);
            } else {
                printf("%d is not a perfect number\n", n9);
            }
            break;
        }
        case 10: {
            int n10, n11; 
            printf("Enter base number: ");
            scanf("%d", &n10);
            printf("Enter power exponent: ");
            scanf("%d", &n11);
            int n12 = 1;
            for (int i = 1; i <= n11; i++) {
                n12 *= n10;
            }
            printf("%d raised to the power of %d is %d\n", n10, n11, n12); // 👈 Added missing output statement
            break;
        }
        case 11: {
            int n13; 
            printf("Enter number of elements u want: ");
            scanf("%d", &n13);
            if (n13 >= 2) {
                int fibo[n13];
                fibo[0] = 0;
                fibo[1] = 1;
                for (int i = 2; i < n13; i++) {
                    fibo[i] = fibo[i - 1] + fibo[i - 2];
                }
                printf("The first %d numbers of the fibonacci series are:\n", n13);
                for (int i = 0; i < n13; i++) {
                    printf("%d\t", fibo[i]);
                }
                printf("\n");
            } else {
                printf("Please enter 2 or more elements.\n");
            }
            break;
        }
        case 12: {
            int n14;
            printf("Enter which number you want a table of: ");
            scanf("%d", &n14);
            for(int i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", n14, i, n14 * i); // 👈 Fixed: Added missing newline '\n'
            }
            break;
        }
        default:
            printf("Invalid option selected!\n");
            break;
    }
    return 0;
}
