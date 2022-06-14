int findUnique(int *arr, int size)
{
    //initializing the variable "ans"
    int ans=0;
    
    // performing XOR to find the unique element
    // a^a=0 and 0^a=a
    for( int i=0;i<size;i++)
    {
        ans^=arr[i];
    }
    return ans;
}