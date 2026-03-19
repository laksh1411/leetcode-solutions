class Solution {
public:
    int compress(vector<char>& s) {
        int n = s.size(), w = 0, r = 0;
        while (r < n) {
            char c = s[r];
            int cnt = 0;
            while (r < n && s[r] == c) r++, cnt++;
            s[w++] = c;
            if (cnt > 1) {
                string t = to_string(cnt);
                for (char ch : t) s[w++] = ch;
            }
        }
        return w;
    }
};

