#include <stdio.h>

int PassOrFail(int score) {
    if (score >= 50) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int score = 49;  

    if (PassOrFail(score)) {
        printf("재시험 없습니다!\n");
    }
    else {
        printf("재시험 있습니다.\n");
    }

    return 0;
}
