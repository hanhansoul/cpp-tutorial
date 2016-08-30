/*
Item 2 Prefer consts,enums and inline to #define

    即宁可以编译器替换预处理器，当时用#define时，编译器往往无法正确反映编译时的错误信息。如：
    #define ASPECT_RATIO 1.653
    ASPECT_RATIO在编译器开始处理源代码之前就被预处理器移走了。解决之道是以一个常量替换上述的宏：
    const double AspectRatio = 1.653;

    两种特殊情况
    1. 定义常量指针
    由于常量定义式通常被放在头文件内，因此有必要将指针声明为const。例如要在头文件内定义一个常量
的char*字符串，必须使用两次const修饰符：
    const char* const authorName = "Scott Meyers";
    在C++中，string对象更适合于char*字符串，因此定义成以下形式更加合适：
    const string authorName("Scott Meyers");
    2. 类的专属变量
    为了将常量的定义域限制于类范围内，该常量必须为类的一个成员，为确保该常量至多只有一个实体，它
必须是一个static成员：见类GamePlayer。
    NumTurns为声明式而非定义式。通常C++要求你对你所使用的任何东西提供一个定义式，但如果它是个class专属
变量又是static


 */
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#define DEBUG 0

using namespace std;

class GamePlayer
{
    private:
        // NumTurns为声明式而非定义式。
        static const int NumTurns = 5;
        int scores[NumTurns];
}
int main()
{
    return 0;
}

