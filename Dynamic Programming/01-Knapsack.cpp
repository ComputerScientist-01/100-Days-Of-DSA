#include <bits/stdc++.h>

using namespace std;

// template for 0-1 knapsack
int knapsack(int wt[], int val[], int W, int n)
{
    // Base Case
    if (n == 0 || W == 0)
    {
        return 0;
    }

    // Return the maximum of two cases:
    // (1) nth item included
    // (2) not included

    if (wt[n - 1] <= W)
    {
        return max(val[n - 1] + knapsack(wt, val, W - wt[n - 1], n - 1),
                   knapsack(wt, val, W, n - 1));
    }

    // If weight of the nth item is more
    // than Knapsack capacity W, then
    // this item cannot be included
    // in the optimal solution

    else if (wt[n - 1] > W)
    {
        return knapsack(wt, val, W, n - 1);
    }
}