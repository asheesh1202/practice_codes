//find maximum size of array with equal number of 1 and 0
#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int maximumDistance(int arr[], int n)
{int max_dist= 0;
int sum =0;
unordered_map<int, int> positionSumMap;
positionSumMap[0] = 0;
for(int i=0; i<n; i++)
{
if(arr[i]==0)
	sum--;
if(arr[i]==1)
    sum++;

if(positionSumMap.find(sum)!=positionSumMap.end()) //means this sum was already seen earlier . Sum is 0  having equal number of 
{
max_dist =max(max_dist, i+1 - positionSumMap.find(sum)->first);
}
else{ positionSumMap[i+1]=sum;}
}

return max_dist;
}

int main()
{
    //unordered_set = set to store single items
    //unordered_map = maps to store pairs 
    int arr[6] = {0,1,0,1,1,0};
    cout<<maximumDistance(arr,6);
    
}
