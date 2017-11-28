#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int n_swap=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-1);j++)
        {
            if (a[j+1]<a[j])
            {
                iter_swap(a.begin()+(j),a.begin()+(j+1));
                n_swap++;
            }
        }
    }
     printf("Array is sorted in %d swaps.\n",n_swap);
     printf("First Element: %d \n",a[0])  ;  
    printf("Last Element: %d\n",a[n-1]);
    return 0;
}
