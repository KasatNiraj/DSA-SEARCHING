// Function to find floor of x
// n: size of vector
// x: element whose floor is to find
int findFloor(vector<long long> v, long long n, long long x){
    
    if(v[0]>x)
        return -1;
    int low=0,high=n-1,mid,ans;
    while(low<=high){
        mid=low+(high-low)/2;
        if(v[mid]<=x && v[mid+1]>x)
            return mid;
        else if(v[mid]>x)
            high=mid-1;
        else{
            low+=1;
            ans=mid; //if x is not present in arr store greatest element less than x
        }
    }
    return ans;
    
}
