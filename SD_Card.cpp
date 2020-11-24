
/*
Edited by - Oscar
Dates - 24/11/2020

Contains all Methods relating to the SD Card

*/

#include "mbed.h"
void SD_Card()
{


}

void SD_init()
{

}

void SD_Card_FileOpen()
{
    FATFileSystem fs("sd", &sd);
    FILE *fp = fopen("/sd/Data.txt", "w");  // attempt to open the file
   // if the file opening is null
    if (fp == NULL){
        cout << "File does not found or able to be opened";
    }
    fprintf(fp, "/")
}
void SD_deinit()
{
    fclose(fp); // Ensure file is closed to stop data Corruption
    sd.deinit(); // De_init
}
