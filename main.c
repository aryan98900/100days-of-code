#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void makeCommits(int days) {
    for (int i = 0; i < days; i++) {

        // Calculate date (days - i)
        time_t now = time(NULL) - (i * 24 * 60 * 60);
        struct tm *t = localtime(&now);

        char dateStr[50];
        strftime(dateStr, sizeof(dateStr), "%Y-%m-%d %H:%M:%S", t);

        // Write to data.txt
        FILE *file = fopen("data.txt", "w");
        if (file == NULL) {
            printf("Error opening data.txt\n");
            return;
        }
        fprintf(file, "Commit for: %s\n", dateStr);
        fclose(file);

        // Stage file
        system("git add data.txt");

        // Prepare commit command
        char commitCmd[200];
        sprintf(commitCmd, "git commit --date=\"%s\" -m \"Commit on %s\"", dateStr, dateStr);

        // Run commit command
        system(commitCmd);
    }
}

int main() {
    makeCommits(80);
    return 0;
}