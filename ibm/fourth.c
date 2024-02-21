#include <stdio.h>
#include <stdlib.h>

// Define a structure to represent a project
struct Project {
    int expenditure;
    int completionBonus;
    int rewardOrPenalty;
};

// Comparator function for sorting projects based on (bonus - penalty)
int compareProjects(const void *a, const void *b) {
    return ((struct Project *)b)->completionBonus - ((struct Project *)b)->rewardOrPenalty -
           (((struct Project *)a)->completionBonus - ((struct Project *)a)->rewardOrPenalty);
}

// Function to find the minimum budget needed to complete all projects
int findMinBudget(struct Project projects[], int n) {
    int minBudget = 0;
    int currentBudget = 0;

    for (int i = 0; i < n; i++) {
        // If completing this project doesn't exceed the current budget, do it
        if (currentBudget + projects[i].expenditure <= minBudget) {
            currentBudget += projects[i].expenditure;
        } else {
            // Otherwise, update the minimum budget
            minBudget = currentBudget + projects[i].expenditure;
        }
    }

    return minBudget;
}

int main() {
    int n;
    scanf("%d", &n);

    struct Project projects[n];

    // Read project details
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &projects[i].expenditure, &projects[i].completionBonus, &projects[i].rewardOrPenalty);
    }

    // Sort projects based on (bonus - penalty)
    qsort(projects, n, sizeof(struct Project), compareProjects);

    // Find and print the minimum budget needed
    printf("%d\n", findMinBudget(projects, n));

    return 0;
}
