class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0;
        int cows = 0;
        int n = secret.size();
        vector<bool> secret_used(n, false);
        vector<bool> guess_used(n, false);
        for (int i = 0; i < n; i++) {
            if (secret[i] == guess[i]) {
                bulls++;
                secret_used[i] = true;
                guess_used[i] = true;
            }
        }
        for (int i = 0; i < n; i++) {
            if (secret_used[i]) {
                continue;
            }
            for (int j = 0; j < n; j++) {
                if (guess_used[j]) {
                    continue;
                }
                if (secret[i] == guess[j]) {
                    cows++;
                    guess_used[j] = true;
                    break;
                }
            }
        }
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};