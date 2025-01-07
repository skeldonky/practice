#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int leng = s.size();
    
    if(leng%2 == 0){
        int i = leng / 2;
        answer.push_back(s[i-1]);
        answer.push_back(s[i]);
    }else{
        int i = leng / 2;
        answer = s[i];
    }
    
    return answer;
}