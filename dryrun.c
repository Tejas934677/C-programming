#include <stdio.h>
#include <math.h>

int main() { 
    double a, b, c, r1, r2, d;
    
    // Taking input
    printf("Enter three numbers: "); 
    scanf("%lf %lf %lf", &a, &b, &c);

    // Compute discriminant
    d = (b * b) - (4 * a * c);

    // Check cases
    if (a == 0) { 
        printf("Not a quadratic equation\n");
    } 
    else if (d == 0) { 
        r1 = -b / (2 * a);
        printf("Roots are equal: %.2lf\n", r1);
    } 
    else if (d > 0) { 
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Real and distinct roots: %.2lf and %.2lf\n", r1, r2);
    }  
    else { 
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-d) / (2 * a);
        printf("Complex roots: %.2lf + %.2lfi and %.2lf - %.2lfi\n", realPart, imagPart, realPart, imagPart);
    }
    
    return 0;
}
