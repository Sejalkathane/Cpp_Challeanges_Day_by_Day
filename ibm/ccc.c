#include <stdio.h>

int cd = 0, ca = 0;

void bd(int array[], int n) {
    for (int step = 0; step < n - 1; ++step) {
        for (int i = 0; i < n - step - 1; ++i) {
            if (array[i] < array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                cd++;
            }
        }
    }
}

void ba(int array[], int n) {
    for (int step = 0; step < n - 1; ++step) {
        for (int i = 0; i < n - step - 1; ++i) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                ca++;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int da[n], dd[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &da[i]);
        dd[i] = da[i];
    }
    ba(dd, n);
    bd(da, n);

    // Choose the minimum of cd and ca
    if (cd < ca)
        printf("%d", cd);
    else
        printf("%d", ca);

    return 0;
}
