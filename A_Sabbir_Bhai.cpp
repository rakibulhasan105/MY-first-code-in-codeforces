#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    bool isHappy = true;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i]>='A' && str[i] <= 'Z' || str[i]>='a' && str[i] <= 'z')
        {
            isHappy = false;
            break;
        }
    }
    if(isHappy) cout << "OWO nice !!" << endl;
    else cout <<"Chi Chi" << endl;

    return 0;
}
