#include <stdio.h>
#include <stdlib.h>

int main() {
    // Command to ping Cloudflare DNS resolver and redirect output to stdout
    const char *command = "ping -n 4 1.1.1.1";

    // Execute the command and redirect output to stdout
    int result = system(command);

    if (result == -1) {
        perror("Error executing ping command");
        return 1;
    }

    return 0;
}
