#include "mbed.h"
#include <cstdio>
#include "SDFileSystem.h"
#include "F429_Mega_Shell_Header.h"


#include "SD_Card.h"
//SDFileSystem sd(p5, p6, p7, p8, "sd"); // the pinout on the mbed Cool Components workshop board

Thread t1; //Sensor Thread
Thread t2; //Output Thread
Thread t3; //Ethernet Thread
Thread t4; //SD Card Thread

InterruptIn SD_Active();

int main()
{
    SD_Active().rise(&SD_init);
    SD_Active().fall(&SD_deinit);
    //t1.start(Sensor);
    //t2.start(Output);
    //t3.start(Ethernet);
    t4.start(SD_Card_FileOpen);


}

