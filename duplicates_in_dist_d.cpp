//Check if a given array contains duplicate elements within k distance from each other
#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int maximumDistance(int arr[], int k, int n)
{
    unordered_map<int, int> positionCount;
    for(int i =0; i<n; i++)
    {
        if(positionCount.find(arr[i])!=positionCount.end())
        {
            if(k>i-positionCount[arr[i]])
            {
                return true;
            }
        }
        else
        {
            positionCount[arr[i]] = i;
        }
    }
    return false;
}

int main()
{
    //unordered_set = set to store single items
    //unordered_map = maps to store pairs 
    int arr[5] = {1,1,2,1,1};
    cout<<maximumDistance(arr, 0, 5);
    
}
