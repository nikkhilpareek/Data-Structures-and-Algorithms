vector<int> superiorElements(vector<int>&a) {
    vector<int>temp;
    int maxi=INT_MIN;
    for(int i=a.size()-1;i>=0;i--)
    {
        if(a[i]>maxi)
        {
            temp.push_back(a[i]);
        }
        maxi=max(maxi,a[i]);
    }
    sort(temp.begin(),temp.end());
    return temp;
}
