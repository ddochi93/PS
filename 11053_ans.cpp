#include <iostream>
using namespace std;

int arr[1001];
int dp[1001];

int main(void)
{
    int max = 0;
    int n;
    cin >> n;
    for(int i = 1; i<= n; i++) 
    {
        cin >> arr[i];
        dp[i] =1;
    }
    for(int i = 1; i <= n; i++)
    {
        int max = 0;
        for(int j  =1; j < i ; j++)
        {
            if(arr[j] < arr[i] && max < dp[j])
            {
                max = dp[j];
            }
        }
        dp[i] = max + 1;
    }
    int max_ans = 0;
    for(int i = 0 ; i <= n ; i++) 
    {
        if(max_ans < dp[i])
            max_ans = dp[i];
    }
    cout << max_ans << endl;

    return 0;
}