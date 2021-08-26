//
//  main.c
//  nthRoot
//
//  Created by rabbit on 2021/08/26.
//

#include <stdio.h>
#include "nthRoot.h"

int main(int argc, const char * argv[]) {

    printf("√1 = %23.20lf\n", nthroot(2, 1, 0));
    printf("√2 = %23.20lf\n", nthroot(2, 2, 0));
    printf("√3 = %23.20lf\n", nthroot(2, 3, 0));
    printf("√4 = %23.20lf\n", nthroot(2, 4, 0));
    printf("√5 = %23.20lf\n", nthroot(2, 5, 0));
    printf("3√8 = %23.20lf\n", nthroot(3, 8, 0));
    printf("3√27 = %23.20lf\n", nthroot(3, 27, 0));

    return 0;
}
