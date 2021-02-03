int findSubarray(vector<int> arr, int n ) 
{
    unordered_map<int,int>m;
    int sum=0,sum1=0;
    m[0]=1;
    for(int i=0;i<n;i++)
    {
        sum=arr[i]+sum;
        if(m.find(sum)==m.end())
        m[sum]++;
        else
        {
        sum1=sum1+(m[sum]);
        m[sum]++;
    }
    }
    return sum1;
}
