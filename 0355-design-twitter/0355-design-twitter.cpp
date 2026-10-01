class Twitter {
private:

    struct Tweet {
        int id;
        int time;
    };

    int timer = 0;

    // userId -> tweets posted by that user
    unordered_map<int, vector<Tweet>> tweets;

    // userId -> users they follow
    unordered_map<int, unordered_set<int>> following;

public:

    Twitter() {
    }

    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({tweetId, timer++});
    }

    vector<int> getNewsFeed(int userId) {

        priority_queue<tuple<int, int, int>> pq;

        // Include the user's own tweets
        vector<int> users;

        users.push_back(userId);

        // Include people this user follows
        for (int followee : following[userId]) {
            users.push_back(followee);
        }

        // Put the newest tweet of every relevant user into heap
        for (int user : users) {

            if (!tweets[user].empty()) {

                int index = tweets[user].size() - 1;

                pq.push({
                    tweets[user][index].time,
                    user,
                    index
                });
            }
        }

        vector<int> result;

        // Get at most 10 newest tweets
        while (!pq.empty() && result.size() < 10) {

            auto [time, user, index] = pq.top();
            pq.pop();

            result.push_back(tweets[user][index].id);

            // Move to the previous tweet of same user
            if (index > 0) {

                index--;

                pq.push({
                    tweets[user][index].time,
                    user,
                    index
                });
            }
        }

        return result;
    }

    void follow(int followerId, int followeeId) {
        following[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
        following[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */