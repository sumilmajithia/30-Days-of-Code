#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    string s;
    // ignore \n
    getline(cin, s);
    for (int i=0;i <t;i++)
    {
        s.clear();        
        getline(cin, s);
        int l=s.length();
        int c=0;
        while(c<l)
        {
            cout << s[c];
            c+=2;
        }
        printf(" ");
        c=1;
        while(c<l)
        {
            cout << s[c];
            c+=2;
        }
        printf("\n");
    }
    return 0;
}
