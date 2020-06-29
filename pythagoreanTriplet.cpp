//function to find two remaining elements of triplet
int isPair(int low,int high, int k, int arr[]);
//to find a triplet
void pythagoreanTrip(int n,int arr[]){
    if(n<3){
        cout<<"No"<<endl;
        return;
    }
    bool flag=false;
    //squaring each array element
    for(int i=0;i<n;i++){
        arr[i]*=arr[i];
    }
    sort(arr,arr+n);
    for(int i=2;i<n;i++){
        //running isPair function by passing an element of possible triplet
        //if we find a pair having sum equal to that element then it will return true
        if(isPair(0,i-1,arr[i],arr)){
            flag=true;
            cout<<"Yes"<<endl;
            break;
        }
    }
    if(!flag)
        cout<<"No"<<endl;
    return;
}
int isPair(int low,int high, int k, int arr[]){
    int sum=0;
    while(low<high){
        sum=arr[low]+arr[high];
        if(sum==k)
            return 1;
        else if(sum>k)
            high--;
        else
            low++;
    }
    return 0;
}
