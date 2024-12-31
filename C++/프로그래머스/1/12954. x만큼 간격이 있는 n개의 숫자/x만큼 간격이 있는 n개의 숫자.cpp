#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    
    int save = 0;
    for(int i = 0; i < n; i++){
        save = save + x;
        answer.push_back(save);
    }
    
    return answer;
}