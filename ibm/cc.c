#include <stdio.h>
#include <string.h>

int combination(char arr[], int n);

int main() {
    char ashok[100], anand[100];
    scanf("%s", ashok);
    scanf("%s", anand);

    int placementlelo_as = combination(ashok, strlen(ashok));
    int placementlelo_an = combination(anand, strlen(anand));

    if (placementlelo_as == 0 && placementlelo_an == 0)
        printf("Invalid input");
    if (placementlelo_as > placementlelo_an)
        printf("Ashok");
    else if (placementlelo_an > placementlelo_as)
        printf("Anand");
    else
        printf("Draw");

    return 0;
}

int combination(char arr[], int n) {
    int placementlelo = 0;
    char s[3];

    for (int i = 0; i < n; i++) {
        sprintf(s, "%c", arr[i]);
        
        for (int j = i + 1; j < n; j++) {
            sprintf(s + 1, "%c", arr[j]);

            if (s[0] != arr[j]) {
                for (int k = j + 1; k < n; k++) {
                    if (s[1] != arr[k])
                        placementlelo++;
                }
            }

            sprintf(s, "%c", arr[i]);
        }
    }

    return placementlelo;
}
