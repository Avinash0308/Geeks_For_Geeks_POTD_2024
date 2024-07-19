#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>
class Solution
{
public:
    vector<int> constructLowerArray(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        ordered_set o_set;
        vector<int> ans(n);
        for (int i = n - 1; i >= 0; i--)
        {
            o_set.insert({arr[i], i});
            ans[i] = o_set.order_of_key({arr[i], i});
        }
        return ans;
    }
};

int main()
{
    return 0;
}