#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int year1,year2,day1,day2,month1,month2;
    cin >> day1 >> month1 >> year1 >> day2 >> month2 >> year2;
    if (year1<year2)
        cout << 0;
    else if(year1>year2)
        cout << 10000;
    else
    {
        if (month1<month2)
            cout<< 0;
        else if(month1>month2)
            cout << ((month1-month2)*500);
        else
        {
            if(day1<=day2)
                cout<<0;
            else
                cout <<((day1-day2)*15);
        }
        
    }
        
   
    
    
    
    
    return 0;
}
