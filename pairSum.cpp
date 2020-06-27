// Function to find pair with given sum in an array
// uses two pointer approach
// time- O(n)
// space- O(1)
void pairsum(int n,int k, int arr[]){
    int low=0,high=n-1;
    int sum=0;
    int flag=0;
    while(low<high){
        sum=arr[low]+arr[high];
        if(sum==k){
            flag=1;
            cout<<arr[low]<<" "<<arr[high]<<" "<<k<<endl;
            low++;
        }
        else if(sum>k) //if sum is greater than given sum drop the element with
            high--;   // highest index in sorted array
        else 
            low++;  //else increment low index to find greater element
    }
    
    if(flag==0)         //if sum is not found 
        cout<<"-1"<<endl;
    return;
}
