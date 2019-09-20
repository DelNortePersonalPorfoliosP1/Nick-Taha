//
//  Lab4w1.c
//  LABweek2
//
//  Created by Taha, Nick on 9/20/19.
//  Copyright © 2019 Taha, Nick. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int Lab4w1(int argc, const char * argv[])  {
    
    double l;
    double w;
    printf(" what length \n");
    scanf("%lf",&l);
    printf("width \n");
    scanf("%lf",&w);
    
    double area = l * w;
    double perimeter = 2*l + 2*w;
    
    printf("the area of a rectangle with a length of %lf and a width of %lf is %lf \n", l, w, area);
    printf("the perimeter of a rectangle with a length of %lf and a width of %lf is %lf \n", l, w, perimeter);
    
    return 0;
}
