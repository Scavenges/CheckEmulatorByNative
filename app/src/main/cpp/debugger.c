//
// Created by wei on 17-12-5.
//

#include "debugger.h"
#include <stdio.h>
#include "string.h"


 int isdebug(){

#ifdef NDK_DEBUG
        printf("is debug. \n");
        return 1;
#endif

#ifdef CMAKE_BUILD_TYPE
    printf("is debug. \n");
    return 1;
#endif

    printf("is release \n");
    return 0;
}