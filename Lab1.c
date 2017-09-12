//
//  main.c
//  ECE_3220_Lab1
//
//  Created by linChunbin on 8/27/17.
//  Copyright © 2017 linChunbin. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(int argc, const char * argv[]) {
    //define radius and area as double because PI is not an int
    double radius;
    double area;
    printf("Please enter the radius of the circule\n");
    
    if (scanf("%lf",&radius) != 1){
        printf ("please enter numbers\n");
    }// scan the radius from user
    else{
        if (radius < 0){
            printf("radius can not be less than 0\n");
        }
        else{
            area = (pow(radius, 2) * PI) ; // use power function from math.h
            printf("the area is %.2lf\n",area); // print out the area.
            return 0;
        }
    }
    
}


