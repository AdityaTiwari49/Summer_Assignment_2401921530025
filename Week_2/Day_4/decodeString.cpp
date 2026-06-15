class Solution {
public:
    string decodeString(string s) {

        stack<int> countStack;
        stack<string> stringStack;

        string currString = "";
        int currNum = 0;

        for (char ch : s) {

            if (isdigit(ch)) {

                currNum = currNum * 10 + (ch - '0');

            }

            else if (ch == '[') {

                countStack.push(currNum);
                stringStack.push(currString);

                currNum = 0;
                currString = "";

            }

            else if (ch == ']') {

                int repeat = countStack.top();
                countStack.pop();

                string prev = stringStack.top();
                stringStack.pop();

                string temp = "";

                for (int i = 0; i < repeat; i++)
                    temp += currString;

                currString = prev + temp;
            }

            else {

                currString += ch;

            }
        }

        return currString;
    }
};