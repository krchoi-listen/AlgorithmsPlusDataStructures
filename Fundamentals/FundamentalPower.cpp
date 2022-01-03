#include <iostream>
#include <vector>

#include "FundamentalPower.hpp"

using namespace std;

FundamentalPower::FundamentalPower()
{

}

FundamentalPower::~FundamentalPower()
{

}

void FundamentalPower::NegativePower(int n)
{
    int i, k, r;
    vector<int> d;

    for (k = 0; k < n; k++)
    {
        cout << ".";
        r = 0;

        for (i = 0; i < k; i++)
        {
            r = 10 * r + d[i];
            d[i] = r / 2;
            r = r - 2 * d[i];
            cout << d[i];
        }

        d[k] = 5;
        cout << "5" << endl;
    }
}