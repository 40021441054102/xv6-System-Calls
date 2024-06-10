# include "types.h"
# include "stat.h"
# include "user.h"

int main(int argc, char *argv[]) {
    //-- Check Arguments
    if (argc < 3) {
        printf(2, "Usage: %s <count> <messages>\n", argv[0]);
        exit();
    }
    int count = atoi(argv[1]);
    //-- Check Negative Count
    if (count <= 0) {
        printf(2, "Count Must be a Positive Number\n");
        exit();
    }
    //-- Print Messages
    for (int i = 0; i < count; i++) {
        for(int j = 2; j < argc; j++) {
            int result = ramtin() * atoi(argv[j]);
            printf(1, "%d", result);
        }
        printf(1, "\n");
    }
    exit();
}
