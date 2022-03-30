#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, disc, root1, root2, imaginary;

    printf("Enter the a, b, c : ");
    scanf("%f%f%f", &a, &b, &c);

    disc = (b*b) - (4*a*c);

    if(disc > 0)
    {
        root1 = (-b + sqrt(disc)) / (2*a);
        root2 = (-b - sqrt(disc)) / (2*a);
        printf("Two Real Roots, root1 : %.2f root2 : %.2f", root1, root2);
    }
    else if(disc == 0)
    {
        root1 = root2 = -b / (2*a);
        printf("Equal Real Roots, root1 = root2 : %.2f", root1);
    }
    else
    {
        root1 = root2 = -b / (2*a);
        imaginary = sqrt(-disc)/2*a;
        printf("Two Imaginary roots, root1 : %.2f + %.2fi, root2 : %.2f - %.2fi",
        root1, imaginary, root2, imaginary);
    }
    return 0;
}