#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    char str[50];
    
    // Declare second integer, double, and String variables.
    int x;
    double y;
    scanf("%d",&x);
    scanf("%lf",&y);
    scanf(" %[^\n]s",str);
   // printf("is %lf",y);
    // Read and save an integer, double, and String to your variables.
    int sum = i+x;
    // Print the sum of both integer variables on a new line.
    printf("%d\n",sum);
    // Print the sum of the double variables on a new line.
    
    
    double sum1 = y+d;
    printf("%.1lf\n",sum1);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    
    printf("%s%s",s,str);
    return 0;
}