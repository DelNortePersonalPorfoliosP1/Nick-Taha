//
//  Lab2w1.c
//  LABweek2
//
//  Created by Taha, Nick on 9/20/19.
//  Copyright © 2019 Taha, Nick. All rights reserved.
//

#include "Lab2w1.h"
#include <math.h>


int Lab2w1(int argc, const char * argv[])
{
    int arr1[100];
    int i, mx, mn, n;
    
    printf("Input the number of numbers to be stored in the array :");
    scanf("%d",&n);
    
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&arr1[i]);
    }
    
    
    mx = arr1[0];
    mn = arr1[0];
    
    for(i=1; i<n; i++)
    {
        if(arr1[i]>mx)
        {
            mx = arr1[i];
        }
        
        
        if(arr1[i]<mn)
        {
            mn = arr1[i];
        }
    }
    printf("Maximum number is : %d\n", mx);
    printf("Minimum number is : %d\n\n", mn);
    
    return 0;
}

