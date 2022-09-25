//------Driver Code Start------>
#include<bits/stdc++.h>
using namespace std;

//----code here-----
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort012(int a[], int n)
{
    int low = 0, high = n-1, mid = 0;

    while(mid <= high){

        if(a[mid]==0)
            swap(&a[mid++], &a[low++]);
       
        else if(a[mid]==1)
            mid++;

        else
            swap(&a[mid], &a[high--]);
    }
}

//------Driver Code Start------>
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }
        cout << endl;
        
    }
    return 0;
}
