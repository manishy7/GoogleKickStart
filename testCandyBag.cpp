#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <numeric>

using namespace std;


int main()
{
vector<int> a;
int t,k,n,temp;
cin >> t;
int left[t];
int sum = 0;
for(int i = 0; i<t; i++){
    cin >> k >> n;
    for(int j = 1; j<=k; j++){
        cin>>temp;
        a.push_back(temp);
    }
    sum = accumulate(a.begin(),a.end(),0) - sum;
    left[i] = sum%n;
    

}
for(int i = 0; i < t; i++){
    cout << "case " << "#" << i+1 << ": " << left[i] << endl;
}


return 0;

}