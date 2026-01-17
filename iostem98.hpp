#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
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
#define END_CODE_WITH return //example: END_CODE_WITH 5;
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
#define EQ =
#define NOT_EQ !=

//random number generator generator-----------------------------------------------
FULL_NUMBER RANDOM OPEN FULL_NUMBER a, FULL_NUMBER b CLOSE {
    return a + rand() % (b - a + 1);
}

//random float generator----------------------------------------------------------------
FLOAT_NUMBER RANDOM_FLOAT OPEN FLOAT_NUMBER a, FLOAT_NUMBER b CLOSE {
    return a + (FLOAT_NUMBER)rand() / (FLOAT_NUMBER)RAND_MAX * (b - a);
}

//not 98 firendly yet
//slow saying--------------------------------------------------------------------------
/*class SLOWLY
{
    string * sp{};
	public:
	SLOWLY(string &s){sp = &s;};
    friend ostream& operator<<(ostream& os, const SLOWLY &str)
	{
		auto cp{str.sp->c_str()};
		int i{};
		while(cp && cp[i])
		{
			os << cp[i++];
			os.flush();
			usleep(25000);
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

void iusearchbtw() {
SAY "                    -`                   " NEWLINE
SAY "                   .o+`                  " NEWLINE
SAY "                  `ooo/                  " NEWLINE
SAY "                 `+oooo:                 " NEWLINE
SAY "                `+oooooo:                " NEWLINE
SAY "                -+oooooo+:               " NEWLINE
SAY "              `/:-:++oooo+:              " NEWLINE
SAY "             `/++++/+++++++:             " NEWLINE
SAY "            `/++++++++++++++:            " NEWLINE
SAY "           `/+++ooooooooooooo/`          " NEWLINE
SAY "         ./ooosssso++osssssso+`          " NEWLINE
SAY "        .oossssso-````/ossssss+`         " NEWLINE
SAY "       -osssssso.      :ssssssso.        " NEWLINE
SAY "      :osssssss/        osssso+++.       " NEWLINE
SAY "     /ossssssss/        +ssssooo/-       " NEWLINE
SAY "   `/ossssso+/:-        -:/+osssso+-     " NEWLINE
SAY "  `+sso+:-`                 `.-/+oso:    " NEWLINE
SAY " `++:.                           `-/+/   " NEWLINE
SAY " .`                                 `/   " NEWLINE
SAY "                                         " NEWLINE
}