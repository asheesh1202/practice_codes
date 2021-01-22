//Minimum delete operations to make all elements of array same
#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int maximumDistance(int arr[], int n)
{
    unordered_map<int, int> positionMap;
    int max_dist = 0;
    for(int i= 0; i<n; i++)
    {
        if(positionMap.find(arr[i])!=positionMap.end())
        {
            max_dist =max(max_dist,i-positionMap[arr[i]] );
        }
        else { 
            cout<<i<<endl;
            positionMap[arr[i]] = i; }
    }
    
    return max_dist; 
}

int main()
{
    //unordered_set = set to store single items
    //unordered_map = maps to store pairs 
    int arr[5] = {1,1,2,1,1};
    cout<<maximumDistance(arr, 5);
    
}
