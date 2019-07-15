//
//  main.cpp
//  CppStudy
//
//  Created by zsz on 2019/7/14.
//  Copyright © 2019 zsz. All rights reserved.
//

#include <iostream>

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}

using namespace std;
int main()
{
    char a=' ';
    cout<<"whats the letter?"<<endl;
    int i=0;
    for (i=0; i<5; i++){
        cin>>a;
        if(a=='G'){
           cout<<"Get it!"<<endl;
           break;
           }
           else
               cout<<"Wrong"<<endl;
    }
    cout<<"No Chance Anymore!"<<endl;
    return 0;
    
}
