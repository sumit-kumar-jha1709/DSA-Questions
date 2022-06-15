vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    //declaring ans vector
	vector<int> ans;
    
    // initializing variable works as index 
    // i is at the first index of arr1
    // j is at the first index of arr2
    int i=0,j=0;
    
    while(i<n && j<m)
    {
        // if element of 1st array is smaller than that of 2nd array
        // increase the index of arr1, i.e, i++
        if(arr1[i]<arr2[j])
            i++;
        // if elements of both the arrays are same
        // push back the element in vector ans
      // increase the indexes of both the arrays arr1,arr2 i.e, i++,j++
        else if(arr1[i]==arr2[j])
        {
            
            ans.push_back(arr1[i]);
            i++;
            j++;
        }       
        // if element of 1st array is greater than that of 2nd array
        // increase the index of arr2, i.e, j++
        else
         j++;   
    }
    return ans;
}