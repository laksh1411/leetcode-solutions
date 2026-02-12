class LRUCache {
public:
    int cap;
    int timer = 0;

    map<int,int> key_value;   
    map<int,int> key_time;    
    map<int,int> time_key;    

    LRUCache(int capacity) {
        cap = capacity;
    }

    int get(int key) {
        if(key_value.find(key) == key_value.end())
            return -1;

        // old time remove karo
        int old_time = key_time[key];
        time_key.erase(old_time);

        // new time assign
        timer++;
        key_time[key] = timer;
        time_key[timer] = key;

        return key_value[key];
    }

    void put(int key, int value) {

        if(key_value.find(key) != key_value.end()) {
            // update case
            key_value[key] = value;

            int old_time = key_time[key];
            time_key.erase(old_time);

            timer++;
            key_time[key] = timer;
            time_key[timer] = key;
        }
        else {

            // capacity full
            if(key_value.size() == cap) {
                // smallest time wala key nikalo
                int oldest_time = time_key.begin()->first;
                int oldest_key = time_key.begin()->second;

                key_value.erase(oldest_key);
                key_time.erase(oldest_key);
                time_key.erase(oldest_time);
            }

            timer++;
            key_value[key] = value;
            key_time[key] = timer;
            time_key[timer] = key;
        }
    }
};

