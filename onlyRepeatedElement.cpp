void countRepeated(int arr[],int n){
    if(n==1)
        return ;
    int low=0,high=n-1,mid;
    while(low<high){
        mid=low+(high-low)/2;
        if(arr[mid]>= mid + arr[0])
            low=mid+1;
        else
            high=mid;
    }
    int times=n-(arr[n-1]-arr[0]);
    cout<<arr[low]<<" "<<times;
}
