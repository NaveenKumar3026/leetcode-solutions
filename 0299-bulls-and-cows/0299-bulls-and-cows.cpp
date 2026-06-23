class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0;
        int cows=0;

        vector<int> sfreq(10, 0);
        vector<int> gfreq(10, 0);

        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]) bulls++;
            else{
                sfreq[secret[i]-'0']++;
                gfreq[guess[i]-'0']++;
            }
        }

        for(int i=0;i<10;i++){
            cows+=min(sfreq[i], gfreq[i]);
        }
        string res;
        res = to_string(bulls)+"A"+to_string(cows)+"B";
        return res;
    }
};