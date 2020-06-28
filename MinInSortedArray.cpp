// Function to find the minimum element in sorted and rotated array
// arr: input array
// low and high are 0 and n-1, where n is the size of arr
int minNumber(int arr[], int low, int high)
{
    //if array is not at all rotated
    if(high<low)
        return arr[0];
    //if there is only one element left
    if(high==low)
        return arr[low];
    int mid=low+(high-low)/2;
    //if mid+1 is minimum
    if(arr[mid+1]<arr[mid] && mid<high)
        return arr[mid+1];
    //if mid is minimum
    if(arr[mid]<arr[mid-1] && mid>low)
        return arr[mid];
    // decision to check left half
    if(arr[mid]<arr[high])
        return minNumber(arr,low,mid-1);
    //decision to check right hald
    return minNumber(arr,mid+1,high);
}
