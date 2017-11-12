#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map <string,long int> Directory;
    map<string,long int> ::iterator search;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        string s;
        long int X;
        cin >> s;
        cin >> X;
        Directory[s]= X;
    } 
    int c=1;
    while(c) 
    {    
        string ss;
        cin >>ss;
        if (ss.empty())
        {
            c=0;
            break;
        }
            
        search = Directory.find(ss);
        if(search != Directory.end())
        {            
            cout<<ss <<'='<<Directory[ss]<<endl;
        }
        else
        {
            printf("Not found \n");
        }
        
    }
        
    return 0;
}
