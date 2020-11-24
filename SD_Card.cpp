
/*
Edited by - Oscar
Dates - 24/11/2020

Contains all Methods relating to the SD Card

*/
void SD_Card()
{


}

void SD_init()
{

}

void SD_Card_FileOpen()
{
    FILE *fp = fopen("/sd/Data.txt", "w");
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
