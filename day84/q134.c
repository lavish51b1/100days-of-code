#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main(){
    enum Status s = TIMEOUT;

    if(s == SUCCESS){
        printf("Operation Successful");
    }
    else if(s == FAILURE){
        printf("Operation Failed");
    }
    else{
        printf("Operation Timed Out");
    }

    return 0;
}
