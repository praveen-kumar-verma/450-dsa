//------Driver Code Start------>
#include<bits/stdc++.h>
using namespace std;

//----code here-----
int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int>m;
        for(int i=0;i<=r;i++){
            m.push(arr[i]);
            if(m.size()>k)
            m.pop();
        }
        return m.top();
    }
//------Driver Code Start------>
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        cout<<kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}