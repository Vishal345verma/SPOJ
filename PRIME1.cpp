#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool prime[32001];
vector<int> primesLessThan32000;

void sieveOfEranthoses(int n)
{
    prime[0] = true;
    prime[1] = true;
    for(int p = 2; p * p <=n ; p++)
    {
        if(!prime[p])
        {   
            for(int i = p * 2 ; i <=n ;i += p)
            {
                prime[i] = true;
            }
        }
    }
}

bool isNotPrime(int n){
    if(n <= 32000)
        return prime[n];
    else
    {   
        int k = (int)((double)sqrt(n));
        for(int i = 0 ; i < primesLessThan32000.size();i++)
        {
            int u = primesLessThan32000[i];
            if(u > k)
                break;
            if(n%u  == 0)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n,m,t;
    sieveOfEranthoses(32000);
    primesLessThan32000.clear();
    for(int i = 2; i <= 32000 ; i++)
    {
        if(!prime[i]) 
        {
            primesLessThan32000.push_back(i);
        }
    }
    cin >> t;
    for(int z = 0 ; z < t;z++)
    {
        cin >> n>> m;
        for(int i = n ;i <=m ;i++)
        {
            if(!isNotPrime(i))
            {
                cout << i << endl;
            }
        }
        cout << endl;
    }
    return 0;
}