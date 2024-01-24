#include <bits/stdc++.h>
using namespace std;
/* This program is for finding the subarray in an array which has maximum sum. */

//cumulative sum approach

// void cumulativeSumApproach()
// {
//     int n;
//     cout << "Enter the size of array: " << endl;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; n++)
//     {
//         cin >> arr[i];
//     }
//     int currsum[n + 1];
//     currsum[0] = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         currsum[i] = currsum[i - 1] + arr[i - 1];
//     }
//     int maxSum = INT_MIN;
//     for (int i = 1; i <= n; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < i; j++)
//         {
//             sum = currsum[i] - currsum[j];
//             maxSum = max(sum, maxSum);
//         }
//     }
//     cout << maxSum << endl;
// }

int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; n++)
    {
        cin >> arr[i];
    }
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            maxSum = max(maxSum, sum);
        }
    }
    cout << maxSum << endl;
    return 0;
}

//kadane's algorithm

// void kedane()
// {
//     int n;
//     cout << "Enter the size of array: " << endl;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; n++)
//     {
//         cin >> arr[i];
//     }
//     int currSum = 0;
//     int maxSum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         currSum += arr[i];
//         if (currSum < 0)
//         {
//             currSum = 0;
//         }
//         maxSum = max(maxSum, currSum);
//     }
//     cout << maxSum << endl;
// }

// MAXIMUM CIRCULAR SUBARRAY SUM

// int kadane(int arr[], int n)
// {
//     int currSum = 0;
//     int maxSum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         currSum += arr[i];
//         if (currSum < 0)
//         {
//             currSum = 0;
//         }
//         maxSum = max(maxSum, currSum);
//     }
//     return maxSum;
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of array: " << endl;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; n++)
//     {
//         cin >> arr[i];
//     }
//     int wrapsum;
//     int nonwrapsum;

//     nonwrapsum = kadane(arr, n);
//     int totalsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         totalsum += arr[i];
//         arr[i] = -arr[i];
//     }

//     wrapsum = totalsum + kadane(arr, n);
//     cout << max(wrapsum, nonwrapsum) << endl;
// }

// PAIR SUM PROBLEM (O(n^2))

// bool pairsum(int arr[], int n, int k)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] + arr[j] == k)
//             {
//                 cout << i << " " << j << endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main()
// {
//     int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
//     int k = 31;
//     cout << pairsum(arr, 8, k) << endl;
// }

//optimised way of pair sum problem (O(n))

// bool pairsum(int arr[], int n, int k)
// {
//     int low = 0;
//     int high = n - 1;

//     while (low < high)
//     {
//         if (arr[low] + arr[high] == k)
//         {
//             cout << low << " " << high << endl;
//             return true;
//         }
//         else if (arr[low] + arr[high] > k)
//         {
//             high--;
//         }
//         else
//         {
//             low++;
//         }
//     }
//     return false;
// }