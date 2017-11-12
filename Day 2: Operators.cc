#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    float meal_cost;
    int tip_percent;
    int tax_percent;
  // std :: cout << setprecision(2) << std::fixed;
    cin >> meal_cost; // >> endl;
    cin >> tip_percent;// >> endl;
    cin >> tax_percent;// >> endl;
    int t_cost;
   
    t_cost =round((meal_cost+(meal_cost*((float)tip_percent/100))+(meal_cost*((float)tax_percent/100))));
    printf("The total meal cost is %d dollars.",t_cost);    
 
    return 0;
}
