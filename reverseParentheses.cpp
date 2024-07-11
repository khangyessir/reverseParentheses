class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> stack;
        string res = s;
        for(int i=0; i<res.size(); ++i){
            if(res[i] == '('){
                stack.push(i);
            } else if(res[i] == ')'){
                int j = stack.top();
                stack.pop();
                reverse(res.begin() + j + 1, res.begin() + i);
            }
        }
        string string_res;
        for(char c : res){
            if(c != '(' && c != ')'){
                string_res += c;
            }
        }
        return string_res;
    }
};