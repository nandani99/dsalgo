int tiplets_with_sum(vector<string> &A) {
    //triplets with sum between 1 and 2
    
    vector<float>v;
    for(int i=0;i<A.size();i++){
        v.push_back(stof(A[i]));
    }
    sort(v.begin(),v.end());
    int i=0;
    int j=v.size()-1;
    int k=i+1;
    if(v[0]>=2){
        return 0;
    }
    while(i<j&&k<j){
        float sum = v[i]+v[j]+v[k];
        if(sum>1&&sum<2){
            return 1;
        }
        else{
            if(sum<=1){
                i++;
                k++;
            }
            else if(sum>=2){
                j--;
            }
        }
    }
    return 0;
}
