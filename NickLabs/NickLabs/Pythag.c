//
//  Pythag.c
//  NickLabs
//
//  Created by Taha, Nick on 9/13/19.
//  Copyright © 2019 Taha, Nick. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
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

