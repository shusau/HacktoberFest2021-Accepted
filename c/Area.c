#include<stdio.h>
int main() {
int rad; float PI = 3.14;
float  area, ci;
printf("\nEnter radius of circle: ");
scanf("%d", &rad);
area = PI * rad * rad;
printf("\nArea of circle : %f ", area);
ci = 2 * PI * rad;
printf("\nCircumference: %f ", ci);
return (0);
}
//Area of triangle in C
#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int h, b;
    float area;
    printf("\n\nEnter the height of the Triangle: ");
    scanf("%d", &h);
    printf("\n\nEnter the base of the Triangle: ");
    scanf("%d", &b);

    /*
        Formula for the area of the triangle = (height x base)/2
        
        Also, typecasting denominator from int to float 
        to get the output in float
    */
    area = (h*b)/(float)2;
    printf("\n\n\nThe area of the triangle is: %f", area);

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
