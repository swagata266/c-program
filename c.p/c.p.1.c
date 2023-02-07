//Problem 1:Rectangle Area Develop a program that, given as input the cartesian coordinates of three vertices of a rectangle, reports the area of that rectangle. You will recall that the area of a rectangle is the product of the lengths of any two adjacent sides. 
//Input: The first line contains a positive integer n indicating how many rectangles are to be analyzed. Each rectangle is described on a single line via six real numbers, x1, y1, X2, Y2, X3, and y3, separated by spaces. These provide the coordinates of three of the rectangle's vertices, namely P1(x1,y1), P2(x2, y2), and P3(x3,у3). 
//Output: For each rectangle provided as input, report its area. 
//Sample input 
//3 
//0.0 0.0 0.0 1.0 1.0 0.0 
//-1.  
//.0 2.0 3.0 5.0 1.0 1.0 
//5.0 9.0 -0.5 0.0 7.5 5.0 
//Resultant output 
//Area of rectangle with vertices (0.0,0.0),(0.0,1.0),(1.0,0.0) is 1.0 Area of rectangle with vertices (-1.0,2.0), (3.0,5.0), (1.0,1.0) is 10.0 Area of rectangle with vertices (5.0,9.0), (-0.5,0.0), (7.5,5.0) is 44.5 .



#include<stdio.h>
#include<math.h>

//Calculates the distance between two points in the plane
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int n, i;
    double x1, y1, x2, y2, x3, y3, side1, side2, area;
    scanf("%d", &n); //Read the number of rectangles

    //Iterate for each rectangle
    for (i = 0; i < n; i++) {
        scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

        //Calculate the length of the sides
        side1 = distance(x1, y1, x2, y2);
        side2 = distance(x1, y1, x3, y3);

        //Calculate the area of the rectangle
        area = side1 * side2;

        printf("Area of rectangle with vertices (%.1lf,%.1lf), (%.1lf,%.1lf), (%.1lf,%.1lf) is %.1lf\n", x1, y1, x2, y2, x3, y3, area);
    }

    return 0;
}



