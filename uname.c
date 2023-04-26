#include <sys/utsname.h>// for uname

int uname_busy(){
    /*
        Description:
        display system information about the kernel.The utsname struct is defined in <sys/utsname.h>:
    */
    struct utsname unameData;
    uname(&unameData); // Might check return value here (non-0 = failure)

    printf("system name = %s\n", unameData.sysname);
    printf("node name   = %s\n", unameData.nodename);
    printf("kernel release     = %s\n", unameData.release);
    printf("kernel version     = %s\n", unameData.version);
    printf("machine     = %s\n", unameData.machine);
    return 0;
}