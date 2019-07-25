//
//  main.cpp
//  cpp4finwk1
//
//  Created by zsz on 2019/7/25.
//  Copyright © 2019 zsz. All rights reserved.
//

/*
1.

#include <iostream>
using namespace std;
int main() {
    cout<<"hello\n"<<"world\t"<<"whatsup"<<endl;
    return 0;
}
*/

/*
//2. Read in a real number and print out its
//        1. square root and
//        2. cosine
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double num;
    cin >> num;
    cout << sqrt(num) << "\t"
    << cos(num) << endl;
    return 0;
    
}
*/

// 3.
// Write a program that solves a given quadratic equation
// ax2 + bx + c = 0,
// assuming it has real roots.
// Test on
// x^2 − 2x + 1 = 0.

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c, root1, root2;
    cout << "Please enter the coefficients of quadratic equation" << endl;
    cin >> a >> b >> c;
    double discriminant = pow(b, 2) - 4*a*c;
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    cout << "The two roots are:" << root1 << " and " << root2 << endl;
    return 0;
}
