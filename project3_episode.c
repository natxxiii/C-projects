

#include <stdio.h>

int main()
{
    //declare variables
    int n, i;
    // ask user to enter # of episodes and use that # as the list size
    printf("Enter number of episodes: ");
    scanf("%d" , &n);
    int a[n];
    
//ask user to list episodes watched and store that to the list
    printf("Enter episodes watched: ");
    for (i=1; i<n; i++)
        scanf("%d", &a[i]);

  int notWatched = -1; 
// iterate numbers 1-n and check if listed in array
    for (i = 1; i <= n; i++) {
        int found = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == i) {
                found = 1;
                break;
            }
        }
        // if a number doesn't exist add it to notWatched 
        if (!found) {
            notWatched = i;
            break;
        }
    }
// if notWatched is updated then print that number as the missing episode 
    if (notWatched != -1) {
        printf("Missing episode: %d\n", notWatched);
    } 

    return 0;
}


