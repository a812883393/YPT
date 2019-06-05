#include "Head.h"
#include "TWord.h"
#include "WordScreen.h"


void main(void)
{
    int fd=open(FB0PATH,O_RDWR);
    if(fd<0)
    {
        printf("Open Error\n");
    }
    ClearScreen(fd,0,0,480,800,0xf0f0f0);



    unsigned int zhi[392]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,
                          0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x00,
                          0x00,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x00,0x60,0x00,0x00,
                          0x00,0x00,0x3C,0x00,0xF0,0xE0,0x03,0x80,0x00,0x3F,0xFF,0xF8,0xFF,0xFF,0xE0,0x00,
                          0x7F,0xFF,0xFC,0xFF,0xFF,0xE0,0x00,0x78,0x7C,0x00,0xF8,0x03,0xC0,0x00,0xF0,0x78,
                          0x00,0xF8,0x03,0xC0,0x00,0xF0,0x78,0x00,0xF8,0x03,0xC0,0x01,0xE0,0x78,0x00,0xF8,
                          0x03,0xC0,0x01,0xC0,0x78,0x00,0xF8,0x03,0xC0,0x03,0x80,0x78,0x18,0xF8,0x03,0xC0,
                          0x03,0x00,0xF8,0x3C,0xF8,0x03,0xC0,0x1F,0xFF,0xFF,0xFE,0xF8,0x03,0xC0,0x1F,0xFF,
                          0xFF,0xFF,0xF8,0x03,0xC0,0x0F,0x80,0xF0,0x00,0xF8,0x03,0xC0,0x00,0x00,0xF0,0x00,
                          0xF8,0x03,0xC0,0x00,0x01,0xFC,0x00,0xF8,0x03,0xC0,0x00,0x01,0xFF,0x00,0xF8,0x03,
                          0xC0,0x00,0x03,0xEF,0xE0,0xFF,0xFF,0xC0,0x00,0x03,0xC3,0xF8,0xFF,0xFF,0xC0,0x00,
                          0x07,0xC1,0xF8,0xF8,0x03,0xC0,0x00,0x0F,0x80,0xFC,0xF8,0x03,0xC0,0x00,0x0F,0x00,
                          0x7C,0xF8,0x03,0xC0,0x00,0x1E,0x00,0x3C,0xF0,0x03,0x00,0x00,0x7C,0x00,0x3C,0x40,
                          0x00,0x00,0x00,0xF9,0xC0,0x18,0x00,0xF0,0x00,0x01,0xE1,0xFF,0xFF,0xFF,0xF8,0x00,
                          0x07,0xC1,0xFF,0xFF,0xFF,0xFC,0x00,0x1E,0x01,0xE0,0x00,0x01,0xF8,0x00,0x00,0x01,
                          0xE0,0x00,0x01,0xF0,0x00,0x00,0x01,0xE0,0x00,0x01,0xF0,0x00,0x00,0x01,0xE0,0x00,
                          0x01,0xF0,0x00,0x00,0x01,0xE0,0x00,0x01,0xF0,0x00,0x00,0x01,0xE0,0x00,0x01,0xF0,
                          0x00,0x00,0x01,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xF0,0x00,0x00,
                          0x01,0xE0,0x00,0x01,0xF0,0x00,0x00,0x01,0xE0,0x00,0x01,0xF0,0x00,0x00,0x01,0xE0,
                          0x00,0x01,0xF0,0x00,0x00,0x01,0xE0,0x00,0x01,0xF0,0x00,0x00,0x01,0xE0,0x00,0x01,
                          0xF0,0x00,0x00,0x01,0xE0,0x00,0x01,0xF0,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xF0,0x00,
                          0x00,0x01,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x01,0xE0,0x00,0x01,0xF0,0x00,0x00,0x01,
                          0xE0,0x00,0x01,0xF0,0x00,0x00,0x01,0xE0,0x00,0x01,0xF0,0x00,0x00,0x01,0x80,0x00,
                          0x01,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                          0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
    unsigned int neng[392]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
                            0x80,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x01,0xC0,0x00,0x00,0x00,0x03,0xE0,0x01,
                            0xF0,0x00,0x00,0x00,0x07,0xF0,0x00,0xFC,0x00,0x00,0x00,0x0F,0xC0,0x00,0xF8,0x00,
                            0x00,0x00,0x0F,0x80,0x00,0xF0,0x0C,0x00,0x00,0x1F,0x00,0x00,0xF0,0x1E,0x00,0x00,
                            0x3E,0x0E,0x00,0xF0,0x3F,0x00,0x00,0x3C,0x07,0x80,0xF0,0x7F,0x80,0x00,0x78,0x03,
                            0xC0,0xF0,0xFE,0x00,0x00,0xF0,0x03,0xE0,0xF3,0xF8,0x00,0x01,0xE0,0x01,0xF0,0xF7,
                            0xE0,0x00,0x07,0xC0,0x01,0xF8,0xFF,0x00,0xC0,0x0F,0xFF,0xFF,0xF8,0xFC,0x00,0xC0,
                            0x0F,0xFF,0xFF,0xFC,0xF0,0x00,0xC0,0x07,0xFE,0x00,0x78,0xF0,0x00,0xE0,0x07,0x80,
                            0x00,0x78,0xF0,0x00,0xE0,0x00,0x00,0x00,0x30,0xF0,0x00,0xE0,0x00,0x00,0x01,0x00,
                            0xF0,0x00,0xE0,0x01,0x80,0x03,0x80,0xF0,0x01,0xF0,0x01,0xFF,0xFF,0xE0,0xFF,0xFF,
                            0xF8,0x01,0xFF,0xFF,0xE0,0xFF,0xFF,0xF0,0x01,0xE0,0x07,0xC0,0x7F,0xFF,0xE0,0x01,
                            0xE0,0x07,0xC0,0x00,0x00,0x00,0x01,0xE0,0x07,0xC0,0x00,0x00,0x00,0x01,0xE0,0x07,
                            0xC0,0x00,0x00,0x00,0x01,0xE0,0x07,0xC1,0xC0,0x00,0x00,0x01,0xFF,0xFF,0xC1,0xF0,
                            0x06,0x00,0x01,0xFF,0xFF,0xC1,0xF8,0x0F,0x00,0x01,0xE0,0x07,0xC1,0xF0,0x1F,0x80,
                            0x01,0xE0,0x07,0xC1,0xE0,0x3F,0x80,0x01,0xE0,0x07,0xC1,0xE0,0x7F,0xC0,0x01,0xE0,
                            0x07,0xC1,0xE0,0xFE,0x00,0x01,0xE0,0x07,0xC1,0xE1,0xF8,0x00,0x01,0xFF,0xFF,0xC1,
                            0xE7,0xE0,0x00,0x01,0xFF,0xFF,0xC1,0xFF,0x80,0x00,0x01,0xE0,0x07,0xC1,0xFE,0x00,
                            0x00,0x01,0xE0,0x07,0xC1,0xF0,0x00,0xE0,0x01,0xE0,0x07,0xC1,0xE0,0x00,0xE0,0x01,
                            0xE0,0x07,0xC1,0xE0,0x00,0xE0,0x01,0xE0,0x07,0xC1,0xE0,0x00,0xE0,0x01,0xE0,0x07,
                            0xC1,0xE0,0x00,0xE0,0x01,0xE0,0x07,0xC1,0xE0,0x00,0xE0,0x01,0xE0,0x07,0xC1,0xE0,
                            0x00,0xF0,0x01,0xE0,0x07,0xC1,0xE0,0x00,0xF0,0x01,0xE1,0x87,0xC1,0xF0,0x01,0xFC,
                            0x01,0xE3,0xFF,0xC1,0xFF,0xFF,0xFC,0x01,0xE0,0xFF,0x80,0xFF,0xFF,0xF8,0x01,0xE0,
                            0x3F,0x80,0x7F,0xFF,0xE0,0x01,0xE0,0x1F,0x00,0x00,0x00,0x00,0x03,0x80,0x0E,0x00,
                            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
    unsigned int jia[392]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                           0x03,0xE0,0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,
                           0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x00,0x00,
                           0x00,0x00,0x60,0x00,0x1E,0x00,0x00,0xC0,0x00,0xE0,0x00,0x1E,0x00,0x01,0xE0,0x00,
                           0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x01,0xE0,0x00,
                           0x00,0x00,0x03,0xF0,0x01,0xE0,0x00,0x00,0x00,0x07,0xC0,0x03,0xE0,0x00,0x00,0x00,
                           0x07,0x80,0x07,0xE0,0x00,0x00,0x00,0x0F,0x00,0x0F,0xC0,0x00,0x00,0x01,0x8E,0x00,
                           0x07,0x80,0x00,0x00,0x03,0xC0,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x1F,
                           0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x0C,0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x03,0xE0,
                           0x00,0x00,0x00,0x00,0x00,0x07,0xC0,0x00,0x60,0x00,0x00,0x00,0x1F,0xC0,0x00,0xF0,
                           0x00,0x00,0x00,0x3F,0xE0,0x01,0xF8,0x00,0x00,0x00,0x7E,0xF0,0x03,0xFC,0x00,0x00,
                           0x01,0xF8,0x78,0x07,0xFC,0x00,0x00,0x03,0xF0,0x7C,0x1F,0xC0,0x00,0x00,0x0F,0xC0,
                           0xFE,0x3F,0x00,0x00,0x00,0x3F,0x01,0xFE,0xF8,0x00,0x00,0x00,0xF8,0x03,0xEF,0xFC,
                           0x00,0x00,0x07,0xE0,0x07,0xCF,0x9C,0x00,0x00,0x0F,0x00,0x0F,0x87,0x9C,0x00,0x00,
                           0x00,0x00,0x3F,0x07,0x8E,0x00,0x00,0x00,0x00,0x7C,0x0F,0xCE,0x00,0x00,0x00,0x01,
                           0xF8,0x1F,0xCF,0x00,0x00,0x00,0x07,0xE0,0x3F,0xC7,0x00,0x00,0x00,0x0F,0xC0,0x7F,
                           0xC7,0x80,0x00,0x00,0x3F,0x00,0xFB,0xE3,0xC0,0x00,0x00,0xF8,0x01,0xF3,0xE3,0xE0,
                           0x00,0x07,0xE0,0x07,0xE3,0xE1,0xF0,0x00,0x0F,0x00,0x0F,0xC3,0xE0,0xF8,0x00,0x00,
                           0x00,0x1F,0x03,0xE0,0xFE,0x00,0x00,0x00,0x7E,0x03,0xE0,0x7F,0x80,0x00,0x01,0xF8,
                           0x03,0xE0,0x3F,0xF0,0x00,0x03,0xF0,0x03,0xE0,0x1F,0xF8,0x00,0x0F,0xC0,0x03,0xE0,
                           0x07,0xE0,0x00,0x3F,0x00,0x07,0xC0,0x03,0xC0,0x01,0xFC,0x1E,0x07,0xC0,0x00,0x00,
                           0x07,0xE0,0x0F,0xFF,0xC0,0x00,0x00,0x3F,0x00,0x03,0xFF,0x80,0x00,0x00,0x38,0x00,
                           0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x38,
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
    unsigned int ju[392]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                          0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x00,
                          0x00,0x0E,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,
                          0x80,0x00,0x3C,0x00,0x00,0x00,0x1F,0x80,0x00,0x3C,0x00,0x00,0x00,0x1F,0x00,0x00,
                          0x3C,0x00,0x00,0x00,0x1F,0x00,0x00,0x3C,0x00,0x00,0x00,0x1F,0x00,0x00,0x3C,0x00,
                          0x00,0x00,0x1F,0x00,0x00,0x3C,0x00,0x00,0x00,0x1F,0x00,0x00,0x3C,0x00,0x00,0x00,
                          0x1F,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0x00,
                          0x00,0x3C,0x00,0x00,0x00,0x1F,0x00,0x00,0x3C,0x00,0x07,0x80,0x1F,0x00,0x00,0x3C,
                          0x00,0x07,0xE0,0x1C,0x00,0x00,0x3C,0x00,0x07,0xC0,0x00,0x00,0x00,0x3C,0x00,0x07,
                          0xC0,0x00,0x00,0x00,0x3C,0x00,0x07,0xC0,0x00,0x00,0x00,0x3C,0x00,0x07,0xC0,0x00,
                          0x00,0x00,0x3C,0x00,0x07,0xC0,0x01,0xC0,0x00,0x3C,0x00,0x07,0xC0,0x03,0xE0,0x00,
                          0x3F,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x3F,0xE0,
                          0x07,0xC0,0x00,0x00,0x00,0x7C,0x00,0x07,0xC0,0x00,0x00,0x00,0x7C,0x00,0x07,0xC0,
                          0x00,0x00,0x00,0x7C,0x00,0x07,0xC0,0x00,0x00,0x00,0x7C,0x00,0x07,0xC0,0x00,0x00,
                          0x00,0x78,0x00,0x07,0xC0,0x00,0x00,0x00,0x78,0x00,0x07,0xC0,0x38,0x00,0x00,0x78,
                          0x70,0x07,0xC0,0x3C,0x00,0x00,0x78,0x7F,0xFF,0xFF,0xFE,0x00,0x00,0xF8,0x7F,0xFF,
                          0xFF,0xFE,0x00,0x00,0xF0,0x7C,0x00,0x00,0x7C,0x00,0x00,0xF0,0x7C,0x00,0x00,0x7C,
                          0x00,0x00,0xF0,0x7C,0x00,0x00,0x7C,0x00,0x01,0xE0,0x7C,0x00,0x00,0x7C,0x00,0x01,
                          0xE0,0x7C,0x00,0x00,0x7C,0x00,0x01,0xE0,0x7C,0x00,0x00,0x7C,0x00,0x03,0xC0,0x7C,
                          0x00,0x00,0x7C,0x00,0x03,0xC0,0x7C,0x00,0x00,0x7C,0x00,0x03,0x80,0x7C,0x00,0x00,
                          0x7C,0x00,0x07,0x80,0x7C,0x00,0x00,0x7C,0x00,0x07,0x00,0x7F,0xFF,0xFF,0xFC,0x00,
                          0x0E,0x00,0x7F,0xFF,0xFF,0xFC,0x00,0x1E,0x00,0x7C,0x00,0x00,0x7C,0x00,0x1C,0x00,
                          0x7C,0x00,0x00,0x7C,0x00,0x38,0x00,0x7C,0x00,0x00,0x70,0x00,0x30,0x00,0x70,0x00,
                          0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                          0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

    unsigned int mode_1[56][800]={0};
    unsigned int mode_2[56][800]={0};
    unsigned int mode_3[56][800]={0};
    unsigned int mode_4[56][800]={0};


    TWord(zhi,392,56,56,mode_1);
    TWord(neng,392,56,56,mode_2);
    TWord(jia,392,56,56,mode_3);
    TWord(ju,392,56,56,mode_4);



    WordScreen(fd,0,0,56,56,0x00000000,mode_1);
    WordScreen(fd,0,56,56,56,0x00000000,mode_2);
    WordScreen(fd,0,112,56,56,0x00000000,mode_3);
    WordScreen(fd,0,168,56,56,0x00000000,mode_4);

}