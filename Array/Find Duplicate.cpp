int findDuplicate(vector<int> &arr) 
{
    //initializing the variable "ans"
    int ans=0;
    
    // size of the array
    int size=arr.size();
    //1.XOR every element 
    for(int i=0;i<size;i++)
    {
        ans^=arr[i];
    }
    //2.XOR again from 1-'N-1' as this is the range of the elements stored in the array
    for(int i=1; i<size ; i++)
    {
        ans^=i;
    }
    return ans;
    
	
}
