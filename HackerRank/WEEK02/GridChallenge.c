char* gridChallenge(int grid_count, char** grid) {
    static char yes[] = "YES";
    static char no[] = "NO";

    for (int i = 0; i < grid_count; i++) {
        int len = strlen(grid[i]);
        qsort(grid[i], len, sizeof(char), (int (*)(const void*, const void*))strcmp);
    }

    for (int col = 0; col < strlen(grid[0]); col++) {
        for (int row = 0; row < grid_count - 1; row++) {
            if (grid[row][col] > grid[row + 1][col]) {
                return no;
            }
        }
    }
    return yes;
}
