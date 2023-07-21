    vector <int> newNums;
    for (int i = 0; i < len; i++)
    {
        if(nums[i]!= val){
            newNums.push_back(nums[i]);
            k++;
        }
    }
    cout<<"k ="<<k<<endl;
    int l = newNums.size();
    for (int i = 0; i < l; i++)
    {
        /* code */
        cout<<newNums[i]<< " ";
    }