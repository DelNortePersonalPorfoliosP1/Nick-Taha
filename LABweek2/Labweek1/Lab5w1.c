//
//  Lab5w1.c
//  LABweek2
//
//  Created by Taha, Nick on 9/20/19.
//  Copyright © 2019 Taha, Nick. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int Lab5w1(int argc, const char * argv[])  {
    
    
    double f, c, fact, n;
    
    
    printf("temp in f\n");
    scanf("%lf", &f);
    
    fact= f-32;
    c = ((5*fact)/9);
    printf("%lf degrees c \n", c);
    n = fabs(c);
    
    if (c < 0) {
        printf("it is %lf degrees below freezing point",n);
    }
    
    else if (c > 0) {
        printf("it is %lf above freezing point\n", n);
    }
    else{
        
        printf("It is at freezing temperature\n");
        
    }
    return 0;
}
