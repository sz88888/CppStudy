//
//  main.cpp
//  C_wk4_simple
//
//  Created by zsz on 2019/7/15.
//  Copyright © 2019 zsz. All rights reserved.
//

#include <iostream>

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
    };
    
    if(a=='G'){
        cout<<"Congratulation!"<<endl;
    }
    else{
    
        cout<<"No Chance Anymore!"<<endl;
        
    };
    
    return 0;
    
}
