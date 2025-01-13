#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            answer.push_back(' ');
            count = 0;
            continue;
        }
        
        if(count%2 == 0){
            answer.push_back(toupper(s[i]));
        }else{
            answer.push_back(tolower(s[i]));
        }
        count++;
    }
    
    return answer;
}