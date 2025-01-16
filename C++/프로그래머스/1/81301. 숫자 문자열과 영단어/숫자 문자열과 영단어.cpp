#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    vector<string> num = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string ans = "";
    string tmp = "";
    for(int i = 0; i < s.size(); i++){
        if('0' <= s[i] && s[i] <= '9') {
            ans += s[i];
        }else {
            tmp += s[i];
        }
        if(find(num.begin(), num.end(), tmp) != num.end()) {
            ans += to_string(find(num.begin(), num.end(), tmp) - num.begin());
            tmp = "";
        }
    }
    answer = stoi(ans);
    return answer;
}