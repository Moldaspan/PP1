#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    bool ok = true;
    string s, temp = "";
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        int last;
        if(s[i] == '.')
        {
            int tens = 1;
            int t = 0;
            if(temp == "-0")
            {
                temp = "0";
            }
            for(int i = temp.size() - 1; i >= 0; i--)   // "256" -> 6 + 50 + 200
            {
                if(temp[i] == '-')
                {
                    ok = false;
                }
                t += tens * (temp[i] - '0');   // t = 3        
                tens *= 10;
            }
            
            last = t;
            v.push_back(t);
            temp = "";
        }
        else
        {
            temp += s[i];
        }
        if(i == s.size() - 1)
        {
            if(temp == "-0")
            {
                temp = "0";
            }
            int t = 0;
            int tens = 1;
            for(int i = temp.size() - 1; i >= 0; i--)   // "563" -> 3 + 60 + 500 = 563
            {
                if(temp[i] == '-')
                {
                    ok = false;
                }
                t += tens * (temp[i] - '0');   // t = 3        
                tens *= 10;
            }
            v.push_back(t);
        }
    }
    // for(auto i : v)
    // {
    //     cout << i << " ";
    // }
    for(auto i : v)
    {
        if(i > 255 || i < 0)
        {
            ok = false;
        }
    }
    cout << ok;
}