#include <iostream>

using namespace std;
int solution(int n) {
    int answer = 0, tmp = n;

    while (tmp) {
        answer += tmp % 10;
        tmp /= 10;
    }
    return answer;
}