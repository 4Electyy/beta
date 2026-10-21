//
//  main.cpp
//  1567
//
//  Created by Тимофей on 21.10.2026.
//

#include <iostream>

int main() {
    using namespace std;
    int a, b, c, d, n;
    cin>>a;
    d=0;b=1;n=0;
    cout<<d<<"\t";
    while (n<=a)
    {
        c=d+b;
        cout<<c<<"\t";
        swap(d,c);
        swap(b,c);
        n=n+1;
        
    }
    
    
    return 0;
}
