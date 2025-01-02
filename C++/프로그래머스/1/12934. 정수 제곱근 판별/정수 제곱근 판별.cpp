#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long res = sqrt(n);
    
    if (res*res == n) {
        answer=pow(res+1,2);
    }
    else {
        answer=-1;
    }
    
    return answer;
}