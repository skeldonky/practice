#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    int psiz = p.size();
    long pInt = stol(p);
    
    for (int i = 0; i <= t.size() - psiz; i++) {
        string tmp = t.substr(i, psiz);
        long tmpInt = stol(tmp);
        
        if (tmpInt <= pInt){
            answer += 1;
        }
    }
    
    return answer;
}