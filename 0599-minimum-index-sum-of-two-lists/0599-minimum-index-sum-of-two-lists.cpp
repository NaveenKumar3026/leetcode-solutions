class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> map;
        for(int i=0;i<list1.size();i++){
            map[list1[i]]=i;
        }
        vector<string> res;
        int minsum=INT_MAX;

        for(int j=0;j<list2.size();j++){
            if(map.count(list2[j])){
                int sum=map[list2[j]]+j;

                if(sum<minsum){
                    minsum=sum;
                    res.clear();
                    res.push_back(list2[j]);
                }
                else if(sum==minsum) res.push_back(list2[j]);
            }
        }
        return res;
    }
};