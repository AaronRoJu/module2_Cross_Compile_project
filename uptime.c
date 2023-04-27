#include <sys/sysinfo.h>


int uptime_busy(){
    /*
        Description:
        get the time on days, hours, minutes and seconds since boot 
    */
    struct sysinfo s_info;// struct to get system uptime info
    /* Conversion constants. */
    const long minute = 60;
    const long hour = minute * 60;
    const long day = hour * 24;
	int error = sysinfo(&s_info);
	if(error != 0) {
		printf("code error = %d\n", error);
	}
    long uptime=s_info.uptime;// get time info on seconds
    printf ("system uptime : %ld days, %ld:%02ld:%02ld\n",s_info.uptime / day, (s_info.uptime % day) / hour, (s_info.uptime % hour) / minute, s_info.uptime % minute);
    return 0;
}