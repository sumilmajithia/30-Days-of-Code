#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    	Difference(vector<int> elements):elements(elements), maximumDifference(0){}
    void computeDifference()
    {
        int minel=*min_element(elements.begin(),elements.end());
        int maxel=*max_element(elements.begin(),elements.end());
        maximumDifference= maxel-minel;
          }
          }; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
