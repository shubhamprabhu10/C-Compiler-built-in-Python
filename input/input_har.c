/* 
 * Hard example source code
 * 
 * prints N length sequence of sums of i first odd numbers
 * where i is the index of the sum in the sequence
 */

int abs(int a) {
    if (a < 0) {
        return 0-a;
    } else {
        return a;
    }
}

int isMultiplier(int a, int b) {
    int i;
    int step;
    int flag;

    if (b == 0) {
        return 0;
    } else {
        i = 1;
        flag = 0;
    }

    if (a < 0) {
        if (b < 0) {
            i = 1;
        } else {
            i = 0-1;
        }
    } else {
        if (b < 0) {
            i = 0-1;
        } else {
            i = 1;
        }
    }

    step = i;
    i = i - abs(i);
    while (abs(i) < abs(a) + 1) {
        if (i * b == a) {
            flag = 1;
            break;
        } else {
            i = i + step;
            continue;
        }
    }
    return flag;

}