#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    // declaring vector of vector ans to store the answer
   vector<vector<int>> ans;
    // finding the size of the array
   int size=arr.size();
    // to traverse every element
   for(int i=0; i<size; i++)
   {
       // "element" contains the element of array to add with other nextElements to find out if the sum is equal to s or not
       int element=arr[i];
       // traversing array from i+1
       for(int j=i+1;j<size;j++)
       {
           // storing next element 
           int nextElement=arr[j];
           // finding sum of element and next element of the array
           int sum=element+nextElement;
           if(sum==s)
           {
               // temporary vector to hold the values
              vector<int> temp;
              temp.push_back(min(element,nextElement));
              temp.push_back(max(element,nextElement));
               // pushing back the temporary vector into the vector ans
              ans.push_back(temp);
           }
       }
   }
    // sorting the array in ascending order, asked by the question
    sort(ans.begin(), ans.end());
    return ans;
    
}