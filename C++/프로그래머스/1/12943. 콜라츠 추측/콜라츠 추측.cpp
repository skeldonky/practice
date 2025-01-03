#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    int cnt = 0;
    
    long long n = num;
    
    if(n == 1){
        answer = 0;
    }else{
        while(true){
            if(n == 1){
                answer = cnt;
                break;
            }else if(cnt == 500){
                answer = -1;
                break;
            }else if(n%2 == 0){
                n = n / 2;
                cnt++;
            }else{
                n = n * 3 + 1;
                cnt++;
            }
        }
    }
        
    return answer;
}