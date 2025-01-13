#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<int> three;
    while(n!=0)
    {
        three.push_back(n%3);
        n/=3;
    }
    
    int expon=1;
    for(int i=0;i<three.size();i++)
    {
        answer+=three[three.size()-i-1]*(expon);
        expon*=3;
    }
    
    return answer;
}