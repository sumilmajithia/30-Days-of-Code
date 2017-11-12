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
using namespace std;


int main(){
    int N;
    cin >> N;
    int d =N % 2;
    if ((d==1)|| ((d==0)&&((N>=6)&&(N<=20))))
    {
        printf("Weird");
    }
    else
    {
        printf("Not Weird");
    }
    
    return 0;
}
