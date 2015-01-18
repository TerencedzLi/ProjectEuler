//
//  main.cpp
//  problem1
//
//  Created by Terence Li on 2014-10-22.
//  Copyright (c) 2014 Terence Li. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    
    int sum = 0;
    
    bool fact3 = true;
    bool fact5 = true;

    
    for(int i = 0; i < 1000; i++){
        
        fact3 = i % 3;
        fact5 = i % 5;
        
        if( (!fact3 || !fact5)){
            cout << "i is " << i << endl;
            cout << "curent sum is " << sum << endl;
            sum += i;
            cout << "Final sum is " << sum << endl;
        }
        
    }
    

    
    return 0;
}
