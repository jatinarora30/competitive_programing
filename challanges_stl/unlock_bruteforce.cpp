// brute force approcah doesn't pass last test case
#include<iostream>
using namespace std;
int main() {
    long long n;
    long long k;
    
    cin>>n>>k;
    long long arr[n];
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long j=0;
    long long i=0;
    long long pos=-1;
    while(j<n  )
    {
         long long maxIndex = j;
        for (int i = j ; i < n; i++) {
            if (arr[i] >arr[maxIndex]) {
                maxIndex = i;
            }
        }
        if(arr[j]!=arr[maxIndex])
        { 
            long long swap=arr[maxIndex];
            arr[maxIndex]=arr[j];
            arr[j]=swap;
            k--;
             
             
        }
        if(k<1)
        {
            break;
        }
        j++;


        
       
    }

    for(int p=0;p<n;p++)
    {
        cout<<arr[p]<<" ";
    }
    cout<<endl;
	return 0;
}
