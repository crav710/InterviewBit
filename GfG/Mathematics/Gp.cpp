// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//Complete this function
double termOfGP(int A,int B,int N)
{
    //Your code here
    double r = (double)B/A;
    // cout<<" "<<r<<N-1<<pow(r,(double)N-1)<<endl;
    double nth= A*pow(r,N-1);
    return nth;
}

// { Driver Code Starts.


int main()
{
    int T; //testcases total
    cin>>T;//input the testcases

    for(int i=0;i<T;i++) //white testcases are not exhausted
    {
        int A,B;
        cin>>A>>B; //input first and second term of gp
        int N;
        cin>>N; //input n
        
        cout<<floor(termOfGP(A,B,N))<<endl;
    }

    return 0;
}

  // } Driver Code Ends