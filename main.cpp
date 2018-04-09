//
//  main.cpp
//  0409 project
//
//  Created by Changbin Baek on 09/04/2018.
//  Copyright © 2018 Changbin Baek. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare (int i,int j) { return (i>j); }

int main() {
    std::vector<int> numbers ;
    int num;
    
    while (cin >> num) {
        numbers.push_back(num);
    }
    
    
    
    
    std::sort (numbers.begin(), numbers.end(), compare);
    
    
    
    for (auto i : numbers) {
        cout<< i << " ";
    }
    cout<<endl;
}
