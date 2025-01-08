#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    for(int i = left; i <= right; i++){
        vector<int> cnt;
        for(int j = 1; j <= i; j++){
            if(i%j == 0){
                cnt.push_back(j);
            }
        }
        
        if(cnt.size()%2 == 0){
            answer += i;
        }else{
            answer -= i;
        }
    }
    
    return answer;
}