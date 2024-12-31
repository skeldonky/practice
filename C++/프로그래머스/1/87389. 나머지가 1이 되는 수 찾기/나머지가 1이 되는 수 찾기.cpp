#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int i = 1;
    while(answer != 1){
        answer = n%i;
        if(answer == 1){
            break;
        }
        i++;
    }
    answer = i;
    
    return answer;
}