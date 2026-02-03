#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    int pv = 0;
    
    while (pv < n) {
        pv += slice;
        answer++;
    }
    
    return answer;
}