#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <numeric>

using namespace std;

int main()
{
int t;
cin >> t;
string kingdom[t];
for(int i = 0; i<t; i++){
    cin >> kingdom[i];
}
for(int i = 0; i<t; i++){
    if(kingdom[i].back() !='y'){
        if(kingdom[i][0] == 'A' || kingdom[i][0] == 'E' || kingdom[i][0] == 'I' || kingdom[i][0] == 'O' || kingdom[i][0] == 'U'){
            cout << "Case " << "#" << i+1 << ": " << kingdom[i] << " is ruled by Alice." << endl;
        }else{
            cout << "Case " << "#" << i+1 << ": " << kingdom[i] << " is ruled by Bob." << endl;
        }
    }else {
        cout << "Case " << "#" << i+1 << ": " << kingdom[i] << " is ruled by nobody." << endl;
    }
}

return 0;

}