#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
vector <bool> binary;
void binary_value (int num)
{
    int rem;
    if (num<=1){
        
        binary.insert(binary.begin(),num);
        return ;
    }
    rem=num%2;   
    binary.insert(binary.begin(),rem);

    binary_value(num/2);
    return ;
}

int main(){
    int n;
    cin >> n;    
    binary_value(n);
    int c=0;
    int max=0;
    int s=binary.size();
    //for(int i=0; i < s;i++)
    //{cout <<binary[i];}
    //cout <<'\n';
    for(int i=0; i < s;i++)
    {
        if(binary[i])
        {
            c++;
        }
        if (c>=max)
            {
                max=c;
            }
        if (!binary[i]){
            
            
            c=0;
            
        }
            
    }
    cout <<max <<endl;
    
    
    
    return 0;
}
