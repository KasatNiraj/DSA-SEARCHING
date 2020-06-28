// Function to find the two repeated element
// arr: input array
// N: denoting that the size of array is N + 2 and range of elements is [1, N]
void twoRepeated(int arr[], int N){
    //check for value of arr[abs(arr[i])] if it is positive
    //mark it as visited by making it negative
    //if the same element occurs twice then mark negative as positive
    //and print the element
    for(int i=0;i<N+2;i++){
        if(arr[abs(arr[i])]>0)
            arr[abs(arr[i])]=-arr[abs(arr[i])];
        else
            cout<<abs(arr[i])<<" ";
    }
    
}
