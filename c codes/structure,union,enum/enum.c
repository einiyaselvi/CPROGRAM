#include <stdio.h>

enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    enum Day today;         // enum type variable declare panrom
    today = WEDNESDAY;      // Innaiku day set panrom

    if (today == WEDNESDAY) {
        printf("Today is Wednesday\n");  // True na ithu print agum
    } else {
        printf("It's not Wednesday\n");
    }

    return 0;
}
