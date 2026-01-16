#include <iostem.hpp>
START_CODE
    FULL_NUMBER x = RANDOM(0,5);
    FULL_NUMBER y = 0;
again:
    SAY "GUESS THE NUMBER BETWEEN 0 and 5: " ;
    LISTEN y;

    IF OPEN y != x CLOSE {
        SAY "TRY AGAIN" NEWLINE
        MOVETO again;
    }
    OTHERWISE {
        SAY "YOU WON!" NEWLINE
    }
END_CODE