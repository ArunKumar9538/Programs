#include <iostream>

using namespace std;

int add(int a[], int n, int k)
{    
    int count=0;
    int p;
    for(int i=0; i<n; i++)
        {
            a[i]=a[i]+1;
            count++;
        }
      p=min(a, n);
    if(p>=k)
    {
        return count;
    }
    else
    {
        add(a, n, k);
    }
    
}
int min(int a[], int n)
{
    int m=1000;
    for(int i=0;i<n; i++)
    {
        if(a[i]<m)
        {
        m=a[i];
        }
    }
    return m;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
    
        int ans;
        cin>>n;
        cin>>k;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
    ans= add(a, n, k);
    cout<<ans<<"\n";
}
return 0;
}
