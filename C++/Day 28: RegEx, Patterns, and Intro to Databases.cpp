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
#include <regex>

using namespace std;


int main(){
    int N;
    cin >> N;
    vector<pair<string,string>> directory;
    for(int a0 = 0; a0 < N; a0++){
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        directory.emplace_back(firstName,emailID);
    }
    sort(directory.begin(),directory.end());
    /*for(const auto& element : directory)
        cout << get<0>(element)<<" " <<get<1>(element) << endl;*/
    auto str=regex("\\@gmail\\.com");
    
    for(const auto& element : directory)
    {
        if (regex_search(get<1>(element),str))
            cout <<get<0>(element)<<endl;
    }
         
         
    return 0;
}
