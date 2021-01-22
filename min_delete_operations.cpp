//Minimum delete operations to make all elements of array same
#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int countNumber(int arr[], int n)
{
    unordered_map<int, int> mapCount;
    //elements iniialized to zero in starting
    for(int i=0; i<n; i++)
    {
        mapCount[arr[i]]++;
    }
    
    int maxval = 0;
    for(auto it= mapCount.begin(); it!=mapCount.end(); it++ ){
        maxval = max(maxval, it->second);
    }
    return n-maxval;
}


int main()
{
    //unordered_set = set to store single items
    //unordered_map = maps to store pairs 
    int arr[5] = {1,1,2,1,1};
    cout<<countNumber(arr, 5);
    
}
