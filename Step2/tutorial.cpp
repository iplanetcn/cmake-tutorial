#include <cstdio>
#include <cstdlib>
#include <cmath>
#include "TutorialConfig.h"
#ifdef USE_MYMATH
#   include "MathFunctions.h"
#endif
using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        // report version
        printf("%s Version %d.%d\n", argv[0], Tutorial_VERSION_MAJOR, Tutorial_VERSION_MINOR);
        printf("Usage: %s number\n", argv[0]);
        return 1;
    }

    for (int i = 0; i < argc; i++) {
        printf("argv[%d]:%s\n", i, argv[i]);
    }

    char *ptr;
    double inputValue = strtod(argv[1], &ptr);
    printf("The number(double) is %lf\n", inputValue);
    printf("String part is |%s|\n", ptr);

//    double outputValue = sqrt(inputValue);
#ifdef USE_MYMATH
    const double outputValue = mysqrt(inputValue);
#else
    const double outputValue = sqrt(inputValue);
#endif

    printf("The square root of %g is %g\n", inputValue, outputValue);

    return 0;
}
