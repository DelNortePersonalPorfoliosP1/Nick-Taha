//
//  Lab 1.c
//  CSlabs
//
//  Created by Taha, Nick on 9/18/19.
//  Copyright © 2019 Taha, Nick. All rights reserved.
//

#include "Lab 1.h"

 int ()
{
    double a,b;
    
    printf("Enter side value a: \n");
    scanf("%lf", &a);
    printf("Enter side value b: \n");
    scanf("%lf", &b);
    double c = sqrt(a*a+b*b);
    
    printf("Your C value is: \n");
    printf("%lf\n",c);
    
    return 0;
}
