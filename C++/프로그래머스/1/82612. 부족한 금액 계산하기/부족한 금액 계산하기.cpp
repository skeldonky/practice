using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    
    int fp = price;
    
    for(int i = 0; i < count; i++){
        answer += price;
        price += fp;
    }

    answer = answer - money;
    
    if(answer <= 0){
        return 0;
    }
    
    return answer;
}