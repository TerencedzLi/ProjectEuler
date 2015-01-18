//
//  main.cpp
//  Problem2
//
//  Created by Terence Li on 2014-11-05.
//  Copyright (c) 2014 Terence Li. All rights reserved.
//

#include <iostream>
using namespace std;



int main() {
    
    int firstnum = 1, secondnum = 2, sum = 0, even_sum = 2;
    
    
    while(sum < 4000000){
        sum = firstnum + secondnum;
        firstnum = secondnum;
        secondnum = sum;

        if (sum % 2 == 0){
            even_sum += sum;
        }
        
        
    }
    
    cout << even_sum;
    
    return 0;
}
