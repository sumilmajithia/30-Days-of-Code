#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    for(size_t i=0;i<n;i++)
    {
        int a;
        cin >> a;
        int s=int(sqrt(a))+1;
        if (a==1)
        {
            printf("Not prime\n");
            continue;
        }
            
        size_t j=2;
        for(;j<s;j++)
        {
            if(a%j==0)
            {
                printf("Not prime\n");
                break;
            }
            
        }
           
        if (j==s)
            printf("Prime\n");
    }
      
    return 0;
}
