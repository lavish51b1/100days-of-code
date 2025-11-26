#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r = USER;

    if(r == ADMIN) printf("Welcome Admin\n");
    else if(r == USER) printf("Hello User\n");
    else printf("Guest Access\n");

    return 0;
}
