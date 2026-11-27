class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char c=keysPressed[0];
        int time=releaseTimes[0];

        for(int i=1;i<keysPressed.size();i++){
            int duration = releaseTimes[i] - releaseTimes[i - 1];

            if (duration > time) {
                time = duration;
                c = keysPressed[i];
            }
            else if (duration == time) {
                c = max(c, keysPressed[i]);
            }
        }
        return c;
    }
};