int largest(int arr[], int n) {
    // Code Here
    int large=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    return large;
}