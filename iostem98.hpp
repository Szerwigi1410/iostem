#include <iostream>
#include <string>
#include <random>
#include <unistd.h>
//#include <chrono>
//#include <thread>
using namespace std;

//COLORS!!!!!!!!!!!!!!!!!!!!!!!!!1
#define RESET_COLOR "\033[0m"
#define GREEN "\033[32m"
#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
//basic stuff---------------------
#define START_CODE int main() {
#define END_CODE return 0; }
#define END_CODE_BAD return 1; }
#define NORETURN void
//printing--------------------------
#define SAY cout <<
#define NEWLINE << endl;
#define LISTEN cin >>
#define THEN <<
#define INTO >>
//ints-floats-strings-etc----------
#define FULL_NUMBER int
#define FLOAT_NUMBER float
#define WORDS string
#define LETTER char
//logic-stuff-idk--------------------
#define AND &&
#define ORAND ||
#define IF if
#define OTHERWISE else
#define OTHERWISE_IF elif
#define OPEN (
#define CLOSE )
#define MOVETO goto
#define IsBIGGER >
#define IsSMALLER <
#define IsBIGGER_EQ >=
#define IsSMALLER_EQ <=

//random number generator generator-----------------------------------------------
FULL_NUMBER RANDOM OPEN FULL_NUMBER a, FULL_NUMBER b CLOSE {
    random_device rd;
    mt19937 gen OPEN rd OPEN CLOSE CLOSE;
    uniform_int_distribution<FULL_NUMBER> dist OPEN a, b CLOSE;
    return dist OPEN gen CLOSE;
}
//random float generator----------------------------------------------------------------
FLOAT_NUMBER RANDOM_FLOAT OPEN FLOAT_NUMBER a, FLOAT_NUMBER b CLOSE {
    random_device rd;
    mt19937 gen OPEN rd OPEN CLOSE CLOSE;
    uniform_real_distribution<FLOAT_NUMBER> dist OPEN a, b CLOSE;
    return dist OPEN gen CLOSE;
}

//slow saying--------------------------------------------------------------------------
/*class SAY_SLOWLY
{
    string * sp{};
	public:
	SAY_SLOWLY(string &s){sp = &s;};
    friend ostream& operator<<(ostream& os, const SAY_SLOWLY &str)
	{
		auto cp{str.sp->c_str()};
		int i{};
		while(cp && cp[i])
		{
			os << cp[i++];
			os.flush();
			std::this_thread::sleep_for (std::chrono::milliseconds(25));
		}
		return os;
	}
};*/

//waiting-----------------------------------------------------------------
NORETURN WAIT OPEN int x CLOSE {
    usleep OPEN x * 1000 CLOSE;
}

NORETURN WAIT_SECONDS OPEN int x CLOSE {
    sleep OPEN x CLOSE;
}

//spinner----------------------------------------------------------------------
void SPINNER(int x) {
	for (int i = 0; i < 20; i++) {
        char spin[] = {'|', '/', '-', '\\'};
		cout << spin[i % 4] << flush;
		usleep(x * 1000);
		cout << "\b" << flush;
	}
}