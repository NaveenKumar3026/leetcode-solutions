class RandomizedCollection {
public:
    vector<int> nums;
    unordered_map<int, unordered_set<int>> map;
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        bool first=map[val].empty();
        nums.push_back(val);
        map[val].insert(nums.size()-1);
        return first;
    }
    
    bool remove(int val) {
        if(map[val].empty()) return false;
        int idx= *map[val].begin();

        map[val].erase(idx);
        int last=nums.back();
        nums[idx]=last;
        map[last].insert(idx);
        map[last].erase(nums.size()-1);

        nums.pop_back();
        return true;

    }
    
    int getRandom() {
        return nums[rand()%nums.size()];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */