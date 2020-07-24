#include <iostream>
#include<vector>

using namespace std;

int main(int argc, const char * argv[]) {
    vector<string> pureNum={"0","1", "2", "3", "4", "5", "6", "7"};
    vector<string> compli={"零","壹", "貳", "參", "肆", "伍", "陸", "柒"};
    vector<string> simpli={"零","一", "二", "三", "四", "五", "六", "七"};
    
    cout << "期望的輸出方式（0為純數字, 1為中文數字, 2為中文大寫數字）：";
    int inputMethod;
    cin >> inputMethod;
    
    vector<string>* outVec;
    if(inputMethod==0) {
        outVec=&pureNum;
    } else if(inputMethod==1) {
        outVec=&simpli;
    } else {
        outVec=&compli;
    }
    
    int runTimes;
    cout << "執行次數：";
    cin >> runTimes;
    if(runTimes>7) {
        cout << "次數過多！\n";
        return 0;
    }
    
    for(int i = 0; i<runTimes; i++) {
        cout << "第" << (*outVec)[i] << "次" << endl;
    }
    
    return 0;
}
