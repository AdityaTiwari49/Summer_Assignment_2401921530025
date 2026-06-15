class Solution {
public:
    int compress(vector<char>& chars) {

        int n = chars.size();

        int read = 0;
        int write = 0;

        while (read < n) {

            char curr = chars[read];
            int count = 0;

            
            while (read < n && chars[read] == curr) {
                read++;
                count++;
            }


            chars[write++] = curr;

            
            if (count > 1) {

                string num = to_string(count);

                for (char digit : num) {
                    chars[write++] = digit;
                }
            }
        }

        return write;
    }
};