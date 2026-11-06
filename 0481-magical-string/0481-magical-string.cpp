class Solution {
public:
    int magicalString(int n) {
        if (n <= 0)
            return 0;

        if (n <= 3)
            return 1;

        vector<int> s(n, 0);

        s[0] = 1;
        s[1] = 2;
        s[2] = 2;

        int ans = 1;
        int i = 2;
        int count = 3;
        int num = 1;

        while (count < n) {
            for (int j = 0; j < s[i] && count < n; j++) {
                s[count] = num;

                if (num == 1)
                    ans++;

                count++;
            }

            num = 3 - num;
            i++;
        }

        return ans;
    }
};