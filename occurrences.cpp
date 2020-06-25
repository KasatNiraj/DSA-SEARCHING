int firstOccurence(int arr[],int N,int X);//index of first occcurence of element X
int lastOccurence(int arr[],int N,int X);//index of last occurence of element X
// function to find occurence of element X in an array
int occurrence(int arr[],int N,int X){
      int a=lastOccurence(arr,N,X);
	    if(a==-1)
	        return -1;
	    else
	        return (a-firstOccurence(arr,N,X)+1);
}
int firstOccurence(int arr[],int N,int X){
    int low=0;
    int high=N-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==X && (mid==0 || arr[mid-1]!=X))
            return mid;
        else if(arr[mid]>=X)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;   
}
int firstOccurence(int arr[],int N,int X){
    int low=0;
    int high=N-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==X && (mid==0 || arr[mid-1]!=X))
            return mid;
        else if(arr[mid]>=X)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
    
}
