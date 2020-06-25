// Function to find element in sorted array
// logic similar to binary search
// Time : O(LogN).
// Space: O(1).
int leftIndex(int N, int arr[], int X){
    
    int low=0;
    int high=N-1;

    while(low<=high){
        int mid= low +(high-low)/2; //to avoid overflow in case of large array size
        //mid==0 is if element is starting element of array
        //arr[mid-1]!=X is to check if there are other X present in arr
        if(arr[mid]==X && (mid==0 || arr[mid-1]!=X)){
             return mid;
        }
        else if(arr[mid]>=X){ // to check >= condition consider 
            high=mid-1;      //arr= {2,2,2,2,2}
        }
        else{
            low=mid+1;
        }
    }

    return -1; //if element not found
    
}
