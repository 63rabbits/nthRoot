//
//  nthRoot.c
//  nthRoot
//
//  Created by rabbit on 2021/08/26.
//

#include <stdbool.h>
#include <math.h>
#include "nthRoot.h"

// Newton's method
double nthroot(int n, double a, double e) {
    double x = pow(2, ceil(ceil(log2(a))/n));
    double dx = 0.0;
    while (true) {
        dx = (a/pow(x, n-1) - x)/n;
        if (fabs(dx) < e) break;
        double y = x + dx;
        if (x == y) break;  // Information loss occurred.
        x = y;
    }
    return x;
}
