#include "stdafx.h"
#include "Vcpp.h"
#include "ddraw.h"
#include "MMSYSTEM.H"
#include "dsound.h"
#include "memory.h"

void *off_477EB0;
char *off_477D88;// = aShapeMark0001S;

DWORD unk_4C6E60 = 0;
DWORD unk_4C34C0 = 0;
DWORD unk_4C3940 = 0;
int unk_4C0C70 = 1;

UINT dword_4C0944 = 0;
UINT uBytes = 0;

HFILE dword_4C307C = 0;
HFILE hFile = 0;

LPVOID dword_4C2CB8 = 0;

LPCCH lpBuffer = 0;

char byte_4A18B0[100] = { 0x30 };

float flt_4A1920 = 15.0;

__int16 word_4C6FB0 = 0;
__int16 word_477B44[100] = { 3 };
__int16 word_46B6B1[8] = { 0 };
__int16 word_46B691[16] = { 0 };

const CHAR Caption = 0x0bb;
const CHAR byte_4C1E0C = 0;

void *dword_4C2308;
void *dword_4C23E0;
void *dword_4C23DC;
void *dword_4C23DC;
void *dword_4C23E4;
void *dword_4BBBD0 = 0;
void *dword_4BFBEC = 0;
void *dword_4BBB3C = 0;
void *dword_4A4210 = 0;
void *dword_4BBB62 = 0;
void *dword_4BBB66 = 0;
void *dword_4BBB6A = 0;
void *dword_4BBB7E = 0;
void *dword_4BBB82 = 0;
void *dword_4BBB86 = 0;
void *dword_4A19C0 = 0;
void *dword_4A19CC = 0;
void *dword_4A35EC = 0;
void *dword_4A19D8 = 0;
void *dword_4C09D4 = 0;
void *dword_4A19D4 = 0;
void *dword_4C24B4 = 0;
void *dword_4C24B0 = 0;
void *dword_4C24B8 = 0;
void *dword_4C24BC = 0;
void *dword_4C1D00 = 0;
void *dword_4C1B6C = 0;
void *dword_4C1B70 = 0;
void *dword_4C1B74 = 0;
void *dword_4C1B3C = 0;
void *dword_4C1B40 = 0;
void *dword_4C1AFC = 0;
void *dword_4C1BC8 = 0;
void *dword_4C1B5C = 0;
void *dword_4C1B60 = 0;
void *dword_4C1B64 = 0;
void *dword_4C1D74 = 0;
void *dword_4C1D5C = 0;
void *dword_4C1D10 = 0;
void *dword_4C1D1C = 0;
void *dword_4C1D28 = 0;
void *dword_4C23FC = 0;
void *dword_4C1B50 = 0;
void *dword_4C092C = 0;
void *dword_4C0928 = 0;
void *dword_4C0924 = 0;
void *dword_4C1BC8 = 0;
void *off_4BBB5E;// = 0x40004;

char byte_4C1D80 = 0;
char byte_4C1BE8[128] = { 0 };
char byte_4C2298[64];
char byte_4C1BE7[];
char byte_49D47E[1028] = { 0 };
char byte_4C1E98[1024] = { 0 };
char byte_4C37E0;
char byte_4C37E1;
char byte_4BBA38[256] = { 0 };
char byte_4C24C0 = 0;
char byte_4C2541 = 0;
char byte_4C2540 = 0;

char *dword_4BBB40 = 0;
char *dword_4BB934 = 0;
char *off_4C0AD6[12];
char off_479088[] = { 0x786564 };
char off_478EA0[] = { 0x786573 };
char off_4792C8[] = { 0x776F6873 };

int dword_4C1E08 = 0;
int dword_4C1B8C = 0;
int dword_477C14 = 3;
int dword_4C1AF4 = 0;
int dword_4C1AEC = 0;
int dword_4C1AE8 = 0;
int dword_4C1E00 = 0;
int dword_4C1E04 = 0;
int dword_479604 = 0x140;
int dword_479608 = 0x0C8;
int dword_4C2614;
unsigned int dword_4C2350;
unsigned int dword_4C234C;
int dword_4C22F4;
int dword_4C2344;
int dword_4C23BC;
int dword_4C2374[] = { 0 };
int dword_4C22D8;
int dword_4C23C0;
int dword_4C71CC;
int dword_4C22F0;
int dword_4C2428;
int dword_4C241C;
int dword_4C2420;
int dword_4C2424;
int dword_479624 = 0x280;
int dword_4C2304;
int dword_4C242C;
int dword_4C6FB4;
int dword_4C22F8;
int dword_4C1D7C = 0;
int dword_4C1D78 = 0;
int dword_4C23B8;
int dword_4C22F8;
int dword_4C22EC;
int dword_4C1E90 = 0;
int dword_4C22FC;
int dword_4C2300;
int dword_4C231C;
int dword_4C71C4;
int dword_4C71B4;
int dword_4C71C0;
int dword_4C71C8;
int dword_4C2318;
int dword_4C23F4;
int dword_4C23F8;
int dword_4C2314;
int dword_4C2310;
int dword_4C7044;
int dword_4C7044;
int dword_4C71B0;
int dword_4C71B8;
int dword_4C71A0;
int dword_4C71A4;
int dword_4C1E94 = 0;
int dword_4C230C;
int dword_4C22E4;
int dword_4C22E8;
int dword_4A18A0 = 0;
int dword_4A18A8 = 0;
int dword_4A18AC = 0;
int dword_477C20 = 0x0FF;
int dword_477C24 = 0x0FF;
int dword_4C2444;
int dword_4C24A8;
int dword_4C2448;
int dword_4C24A0;
int dword_4C24A4;
int dword_4C244C;
int dword_4C09D0 = 0x0FFFFFFFF;
int dword_4C2320;
int dword_47963C = 0;
int dword_479644 = 0;
int dword_479640 = 0;
int dword_47965C = 0;
int dword_479648 = 0;
int dword_479650 = 0;
int dword_479668 = 0;
int dword_47964C = 0;
int dword_479654 = 0;
int dword_479658 = 0;
int dword_479664 = 0;
int dword_479660 = 0;
int dword_479650 = 0;
int dword_4A1886 = 0;
int dword_4A189A = 0;
int dword_4A188A = 0;
int dword_4A188E = 0;
int dword_4BBBE8 = 0x0F000F;
int dword_4C7020;
int dword_4C23D4;
int dword_4C23CC;
int dword_4C23F0;
int dword_4C23E8;
int dword_477DE8 = 0x5C3A40;
int dword_4C1AF8 = 0;
int dword_4BFC34 = 0x0F7DE;
int dword_4BBBE4 = 0;
int dword_4BFC44 = 0;
int dword_4BFC40 = 0;
int dword_4BFC54 = 0;
int dword_4BFC9C = 0;
int dword_4BFCA4 = 0x280;
int dword_4BFCA0 = 0;
int dword_4BFCA8 = 0x1E0;
int dword_4BFCBC = 0;
int dword_4BFCC0 = 0;
int dword_4BFC74 = 0;
int dword_4BBBD4 = 0;
int dword_4BBBD8 = 0;
int dword_4BBBDC = 0;
int dword_4BFC4C = 0;
int dword_4BBBE0 = 0;
int dword_4BFC38 = 0x0FFF;
int dword_4A421C = 0;
int dword_4BBB38 = 0;
int dword_4BBB4E = 0;
int dword_4BBB52 = 0;
int dword_4A4220 = 0;
int dword_4A4214 = 0;
int dword_4A19BC = 0;
int dword_4A19C4 = 0;
int dword_4A19C8 = 0;
int dword_4A19D0 = 0;
int dword_4A19DC = 0;
int dword_4A35F4 = 0;
int dword_4A35F0 = 0;
int dword_4C09E4 = 0;
int dword_4C09F0 = 0;
int dword_4C09DC = 0;
int dword_4C09D8 = 0;
int dword_4C09E0 = 0;
int dword_4C0960 = 0;
int dword_4C0964 = 0;
int dword_4C0948 = 0;
int dword_4C094C = 0;
int dword_4C0950 = 0;
int dword_4C0954 = 0;
int dword_4C0958 = 0;
int dword_4C095C = 0;
int dword_4C0960 = 0;
int dword_4C0964 = 0;
int dword_4C0968 = 0;
int dword_4C096C = 0;
int dword_4C0970 = 0;
int dword_4A4224 = 0;
int dword_4ABF28[800] = {0};
int dword_4A4228[8000] = {0};
int dword_4B3C28[8000] = { 0 };
int dword_4BB930 = 0x0FFFFFFFF;
int dword_4BB92C = 0;
int dword_4C33E0 = 0;
int dword_4C71D0 = 0;
int dword_4C25C8 = 0;
int dword_4C1E94 = 0x478260;
int dword_4C25D4 = 0;
int dword_4C25C0 = 0;
int dword_4C25D0 = 0;
int dword_4C25C4 = 0;
int dword_4C25CC = 0;
int dword_4C25D8 = 0;
int dword_4C1ADC = 0;
int dword_4BFC50 = 0;
int dword_4C1B44 = 0;
int dword_4C1B48 = 0;
int dword_4C1B4C = 0;
int dword_4C1AE0 = 0;
int dword_4C1B58 = 0;
int dword_4C1D60 = 0;
int dword_4C1D64 = 0;
int dword_4C1D58 = 0;
int dword_4C1B54 = 0;
int dword_4C1B78 = 0; 
int dword_4C1B7C = 0;
int dword_4C1B80 = 0;
int dword_4C1B84 = 0;
int dword_4C1B88 = 0; 
int dword_4C1B8C = 0; 
int dword_4C1B90 = 0; 
int dword_4C1B94 = 0; 
int dword_4C1B98 = 0; 
int dword_4C1B9C = 0; 
int dword_4C1BA0 = 0; 
int dword_4C1BA4 = 0; 
int dword_4C1BA8 = 0;
int dword_4C1BAC = 0; 
int dword_4C1BB0 = 0; 
int dword_4C1BB4 = 0; 
int dword_4C1BB8 = 0;
int dword_4C1BBC = 0;
int dword_4C1BC0 = 0;
int dword_4C1BC4 = 0;
int dword_4C1B30 = 0;
int dword_4C1B34 = 0; 
int dword_4C1B38 = 0;
int dword_4C3460 = 0; 
int dword_4C3464 = 0; 
int dword_4C3468 = 0; 
int dword_4C346C = 0;
int dword_4C3470 = 0;
int dword_4C30A0 = 0; 
int dword_4C30A4 = 0;
int dword_4C30A8 = 0;
int dword_4C30AC = 0;
int dword_4C30B0 = 0;
int dword_4C30B4 = 0;
int dword_4C30B8 = 0;
int dword_4C30BC = 0;
int dword_4C30C0 = 0;
int dword_4C30C4 = 0;
int dword_4C30C8 = 0;
int dword_4C30CC = 0;
int dword_4C30D0 = 0;
int dword_4C2C98 = 0; 
int dword_4C2C9C = 0;
int dword_4C3078 = 0;
int dword_4C3478 = 0;
int dword_4C1B04 = 0;
int dword_4C1BC8 = 0; 
int dword_4C1BCC = 0; 
int dword_4C1BD0 = 0;
int dword_4C1BD4 = 0;
int dword_4C1BD8 = 0;
int dword_4C1BDC = 0;
int dword_4C1BE0 = 0;
int dword_4C1D14 = 0; 
int dword_4C1D18 = 0;
int dword_4C1D20 = 0; 
int dword_4C1D24 = 0;
int dword_4C1D2C = 0;
int dword_4C1D30 = 0;
int dword_4C3040 = 0;
int dword_4C3044 = 0;
int dword_4C1D70 = 0;
int dword_4C1ACC = 0;
int dword_4BBB56 = 0; 
int dword_4BBB5A = 0;
int dword_4C1B00 = 0;
int dword_4A4218 = 0;
int dword_4C1CBC = 0; 
int dword_4C1CC0 = 0;
int dword_4C1CC4 = 0; 
int dword_4C1CC8 = 0;
int dword_4C091C = 0; 
int dword_4C0920 = 0;
int(*dword_4C1B28)(void);
int dword_4C1B2C = 0;
int dword_4C1B30 = 0;
int dword_4C1B34 = 0;
int dword_4C1B38 = 0;
int dword_4C1CE8 = 0;
int dword_4C1CEC = 0;
int dword_4C1A74 = 0;
int dword_4C1D40 = 0;
int dword_4C1AA4 = 0;
int dword_4BB928 = 0; 
int dword_4BB92C = 0;
int dword_4BB930 = 0x0FFFFFFFF;
int dword_4C1AF0 = 0;
int dword_4C1D04 = 0; 
int dword_4C1D08 = 0; 
int dword_4C1D0C = 0;
int dword_4C1D48 = 0;
int dword_4C1D4C = 0;
int dword_4C1D44 = 0;
int dword_4C1AD0 = 0;
int dword_4C1AD4 = 0;
int dword_4C1D3C = 0;
int dword_4C1AC4 = 0;
int dword_4C1BB8 = 0;
int dword_4C1AE4 = 0;
int dword_4C1C74 = 0;
int dword_477C10 = 0x0FFFFFFFF;
int dword_477C0C = 0x0FFFFFFFF;
int dword_477C10 = 0x0FFFFFFFF;
int dword_4C3080 = 0;
int dword_4C2404 = 0;
int dword_4A1914 = 0x140;
int dword_4A1918 = 0x0C8;
int dword_4C2410 = 0;
int dword_4C2414 = 0;
int dword_4C2408 = 0;
int dword_4C2400 = 0;
int dword_4A191C = 5;
int dword_4A19B8 = 1;
int dword_4C6FAC = 0;
int dword_4A4204 = 0;
int dword_4A41FC = 0;
int dword_4A4200 = 0;
int dword_4A420C = 0x10;
int dword_4C1A3C = 0;
int dword_4C1A38 = 0;
int dword_4C3060 = 0;
int dword_4C3068 = 0;
int dword_4C3070 = 0;
int dword_4C3064 = 0;
int dword_4C306C = 0;
int dword_4C3074 = 0;
int dword_4C097C = 0;
int dword_4C0980 = 0;
int dword_4C0984 = 0;
int dword_4C0930 = 0;
int dword_4C0934 = 0;
int dword_4C0990 = 0;
int dword_4C093C = 0;
int dword_4C0998 = 0;
int dword_4C0940 = 0;
int dword_4C0938 = 0;
int dword_4C0994 = 0;
int dword_4C43B8 = 0;
int dword_4C3084 = 0;
int dword_4BFC60 = 0;
int dword_4BFC64 = 0;
int dword_4BFC58 = 0;
int dword_4BFC68 = 0;
int dword_4BFC6C = 0;
int dword_4BFC5C = 0;
int dword_477C18 = 0x0FFFFFFFF;
int dword_4C2968 = 0;
int dword_4C296C = 0;
int dword_4C6E48 = 0;
int dword_4C43B4 = 0;
int dword_4C38B4 = 0;
int dword_4C2354[] = { 0 };
int dword_4C2394[] = { 0 };
int dword_4C1B10 = 0;
int dword_4C6390 = 0;
int dword_4C6398 = 0;
int dword_4C1A8C = 0;
int dword_4C1A90 = 0;
int dword_4C1A88 = 0;
int dword_4C6394 = 0;
int dword_4C1A94 = 0;
int dword_4C1B20 = 0;
int dword_4C08D8 = 0;
int dword_4C1B1C = 0;
int dword_4A4208 = 0;
int dword_4C08E8 = 0;
int dword_4C08E4 = 0;
int dword_4C08EC = 0;
int dword_4C08E4 = 0;
int dword_4C08E0 = 0;
int dword_4BFCC4[773] = { 0 };
int dword_4C1AC8 = 0;
int(*dword_4C1B24)(void);
int dword_4C1B0C = 0;
int dword_4C25F8 = 0;
int dword_4C25F4 = 0;
int dword_4C0DD8 = 0x3F8;
int dword_4C0C74[88] = { 0x16 };

int nWidth = 0x140;
int nHeight = 0x0c8;
int xRight = 0x140;
int yBottom = 0x0C8;
int cy = 0x1E0;

int X;
int Y;

int dword_4C71E8[];
int dword_4C71E4[];
int dword_4C71EC[];
int dword_4C71FC[];
int dword_4C72A0[];
int dword_4C72A8[];
int dword_4C72A4[];
int dword_4C72AC[];
int dword_4C72B4[];
int dword_4C72B8[];
int dword_4C71E0[];
int dword_4C72B0[];
int dword_4C71F8[];
int dword_4C71F4[];
int dword_4C71F0[];
int dword_47D46E[];
int dword_47D472[];
int dword_47D476[];
int dword_4C6FDC[];
int dword_4C6FC0[];
int dword_4C6FC4[];
int dword_4C6FD4[];
int dword_4C6FD0[];
int dword_4C6FC8[];
int dword_4C6FD8[];
int dword_4C6FCC[];
int dword_4BFBF0[17] = { 0 };
int dword_4A2728[850] = { 0 };
int dword_4A19E0[850] = { 0 };
int dword_4C3920[7] = { 0 };
int dword_4C2CA0[6] = { 0 };
int dword_4C4360[21] = { 0 };
int dword_4C4A20[];
int dword_4C4A24[580] = { 0 };
int dword_4C43C4[404] = { 0 };

__int16 word_47966C[7937] = { 0 };
__int16 word_4A18A4 = 0;
__int16 word_49D882[8194] = { 0 };
__int16 word_4BBBEC[4096] = { 0 };
__int16 word_4BDBEC[4096] = { 0 };
__int16 word_4786BC[] = { 0x5A };
__int16 word_4786BE[] = { 0x58 };
__int16 word_4786C0[] = { 0x50 };
__int16 word_4786C2[76] = { 0x5E };

double uType;

CHAR ClassName[] = "ODINGAME_L"; 
CHAR Text[] = "Game initialize failure !";
CHAR aDirectxDisplay[] = "=> DirectX display mode change error <=";
CHAR aMessage[] = "Message";
CHAR asc_4A1958[] = "=> "; 
CHAR asc_4A1924[] = "=> ";
CHAR aDirectxError[] = "=> DirectX Error <=";
CHAR aDirectx[] = "=> DirectX ";
CHAR aMusicNullWav[] = "music\\null.wav";
CHAR FileName[256] = { 0 };
CHAR aMusicNullWav[] = "music\null.wav";
CHAR aMusic02dWav[] = "music\%02d.wav";

char byte_4C7030[0x10];

char aPage[] = "page";
char aWindow[] = "window";
char aWalker[] = "walker";
char aGrab[] = "grab";
char aPos[] = "pos";
char aNosfx[] = "nosfx";
char aRandom[] = "random";
char aGodset[] = "godset";
char aHsl0001[] = "HSL0001";
char a0001[] = "0001";
char aErrorMemoryAll[65] = "ERROR: Memory allocate error. ";
char aSaves[] = "SAVES\\";
char aHslCfg[] = "HSL.CFG";
char aMoviePak[] = "MOVIE.PAK";
char aData[] = "\\DATA\\";
char aHslPak[] = "HSL.PAK";
char aPakFileNotFoun[] = "PAK file not found !!!";
char asc_478250[] = ":\\";
char aWav_0[] = "*.WAV";
// WAV\\ 
char aWav[] = "WAV\\"; 
char aShp[] = "*.SHP";
char aFileOperationE[] = "File operation error: ";
char aShapeAlreadyLo[] = "Shape already loaded: 0x";
char aShapeNotLoaded[] = "Shape not loaded: ";
char aShapeNullShp[] = "SHAPE\NULL.SHP";
char aDataGlobalObs[] = "DATA\GLOBAL.OBS";
char aObject[] = "object";
char aObjReadshape[] = "obj_ReadShape";
char aObjCode[] = "obj_Code";
char aObjName[] = "obj_Name";
char aObjMode[] = "obj_Mode";
char aObjPlane[] = "obj_Plane";
char aObjX1[] = "obj_X1"; 
char aObjY1[] = "obj_Y1";
char aObjX2[] = "obj_X2";
char aObjY2[] = "obj_Y2";
char aObjZoomx[] = "obj_ZoomX";
char aObjZoomy[] = "obj_ZoomY";
char aObjData[] = "obj_Data";
char aObjShapesub[] = "obj_ShapeSub";
char aObjShapeName[] = "obj_Shape_Name";
char aObjShapeNumber[] = "obj_Shape_Number";
char aObjProcessCode[] = "obj_Process_Code";
char aObjCollideX1[] = "obj_Collide_X1";
char aObjCollideY1[] = "obj_Collide_Y1";
char aObjCollideX2[] = "obj_Collide_X2";
char aObjCollideY2[] = "obj_Collide_Y2";
char aObjShapeDelay[] = "obj_Shape_Delay";
char aObjAttribute[] = "obj_Attribute";
char aObjScore[] = "obj_Score";
char aObjHitpoint[] = "obj_HitPoint";
char aObjData1[] = "obj_Data1";
char aObjData2[] = "obj_Data2";
char aObjData3[] = "obj_Data3";
char aObjData4[] = "obj_Data4";
char aObjData5[] = "obj_Data5";
char aObjData6[] = "obj_Data6";
char aObjData7[] = "obj_Data7";
char aObjData8[] = "obj_Data8";
char aObjData9[] = "obj_Data9";
char aDefine_0[] = "define";
char aInclude[] = "include";
char aFileOperationE[] = "File operation error: ";
char aShapeAlreadyLo[] = "Shape already loaded: 0x";
char aShapeNotLoaded[] = "Shape not loaded: ";
char aDataAscfont15[] = "DATA\ASCFONT.15";
// DATA\FONT.15
char aDataFont15[] = "DATA\FONT.15";
char aDataGlobalObs[] = "DATA\GLOBAL.OBS";
char aShapeNullShp[] = "SHAPE\NULL.SHP";
char aFontLoadError[] = "FONT load error ";
char aHslbat[] = "HSLBAT";
char aShapeWindow50S[] = "SHAPE\WINDOW50.SHP";
char aShapePlrSh02Sh[] = "SHAPE\PLR_SH02.SHP";
char aShapePlrSh01Sh[] = "SHAPE\PLR_SH01.SHP";
char aShapeNum600Shp[] = "SHAPE\NUM600.SHP";
char aShapeStat0101S[] = "SHAPE\STAT0101.SHP";
char aShapeIStingShp[] = "SHAPE\I_STING.SHP";
char aShapeIClawShp[] = "SHAPE\I_CLAW.SHP";
char aShapeIUseShp[] = "SHAPE\I_USE.SHP";
char aShapeIOtherShp[] = "SHAPE\I_OTHER.SHP";
char aShapeIBootShp[] = "SHAPE\I_BOOT.SHP";
char aShapeIArmorShp[] = "SHAPE\I_ARMOR.SHP";
char aShapeIHelmetSh[] = "SHAPE\I_HELMET.SHP";
char aShapeIDaggerSh[] = "SHAPE\I_DAGGER.SHP";
char aShapeISpearShp[] = "SHAPE\I_SPEAR.SHP";
char aShapeIAxeShp[] = "SHAPE\I_AXE.SHP";
char aShapeIBowShp[] = "SHAPE\I_BOW.SHP";
char aShapeISwordShp[] = "SHAPE\I_SWORD.SHP";
char aShapeIStaffShp[] = "SHAPE\I_STAFF.SHP";
char aShapeMagicon5S[] = "SHAPE\MAGICON5.SHP";
char aShapeMagicon4S[] = "SHAPE\MAGICON4.SHP";
char aShapeMagicon3S[] = "SHAPE\MAGICON3.SHP";
char aShapeMagicon2S[] = "SHAPE\MAGICON2.SHP";
char aShapeMagicon1S[] = "SHAPE\MAGICON1.SHP";
char aShapeIRect01Sh[] = "SHAPE\I_RECT01.SHP";
char aShapeIconboxSh[] = "SHAPE\ICONBOX.SHP";
char aDataTowndefTxt[] = "DATA\TOWNDEF.TXT";
char aDataTrackTxt[] = "DATA\TRACK.TXT";
char aDataMagicTxt[] = "DATA\MAGIC.TXT";
char aDataSpecialTxt[] = "DATA\SPECIAL.TXT";
char aDataRangeTxt[] = "DATA\RANGE.TXT";
char aDataPlayersTxt[] = "DATA\PLAYERS.TXT";
char aDataItemTxt[] = "DATA\ITEM.TXT";
char aDataResourceTx[] = "DATA\RESOURCE.TXT";
char aDataObjcomdTxt[] = "DATA\OBJCOMD.TXT";
char aDataEffectsTxt[] = "DATA\EFFECTS.TXT";
char aDataAnimalTxt[] = "DATA\ANIMAL.TXT";
char aDataShapedefTx[] = "DATA\SHAPEDEF.TXT";
char aDataAscfont24[] = "DATA\ASCFONT.24";
char aDataFont24[] = "DATA\FONT.24";
char aDefine[] = "define";
char aCode[] = "code";
char aStand[] = "stand";
char aStandNum[] = "stand_num"; 
char aWalkUp[] = "walk_up";
char aWalkUpNum[] = "walk_up_num";
char aWalkDown[] = "walk_down";
char aWalkDownNum[] = "walk_down_num";
char aWalkLeft[] = "walk_left";
char aWalkLeftNum[] = "walk_left_num";
char aWalkRight[] = "walk_right";
char aWalkRightNum[] = "walk_right_num";
char aNotFoundDefine[] = "Not found defined string ";
char aUseMagicNum[] = "use_magic_num";
char aUseMagic[] = "use_magic";
char aPrepareNum[] = "prepare_num";
char aPrepare[] = "prepare";
char aHit[] = "hit";
char aSAction[] = "s_action";
char aSNumber[] = "s_number";
char aSShape[] = "s_shape";
char aMAction[] = "m_action";
char aMNumber[] = "m_number";
char aMShape[] = "m_shape";
char aAction[] = "action";
char aFhShape[] = "fh_shape";
char aKAction[] = "k_action";
char aNumber[] = "number";
char aShape[] = "shape";
char aCode_0[] = "code";
char aAnimal[] = "animal";
char aEffect[] = "effect"; 
char aCommand[] = "command";
char aName[] = "name";
char aUseJob[] = "use_job";
char aTakeOff[] = "take_off";
char aHpTransferMp[] = "hp_transfer_mp";
char aNoAddst[] = "no_addst";
char aHighCost[] = "high_cost";
char aAvoidParalysis[] = "avoid_paralysis";
char aAvoidWeaken[] = "avoid_weaken";
char aAvoidNomagic[] = "avoid_nomagic";
char aAvoidPoison[] = "avoid_poison";
char aAttackDecmp[] = "attack_decmp";
char aAttackPoison[] = "attack_poison";
char aAttackParalysi[] = "attack_paralysis";
char aAttackNomagic[] = "attack_nomagic";
char aRandomStatusEr[] = "random_status_error";
char aAttackWeaken[] = "attack_weaken";
char aAttackCancel[] = "attack_cancel";
char aDoubleAttack[] = "double_attack";
char aCureWeaken[] = "cure_weaken";
char aCureParalysis[] = "cure_paralysis";
char aCureNoMagic[] = "cure_no_magic";
char aCurePoison[] = "cure_poison";
char aNoMagic[] = "no_magic";
char aNoSpecial[] = "no_special";
char aMoveMagicUse[] = "move_magic_use";
char aMpAutoRestore[] = "mp_auto_restore";
char aHpAutoRestore[] = "hp_auto_restore";
char aKeepStatusGood[] = "keep_status_good";
char aStX2[] = "st_x2";
char aGoldX2[] = "gold_x2";
char aExpX2[] = "exp_x2";
char aActionTwice[] = "action_twice";
char aHpDamageHalf[] = "hp_damage_half";
char aMpUseHalf[] = "mp_use_half";
char aAddAttackRange[] = "add_attack_range";
char aImportant[] = "important";
char aMagicAttackTyp[] = "magic_attack_type";
char aLocalAddDefens[] = "local_add_defense";
char aLocalAddWeapon[] = "local_add_weapon_power";
char aGlobalAddResis_3[] = "global_add_resist_mind";
char aGlobalAddResis_2[] = "global_add_resist_fire";
char aGlobalAddResis_1[] = "global_add_resist_air";
char aGlobalAddResis_0[] = "global_add_resist_water";
char aGlobalAddResis[] = "global_add_resist_earth";
char aGlobalAddSpeed[] = "global_add_speed";
char aGlobalAddDefen[] = "global_add_defense";
char aGlobalAddMagic[] = "global_add_magic_power";
char aGlobalAddWeapo[] = "global_add_weapon_power";
char aAddSt[] = "add_st";
char aAddWeaponDmgx2[] = "add_weapon_dmgx2";
char aAddAttackBack[] = "add_attack_back";
char aAddMissHit[] = "add_miss_hit";
char aAddStealRatio[] = "add_steal_ratio";
char aCost[] = "cost";
char aHitRatio[] = "hit_ratio";
char aAttackDamage[] = "attack_damage";
char aAttackRange[] = "attack_range";
char aAddDefense[] = "add_defense";
char aAddSpeed[] = "add_speed";
char aAddMove[] = "add_move";
char aAddHp[] = "add_hp";
char aAddMp[] = "add_mp";
char aAddMagicPower[] = "add_magic_power";
char aAddAttackPower[] = "add_attack_power";
char aAddMagicHit[] = "add_magic_hit";
char aAddWeaponHit[] = "add_weapon_hit";
char aAddResist[] = "add_resist";
char aGetRatio[] = "get_ratio";
char aIcon[] = " icon";
char aType[] = " type";
char aItem[] = " item";
char aLevelAdjustDis[] = " level_adjust_disp_range";
char aLevelAdjustRan[] = " level_adjust_range";
char aAiAttMagic[] = " ai_att_magic";
char aAiAttSpecial[] = " ai_att_special";
char aAiLock[] = " ai_lock";
char aAiMagicMultiFi[] = " ai_magic_multi_first";
char aAiHelpAttack[] = " ai_help_attack";
char aAiHelpStatus[] = " ai_help_status";
char aAiHelpOtherhp[] = " ai_help_otherhp'";
char aAiCheckHp[] = "ai_check_hp";
char aAiCheckDying[] = " ai_check_dying";
char aAiFixed[] = " ai_fixed";
char aAiCallRange[] = " ai_call_range";
char aFindRange[] = " find_range";
char aFindFlag[] = " find_flag";
char aFindType[] = " find_type";
char aFindNoId[] = " find_no_id";
char aWaitRound[] = " wait_round";
char aMagicMind[] = "magic_mind";
char aMagicWind[] = "magic_wind";
char aMagicEarth[] = "magic_earth";
char aMagicWater[] = "magic_water";
char aMagicFire[] = "magic_fire";
char aMagicOther[] = "magic_other";
char aSpecialOther2[] = "special_other2";
char aSpecialMind[] = "special_mind";
char aSpecialWind[] = "special_wind";
char aSpecialEarth[] = "special_earth";
char aSpecialWater[] = "special_water";
char aSpecialFire[] = "special_fire";
char aSpecialOther[] = "special_other";
char aItem8[] = "item8";
char aItem7[] = "item7";
char aItem6[] = "item6";
char aItem5[] = "item5";
char aItem4[] = "item4";
char aItem3[] = "item3";
char aItem2[] = "item2";
char aItem1[] = "item1";
char aNoShadow[] = "no_shadow";
char aNoWeaken[] = "no_weaken";
char aNoDisablemagic[] = "no_disablemagic";
char aNoParalyze[] = "no_paralyze";
char aNoPoison[] = "no_poison";
char aNoShowshape[] = "no_showshape";
char aNoBlock[] = "no_block";
char aNoAttack[] = "no_attack";
char aMoveFly[] = "move_fly";
char aMovePoint[] = "move_point";
char aResistMind[] = "resist_mind";
char aResistWater[] = "resist_water";
char aResistFire[] = "resist_fire";
char aResistAir[] = "resist_air";
char aResistEarth[] = "resist_earth";
char aOther2Equip[] = "other2_equip";
char aOther1Equip[] = "other1_equip";
char aFootEquip[] = "foot_equip";
char aArmorEquip[] = "armor_equip";
char aHeadEquip[] = "head_equip";
char aWeaponEquip[] = "weapon_equip";
char aStamina[] = "stamina";
char aStealRatio[] = "steal_ratio";
char aAvoidHitRatio[] = "avoid_hit_ratio";
char aAttackBack[] = "attack_back";
char aAttackDamagex2[] = "attack_damagex2";
char aSpeed[] = "speed";
char aMagicAttackPow[] = "magic_attack_power";
char aAttackPower[] = "attack_power";
char aDefense[] = "defense";
char aMagicPoint[] = "magic_point";
char aHitPoint[] = "hit_point";
char aLevel[] = "level";
char aGold[] = "gold";
char aKillExp[] = "kill_exp";
char aExp[4] = "exp";
char aJobUpCode[] = "job_up_code";
char aPicture[] = "picture";
char aCon[4] = "con";
char aMind[] = "mind";
char aStr[4] = "str";
char aCarryItem[] = "carry_item";
char aSizeType[] = "size_type";
char aMode[] = "mode";
char aStatus[] = "status";
char aClass[] = "class";
char aJobShowName[] = "job_show_name";
char aJob[4] = "job";
char aDeadMessage[] = "dead_message";
char aSoundWalkwater[] = "sound_walkwater";
char aSoundShoothit[] = "sound_shoothit";
char aSoundHit[] = "sound_hit";
char aSoundMiss[] = "sound_miss";
char aSoundAttack[] = "sound_attack";
char aSoundWalk[] = "sound_walk";
char aSoundDead[] = "sound_dead";
char aCharacter[] = "character";
char aStory[] = "story";
char aWinfailFileHas[] = " WinFail file has the same code !";
char aWinfailFileCod[] = "WinFail file code too large !";
char aWinfailFile[] = "WinFail file";
char aMessage_0[] = "message";
char aWinfailFileMem[] = "WinFail file memory empty !";
char aEvent[] = "event";
char aFail[] = "fail";
char aWin[4] = "win";
char aData_0[] = "data";
char aSize[] = "size";
char aRange[] = "range";
char aDefenseCode[] = "defense_code";
char aAttackCode[] = "attack_code";
char aFunction[] = "function";
char aDamage[] = "damage";
char aAttackpowRatio[] = "attackpow_ratio";
char aUseRatio[] = "use_ratio";
char aExpend[] = "expend";
char aEffectRange[] = "effect_range";
char aSpecial[] = "special";
char aEffectCaster[] = "effect_caster";
char aEffectCode[] = "effect_code";
char aEffectProc[] = "effect_proc";
char aStatusHitRatio[] = "status_hit_ratio";
char aMagic[] = "magic";
char aTrack[] = "track";
char aItemId[] = "item_id";
char aItemCode[] = "item_code";
char aTownEvent[] = "town_event";
char aItemMemoryResi[] = "Item memory resize error !";
char aItemMemoryAllo[] = "Item memory allocate error !";
char aItemStorageMem[] = "Item storage memory allocate error !";
char asc_47855C[2] = ",";
char aResourceFileMe[] = "Resource file memory empty !";
char aImportantFileO[] = "Important file open error, abort...";
char aDataBigmapDat[] = "DATA\BIGMAP.DAT";
char aDataLevel000Ic[] = "DATA\LEVEL000.ICO";
char aDataLevel000Wr[] = "DATA\LEVEL000.WRD";
char aDataLevel000Bi[] = "DATA\LEVEL000.BIN";
char aDataObj000Obs[] = "DATA\OBJ-000.OBS";
char aDataWinfail000[] = "DATA\WINFAIL000.TXT";
char aDataStory000Tx[] = "DATA\STORY000.TXT";
char aMovieStartAni[] = "?:\MOVIE\START.ANI";
char aMovieStartSnd[] = "?:\MOVIE\START.SND";
char aSav[] = ".SAV";
char aTxt[] = ".TXT"; // 2e 54 58 54
char aObs[] = ".OBS";
char aBin[] = ".BIN";
char aWrd[] = ".WRD";
char aIco[] = ".ICO";
char Buffer[];

UINT __stdcall lread(HFILE hFile, LPVOID lpBuffer, UINT uBytes);
HFILE __stdcall lclose(HFILE hFile);
LONG __stdcall llseek(HFILE hFile, LONG lOffset, int iOrigin);
UINT __stdcall lwrite(HFILE hFile, LPCCH lpBuffer, UINT uBytes);
HFILE __stdcall lcreat(LPCSTR lpPathName, int iAttribute);

int(__cdecl *dword_4C22E0)(HWND);
int(__cdecl *off_4795F8)(int, int);
int(__cdecl *off_4795DC)(unsigned int lpPathName, unsigned int  iReadWrite);
int(__cdecl *off_4795E8)(HFILE hfile);
int(__cdecl *off_4795E4)(HFILE hfile, LPVOID lpbuffer, UINT uBytes);
int(__cdecl *off_4795E0)(HFILE hfile);
int(__cdecl *off_4795EC)(HFILE hfile, LONG lOffset, int iOrigin);
int(__cdecl *off_4795F0)(LPCSTR lpFileName, int, int);
int(__cdecl *off_4795F4)(int);
int(__cdecl *off_477C2C)(); // = dd offset nullsub_1;
int(__cdecl *dword_4C240C)(_DWORD);
int(__cdecl *dword_4C240C)(_DWORD);
int __cdecl nullsub_1(DWORD);

unsigned __int8(_fastcall *_bittest)(const signed __int32 *, unsigned int);
unsigned __int8 __fastcall __CFRCR__(_WORD, _BYTE);

struct _WIN32_FIND_DATAA FindFileData;

HWND dword_4C27D0;
HWND hWnd;

size_t dword_4C7024;
size_t dword_4BFC48;

LPDIRECTDRAW pUnkOuter;

LOGPALETTE *plpal; // = 0xffffffff;
LPDIRECTSOUND dword_4C23D8;

HPALETTE ho; // = 0xffffffff;
HPALETTE dword_479610; // = 0xffffffff;

HANDLE hFindFile;

MCIDEVICEID mciId;

LPVOID dword_4C2CB8 = 0;

DWORD unk_4C22DC;
DWORD unk_4C73BC;
DWORD unk_4C2450;
DWORD unk_4C2500;
DWORD unk_479630 = 0x2A;
int unk_4BFC7C = 0;
// 9
DWORD asc_477980 = 9;
DWORD unk_42D7A0 = 60;
DWORD unk_4C393C = 0;
DWORD unk_4C1C78 = 0;
DWORD unk_4C1C78 = 0;
DWORD unk_4C3860 = 0;
DWORD unk_4C43C0 = 0;
DWORD unk_4C1BE4 = 0;
DWORD unk_4C27E0 = 0;
DWORD unk_4C6D80 = 0;
DWORD unk_4C6360 = 0;
DWORD unk_42DEB0 = 0x8B;

DWORD dwVolume;
DWORD pdwVolume;

_WORD __SS__;

UINT uTimerID;
UINT dword_4C23EC;

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	int v4; // ecx
	int v5; // esi
	int v6; // esi
	unsigned int v7; // kr08_4
	signed int v8; // eax
	const char *v9; // edi
	HWND v10; // eax
	signed int v11; // eax
	UINT v13; // eax
	int v14; // eax
	int v15; // [esp+0h] [ebp-4h]

	v15 = v4;
	if (FindWindowA(ClassName, 0))
		return 0;
	v5 = 1;
	while (1)
	{
		sub_458CC0(lpCmdLine, v5, &byte_4C1D80);
		_strupr(&byte_4C1D80);
		if (!byte_4C1D80)
			break;
		if (_strcmpi(&byte_4C1D80, aGodset))
		{
			if (_strcmpi(&byte_4C1D80, aRandom))
			{
				if (_strcmpi(&byte_4C1D80, aNosfx))
				{
					if (_strcmpi(&byte_4C1D80, aPos))
					{
						if (_strcmpi(&byte_4C1D80, aGrab))
						{
							if (_strcmpi(&byte_4C1D80, aWalker))
							{
								if (_strcmpi(&byte_4C1D80, aWindow))
								{
									if (!_strcmpi(&byte_4C1D80, aPage))
										dword_4C1E08 = 1;
								LABEL_23:
									++v5;
								}
								else
								{
									uType = 0;
									++v5;
								}
							}
							else
							{
								sub_458CC0(lpCmdLine, ++v5, &byte_4C1D80);
								if (!sub_45B5FA((unsigned __int8 *)&byte_4C1D80, &v15) || v15 < 0 || v15 > 8)
									goto LABEL_23;
								dword_4C1B8C = v15;
								++v5;
							}
						}
						else
						{
							v6 = v5 + 1;
							sub_458CC0(lpCmdLine, v6, byte_4C1BE8);
							v5 = v6 + 1;
						}
					}
					else
					{
						++v5;
						dword_477C14 |= 0x40000000u;
					}
				}
				else
				{
					dword_4C1AF4 = -1;
					++v5;
				}
			}
			else
			{
				dword_4C1AEC = 1;
				++v5;
			}
		}
		else
		{
			dword_4C1AE8 = 1;
			++v5;
		}
	}
	v7 = strlen(byte_4C1BE8) + 1;
	v15 = v7 - 1;
	if (v7 == 1)
	{
		strcpy(byte_4C1BE8, byte_4C2298);
		v9 = aHsl0001;
	LABEL_29:
		strcat(byte_4C1BE8, v9);
	}
	else
	{
		v8 = byte_4C1BE7[v7 - 1];
		if (v8 < 48 || v8 > 57)
		{
			v9 = a0001;
			goto LABEL_29;
		}
	}
	nWidth = 640;
	nHeight = 480;
	sub_4580B0(640, 480);
	sub_458120(nWidth, nHeight);
	v10 = sub_457220(hInstance);
	dword_4C27D0 = v10;
	if (v10)
	{
		if (dword_4C1E08)
			v11 = sub_458800(v10, 640, 480, 2);
		else
			v11 = sub_458800(v10, 1, 1, 1);
		if (!v11)
		{
			MessageBoxA(0, Text, &Caption, 0x2000u);
			return 0;
		}
		sub_456CA0();
		dword_4C1E00 = sub_457820();
		v13 = uType;
		while (1)
		{
			v14 = dword_4C1E08 ? sub_458FF0(1, v13) : sub_458FF0(3, v13);
			if (v14 >= 0)
				break;
			if (v14 == -1)
			{
				sub_457860(aDirectxDisplay, aMessage, 0);
				goto LABEL_47;
			}
			v13 = 1;
			uType = 1;
		}
		if (!dword_4C1E04)
			dword_4C1E04 = v14;
		sub_4580B0(-1, -1);
		ShowWindow(dword_4C27D0, nShowCmd);
		// TODO : sub_457400
		/*sub_457400();
		.text:00457400
		.text : 00457400; == == == == == == == = S U B R O U T I N E == == == == == == == == == == == == == == == == == == == =
		.text : 00457400
		.text : 00457400
		.text : 00457400 sub_457400      proc near; CODE XREF : WinMain(x, x, x, x) + 33E↓p
		.text : 00457400                 call    sub_45B27D
		.text : 00457405                 test    eax, eax
		.text : 00457407                 jnz     short locret_45740E
		.text : 00457409                 jmp     sub_42EF70
		.text : 0045740E; -------------------------------------------------------------------------- -
		.text : 0045740E
		.text : 0045740E locret_45740E : ; CODE XREF : sub_457400 + 7↑j
		.text : 0045740E                 retn
		.text : 0045740E sub_457400      endp
		.text : 0045740E*/
	LABEL_47:
		sub_458B00();
		if (!uType)
			ShowWindow(dword_4C27D0, 0);
		if (byte_4C1E0C)
		{
			SetWindowPos(dword_4C27D0, (HWND)0xFFFFFFFE, 0, 0, 0, 0, 0x83u);
			MessageBoxA(0, &byte_4C1E0C, &Caption, 0x2000u);
		}
	}
	return 0;
}

char __cdecl sub_458CC0(_BYTE *a1, int a2, char *a3)
{
	int v3; // esi
	char result; // al
	_BYTE *v5; // ecx
	char *v6; // edx

	v3 = a2;
	if (a2)
	{
		v5 = a1;
		v6 = a3;
		result = *a1;
		*a3 = 0;
		while (result)
		{
			for (; result == 32; ++v5)
				result = v5[1];
			if (!result)
				break;
			if (result == 47 || result == 45)
				result = (v5++)[1];
			if (!--v3)
			{
				for (; result != 32; ++v5)
				{
					if (!result)
						break;
					*v6 = result;
					result = v5[1];
					++v6;
				}
				*v6 = 0;
				return result;
			}
			if (result != 32)
			{
				while (result)
				{
					result = (v5++)[1];
					if (result == 32)
						goto LABEL_14;
				}
				return result;
			}
		LABEL_14:
			;
		}
	}
	else
	{
		result = 0;
		strcpy(a3, *(const char **)dword_4C2614);
	}
	return result;
}

unsigned __int8 *__cdecl sub_45B5FA(unsigned __int8 *a1, int *a2)
{
	unsigned __int8 *v2; // esi
	unsigned __int8 v3; // al
	unsigned __int8 v4; // ah
	int v5; // ecx
	int v6; // eax
	signed int v8; // [esp+8h] [ebp-8h]
	signed int v9; // [esp+Ch] [ebp-4h]

	v9 = 10;
	v8 = 0;
	v2 = a1;
	do
	{
		v3 = *v2++;
		if (!v3)
			return 0;
	} while (v3 == 32);
	if (v3 == 126)
	{
		v3 = 45;
		v8 = 1;
	}
	if (v3 == 45)
	{
		++v8;
		do
		{
			v3 = *v2++;
			if (!v3)
				return 0;
		} while (v3 == 32);
	}
	if (v3 == 48)
	{
		v4 = *v2;
		if (*v2 >= 0x61u && v4 <= 0x7Au)
			v4 -= 32;
		if (v4 == 88)
		{
			v9 = 16;
			v3 = v2[1];
			v2 += 2;
		}
	}
	v5 = 0;
	v6 = v3;
	if (v9 == 10)
	{
		while (v3)
		{
			LOBYTE(v6) = v3 - 48;
			if ((v6 & 0x80u) != 0 || (unsigned __int8)v6 > 9u)
				return 0;
			v5 = v6 + 10 * v5;
			v3 = *v2++;
		}
	}
	else
	{
		while (v3)
		{
			if (v3 >= 0x61u && v3 <= 0x7Au)
				v3 -= 32;
			LOBYTE(v6) = v3 - 48;
			if ((v6 & 0x80u) != 0)
				return 0;
			if ((unsigned __int8)v6 > 9u)
			{
				LOBYTE(v6) = v6 - 7;
				if ((v6 & 0x80u) != 0 || (unsigned __int8)v6 > 0xFu)
					return 0;
			}
			v5 = v6 + 16 * v5;
			v3 = *v2++;
		}
	}
	if (v8)
	{
		if (v8 == 1)
			v5 = -v5;
		else
			v5 = ~v5;
	}
	*a2 = v5;
	return v2;
}

void *__cdecl sub_4580B0(int a1, int a2)
{
	void *result; // eax

	if (a1 == -1)
	{
		result = dword_4C2308;
		if (dword_4C2308)
		{
			*((_DWORD *)dword_4C2308 + 1) = xRight;
			if (*((_DWORD *)dword_4C2308 + 2) >= 0)
				*((_DWORD *)dword_4C2308 + 2) = yBottom;
			else
				*((_DWORD *)dword_4C2308 + 2) = -yBottom;
			result = dword_4C2308;
			*((_DWORD *)dword_4C2308 + 5) = xRight * yBottom;
		}
	}
	else
	{
		xRight = a1;
		result = (void *)a2;
		yBottom = a2;
	}
	return result;
}

int __cdecl sub_458120(int a1, int a2)
{
	int result; // eax

	result = a1;
	dword_479604 = a1;
	dword_479608 = a2;
	return result;
}

HWND __cdecl sub_457220(HINSTANCE hInstance)
{
	HDC v1; // esi
	int v2; // edi
	int v3; // ebx
	int v4; // eax
	int v5; // ecx
	HWND result; // eax
	int v7; // eax
	int v8; // edi
	signed int v9; // esi
	HWND v10; // esi
	WNDCLASSA WndClass; // [esp+Ch] [ebp-28h]

	v1 = GetDC(0);
	v2 = GetDeviceCaps(v1, 8);
	v3 = GetDeviceCaps(v1, 10);
	ReleaseDC(0, v1);
	v4 = nWidth;
	v5 = nHeight;
	if (nWidth >= v2)
	{
		v4 = v2 - 32;
		nWidth = v2 - 32;
	}
	else if (nHeight < v3)
	{
		goto LABEL_8;
	}
	if (nHeight >= v3)
	{
		v5 = v3 - 64;
		nHeight = v3 - 64;
	}
	sub_458120(v4, v5);
LABEL_8:
	WndClass.lpszClassName = ClassName;
	WndClass.hInstance = hInstance;
	WndClass.lpfnWndProc = sub_456CF0;
	WndClass.hCursor = LoadCursorA(0, (LPCSTR)0x7F00);
	WndClass.hIcon = LoadIconA(hInstance, (LPCSTR)0x66);
	WndClass.lpszMenuName = 0;
	WndClass.hbrBackground = (HBRUSH)GetStockObject(4);
	WndClass.style = 11;
	WndClass.cbClsExtra = 0;
	WndClass.cbWndExtra = 0;
	if (!RegisterClassA(&WndClass))
		return 0;
	if (uType)
	{
		result = CreateWindowExA(8u, ClassName, &Caption, 0x80000000, 0, 0, nWidth, nHeight, 0, 0, hInstance, 0);
		v10 = result;
		if (!result)
			return result;
		sub_458140(0, 0);
		goto LABEL_20;
	}
	v7 = GetSystemMetrics(0);
	if (v7 <= 800)
	{
		v8 = 0;
		v9 = 0;
	}
	else
	{
		v8 = (v7 - nWidth - 6) / 2;
		v9 = (-30 - nHeight + GetSystemMetrics(1)) / 2;
		if (v9 >= 23)
			v9 -= 23;
		sub_458140(v8, v9);
	}
	result = CreateWindowExA(0, ClassName, &Caption, 0xCF0000u, v8, v9, nWidth + 12, nHeight + 60, 0, 0, hInstance, 0);
	v10 = result;
	if (result)
	{
	LABEL_20:
		SetFocus(v10);
		result = v10;
	}
	return result;
}

long __stdcall sub_456CF0(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
	int result; // eax
	struct tagPAINTSTRUCT Paint; // [esp+4h] [ebp-40h]

	if (Msg > 0x102)
	{
		if (Msg > 0x203)
		{
			switch (Msg)
			{
			case 0x204u:
			case 0x205u:
			case 0x207u:
			case 0x208u:
			LABEL_31 :
				sub_458530(wParam, lParam);
					 return 0;
			case 0x206u:
			case 0x209u:
				goto LABEL_32;
			default:
				return DefWindowProcA(hWnd, Msg, wParam, lParam);
			}
			return DefWindowProcA(hWnd, Msg, wParam, lParam);
		}
		if (Msg == 515)
		{
		LABEL_32:
			sub_4585A0(wParam, lParam);
		LABEL_33:
			result = 0;
		}
		else
		{
			switch (Msg)
			{
			case 0x104u:
				sub_45B47F(lParam, wParam);
				if (!(lParam & 0x20000000))
					goto LABEL_33;
				if (wParam == 115)
				{
					PostMessageA(hWnd, 0x10u, 0, 0);
					return 0;
				}
				if (wParam != 13)
					goto LABEL_33;
				uType = sub_458F30();
				result = 0;
				break;
			case 0x105u:
				sub_45B4D1(lParam);
				return 0;
			case 0x200u:
				sub_458610(wParam, lParam);
				if (!dword_4C1D7C)
					goto LABEL_33;
				dword_4C1D7C = 0;
				sub_456CA0();
				return 0;
			case 0x201u:
			case 0x202u:
				goto LABEL_31;
			default:
				return DefWindowProcA(hWnd, Msg, wParam, lParam);
			}
		}
	}
	else
	{
		if (Msg == 258)
		{
			sub_45B45E(wParam);
			return 0;
		}
		if (Msg <= 0x10)
		{
			if (Msg == 16)
			{
				sub_4587D0(hWnd);
				return 0;
			}
			switch (Msg)
			{
			case 1u:
				goto LABEL_33;
			case 2u:
				sub_458A70();
				PostQuitMessage(0);
				return 0;
			case 3u:
				sub_458140((unsigned __int16)lParam, (unsigned int)lParam >> 16);
				return 0;
			case 5u:
				if (uType)
					goto LABEL_33;
				sub_458120((unsigned __int16)lParam, (unsigned int)lParam >> 16);
				return 0;
			case 0xFu:
				BeginPaint(hWnd, &Paint);
				EndPaint(hWnd, &Paint);
				return 0;
			default:
				return DefWindowProcA(hWnd, Msg, wParam, lParam);
			}
			return DefWindowProcA(hWnd, Msg, wParam, lParam);
		}
		switch (Msg)
		{
		case 0x1Cu:
			sub_458760(Msg, wParam);
			dword_4C1D7C = 1;
			result = 0;
			break;
		case 0x20u:
			if (sub_458650())
				goto LABEL_33;
			result = DefWindowProcA(hWnd, Msg, wParam, lParam);
			break;
		case 0x100u:
			sub_45B47F(lParam, wParam);
			sub_456CD0();
			result = 0;
			break;
		case 0x101u:
			sub_45B4D1(lParam);
			result = 0;
			break;
		default:
			return DefWindowProcA(hWnd, Msg, wParam, lParam);
		}
	}
	return result;
}

char __cdecl sub_458530(char a1, unsigned int a2)
{
	int v2; // eax

	dword_4C2350 = a2 >> 16;
	dword_4C234C = (unsigned __int16)a2;
	if (!dword_4C22F4)
		sub_45B2D5(&dword_4C234C, &dword_4C2350);
	LOBYTE(v2) = a1;
	dword_4C2344 = 0;
	if (a1 & 1)
		dword_4C2344 = 1;
	if (a1 & 2)
		dword_4C2344 |= 2u;
	if (a1 & 0x10)
	{
		v2 = dword_4C2344;
		LOBYTE(v2) = dword_4C2344 | 4;
		dword_4C2344 = v2;
	}
	return v2;
}

unsigned int __cdecl sub_45B2D5(unsigned int *a1, unsigned int *a2)
{
	unsigned int result; // eax

	*a1 = xRight * *a1 / dword_479604;
	result = yBottom * *a2 / dword_479608;
	*a2 = result;
	return result;
}

char __cdecl sub_4585A0(char a1, unsigned int a2)
{
	char result; // al

	dword_4C2350 = a2 >> 16;
	dword_4C234C = (unsigned __int16)a2;
	if (!dword_4C22F4)
		sub_45B2D5((unsigned int *)&dword_4C234C, (unsigned int *)&dword_4C2350);
	result = a1;
	dword_4C2344 = 0;
	if (a1 & 1)
		dword_4C2344 = 65537;
	if (a1 & 2)
		dword_4C2344 |= 0x20002u;
	if (a1 & 0x10)
		dword_4C2344 |= 0x40004u;
	return result;
}

int __cdecl sub_45B47F(unsigned int a1, char a2)
{
	int v2; // edx
	unsigned int v3; // eax
	unsigned int v4; // edx
	int result; // eax

	v2 = (a1 >> 8) & 0xFF00;
	LOBYTE(v2) = a2;
	if (a1 & 0x1000000)
		v2 |= 0x80000000;
	dword_4C23BC = v2;
	v3 = a1 >> 16;
	if ((a1 >> 16) & 0x100)
		LOBYTE(v3) = BYTE2(a1) | 0x80;
	v4 = v3 & 0xE0;
	result = v3 & 0x1F;
	_bittestandset((LONG *)((char *)&dword_4C2374 + (v4 >> 3)), result);
	return result;
}

int sub_458F30()
{
	int result; // eax

	if (!(dword_4C22D8 & 2))
		return dword_4C22F4;
	result = dword_4C22F4;
	if (!dword_4C22F4)
	{
		sub_458FF0(dword_4C23C0, 1u);
		return dword_4C22F4;
	}
	switch (dword_4C23C0)
	{
	case 0:
	case 2:
	case 4:
	case 6:
		if (dword_4C71CC == 8)
			goto LABEL_8;
		sub_457860(asc_4A1958, aMessage, 0);
		result = dword_4C22F4;
		break;
	case 1:
	case 3:
	case 5:
	case 7:
		if (dword_4C71CC == 16)
		{
		LABEL_8:
			sub_458FF0(dword_4C23C0, 0);
			result = dword_4C22F4;
		}
		else
		{
			sub_457860(asc_4A1924, aMessage, 0);
			result = dword_4C22F4;
		}
		break;
	default:
		return result;
	}
	return result;
}

int __cdecl sub_458FF0(int a1, UINT uType)
{
	int v2; // edi
	int v3; // ecx
	signed int v4; // eax
	signed int v5; // edi
	int v6; // eax
	int v7; // eax
	int result; // eax
	int v9; // [esp-14h] [ebp-30h]
	int v10; // [esp-10h] [ebp-2Ch]
	int v11; // [esp-8h] [ebp-24h]
	UINT v12; // [esp-4h] [ebp-20h]
	struct tagRECT Rect; // [esp+Ch] [ebp-10h]

	dword_4C22F0 = 1;
	v2 = dword_4C22F4;
	dword_4C22F4 = uType;
	sub_45D0D0();
	dword_4C23C0 = a1;
	if ((dword_4C22D8 & 0x80u) != 0)
	{
		if (uType)
		{
			if (!v2)
			{
				GetWindowRect(hWnd, &Rect);
				X = Rect.left;
				Y = Rect.top;
				GetClientRect(hWnd, &Rect);
				dword_479624 = Rect.right - Rect.left + 12;
				cy = Rect.bottom - Rect.top + 60;
			}
		}
		else
		{
			SetWindowPos(hWnd, 0, X, Y, dword_479624, cy, 0x14u);
			dword_479604 = dword_479624 - 12;
			dword_479608 = cy - 60;
		}
	}
	else
	{
		v3 = dword_4C22D8;
		LOBYTE(v3) = dword_4C22D8 | 0x80;
		dword_4C22D8 = v3;
		switch (a1)
		{
		case 0:
		case 1:
		case 2:
		case 3:
			v4 = 640;
			v5 = 480;
			Y = 640;
			break;
		case 4:
		case 5:
			v4 = 800;
			v5 = 600;
			Y = 800;
			break;
		default:
			v4 = 1024;
			v5 = 768;
			Y = 1024;
			break;
		}
		dword_479624 = v4 + 12;
		cy = v5 + 60;
		v6 = GetSystemMetrics(0);
		if (v6 <= Y || (X = (v6 - Y - 6) / 2, X < 0))
			X = 0;
		v7 = GetSystemMetrics(1);
		if (v7 <= v5)
		{
			Y = 0;
		}
		else
		{
			Y = (v7 - v5 - 30) / 2;
			if (Y < 23)
				Y = 23;
		}
	}
	switch (a1)
	{
	case 0:
		result = sub_45CB60(hWnd, 640, 480, 8, 0, uType);
		off_4795F8 = (int(__cdecl *)(int, int))sub_45C39B;
		*((_WORD *)dword_4C2308 + 7) = 8;
		return result;
	case 1:
		result = sub_45CB60(hWnd, 640, 480, 16, 0, uType);
		goto LABEL_28;
	case 2:
		result = sub_45CB60(hWnd, 640, 480, 8, 1, uType);
		goto LABEL_25;
	case 3:
		v12 = uType;
		v11 = 1;
		v10 = 480;
		v9 = 640;
		goto LABEL_27;
	case 4:
		result = sub_45CB60(hWnd, 800, 600, 8, 0, uType);
		goto LABEL_25;
	case 5:
		v12 = uType;
		v11 = 0;
		v10 = 600;
		v9 = 800;
		goto LABEL_27;
	case 6:
		result = sub_45CB60(hWnd, 1024, 768, 8, 0, uType);
	LABEL_25:
		off_4795F8 = (int(__cdecl *)(int, int))sub_45C39B;
		*((_WORD *)dword_4C2308 + 7) = 8;
		break;
	case 7:
		v12 = uType;
		v11 = 0;
		v10 = 768;
		v9 = 1024;
	LABEL_27:
		result = sub_45CB60(hWnd, v9, v10, 16, v11, v12);
	LABEL_28:
		off_4795F8 = (int(__cdecl *)(int, int))sub_45C3D8;
		*((_WORD *)dword_4C2308 + 7) = 16;
		break;
	default:
		result = -1;
		break;
	}
	return result;
}

signed int sub_45D0D0()
{
	int v0; // ecx

	if (dword_4C2428)
	{
		(*(void(__stdcall **)(int))(*(_DWORD *)dword_4C2428 + 8))(dword_4C2428);
		dword_4C2428 = 0;
	}
	v0 = dword_4C241C;
	if (dword_4C241C != dword_4C2420 && dword_4C2420)
	{
		(*(void(__stdcall **)(int))(*(_DWORD *)dword_4C2420 + 8))(dword_4C2420);
		v0 = dword_4C241C;
		dword_4C2420 = 0;
	}
	if (v0)
	{
		(*(void(__stdcall **)(int))(*(_DWORD *)v0 + 8))(v0);
		dword_4C241C = 0;
	}
	if (dword_4C2424)
	{
		(*(void(__stdcall **)(int))(*(_DWORD *)dword_4C2424 + 8))(dword_4C2424);
		dword_4C2424 = 0;
	}
	if (pUnkOuter)
	{
		pUnkOuter->lpVtbl->RestoreDisplayMode(pUnkOuter);
		pUnkOuter->lpVtbl->Release(pUnkOuter);
		pUnkOuter = 0;
	}
	return 1;
}

//int __usercall sub_45C3D8@<eax>(int a1@<ebp>)
int sub_45C3D8(int a1)
{
	int v1; // esi
	int v2; // edi
	int v3; // edx
	int v4; // ecx
	int v5; // ebp
	int v6; // ebx
	int result; // eax
	unsigned __int8 v8; // of

	v1 = dword_4C2304;
	v2 = *(_DWORD *)(a1 + 12);
	v3 = yBottom;
	v4 = *(_DWORD *)(a1 + 8);
	v5 = 2 * xRight;
	do
	{
		v6 = v5 - 8;
		do
		{
			*(_DWORD *)(v2 + v6) = *(_DWORD *)(v1 + v6);
			result = *(_DWORD *)(v1 + v6 + 4);
			*(_DWORD *)(v2 + v6 + 4) = result;
			v8 = __OFSUB__(v6, 8);
			v6 -= 8;
		} while (!((v6 < 0) ^ v8));
		v2 += v4;
		v1 += v5;
		--v3;
	} while (v3);
	return result;
}

int __cdecl sub_45CB60(HWND hWnd, int a2, int a3, int a4, int a5, UINT uType)
{
	CHAR *v6; // eax
	int result; // eax
	LPDIRECTDRAW v8; // eax
	LONG v9; // eax
	signed int v10; // edi
	HRESULT v11; // eax
	LONG v12; // eax
	DWORD v13; // ST18_4
	BOOL v14; // ST14_4
	DWORD v15; // eax
	int v16; // eax
	int v17; // ecx
	int v18; // edx
	int v19; // eax
	struct tagRECT rc; // [esp+10h] [ebp-B0h]
	int v21; // [esp+20h] [ebp-A0h]
	LONG pvParam; // [esp+24h] [ebp-9Ch]
	LONG v23; // [esp+28h] [ebp-98h]
	int v24; // [esp+34h] [ebp-8Ch]
	int v25; // [esp+38h] [ebp-88h]
	int v26; // [esp+3Ch] [ebp-84h]
	int v27; // [esp+40h] [ebp-80h]
	int v28; // [esp+48h] [ebp-78h]
	int v29; // [esp+9Ch] [ebp-24h]
	int v30; // [esp+A0h] [ebp-20h]
	int v31; // [esp+B0h] [ebp-10h]

	dword_4C242C = 0;
	dword_4C6FB4 = a4;
	if (!uType)
	{
		v6 = sub_45CB00(a4);
		if (v6)
		{
			sub_457860(v6, aMessage, uType);
			return -2;
		}
	}
	SetFocus(hWnd);
	v8 = pUnkOuter;
	if (!pUnkOuter)
	{
		if (DirectDrawCreate((GUID *)pUnkOuter, &pUnkOuter, (IUnknown *)pUnkOuter))
			goto LABEL_40;
		v8 = pUnkOuter;
	}
	if (uType)
	{
		v9 = GetWindowLongA(hWnd, -16);
		SetWindowLongA(hWnd, -16, v9 & 0xFF30FFFF | 0x80000000);
		v10 = 20;
		do
		{
			while (1)
			{
				SetFocus(hWnd);
				if (!pUnkOuter->lpVtbl->SetCooperativeLevel(pUnkOuter, hWnd, 17))
					break;
				if (v10 <= 0)
					goto LABEL_25;
			}
			v11 = pUnkOuter->lpVtbl->SetDisplayMode(pUnkOuter, a2, a3, dword_4C6FB4);
			if (!v11)
				goto LABEL_25;
			if (v11 == -2005532552)
				break;
			if (v11 == -2147024809)
				break;
			if (v11 == -2005532082)
				break;
			if (v11 == -2147467263)
				break;
			--v10;
		} while (v10 > 0);
		goto LABEL_40;
	}
	if (v8->lpVtbl->SetCooperativeLevel(v8, hWnd, 8))
	{
	LABEL_40:
		sub_45D0D0();
		sub_45D160();
		return -1;
	}
	v12 = GetWindowLongA(hWnd, -16);
	SetWindowLongA(hWnd, -16, v12 & 0x7F30FFFF | 0xCF0000);
	SetRect(&rc, 0, 0, dword_479604, dword_479608);
	v13 = GetWindowLongA(hWnd, -20);
	v14 = GetMenu(hWnd) != 0;
	v15 = GetWindowLongA(hWnd, -16);
	AdjustWindowRectEx(&rc, v15, v14, v13);
	SetWindowPos(hWnd, 0, 0, 0, rc.right - rc.left, rc.bottom - rc.top, 0x16u);
	SetWindowPos(hWnd, (HWND)0xFFFFFFFE, 0, 0, 0, 0, 0x13u);
	SystemParametersInfoA(0x30u, 0, &pvParam, 0);
	GetWindowRect(hWnd, &rc);
	v16 = rc.left;
	if (rc.left < pvParam)
	{
		v16 = pvParam;
		rc.left = pvParam;
	}
	v17 = rc.top;
	if (rc.top < v23)
	{
		v17 = v23;
		rc.top = v23;
	}
	SetWindowPos(hWnd, 0, v16, v17, 0, 0, 0x15u);
LABEL_25:
	if (a5 && uType)
	{
		memset(&v24, 0, 0x6Cu);
		v24 = 108;
		v25 = 33;
		v29 = 536;
		v28 = 1;
		if (pUnkOuter->lpVtbl->CreateSurface(pUnkOuter, (LPDDSURFACEDESC)&v24, (LPDIRECTDRAWSURFACE *)&dword_4C241C, 0))
		{
			dword_4C241C = 0;
			sub_45D0D0();
			sub_45D160();
			return -1;
		}
		v21 = 4;
		if ((*(int(__stdcall **)(int, int *, int *))(*(_DWORD *)dword_4C241C + 48))(dword_4C241C, &v21, &dword_4C2420))
		{
			dword_4C2420 = 0;
			sub_45D0D0();
			sub_45D160();
			return -1;
		}
	}
	else
	{
		memset(&v24, 0, 0x6Cu);
		v24 = 108;
		v25 = 1;
		v29 = 512;
		if (pUnkOuter->lpVtbl->CreateSurface(pUnkOuter, (LPDDSURFACEDESC)&v24, (LPDIRECTDRAWSURFACE *)&dword_4C241C, 0))
		{
			dword_4C241C = 0;
			sub_45D0D0();
			sub_45D160();
			return -1;
		}
		if (uType)
		{
			v18 = dword_4C241C;
			dword_4C2420 = dword_4C241C;
			goto LABEL_42;
		}
		memset(&v24, 0, 0x6Cu);
		v27 = a2;
		v26 = a3;
		v24 = 108;
		v25 = 7;
		v29 = 64;
		if (pUnkOuter->lpVtbl->CreateSurface(pUnkOuter, (LPDDSURFACEDESC)&v24, (LPDIRECTDRAWSURFACE *)&dword_4C2420, 0))
		{
			dword_4C2420 = dword_4C241C;
			sub_45D0D0();
			sub_45D160();
			return -1;
		}
		if (pUnkOuter->lpVtbl->CreateClipper(pUnkOuter, 0, (LPDIRECTDRAWCLIPPER *)&dword_4C2428, 0)
			|| (*(int(__stdcall **)(int, _DWORD, HWND))(*(_DWORD *)dword_4C2428 + 32))(dword_4C2428, 0, hWnd)
			|| (*(int(__stdcall **)(int, int))(*(_DWORD *)dword_4C241C + 112))(dword_4C241C, dword_4C2428))
		{
			goto LABEL_40;
		}
	}
	v18 = dword_4C241C;
LABEL_42:
	if (dword_4C6FB4 == 8)
	{
		if (!plpal
			|| pUnkOuter->lpVtbl->CreatePalette(pUnkOuter, 68, plpal->palPalEntry, (LPDIRECTDRAWPALETTE *)&dword_4C2424, 0)
			|| !dword_4C2424
			|| (v19 = (*(int(__stdcall **)(int, int))(*(_DWORD *)dword_4C241C + 124))(dword_4C241C, dword_4C2424)) != 0
			&& (v19 != -2005532222
			|| ((*(void(__stdcall **)(int))(*(_DWORD *)dword_4C241C + 108))(dword_4C241C),
			(*(int(__stdcall **)(int, int))(*(_DWORD *)dword_4C241C + 124))(dword_4C241C, dword_4C2424))))
		{
			sub_45D0D0();
			sub_457860(aDirectx, aMessage, 0);
			return -1;
		}
	}
	else
	{
		memset(&v30, 0, 0x20u);
		v30 = 32;
		if (!(*(int(__stdcall **)(int, int *))(*(_DWORD *)v18 + 84))(v18, &v30) && v31 != 63488)
		{
			result = 1;
			dword_4C242C = 1;
			return result;
		}
	}
	return 0;
}

CHAR *__cdecl sub_45CB00(int a1)
{
	HDC v1; // esi
	int v2; // edi
	int v3; // edi
	CHAR *result; // eax

	v1 = GetDC(0);
	v2 = GetDeviceCaps(v1, 14);
	v3 = GetDeviceCaps(v1, 12) * v2;
	ReleaseDC(0, v1);
	result = 0;
	if (a1 != v3)
	{
		result = asc_4A1924;
		if (a1 != 16)
			result = asc_4A1958;
	}
	return result;
}

int __cdecl sub_457860(LPCSTR lpText, LPCSTR lpCaption, UINT uType)
{
	int v3; // esi
	int v4; // eax

	v3 = 0;
	if (!(dword_4C22D8 & 0x40))
	{
		if (uType)
			v4 = MessageBoxA(hWnd, lpText, lpCaption, uType);
		else
			v4 = MessageBoxA(hWnd, lpText, lpCaption, 0x2000u);
		v3 = v4;
	}
	sub_458410();
	sub_4583D0();
	return v3;
}

int sub_458410()
{
	int result; // eax
	struct tagMSG Msg; // [esp+10h] [ebp-1Ch]

	if (dword_4C22D8 & 0x20)
	{
		result = dword_4C22F8;
		if (!dword_4C22F8)
		{
			for (result = GetMessageA(&Msg, 0, 0, 0); result; result = GetMessageA(&Msg, 0, 0, 0))
			{
				TranslateMessage(&Msg);
				result = DispatchMessageA(&Msg);
				if (!(dword_4C22D8 & 0x20))
					break;
				result = dword_4C22F8;
				if (dword_4C22F8)
					break;
			}
		}
	}
	else
	{
		for (result = PeekMessageA(&Msg, 0, 0, 0, 0); result; result = PeekMessageA(&Msg, 0, 0, 0, 0))
		{
			result = GetMessageA(&Msg, 0, 0, 0);
			if (!result)
				break;
			TranslateMessage(&Msg);
			DispatchMessageA(&Msg);
		}
	}
	return result;
}

void sub_4583D0()
{
	dword_4C2344 = 0;
}

int sub_45D160()
{
	return sub_457860(aDirectxError, aMessage, 0);
}

//int __usercall sub_45C39B@<eax>(int a1@<ebp>)
int sub_45C39B(int a1)
{
	int v1; // esi
	int v2; // edi
	int v3; // edx
	int v4; // ecx
	int v5; // ebp
	int v6; // ebx
	int result; // eax
	unsigned __int8 v8; // of

	v1 = dword_4C2304;
	v2 = *(_DWORD *)(a1 + 12);
	v3 = yBottom;
	v4 = *(_DWORD *)(a1 + 8);
	v5 = xRight;
	do
	{
		v6 = v5 - 4;
		do
		{
			result = *(_DWORD *)(v1 + v6);
			*(_DWORD *)(v2 + v6) = result;
			v8 = __OFSUB__(v6, 4);
			v6 -= 4;
		} while (!((v6 < 0) ^ v8));
		v2 += v4;
		v1 += v5;
		--v3;
	} while (v3);
	return result;
}

int __cdecl sub_45B4D1(unsigned int a1)
{
	unsigned int v1; // eax
	unsigned int v2; // edx
	int result; // eax

	v1 = a1 >> 16;
	if ((a1 >> 16) & 0x100)
		LOBYTE(v1) = BYTE2(a1) | 0x80;
	v2 = v1 & 0xE0;
	result = v1 & 0x1F;
	_bittestandreset((LONG *)((char *)&dword_4C2374 + (v2 >> 3)), result);
	return result;
}

unsigned int __cdecl sub_458610(int a1, unsigned int a2)
{
	unsigned int result; // eax

	dword_4C2350 = a2 >> 16;
	result = dword_4C22F4;
	dword_4C234C = (unsigned __int16)a2;
	if (!dword_4C22F4)
		result = sub_45B2D5((unsigned int *)&dword_4C234C, (unsigned int *)&dword_4C2350);
	return result;
}

BOOL sub_456CA0()
{
	BOOL result; // eax
	BYTE KeyState; // [esp+0h] [ebp-100h]
	int v2; // [esp+14h] [ebp-ECh]

	result = GetKeyboardState(&KeyState);
	if (result)
		dword_4C1D78 = v2 & 1;
	return result;
}

int __cdecl sub_45B45E(int a1)
{
	int result; // eax
	char v2; // dl

	result = a1;
	v2 = dword_4C23B8;
	byte_4C7030[dword_4C23B8] = a1;
	dword_4C23B8 = (v2 + 1) & 0xF;
	return result;
}

int(__cdecl *__cdecl sub_4587D0(HWND hWnd))(HWND)
{
	int(__cdecl *result)(HWND); // eax

	result = dword_4C22E0;
	if (!dword_4C22E0 || (result = (int(__cdecl *)(HWND))dword_4C22E0(hWnd)) != 0)
	{
		if (dword_4C22D8 & 0x10)
		{
			sub_458A70();
			result = (int(__cdecl *)(HWND))DestroyWindow(hWnd);
		}
	}
	return result;
}

void sub_458A70()
{
	HDC v0; // esi

	dword_4C22F8 = 1;
	if (dword_4C22EC)
	{
		v0 = GetDC(hWnd);
		if (ho != (HPALETTE)-1)
		{
			if (dword_479610 != (HPALETTE)-1)
				SelectPalette(v0, dword_479610, 0);
			DeleteObject(ho);
			ho = (HPALETTE)-1;
			dword_479610 = (HPALETTE)-1;
		}
		ReleaseDC(hWnd, v0);
		if (plpal != (LOGPALETTE *)-1)
		{
			sub_457C20(plpal);
			plpal = (LOGPALETTE *)-1;
		}
	}
}

void __cdecl sub_457C20(void *a1)
{
	dword_4C1E90 -= _msize(a1);
	free(a1);
}

int __cdecl sub_458140(int a1, int a2)
{
	int result; // eax

	result = a1;
	dword_4C22FC = a1;
	dword_4C2300 = a2;
	return result;
}

//void __usercall sub_458760(int esi0@<esi>, int a1)
void sub_458760(int esi0, int a1)
{
	DWORD v2; // ecx
	int v3; // eax
	int v4; // eax

	if (a1 == 1)
	{
		if (dword_4C22D8 & 0x20)
		{
			sub_4586E0();
			v2 = GetTickCount() - dword_4C2314 + dword_4C2310;
			v3 = dword_4C22D8;
			LOBYTE(v3) = dword_4C22D8 & 0xDF;
			dword_4C2310 = v2;
			dword_4C22D8 = v3;
		}
	}
	else
	{
		v4 = dword_4C22D8;
		if (!(v4 & 0x100) && !(dword_4C22D8 & 0x20))
		{
			LOBYTE(v4) = dword_4C22D8 | 0x20;
			dword_4C22D8 = v4;
			dword_4C2314 = GetTickCount();
			if (dword_4C231C == 1 && mciId != -1)
			{
				dword_4C7044 = 0;
				mciSendCommandA(mciId, 0x809u, 0, (DWORD_PTR)&dword_4C7044);
				dword_4C71B0 = 0;
				dword_4C71B4 = 0;
				dword_4C71B8 = 2;
				mciSendCommandA(mciId, 0x814u, 0x100u, (DWORD_PTR)&dword_4C71B0);
			}
			if (dword_4C23F4)
				dword_4C23F8 = sub_45A620(esi0, dword_4C23F4);
		}
	}
}

int sub_4586E0()
{
	DWORD_PTR v0; // ecx
	int result; // eax

	if (dword_4C231C == 1 && mciId != -1)
	{
		dword_4C71C4 = dword_4C71B4;
		dword_4C71C0 = 0;
		v0 = 12;
		dword_4C71C8 = (unsigned __int8)dword_4C71B4 + 1;
		if ((unsigned __int8)dword_4C71B4 + 1 > dword_4C2318)
			v0 = 4;
		mciSendCommandA(mciId, 0x806u, v0, (DWORD_PTR)&dword_4C71C0);
	}
	result = dword_4C23F4;
	if (dword_4C23F4)
		result = sub_45A660(dword_4C23F4, dword_4C23F8, 0);
	return result;
}

signed int __cdecl sub_45A660(int a1, int a2, char a3)
{
	signed int v3; // edi
	bool v4; // zf
	signed int result; // eax

	if (!dword_4C23D8)
		return 0;
	v3 = 0;
	if (a3 & 1)
		v3 = 1;
	(*(void(__stdcall **)(int, int))(*(_DWORD *)a1 + 52))(a1, a2);
	v4 = (*(int(__stdcall **)(int, _DWORD, _DWORD, signed int))(*(_DWORD *)a1 + 48))(a1, 0, 0, v3) == 0;
	result = 1;
	if (!v4)
		return 0;
	return result;
}

//int __usercall sub_45A620@<eax>(int a1@<esi>, int a2)
int sub_45A620(int a1, int a2)
{
	int result; // eax
	int v3; // ST0C_4
	int v4; // esi
	int v5; // [esp+10h] [ebp-4h]
	int retaddr; // [esp+14h] [ebp+0h]

	result = 0;
	v5 = 0;
	if (dword_4C23D8)
	{
		v3 = a1;
		v4 = a2;
		if ((*(int(__stdcall **)(int, int *, int *, int))(*(_DWORD *)a2 + 16))(a2, &v5, &a2, v3))
			retaddr = 0;
		(*(void(**)(void))(*(_DWORD *)v4 + 72))();
		result = v5;
	}
	return result;
}

signed int sub_458650()
{
	if (dword_4C22D8 & 1)
		return 0;
	SetCursor(0);
	return 1;
}

int sub_456CD0()
{
	int result; // eax

	result = GetKeyState(20) & 1;
	dword_4C1D78 = result;
	return result;
}

signed int __cdecl sub_458800(HWND a1, int a2, int a3, int a4)
{
	HDC v4; // esi
	int v5; // ebx
	unsigned int v6; // esi
	_DWORD *v7; // eax
	LOGPALETTE *v8; // eax
	signed int v9; // eax
	HDC v10; // edi
	HPALETTE v11; // eax

	hWnd = a1;
	sub_4577C0(byte_4C2298);
	sub_458E10(byte_4C2298);
	v4 = GetDC(hWnd);
	v5 = GetDeviceCaps(v4, 14);
	dword_4C71CC = GetDeviceCaps(v4, 12) * v5;
	if (dword_4C71CC == 8)
		dword_4C22EC = 1;
	dword_4C71A0 = GetDeviceCaps(v4, 8);
	dword_4C71A4 = GetDeviceCaps(v4, 10);
	ReleaseDC(hWnd, v4);
	sub_457C50(&unk_4C22DC, &unk_4C22DC, &unk_4C22DC, &unk_4C22DC);
	v6 = a4 * a3 * a2;
	v7 = (_DWORD *)sub_457B70(v6 + 1064);
	dword_4C2308 = v7;
	dword_4C230C = (int)(v7 + 10);
	dword_4C2304 = (int)(v7 + 266);
	*v7 = 40;
	*((_WORD *)dword_4C2308 + 6) = 1;
	*((_WORD *)dword_4C2308 + 7) = 8;
	*((_DWORD *)dword_4C2308 + 5) = v6;
	*((_DWORD *)dword_4C2308 + 1) = a2;
	*((_DWORD *)dword_4C2308 + 2) = -a3;
	*((_DWORD *)dword_4C2308 + 4) = 0;
	*((_DWORD *)dword_4C2308 + 6) = 0;
	*((_DWORD *)dword_4C2308 + 7) = 0;
	*((_DWORD *)dword_4C2308 + 8) = 0;
	*((_DWORD *)dword_4C2308 + 9) = 0;
	memset((void *)dword_4C230C, 0, 0x400u);
	v8 = (LOGPALETTE *)sub_457B70(0x408u);
	plpal = v8;
	if (v8 == (LOGPALETTE *)-1)
	{
		plpal = 0;
	}
	else
	{
		v8->palVersion = 768;
		v9 = 0;
		plpal->palNumEntries = 256;
		do
		{
			plpal->palPalEntry[v9].peRed = *(_BYTE *)(v9 * 4 + dword_4C230C + 2);
			plpal->palPalEntry[v9].peGreen = *(_BYTE *)(v9 * 4 + dword_4C230C + 1);
			plpal->palPalEntry[v9].peBlue = *(_BYTE *)(v9 * 4 + dword_4C230C);
			plpal->palPalEntry[v9].peFlags = 4;
			++v9;
		} while (v9 < 256);
		if (dword_4C22EC)
		{
			ho = CreatePalette(plpal);
			v10 = GetDC(hWnd);
			v11 = SelectPalette(v10, ho, 0);
			if (dword_479610 == (HPALETTE)-1)
				dword_479610 = v11;
			RealizePalette(v10);
			ReleaseDC(hWnd, v10);
		}
	}
	memset((void *)dword_4C2304, 0, v6);
	dword_4C22E4 = sub_458160(&dwVolume);
	dword_4C22E8 = sub_4582D0(&pdwVolume);
	return 1;
}

char *__cdecl sub_4577C0(char *a1)
{
	unsigned int v1; // ecx
	char *result; // eax
	char v3; // dl
	int v4; // esi
	char *v5; // edi
	const void *v6; // esi
	int v7; // edx
	char v8; // cl

	*a1 = 0;
	v1 = strlen(*(const char **)dword_4C2614) + 1;
	result = a1;
	v3 = v1;
	v4 = *(_DWORD *)dword_4C2614;
	v1 >>= 2;
	memcpy(a1, *(const void **)dword_4C2614, 4 * v1);
	v6 = (const void *)(v4 + 4 * v1);
	v5 = &a1[4 * v1];
	LOBYTE(v1) = v3;
	v7 = 0;
	memcpy(v5, v6, v1 & 3);
	while (1)
	{
		v8 = *result;
		if (!*result)
			break;
		if (v8 == 58 || v8 == 92)
			v7 = (int)&result[1 - (_DWORD)a1];
		++result;
	}
	if (v7)
		a1[v7] = 0;
	return result;
}

int __cdecl sub_458E10(char *a1)
{
	int result; // eax
	int v2; // ecx
	unsigned int v3; // kr04_4

	result = 0;
	v3 = strlen(a1) + 1;
	v2 = v3 - 1;
	if (v3 != 1 && a1[v2 - 1] != 92)
	{
		a1[v2] = 92;
		a1[v3] = 0;
	}
	return result;
}

DWORD __cdecl sub_457C50(DWORD *a1, DWORD *a2, DWORD *a3, DWORD *a4)
{
	DWORD result; // eax
	struct _MEMORYSTATUS Buffer; // [esp+0h] [ebp-20h]

	Buffer.dwLength = 32;
	GlobalMemoryStatus(&Buffer);
	*a1 = Buffer.dwTotalPhys;
	*a2 = Buffer.dwAvailPhys;
	result = Buffer.dwTotalVirtual;
	*a3 = Buffer.dwTotalVirtual;
	*a4 = Buffer.dwAvailVirtual;
	return result;
}

int __cdecl sub_457B70(size_t a1)
{
	void *v1; // eax
	int v2; // esi
	size_t v3; // ecx
	int result; // eax

	v1 = malloc(a1);
	v2 = (int)v1;
	if (v1)
	{
		v3 = _msize(v1) + dword_4C1E90;
		result = v2;
		dword_4C1E90 = v3;
	}
	else
	{
		// TODO : sub_45B29E
		/*if (dword_4C1E94)
			sub_45B29E(dword_4C1E94);
			.text:0045B29E
			.text : 0045B29E; == == == == == == == = S U B R O U T I N E == == == == == == == == == == == == == == == == == == == =
			.text : 0045B29E
			.text : 0045B29E
			.text : 0045B29E sub_45B29E      proc near; CODE XREF : sub_42C7E0 + 27↑p
			.text : 0045B29E; sub_42EE20 + 7D↑p ...
			.text : 0045B29E
			.text : 0045B29E arg_0 = dword ptr  8
			.text : 0045B29E
			.text : 0045B29E                 enter   0, 0
			.text : 0045B2A2                 mov     eax, [ebp + arg_0]
			.text : 0045B2A5                 cmp     byte ptr[eax], 0
			.text : 0045B2A8                 jz      short loc_45B2B5
			.text : 0045B2AA                 push[ebp + arg_0]
			.text : 0045B2AD                 call    sub_458F00
			.text : 0045B2B2                 add     esp, 4
			.text : 0045B2B5
			.text : 0045B2B5 loc_45B2B5 : ; CODE XREF : sub_45B29E + A↑j
			.text : 0045B2B5                 cli
			.text : 0045B2B6                 mov     ebp, dword_4A18A8
			.text : 0045B2BC                 mov     ss, word_4A18A4
			.text : 0045B2C2                 mov     esp, dword_4A18A0
			.text : 0045B2C8                 sti
			.text : 0045B2C9                 push    dword_4A18AC
			.text : 0045B2CF                 mov     eax, 0FFFFFFFFh
			.text : 0045B2D4                 retn
			.text : 0045B2D4 sub_45B29E      endp
			.text : 0045B2D4*/
		result = v2;
	}
	return result;
}

int __cdecl sub_458160(LPDWORD pdwVolume)
{
	signed int v1; // edi
	HWAVEOUT v2; // esi
	struct tagWAVEOUTCAPSA pwoc; // [esp+10h] [ebp-34h]

	v1 = waveOutGetNumDevs();
	v2 = 0;
	if (v1 <= 0)
		return 0;
	while (waveOutGetDevCapsA((UINT_PTR)v2, &pwoc, 0x34u) || waveOutGetVolume(v2, pdwVolume))
	{
		v2 = (HWAVEOUT)((char *)v2 + 1);
		if ((signed int)v2 >= v1)
			return 0;
	}
	return 1;
}

int __cdecl sub_4582D0(LPDWORD pdwVolume)
{
	signed int v1; // edi
	UINT_PTR v2; // esi
	UINT_PTR v3; // esi
	struct tagAUXCAPSA pac; // [esp+10h] [ebp-30h]

	v1 = auxGetNumDevs();
	v2 = 0;
	if (v1 <= 0)
	{
	LABEL_6:
		v3 = 0;
		if (v1 <= 0)
			return 0;
		while (auxGetDevCapsA(v3, &pac, 0x30u) || !(pac.wTechnology & 2) || auxGetVolume(v3, pdwVolume))
		{
			if ((signed int)++v3 >= v1)
				return 0;
		}
	}
	else
	{
		while (auxGetDevCapsA(v2, &pac, 0x30u) || !(pac.wTechnology & 1) || auxGetVolume(v2, pdwVolume))
		{
			if ((signed int)++v2 >= v1)
				goto LABEL_6;
		}
	}
	return 1;
}

int sub_457820()
{
	return dword_4C2304;
}

int sub_458B00()
{
	int result; // eax

	if (!dword_4C22F8)
		sub_458A70();
	if (uTimerID)
		timeKillEvent(uTimerID);
	if (dword_4C22F0)
	{
		sub_45D0D0();
		dword_4C22F0 = 0;
	}
	if (dword_4C2308)
	{
		sub_457C20(dword_4C2308);
		dword_4C2308 = 0;
	}
	if (mciId != -1)
	{
		mciSendCommandA(mciId, 0x804u, 0, 0);
		mciId = -1;
	}
	if (dword_4C22E4)
		sub_4581C0(dwVolume);
	result = dword_4C22E8;
	if (dword_4C22E8)
		result = sub_458240(pdwVolume);
	return result;
}

int __cdecl sub_4581C0(DWORD dwVolume)
{
	signed int v1; // edi
	HWAVEOUT v2; // esi
	struct tagWAVEOUTCAPSA pwoc; // [esp+10h] [ebp-34h]

	v1 = waveOutGetNumDevs();
	v2 = 0;
	if (v1 <= 0)
		return 0;
	while (waveOutGetDevCapsA((UINT_PTR)v2, &pwoc, 0x34u) || waveOutSetVolume(v2, dwVolume))
	{
		v2 = (HWAVEOUT)((char *)v2 + 1);
		if ((signed int)v2 >= v1)
			return 0;
	}
	return 1;
}

int __cdecl sub_458240(DWORD dwVolume)
{
	signed int v1; // edi
	UINT_PTR v2; // esi
	UINT_PTR v3; // esi
	struct tagAUXCAPSA pac; // [esp+10h] [ebp-30h]

	v1 = auxGetNumDevs();
	v2 = 0;
	if (v1 <= 0)
	{
	LABEL_6:
		v3 = 0;
		if (v1 <= 0)
			return 0;
		while (auxGetDevCapsA(v3, &pac, 0x30u) || !(pac.wTechnology & 2) || auxSetVolume(v3, dwVolume))
		{
			if ((signed int)++v3 >= v1)
				return 0;
		}
	}
	else
	{
		while (auxGetDevCapsA(v2, &pac, 0x30u) || !(pac.wTechnology & 1) || auxSetVolume(v2, dwVolume))
		{
			if ((signed int)++v2 >= v1)
				goto LABEL_6;
		}
	}
	return 1;
}

//int __usercall sub_45B27D@<eax>(int a1@<ebp>, int a2)
int sub_45B27D(int a1, int a2)
{
	int retaddr; // [esp+0h] [ebp+0h]

	dword_4A18A0 = (int)&a2;
	dword_4A18A8 = a1;
	word_4A18A4 = __SS__;
	dword_4A18AC = retaddr;
	return 0;
}

void sub_42EF70()
{
	HFILE v0; // eax
	HFILE v1; // eax
	int v2; // eax
	int *v3; // eax
	int v4; // eax
	char *v5; // ebp
	char *v6; // ebx
	int v7; // eax
	int v8; // eax
	int *v9; // eax
	int *v10; // eax
	int *v11; // eax
	int *v12; // eax
	int *v13; // eax
	int *v14; // eax
	int *v15; // eax
	int *v16; // eax
	int *v17; // eax
	int *v18; // eax
	int *v19; // eax
	int *v20; // eax
	const CHAR *v21; // eax
	void *v22; // ST28_4
	UINT v23; // ST2C_4
	void *v24; // ST1C_4
	UINT v25; // ST20_4
	void *v26; // ST10_4
	UINT v27; // ST14_4
	void *v28; // ST38_4
	UINT v29; // ST3C_4
	void *v30; // ST2C_4
	UINT v31; // ST30_4
	void *v32; // ST20_4
	UINT v33; // ST24_4
	void *v34; // ST14_4
	UINT v35; // ST18_4
	void *v36; // ST08_4
	UINT v37; // ST0C_4
	void *v38; // ST40_4
	UINT v39; // ST44_4
	void *v40; // ST34_4
	UINT v41; // ST38_4
	void *v42; // ST28_4
	UINT v43; // ST2C_4
	void *v44; // ST1C_4
	UINT v45; // ST20_4
	void *v46; // ST10_4
	UINT v47; // ST14_4
	void *v48; // ST44_4
	UINT v49; // ST48_4
	void *v50; // ST38_4
	UINT v51; // ST3C_4
	void *v52; // ST2C_4
	UINT v53; // ST30_4
	void *v54; // ST20_4
	UINT v55; // ST24_4
	void *v56; // ST0C_4
	UINT v57; // ST10_4
	void *v58; // ST44_4
	UINT v59; // ST48_4
	const CHAR *v60; // ST3C_4
	const CHAR *v61; // eax
	int v62; // edi
	int v63; // eax
	void *v64; // [esp+0h] [ebp-14h]
	UINT v65; // [esp+4h] [ebp-10h]
	int v66; // [esp+10h] [ebp-4h]

	sub_457B60((int)aErrorMemoryAll);
	sub_42ED30();
	sub_457B10(
		(int(__cdecl *)(unsigned int, unsigned int))sub_46C830,
		sub_46CB70,
		sub_46CAB0,
		sub_46C970,
		sub_46CBA0,
		(int(__cdecl *)(LPCSTR, int, int))sub_46CCB0,
		(int(__cdecl *)(int))sub_46CD60);
	sub_46D320(aData);
	sub_42EE20(0);
	v0 = sub_458360(0);
	if (v0 == 8)
	{
		byte_4C37E0 = 65; // byte_4C37E0 = A
		byte_4C37E1 = 0;
		strcat(&byte_4C37E0, (const char *)&asc_478250);	// byte_4C37E0 = A:\\ 
		strcpy(byte_4C1E98, &byte_4C37E0);					// byte_4C1E98 = A:\\ 
		strcat(byte_4C1E98, aHslPak);						// byte_4C1E98 = A:\\HSL.PAK
		_beep((unsigned int)byte_4C1E98, 0);
	}
	sub_457910(v0);
	strcpy(byte_4C1E98, &byte_4C37E0);
	strcat(byte_4C1E98, aMoviePak);
	_beep((unsigned int)byte_4C1E98, 0);
	sub_457910(v1);
	sub_46113B(0);
	sub_458500();
	if (dword_4C1AE8)
		sub_458510();
	v66 = 0;
	if (dword_4C1AF4 == -1)
		v66 = 1;
	dword_4C1AF4 = 0;
	if (sub_459B60(9, 20, (int)&dword_477DE8, (int)aWav, v66))
		dword_4C1AF4 = 1;
	dword_4C1AF8 = 1;
	sub_458220(dword_477C20);
	sub_42C1E0();
	// 2000000 9 17408000 ? 1000 
	if (sub_46D14C(0x1E8480u, (int)&asc_477980, 0x109A000u, dword_4C1E04, 1000, (int)&off_477C2C))
	{
		sub_46D187(640, 480);
		sub_42D270((int)&unk_42D7A0);
		sub_45FB5C();
		v2 = sub_45FC01(aShapeNullShp);
		sub_45FBE9(v2);
		v3 = sub_42CD10(aDataGlobalObs);
		sub_45DC5C((int)v3, 0, (int)sub_42CDD0);
		v4 = sub_457820();
		sub_4613A6(v4, 1280);
		v5 = (char *)sub_457B70(0x2800u);
		v6 = (char *)sub_457B70(0x2800u);
		strcpy(v5, (const char *)sub_42CD10(aDataFont15));
		strcpy(v6, (const char *)sub_42CD10(aDataAscfont15));
		sub_460ACE((int)v5, (int)v6, 0, (void *)0x10, 15, (void *)8, 15, (void *)2);
		dword_4C1ADC = v7;
		if (v7 == -1)
		{
			sub_458F00(aFontLoadError);
		}
		else
		{
			strcpy(v5, (const char *)sub_42CD10(aDataFont24));
			strcpy(v6, (const char *)sub_42CD10(aDataAscfont24));
			sub_460ACE((int)v5, (int)v6, 0, (void *)0x18, 24, (void *)0xC, 24, 0);
			dword_4C1AE0 = v8;
			if (dword_4C1ADC == -1)
			{
				sub_458F00(aFontLoadError);
			}
			else
			{
				sub_457C20(v6);
				sub_457C20(v5);
				dword_4C1B44 = sub_457B70(0x28A4u);
				dword_4C1B48 = sub_457B70(0x190u);
				dword_4C1B4C = sub_457B70(0x190u);
				v9 = sub_42CD10(aDataShapedefTx);
				sub_446800((int)v9);
				v10 = sub_42CD10(aDataAnimalTxt);
				sub_446D30((int)v10);
				v11 = sub_42CD10(aDataEffectsTxt);
				sub_447260((int)v11);
				v12 = sub_42CD10(aDataObjcomdTxt);
				sub_447440((int)v12);
				v13 = sub_42CD10(aDataResourceTx);
				sub_447720((int)v13);
				v14 = sub_42CD10(aDataItemTxt);
				sub_4477C0((int)v14);
				v15 = sub_42CD10(aDataPlayersTxt);
				sub_44B980((int)v15);
				v16 = sub_42CD10(aDataRangeTxt);
				sub_44D300((int)v16);
				v17 = sub_42CD10(aDataSpecialTxt);
				sub_44D4B0((int)v17);
				v18 = sub_42CD10(aDataMagicTxt);
				sub_44D910((int)v18);
				v19 = sub_42CD10(aDataTrackTxt);
				sub_44DE20((int)v19);
				v20 = sub_42CD10(aDataTowndefTxt);
				sub_44E110((int)v20);
				sub_44CCE0((int)&unk_4C1C78);
				v21 = (const CHAR *)sub_4477B0(193);
				sub_457840(v21);
				dword_4C1B78 = sub_457B70(0x2800u);
				memset((void *)dword_4C1B78, 0, 0x2800u);
				dword_4C1B7C = sub_457B70(0x1400u);
				memset((void *)dword_4C1B7C, 0, 0x1400u);
				dword_4C1B80 = sub_457B70(0x2800u);
				memset((void *)dword_4C1B80, 0, 0x2800u);
				dword_4C1B84 = sub_457B70(0x1400u);
				memset((void *)dword_4C1B84, 0, 0x1400u);
				dword_4C1B88 = sub_457B70(0x1400u);
				memset(&unk_4C3860, 0, 0xB0u);
				dword_4C1B30 = sub_45FC01(aShapeIconboxSh);
				dword_4C1B34 = sub_45FC01(aShapeIRect01Sh);
				dword_4C3460 = 0;
				sub_460173(aShapeMagicon1S, 0, v22, v23);
				dword_4C3460 = sub_45FC01(aShapeMagicon1S);
				sub_460173(aShapeMagicon2S, 0, v24, v25);
				dword_4C3464 = sub_45FC01(aShapeMagicon2S);
				sub_460173(aShapeMagicon3S, 0, v26, v27);
				dword_4C3468 = sub_45FC01(aShapeMagicon3S);
				sub_460173(aShapeMagicon4S, 0, v64, v65);
				dword_4C346C = sub_45FC01(aShapeMagicon4S);
				sub_460173(aShapeMagicon5S, 0, v28, v29);
				dword_4C3470 = sub_45FC01(aShapeMagicon5S);
				sub_460173(aShapeIStaffShp, 0, v30, v31);
				dword_4C30A0 = sub_45FC01(aShapeIStaffShp);
				sub_460173(aShapeISwordShp, 0, v32, v33);
				dword_4C30A4 = sub_45FC01(aShapeISwordShp);
				sub_460173(aShapeIBowShp, 0, v34, v35);
				dword_4C30A8 = sub_45FC01(aShapeIBowShp);
				sub_460173(aShapeIAxeShp, 0, v36, v37);
				dword_4C30AC = sub_45FC01(aShapeIAxeShp);
				sub_460173(aShapeISpearShp, 0, v38, v39);
				dword_4C30B0 = sub_45FC01(aShapeISpearShp);
				sub_460173(aShapeIDaggerSh, 0, v40, v41);
				dword_4C30B4 = sub_45FC01(aShapeIDaggerSh);
				sub_460173(aShapeIHelmetSh, 0, v42, v43);
				dword_4C30C0 = sub_45FC01(aShapeIHelmetSh);
				sub_460173(aShapeIArmorShp, 0, v44, v45);
				dword_4C30C4 = sub_45FC01(aShapeIArmorShp);
				sub_460173(aShapeIBootShp, 0, v46, v47);
				dword_4C30C8 = sub_45FC01(aShapeIBootShp);
				sub_460173(aShapeIOtherShp, 0, v48, v49);
				dword_4C30CC = sub_45FC01(aShapeIOtherShp);
				sub_460173(aShapeIUseShp, 0, v50, v51);
				dword_4C30D0 = sub_45FC01(aShapeIUseShp);
				sub_460173(aShapeIClawShp, 0, v52, v53);
				dword_4C30B8 = sub_45FC01(aShapeIClawShp);
				sub_460173(aShapeIStingShp, 0, v54, v55);
				dword_4C30BC = sub_45FC01(aShapeIStingShp);
				dword_4C2C9C = sub_45FC01(aShapeStat0101S);
				dword_4C3078 = sub_45FC01(aShapeNum600Shp);
				sub_460173(aShapePlrSh01Sh, 0, v56, v57);
				sub_460173(aShapePlrSh02Sh, 0, v58, v59);
				dword_4C3478 = sub_45FC01(aShapePlrSh01Sh);
				dword_4C2C98 = sub_45FC01(aShapeWindow50S);
				if (!dword_4C1AF4 && !v66)
				{
					v60 = (const CHAR *)sub_4477B0(136);
					v61 = (const CHAR *)sub_4477B0(135);
					sub_457860(v61, v60, 0);
				}
				v62 = dword_4C1BA8;
				if (dword_4C1B04 & 0xC0000000)
					v62 = dword_4C1B0C;
				sub_42C7E0();
				sub_42CC10(v62, v62);
				if (!sub_458520())
				{
					do
					{
						v63 = dword_477C18;
						dword_4C1BA4 = dword_477C18;
						if (dword_477C18 == -1)
						{
							v63 = dword_4C1BB8;
							dword_4C1BA4 = dword_4C1BB8;
						}
						else
						{
							dword_477C18 = -1;
						}
						if (!v63)
							dword_4C1BA4 = 1;
						sub_42DA60(dword_4C1BA8);
					} while (!(dword_4C1B00 & 0x20000000) && !sub_458520());
				}
				sub_46C3B0();
				sub_46D1B7();
				sub_459C70();
				if (dword_4C1B04 < 0)
				{
					if (uBytes)
					{
						sub_4578F0(hFile, lpBuffer, uBytes);
						uBytes = 0;
					}
					sub_457910(hFile);
					if (lpBuffer)
						sub_457C20((void *)lpBuffer);
				}
				if (dword_4C1B04 & 0x40000000)
					sub_457C20((void *)lpBuffer);
				sub_42EC30();
			}
		}
	}
}
int __cdecl sub_457B60(int a1)
{
	int result; // eax

	result = a1;
	dword_4C1E94 = a1;
	return result;
}

void sub_42ED30()
{
	char *v0; // ebx
	HFILE v1; // eax
	HFILE v2; // esi
	int Buffer; // [esp+4h] [ebp-Ch]
	int v4; // [esp+8h] [ebp-8h]
	__int16 v5; // [esp+Ch] [ebp-4h]

	v0 = (char *)sub_457B70(0x400u);
	if (v0)
	{
		strcpy(v0, byte_4C2298);
		strcat(v0, aSaves);
		strcat(v0, aHslCfg);
		_beep((unsigned int)v0, 0);
		v2 = v1;
		if (v1 != -1)
		{
			sub_4578D0(v1, &Buffer, 0xCu);
			sub_457910(v2);
			dword_477C20 = Buffer;
			dword_477C24 = v4;
			LOWORD(dword_477C14) = v5;
		}
		sub_457C20(v0);
	}
}

UINT __cdecl sub_4578D0(HFILE hFile, LPVOID lpBuffer, UINT uBytes)
{
	return lread(hFile, lpBuffer, uBytes);
}

HFILE __cdecl sub_457910(HFILE hFile)
{
	return lclose(hFile);
}

int(__cdecl *__cdecl sub_457B10(int(__cdecl *a1)(unsigned int, unsigned int), int(__cdecl *a2)(HFILE hFile), int(__cdecl *a3)(HFILE hFile, LPVOID lpBuffer, UINT uBytes), int(__cdecl *a4)(HFILE hFile), int(__cdecl *a5)(HFILE hFile, LONG lOffset, int iOrigin), int(__cdecl *a6)(LPCSTR lpFileName, int, int), int(__cdecl *a7)(int)))(int)
{
	int(__cdecl *result)(int); // eax

	off_4795DC = a1;
	off_4795E8 = a2;
	off_4795E4 = a3;
	off_4795E0 = a4;
	result = a7;
	off_4795EC = a5;
	off_4795F0 = a6;
	off_4795F4 = a7;
	return result;
}

void __cdecl sub_46C830(unsigned int a1, unsigned int a2)
{
	int v2; // esi

	if (sub_46C600((unsigned __int8 *)a1) == -1)
	{
		_beep(a1, a2);
	}
	else
	{
		v2 = sub_46C640();
		sub_46C780(v2, a1);
	}
}

int __cdecl sub_46C600(unsigned __int8 *a1)
{
	int result; // eax
	int v2; // edx
	int *v3; // ecx

	if (!dword_4C2444)
		return -1;
	result = dword_4C2444 - 1;
	v2 = *a1;
	if (dword_4C2444 - 1 < 0)
		return -1;
	v3 = &dword_4C71E8[8 * result];
	while (v2 < *(v3 - 1) || v2 > *v3)
	{
		--result;
		v3 -= 8;
		if (result < 0)
			return -1;
	}
	return result;
}

signed int sub_46C640()
{
	signed int result; // eax
	int *v1; // ecx

	result = 0;
	v1 = dword_4C72A4;
	while (*v1)
	{
		v1 += 7;
		++result;
		if ((signed int)v1 >= (signed int)&unk_4C73BC)
			return -1;
	}
	return result;
}

signed int __cdecl sub_46C780(int a1, int a2)
{
	int *v2; // eax
	int v3; // ecx

	if (a1 == -1)
		return -1;
	v2 = (int *)sub_46C6A0((unsigned __int8 *)a2, 0);
	if (v2 == (int *)-1)
		return -1;
	v3 = 7 * a1;
	dword_4C72A0[v3] = *v2;
	dword_4C72A4[v3] = v2[1];
	dword_4C72A8[v3] = v2[2];
	dword_4C72AC[v3] = 0;
	dword_4C72B4[v3] = (int)v2;
	dword_4C72B8[v3] = dword_4C244C;
	return 0;
}

signed int __cdecl sub_46C6A0(unsigned __int8 *a1, int a2)
{
	unsigned __int8 *v2; // ST08_4
	int v3; // edi
	int v4; // ebp
	int v5; // ebx
	int v6; // edi
	int v7; // esi
	int v8; // eax
	int v10; // [esp+14h] [ebp+4h]

	if (dword_4C2444)
	{
		v2 = a1;
		v3 = *a1;
		v10 = *a1;
		v4 = sub_46C660((int)v2);
		if (!a2)
		{
			v5 = dword_4C2444 - 1;
			goto LABEL_6;
		}
		v5 = dword_4C2448;
		v6 = dword_4C24A0;
		v7 = dword_4C24A4;
		while (1)
		{
			v6 -= 44;
			--v7;
		LABEL_11:
			if (v7 <= 0)
				break;
			if (*(_DWORD *)(v6 + 4) && !sub_45B577(v4, (char *)(v6 + 12), 32))
			{
				dword_4C244C = v5;
				if (!dword_4C09D0)
				{
					dword_4C2448 = v5;
					dword_4C24A0 = v6;
					dword_4C24A4 = v7;
				}
				return v6;
			}
		}
		v3 = v10;
		while (1)
		{
			--v5;
		LABEL_6:
			if (v5 < 0)
				break;
			v8 = 8 * v5;
			if (v3 >= dword_4C71E4[8 * v5] && v3 <= dword_4C71E8[v8])
			{
				v7 = dword_4C71EC[v8];
				if (v7)
				{
					v6 = dword_4C71FC[v8] + 44 * v7 - 44;
					goto LABEL_11;
				}
			}
		}
	}
	return -1;
}

int __cdecl sub_46C660(int a1)
{
	int v1; // edx

	v1 = a1;
	if (dword_4C24A8)
	{
		if (strlen((const char *)a1) > 2 && *(_BYTE *)(a1 + 1) == 58)
		{
			v1 = a1 + 2;
			if (*(_BYTE *)(a1 + 2) == 92)
				v1 = a1 + 3;
		}
	}
	return v1;
}

signed int __cdecl sub_45B577(int a1, char *a2, int a3)
{
	char *v3; // edi
	int v4; // edx
	char v5; // ah
	int v6; // ecx
	unsigned __int8 v7; // al
	char v8; // al
	unsigned __int8 v9; // bl

	v3 = a2;
	v4 = 0;
	v5 = 0;
	v6 = a3;
LABEL_4:
	while (1)
	{
		v7 = *(_BYTE *)(a1 + v4++);
		if (v7 == 42)
			break;
		v9 = *v3;
		if (v7 >= 0x61u && v7 <= 0x7Au)
			v7 -= 32;
		if (v9 >= 0x61u && v9 <= 0x7Au)
			v9 -= 32;
		if (v7 == v9)
		{
			if (!v7)
				return 0;
		}
		else if (v7 != 63)
		{
			return -1;
		}
		++v3;
		if (!--v6)
			return 0;
	}
	if (!v5)
	{
		while (1)
		{
			v8 = *(_BYTE *)(a1 + v4++);
			if (!v8)
				break;
			if (v8 == 46)
			{
				while (1)
				{
					v5 = *v3++;
					if (!v5)
						return 0;
					if (!--v6)
						return 0;
					if (v5 == 92)
						return -1;
					if (v5 == 46)
						goto LABEL_4;
				}
			}
		}
	}
	return 0;
}

int __cdecl sub_46CB70(HFILE hFile)
{
	int result; // eax

	if (hFile < 20000 || hFile >= 20010)
		result = sub_457980(hFile);
	else
		result = dword_4C72A0[7 * (hFile - 20000)];
	return result;
}

int __cdecl sub_457980(HFILE hFile)
{
	LONG v1; // edi
	int v2; // ebx

	v1 = sub_457960(hFile, 0, 1);
	v2 = sub_457960(hFile, 0, 2);
	sub_457960(hFile, v1, 0);
	return v2;
}

// 从 origin 跳过 offset 
// case 0: /* SEEK_SET */
// case 1: /* SEEK_CUR */
// case 2: /* SEEK_END */
LONG __cdecl sub_457960(HFILE hFile, LONG lOffset, int iOrigin)
{
	return llseek(hFile, lOffset, iOrigin);
}

int __cdecl sub_46CAB0(HFILE hFile, LPVOID lpBuffer, UINT uBytes)
{
	int v3; // esi
	LONG v4; // edi
	HFILE *v5; // ebx
	int result; // eax
	int v7; // edx
	int v8; // ecx
	signed int v9; // eax

	if (hFile < 20000 || hFile >= 20010)
		return sub_4578D0(hFile, lpBuffer, uBytes);
	v3 = 7 * (hFile - 20000);
	v4 = dword_4C72AC[v3] + dword_4C72A4[v3];
	v5 = &dword_4C71E0[8 * dword_4C72B8[v3]];
	if (sub_457960(*v5, v4, 0) != v4)
		return 0;
	v7 = dword_4C72AC[v3];
	v8 = uBytes;
	v9 = dword_4C72A0[v3];
	if ((signed int)(uBytes + v7) > v9)
		v8 = v9 - v7;
	if (v8 <= 0)
		return 0;
	result = sub_4578D0(*v5, lpBuffer, v8);
	dword_4C72AC[v3] += result;
	return result;
}

HFILE __cdecl sub_46C970(HFILE hFile)
{
	HFILE result; // eax

	if (hFile < 20000 || hFile >= 20010)
		return sub_457910(hFile);
	result = 0;
	if (dword_4C72A4[7 * (hFile - 20000)])
	{
		result = sub_46C7F0(hFile - 20000);
		dword_4C72A4[7 * (hFile - 20000)] = 0;
	}
	return result;
}

int __cdecl sub_46C7F0(int a1)
{
	int v1; // eax

	v1 = 7 * a1;
	if (dword_4C72B0[7 * a1])
	{
		dword_4C72B0[v1] = 0;
		dword_4C71F8[8 * dword_4C72B8[v1]] |= 1u;
	}
	return 0;
}

int __cdecl sub_46CBA0(HFILE hFile, LONG lOffset, int iOrigin)
{
	int v3; // edx
	int result; // eax
	int v5; // ecx
	int v6; // edx

	if (hFile < 20000 || hFile >= 20010)
		return sub_457960(hFile, lOffset, iOrigin);
	v3 = hFile - 20000;
	if (!iOrigin)
		goto LABEL_17;
	if (iOrigin == 1)
	{
		result = dword_4C72AC[7 * v3] + lOffset;
		goto LABEL_9;
	}
	if (iOrigin != 2)
	{
	LABEL_17:
		result = lOffset;
		goto LABEL_9;
	}
	result = dword_4C72A0[7 * v3] + lOffset;
LABEL_9:
	v5 = 7 * v3;
	v6 = dword_4C72A0[7 * v3];
	if (result > v6)
		result = v6;
	if (result < 0)
		result = 0;
	dword_4C72AC[v5] = result;
	return result;
}

char *__cdecl sub_46CCB0(LPCSTR lpFileName, int a2, int a3)
{
	char *result; // eax

	if (sub_46C600((unsigned __int8 *)lpFileName) == -1)
	{
		dword_4C09D0 = -1;
		result = (char *)sub_4579E0(lpFileName, a2, a3);
	}
	else if (a2 == 16)
	{
		result = (char *)-1;
	}
	else
	{
		dword_4C09D0 = 0;
		strcpy((char *)&unk_4C2450, lpFileName);
		result = (char *)sub_46C6A0((unsigned __int8 *)lpFileName, 0);
		dword_4C09D0 = 1;
		if (result != (char *)-1)
		{
			sub_458DC0((void *)a3, (int)(result + 12));
			result = 0;
		}
	}
	return result;
}

HANDLE __cdecl sub_4579E0(LPCSTR lpFileName, int a2, int a3)
{
	HANDLE result; // eax

	*(_BYTE *)a3 = 0;
	dword_4C2320 = ~(a2 + 32);
	result = FindFirstFileA(lpFileName, &FindFileData);
	hFindFile = result;
	if (result != (HANDLE)-1)
	{
		if (dword_4C2320 & FindFileData.dwFileAttributes)
		{
			result = (HANDLE)sub_457A60((char *)a3);
		}
		else
		{
			result = 0;
			strcat((char *)a3, FindFileData.cFileName);
		}
	}
	return result;
}

signed int __cdecl sub_457A60(char *a1)
{
	signed int result; // eax

	*a1 = 0;
	if (hFindFile == (HANDLE)-1)
		return -1;
	do
	{
		if (!FindNextFileA(hFindFile, &FindFileData))
		{
			FindClose(hFindFile);
			hFindFile = (HANDLE)-1;
			return -1;
		}
	} while (FindFileData.dwFileAttributes & dword_4C2320);
	result = 0;
	strcat(a1, FindFileData.cFileName);
	return result;
}

unsigned int __cdecl sub_458DC0(void *a1, int a2)
{
	int v2; // ecx
	int v3; // esi
	char v4; // al
	unsigned int result; // eax

	v2 = 0;
	v3 = 0;
	do
	{
		v4 = *(_BYTE *)(v2++ + a2);
		if (v4 == 58 || v4 == 92)
			v3 = v2;
	} while (v4);
	result = strlen((const char *)(v3 + a2)) + 1;
	memcpy(a1, (const void *)(v3 + a2), result);
	return result;
}

signed int __cdecl sub_46CD60(char *a1)
{
	signed int result; // eax

	if (dword_4C09D0 != 1)
		return sub_457A60(a1);
	dword_4C09D0 = 0;
	result = sub_46C6A0((unsigned __int8 *)&unk_4C2450, 1);
	dword_4C09D0 = 1;
	if (result != -1)
	{
		sub_458DC0(a1, result + 12);
		result = 0;
	}
	return result;
}

unsigned int __cdecl sub_46D320(const char *a1)
{
	unsigned int result; // eax

	result = strlen(a1) + 1;
	memcpy(&unk_4C2500, a1, result);
	return result;
}

int __cdecl sub_42EE20(int a1)
{
	int result; // eax

	sub_46C3B0();
	if (a1)
	{
		strcpy(byte_4C1E98, byte_4C2298);
		strcat(byte_4C1E98, aMoviePak);
		result = sub_46C410((unsigned int)byte_4C1E98, 0);
		if (result == -1)
		{
			strcpy(byte_4C1E98, &byte_4C37E0);
			strcat(byte_4C1E98, aMoviePak);
			result = sub_46C410((unsigned int)byte_4C1E98, 0);
		}
	}
	else
	{
		strcpy(byte_4C1E98, byte_4C2298);
		strcat(byte_4C1E98, aHslPak);
		result = sub_46C410((unsigned int)byte_4C1E98, 0);
		
		if (result == -1)
			result = sub_45B29E(aPakFileNotFoun);
			// TODO:sub_45B29E
			/*.text : 0045B29E
			.text : 0045B29E; == == == == == == == = S U B R O U T I N E == == == == == == == == == == == == == == == == == == == =
			.text:0045B29E
			.text : 0045B29E
			.text : 0045B29E sub_45B29E      proc near; CODE XREF : sub_42C7E0 + 27↑p
			.text : 0045B29E; sub_42EE20 + 7D↑p ...
			.text : 0045B29E
			.text : 0045B29E arg_0 = dword ptr  8
			.text : 0045B29E
			.text : 0045B29E                 enter   0, 0
			.text : 0045B2A2                 mov     eax, [ebp + arg_0]
			.text : 0045B2A5                 cmp     byte ptr[eax], 0
			.text : 0045B2A8                 jz      short loc_45B2B5
			.text : 0045B2AA                 push[ebp + arg_0]
			.text : 0045B2AD                 call    sub_458F00
			.text : 0045B2B2                 add     esp, 4
			.text : 0045B2B5
			.text : 0045B2B5 loc_45B2B5 : ; CODE XREF : sub_45B29E + A↑j
			.text : 0045B2B5                 cli
			.text : 0045B2B6                 mov     ebp, dword_4A18A8
			.text : 0045B2BC                 mov     ss, word_4A18A4
			.text : 0045B2C2                 mov     esp, dword_4A18A0
			.text : 0045B2C8                 sti
			.text : 0045B2C9                 push    dword_4A18AC
			.text : 0045B2CF                 mov     eax, 0FFFFFFFFh
			.text : 0045B2D4                 retn
			.text : 0045B2D4 sub_45B29E      endp
			.text : 0045B2D4*/
	}
	return result;
}

HFILE sub_46C3B0()
{
	HFILE result; // eax
	int v1; // edi
	void **v2; // esi

	result = dword_4C2444;
	if (dword_4C2444)
	{
		v1 = dword_4C2444 - 1;
		if (dword_4C2444 - 1 >= 0)
		{
			v2 = (void **)&dword_4C71FC[8 * v1];
			do
			{
				if (*(_BYTE *)(v2 - 1) & 1)
					sub_46C280(v1);
				free(*v2);
				result = sub_457910((HFILE)*(v2 - 7));
				--v1;
				v2 -= 8;
			} while (v1 >= 0);
		}
		dword_4C2444 = 0;
	}
	return result;
}

HFILE __cdecl sub_457910(HFILE hFile)
{
	return lclose(hFile);
}

signed int __cdecl sub_46C280(int a1)
{
	int v1; // esi
	const CHAR *v3; // ebp
	int v4; // edi
	CHAR *v5; // eax
	CHAR *v6; // ebx
	int v7; // edi
	UINT v8; // esi
	int v9; // [esp+0h] [ebp-10h]

	v1 = 8 * a1;
	if (sub_457960(dword_4C71E0[8 * a1], 4, 0) != 4)
		return -1;
	if (sub_4578F0(dword_4C71E0[v1], (LPCCH)&dword_4C71EC[v1], 4u) != 4)
		return -1;
	if (sub_4578F0(dword_4C71E0[v1], (LPCCH)&dword_4C71F4[v1], 4u) != 4)
		return -1;
	v3 = (const CHAR *)dword_4C71FC[v1];
	v4 = 44 * dword_4C71EC[v1];
	if (sub_457960(dword_4C71E0[v1], dword_4C71F4[v1], 0) != dword_4C71F4[v1])
		return -1;
	if (dword_4C71F0[v1])
	{
		v5 = (CHAR *)malloc(v4);
		v6 = v5;
		if (!v5)
			return -1;
		v7 = sub_45B016((int)v5, (int)v3, v4, v9);
		v8 = sub_4578F0(dword_4C71E0[v1], v6, v7);
		free(v6);
		if (v8 != v7)
			return -1;
	}
	else if (sub_4578F0(dword_4C71E0[v1], v3, v4) != v4)
	{
		return -1;
	}
	return 0;
}

UINT __cdecl sub_4578F0(HFILE hFile, LPCCH lpBuffer, UINT uBytes)
{
	return lwrite(hFile, lpBuffer, uBytes);
}

int __cdecl sub_45B016(int a1, int a2, int a3, int a4)
{
	char *v4; // esi
	int i; // ecx
	char v6; // al
	int v7; // eax
	int v8; // ecx
	int result; // eax

	dword_47963C = a4;
	if ((unsigned int)a3 <= 9)
	{
		sub_45AFF7(a1, a2, a3);
		result = a3;
	}
	else
	{
		sub_45A7B0();
		dword_479668 = a1;
		v4 = (char *)a2;
		for (i = a3; i; i = v8 - 1)
		{
			v6 = *v4++;
			sub_45A87B();
			sub_45ABD5(v7);
		}
		sub_45ABD5(-1);
		result = dword_479640;
	}
	return result;
}

int __cdecl sub_45AFF7(int a1, int a2, int a3)
{
	int v3; // ecx
	int v4; // edx
	int result; // eax
	unsigned __int8 v6; // of

	v3 = a3;
	v4 = 0;
	do
	{
		LOBYTE(result) = *(_BYTE *)(a2 + v4);
		*(_BYTE *)(a1 + v4++) = result;
		v6 = __OFSUB__(v3--, 1);
	} while (!((unsigned __int8)((v3 < 0) ^ v6) | (v3 == 0)));
	return result;
}

void sub_45A7B0()
{
	unsigned int v0; // ecx
	int *v1; // esi

	v0 = 0;
	do
	{
		v1 = &dword_47D46E[4 * v0];
		*v1 = -1;
		v1[1] = -1;
		if (v0 <= 0xFF)
			v1[2] = v0;
		if (v0 >= 0x101)
			word_47966C[v0 - 257] = v0;
		++v0;
	} while (v0 <= 0x2000);
	dword_479644 = -1;
	dword_479640 = 0;
	dword_47965C = 257;
	dword_479648 = -1;
	dword_479650 = 1;
}

void sub_45A87B()
{
	;
}

//void __cdecl __spoils<ecx> sub_45ABD5(int a1)
void __cdecl sub_45ABD5(int a1)
{
	bool v1; // cf

	if (dword_479650 == 1)
	{
		dword_47964C = 0;
		dword_479654 = 0;
		dword_479658 = 9;
		dword_479664 = 511;
		dword_479660 = a1;
		dword_479650 = -1;
	}
	else if (a1 == -1)
	{
		sub_45A8BC(dword_479660);
		sub_45A8BC(-1);
	}
	else if (dword_479648 == 1)
	{
		sub_45A8BC(dword_479660);
		sub_45A8BC(256);
		sub_45A8BC(2);
		sub_45AA43();
		sub_45AAD7(dword_479660, a1);
		dword_479660 = a1;
	}
	else if (sub_45AB7E(dword_479660, a1) == -1)
	{
		sub_45A8BC(dword_479660);
		sub_45AAD7(dword_479660, a1);
		dword_479660 = a1;
		v1 = (unsigned __int16)word_47966C[dword_47965C - 257] > (unsigned int)dword_479664
			&& (unsigned int)dword_479658 < 0xD;
		if (v1)
		{
			sub_45A8BC(256);
			sub_45A8BC(1);
			dword_479664 = (1 << ++dword_479658) - 1;
		}
	}
}

int __cdecl sub_45A8BC(int a1)
{
	__int16 v1; // ax
	int v2; // ebx
	int v3; // ecx
	int v4; // edx
	int v5; // et1
	int v7; // [esp+4h] [ebp-4h]

	v1 = a1;
	v2 = dword_47964C;
	v3 = dword_479658;
	v4 = dword_479654;
	if (a1 == -1)
	{
		if ((_BYTE)dword_479654)
			sub_45A881(dword_47964C);
	}
	else
	{
		do
		{
			BYTE1(v2) = 0;
			if (__CFRCR__(v1, 0))
				BYTE1(v2) = 1;
			BYTE1(v2) <<= v4;
			v5 = v4++;
			LOBYTE(v2) = BYTE1(v2) | v2;
			if ((unsigned int)(v5 + 1) >= 8)
			{
				v1 = sub_45A881(v2);
				v2 = 0;
				v4 = 0;
			}
			--v3;
		} while (v3);
		dword_47964C = v2;
		dword_479654 = v4;
	}
	return v7;
}

int __cdecl sub_45A881(char a1)
{
	int v1; // edi
	int v3; // [esp+4h] [ebp-4h]

	if (dword_479640 >= (unsigned int)dword_47963C)
	{
		dword_479640 = 0;
	}
	else
	{
		v1 = dword_479668;
		*(_BYTE *)dword_479668 = a1;
		dword_479668 = v1 + 1;
		++dword_479640;
	}
	return v3;
}

int sub_45AA43()
{
	int v0; // eax
	unsigned int v1; // edx
	int result; // eax

	sub_45A830(byte_49D47E, 0, 1024);
	v0 = 0;
	do
		v0 = sub_45A925(v0) + 1;
	while (v0 != 256);
	dword_47965C = 0x2000;
	v1 = 0x1FFF;
	do
	{
		if ((1 << (v1 & 7)) & (unsigned __int8)byte_49D47E[v1 >> 3])
			word_47966C[--dword_47965C - 257] = v1;
		--v1;
	} while (v1 >= 0x101);
	result = dword_47965C;
	if ((unsigned int)dword_47965C <= 0x1FFF)
		dword_479648 = -1;
	return result;
}

//void __cdecl __spoils<ecx> sub_45A830(_BYTE *a1, int a2, int a3)
void __cdecl sub_45A830(_BYTE *a1, int a2, int a3)
{
	int v3; // eax
	__int16 v4; // cx
	int v5; // eax
	int v6; // ecx
	_BYTE *v7; // edi
	unsigned __int8 v8; // of

	v3 = a2;
	BYTE1(v3) = a2;
	v4 = v3;
	v5 = v3 << 16;
	LOWORD(v5) = v4;
	v6 = a3;
	v7 = a1;
	if (a3 & 1)
	{
		*a1 = v5;
		v6 = a3 - 1;
		v7 = a1 + 1;
	}
	if (v6 & 2)
	{
		*v7 = v5;
		v6 -= 2;
		++v7;
	}
	if (v6)
	{
		do
		{
			*(_DWORD *)v7 = v5;
			v7 += 2;
			v8 = __OFSUB__(v6, 4);
			v6 -= 4;
		} while (!((unsigned __int8)((v6 < 0) ^ v8) | (v6 == 0)));
	}
}

int __cdecl sub_45A925(int a1)
{
	unsigned int v1; // esi
	int v2; // ecx
	int i; // eax
	char v4; // cf
	int v5; // eax
	int v6; // ecx
	unsigned int v7; // edi
	int v8; // ecx
	int v9; // eax
	int v10; // ecx
	int v12; // [esp+4h] [ebp-4h]

	v1 = dword_47D46E[4 * a1];
	v2 = 4 * dword_47D46E[4 * a1];
	for (i = dword_47D46E[v2];; i = dword_47D46E[v2])
	{
		v4 = v1 == -1 || i != -1 ? 0 : 1;
		if (!v4)
			break;
		v5 = dword_47D472[v2];
		dword_47D472[v2] = -1;
		dword_47D46E[4 * a1] = v5;
		byte_49D47E[v1 >> 3] |= 1 << (v1 & 7);
		v1 = dword_47D46E[4 * a1];
		v2 = 4 * dword_47D46E[4 * a1];
	}
	if (v1 != -1)
	{
		sub_45A925(v1);
		v7 = *(int *)((char *)dword_47D472 + v6);
		while (v7 != -1)
		{
			v8 = 4 * v7;
			if (dword_47D46E[4 * v7] == -1)
			{
				v9 = dword_47D472[v8];
				dword_47D472[v8] = -1;
				dword_47D472[4 * v1] = v9;
				byte_49D47E[v7 >> 3] |= 1 << (v7 & 7);
				v7 = dword_47D472[4 * v1];
			}
			else
			{
				v1 = v7;
				sub_45A925(v7);
				v7 = *(int *)((char *)dword_47D472 + v10);
			}
		}
	}
	return v12;
}

//void __cdecl __spoils<ecx> sub_45AAD7(int a1, int a2)
void __cdecl sub_45AAD7(int a1, int a2)
{
	int v2; // edi
	int v3; // ecx
	int v4; // eax
	int i; // ecx

	if ((unsigned int)dword_47965C <= 0x1FFF)
	{
		v2 = (unsigned __int16)word_47966C[dword_47965C++ - 257];
		v3 = 4 * v2;
		dword_47D46E[v3] = -1;
		dword_47D472[v3] = -1;
		dword_47D476[v3] = a2;
		v4 = dword_47D46E[4 * a1];
		if (v4 == -1)
		{
			dword_47D46E[4 * a1] = v2;
		}
		else
		{
			for (i = 4 * v4; dword_47D472[i] != -1; i = 4 * dword_47D472[i])
				;
			dword_47D472[i] = v2;
		}
		if ((unsigned int)dword_47965C > 0x1FFF)
			dword_479648 = 1;
	}
}

signed int __cdecl sub_45AB7E(int a1, char a2)
{
	int *v2; // edi
	int i; // eax
	int *v4; // edi

	v2 = &dword_47D46E[4 * a1];
	if (*v2 == -1)
		return -1;
	for (i = *v2;; i = v4[1])
	{
		v4 = &dword_47D46E[4 * i];
		if (a2 == *((_BYTE *)v4 + 8))
			break;
		if (v4[1] == -1)
			return -1;
	}
	dword_479660 = i;
	return 1;
}

signed int __cdecl sub_46C4102()
{
	byte *Buffer;	// -18	-24
	DWORD *var_14;	// -14	-20
	DWORD *lOffset; // -10	-16
	DWORD *var_C;	// -0C	-12
	DWORD *var_4;	// -4	- 4
	DWORD *arg_0;	//  4	  4
	DWORD *arg_4;	//  8	  8	
}

// 数据包头文件
signed int __cdecl sub_46C410(unsigned int a1, unsigned int a2)
{
	HFILE v2; // eax
	HFILE v3; // edi
	LONG v4; // eax
	int v5; // esi
	void *v6; // eax
	void *v7; // ebx
	LONG v8; // eax
	int v9; // esi
	int v10; // ecx
	int v11; // eax
	LONG v12; // edx
	signed int result; // eax
	void *v14; // eax
	LONG v15; // eax
	int v16; // [esp+0h] [ebp-24h] 36
	char Buffer; // [esp+Ch] [ebp-18h] 24
	int v18; // [esp+10h] [ebp-14h]
	LONG lOffset; // [esp+14h] [ebp-10h] 16
	int v20; // [esp+18h] [ebp-Ch]
	size_t v21; // [esp+20h] [ebp-4h]

	if (!dword_4C2444)
		memset(dword_4C72A0, 0, 0x118u);
	if (dword_4C2444 >= 6)
		return -1;
	_beep(a1, a2);
	v3 = v2;
	if (v2 == -1)
		return -1;
	sub_4578D0(v2, &Buffer, 0x18u);
	v4 = sub_457980(v3);
	v5 = v4 - lOffset;
	if (v4 - lOffset > 0)
	{
		if (v21)
		{
			v6 = malloc(v21);
			dword_4C71FC[8 * dword_4C2444] = (int)v6;
			if (v6)
			{
				v7 = malloc(v5);
				if (v7)
				{
					v8 = sub_457960(v3, lOffset, 0);
					if (v8 == lOffset && sub_4578D0(v3, v7, v5) == v5)
					{
						sub_45B089(dword_4C71FC[8 * dword_4C2444], (int)v7, v5, v16);
						free(v7);
					LABEL_12:
						v9 = dword_4C2444;
						v10 = v18;
						v11 = 8 * dword_4C2444;
						dword_4C71F0[v11] = v21;
						v12 = lOffset;
						dword_4C71EC[v11] = v10;
						LOWORD(v10) = v20;
						dword_4C71F4[v11] = v12;
						dword_4C71E0[v11] = v3;
						dword_4C71E4[v11] = (unsigned __int8)v10;
						dword_4C71E8[v11] = BYTE1(v10);
						dword_4C71F8[v11] = 0;
						result = v9;
						dword_4C2444 = v9 + 1;
						return result;
					}
				}
				goto LABEL_16;
			}
		}
		else
		{
			v14 = malloc(v5);
			dword_4C71FC[8 * dword_4C2444] = (int)v14;
			if (v14)
			{
				v15 = sub_457960(v3, lOffset, 0);
				if (v15 == lOffset && sub_4578D0(v3, (LPVOID)dword_4C71FC[8 * dword_4C2444], v5) == v5)
					goto LABEL_12;
			LABEL_16:
				free((void *)dword_4C71FC[8 * dword_4C2444]);
				goto LABEL_17;
			}
		}
	}
LABEL_17:
	sub_457910(v3);
	return -1;
}

int __cdecl sub_45B089(int a1, int a2, int a3, int a4)
{
	signed int v4; // eax
	unsigned int i; // eax
	signed int v6; // eax
	int result; // eax
	unsigned int v8; // edx
	bool v9; // cf
	int v10; // ecx
	int v11; // edx
	int v12; // [esp+0h] [ebp-10h]
	signed int v13; // [esp+4h] [ebp-Ch]
	unsigned int v14; // [esp+8h] [ebp-8h]

	dword_47963C = a4;
	if ((unsigned int)a3 <= 9)
	{
		sub_45AFF7(a1, a2, a3);
		result = a3;
	}
	else
	{
		sub_45AD3E();
		dword_479668 = a1;
		dword_4A188A = a3;
		dword_479658 = 9;
		v4 = sub_45AF24((unsigned __int8 *)a2);
		if (v4 != -1)
		{
			v13 = v4;
			LOWORD(v12) = v4;
			sub_45ADDC(v4);
			for (i = sub_45AF24((unsigned __int8 *)a2); i != -1; i = sub_45AF24((unsigned __int8 *)a2))
			{
				if (i == 256)
				{
					v6 = sub_45AF24((unsigned __int8 *)a2);
					if (v6 == 1)
					{
						++dword_479658;
					}
					else
					{
						if (v6 != 2)
							return 0;
						sub_45AE3C();
					}
				}
				else
				{
					v8 = dword_4A1886;
					v14 = i;
					if (i > 0x1FFF)
						return 0;
					v9 = i >= 0x101 && dword_47D46E[4 * i] == -1;
					if (v9)
					{
						if ((unsigned int)dword_4A1886 > 0x1FFF)
							return 0;
						word_49D882[dword_4A1886] = v12;
						++v8;
						i = v13;
					}
					v10 = 4 * i;
					while (i >= 0x101)
					{
						if (v8 > 0x1FFF)
							return 0;
						word_49D882[v8++] = dword_47D472[v10];
						i = dword_47D46E[v10];
						v10 = 4 * dword_47D46E[v10];
					}
					v12 = dword_47D472[v10];
					sub_45ADDC(v12);
					while (v11)
						sub_45ADDC((unsigned __int16)word_49D882[v11 - 1]);
					dword_4A1886 = 0;
					sub_45AEDB(v13, v12);
					v13 = v14;
				}
			}
		}
		result = dword_479640;
	}
	return result;
}

//void __spoils<ecx> sub_45AD3E()
void sub_45AD3E()
{
	unsigned int v0; // ecx
	int v1; // esi
	unsigned int v2; // ecx

	v0 = 0;
	do
	{
		v1 = 4 * v0;
		dword_47D46E[4 * v0] = -1;
		if (v0 >= 0x100)
			dword_47D472[v1] = 0;
		else
			dword_47D472[v1] = v0;
		dword_47D476[v1] = 0;
		++v0;
	} while (v0 <= 0x2000);
	v2 = 257;
	do
	{
		word_47966C[v2 - 257] = v2;
		++v2;
	} while (v2 <= 0x2000);
	dword_47965C = 257;
	dword_4A1886 = 0;
	dword_479644 = -1;
	dword_479650 = 1;
	dword_479640 = 0;
	dword_4A189A = 0;
}

//signed int __usercall sub_45AF24@<eax>(unsigned __int8 *a1@<esi>)
signed int sub_45AF24(unsigned __int8 *a1)
{
	signed int v1; // eax
	char v2; // cf
	int v3; // eax
	bool v4; // zf
	bool v5; // sf
	unsigned __int8 v6; // of
	signed int v7; // eax
	signed int result; // eax
	signed int v9; // [esp+4h] [ebp-8h]
	unsigned int v10; // [esp+8h] [ebp-4h]

	if (dword_479650 == 1)
	{
		v1 = sub_45AE21(a1);
		dword_4A189A = v1;
		if (v1 == -1)
			goto LABEL_16;
		dword_47964C = v1;
		dword_4A188E = 8;
		dword_479650 = -1;
	}
	v10 = dword_479658;
	v9 = 0;
	while (1)
	{
		v2 = (signed int)v10 <= 0 || dword_4A189A == -1 ? 0 : 1;
		if (!v2)
			break;
		v3 = v10;
		if (v10 >= dword_4A188E)
			v3 = dword_4A188E;
		v9 |= (unsigned __int8)(dword_47964C & *(_BYTE *)(v3 + 4855953)) << (dword_479658 - v10);
		dword_47964C = (unsigned int)dword_47964C >> v3;
		v10 -= v3;
		v6 = __OFSUB__(dword_4A188E, v3);
		v4 = dword_4A188E == v3;
		v5 = dword_4A188E - v3 < 0;
		dword_4A188E -= v3;
		if ((unsigned __int8)(v5 ^ v6) | v4)
		{
			v7 = sub_45AE21(a1);
			dword_4A189A = v7;
			if (v7 == -1)
				break;
			dword_47964C = v7;
			dword_4A188E = 8;
		}
	}
LABEL_16:
	result = -1;
	if (!v10)
		result = v9;
	return result;
}

//signed int __usercall sub_45AE21@<eax>(unsigned __int8 *a1@<esi>)
signed int sub_45AE21(unsigned __int8 *a1)
{
	signed int result; // eax

	if (!dword_4A188A)
		return -1;
	result = *a1;
	--dword_4A188A;
	return result;
}

int __cdecl sub_45ADDC(char a1)
{
	int v2; // [esp+4h] [ebp-4h]

	if (dword_479640 >= (unsigned int)dword_47963C)
	{
		dword_479640 = 0;
	}
	else
	{
		sub_45A87B();
		*(_BYTE *)dword_479668++ = a1;
		++dword_479640;
	}
	return v2;
}

unsigned int sub_45AE3C()
{
	int v0; // ecx
	unsigned int result; // eax
	int v2; // edx
	int v3; // ebx

	v0 = 0;
	result = 257;
	do
	{
		if (!dword_47D476[4 * result])
			word_49D882[v0++] = result;
		++result;
	} while (result <= 0x2000);
	dword_47965C = 0x2000;
	while (v0)
	{
		result = (unsigned __int16)word_49D882[--v0];
		v2 = 4 * result;
		v3 = dword_47D46E[4 * result];
		if (v3 != -1)
			--dword_47D476[4 * v3];
		dword_47D46E[v2] = -1;
		dword_47D472[v2] = 0;
		dword_47D476[v2] = 0;
		word_47966C[--dword_47965C - 257] = result;
	}
	dword_4A1886 = 0;
	return result;
}

int __cdecl sub_45AEDB(int a1, int a2)
{
	int v2; // ebx
	int v4; // [esp+4h] [ebp-4h]

	if ((unsigned int)dword_47965C <= 0x1FFF)
	{
		v2 = (unsigned __int16)word_47966C[dword_47965C++ - 257];
		v2 *= 16;
		*(int *)((char *)dword_47D472 + v2) = a2;
		*(int *)((char *)dword_47D46E + v2) = a1;
		++dword_47D476[4 * a1];
	}
	return v4;
}

// 打开文件
int __cdecl sub_45B29E(const char *a1)
{
	return sub_458F00(a1);
}

// 
unsigned int __cdecl sub_458F00(const char *a1)
{
	unsigned int result; // eax

	result = strlen(a1) + 1;
	memcpy((void *)&byte_4C1E0C, a1, result);
	return result;
}

signed int __cdecl sub_458360(char a1)
{
	UINT v1; // eax
	CHAR RootPathName[4]; // [esp+0h] [ebp-8h]
	int v4; // [esp+4h] [ebp-4h]

	strcpy(RootPathName, "A:\\");
	v4 = 0;
	RootPathName[0] = a1 + 65;
	v1 = GetDriveTypeA(RootPathName);
	switch (v1)
	{
	case 3u:
	case 6u:
		return 1;
	case 4u:
		return 2;
	case 2u:
		return 4;
	}
	return v1 != 5 ? 0 : 8;
}

int __cdecl sub_46113B(int a1)
{
	int result; // eax

	result = a1;
	dword_4BBBE8 = a1;
	return result;
}

int sub_458500()
{
	int result; // eax

	result = dword_4C22D8;
	LOBYTE(result) = dword_4C22D8 | 0x10;
	dword_4C22D8 = result;
	return result;
}

int sub_458510()
{
	int result; // eax

	result = dword_4C22D8;
	LOBYTE(result) = dword_4C22D8 | 2;
	dword_4C22D8 = result;
	return result;
}

signed int __cdecl sub_459B60(int a1, int a2, int a3, int a4, int a5)
{
	signed int v5; // esi
	int v6; // ecx
	void *v7; // edi
	void *v8; // edi

	v5 = 0;
	if (!a5)
	{
		sub_459C70();
		memset(&dword_4C6FC0, 0, 0x60u);
		dword_4C23F0 = 0;
		if (!DirectSoundCreate(0, &dword_4C23D8, 0))
		{
			if (dword_4C23D8->lpVtbl->SetCooperativeLevel(dword_4C23D8, hWnd, 1))
			{
				sub_459C70();
			}
			else
			{
				v6 = a1;
				dword_4C23CC = a2;
				dword_4C23D4 = a1;
				if (a2)
				{
					v7 = (void *)sub_457B70(36 * a2);
					dword_4C23DC = v7;
					if (v7)
						memset(v7, 0, 36 * dword_4C23CC);
					v6 = dword_4C23D4;
				}
				if (v6)
				{
					v8 = (void *)sub_457B70(36 * v6);
					dword_4C23E0 = v8;
					if (v8)
						memset(v8, 0, 36 * dword_4C23D4);
				}
				v5 = 1;
			}
		}
	}
	sub_4598E0(a3, a4);
	return v5;
}

signed int sub_459C70()
{
	char *v0; // ecx
	int v1; // edi
	int v2; // esi
	int v3; // eax
	char *v4; // ecx
	int v5; // edi
	int v6; // esi

	sub_459420();
	if (dword_4C23D8)
	{
		sub_459E90();
		v0 = (char *)dword_4C23E0;
		if (dword_4C23E0)
		{
			v1 = 0;
			if (dword_4C23D4 > 0)
			{
				v2 = 0;
				do
				{
					v3 = *(_DWORD *)&v0[v2];
					if (v3)
					{
						(*(void(__stdcall **)(int))(*(_DWORD *)v3 + 72))(v3);
						(*(void(__stdcall **)(_DWORD))(**(_DWORD **)((char *)dword_4C23E0 + v2) + 8))(*(_DWORD *)((char *)dword_4C23E0 + v2));
						*(_DWORD *)((char *)dword_4C23E0 + v2) = 0;
						v0 = (char *)dword_4C23E0;
					}
					++v1;
					v2 += 36;
				} while (v1 < dword_4C23D4);
			}
			sub_457C20(v0);
			dword_4C23E0 = 0;
		}
		v4 = (char *)dword_4C23DC;
		if (dword_4C23DC)
		{
			v5 = 0;
			if (dword_4C23CC > 0)
			{
				v6 = 0;
				do
				{
					if (*(_DWORD *)&v4[v6])
					{
						sub_457C20(*(void **)&v4[v6]);
						*(_DWORD *)((char *)dword_4C23DC + v6) = 0;
						v4 = (char *)dword_4C23DC;
					}
					++v5;
					v6 += 36;
				} while (v5 < dword_4C23CC);
			}
			sub_457C20(v4);
			dword_4C23DC = 0;
		}
		dword_4C23D8->lpVtbl->Release(dword_4C23D8);
		dword_4C23D8 = 0;
	}
	if (dword_4C23E4)
	{
		sub_457C20(dword_4C23E4);
		dword_4C23E4 = 0;
	}
	return 1;
}

MMRESULT sub_459420()
{
	MMRESULT result; // eax

	result = dword_4C23EC;
	if (dword_4C23EC)
	{
		result = timeKillEvent(dword_4C23EC);
		dword_4C23EC = 0;
	}
	return result;
}

void sub_459E90()
{
	int v0; // edi
	int *v1; // esi

	v0 = 0;
	v1 = dword_4C6FC0;
	do
	{
		if (*v1)
			sub_459DD0(v0 + 1);
		v1 += 8;
		++v0;
	} while ((signed int)v1 < (signed int)&dword_4C7020);
}

void __cdecl sub_459DD0(int a1)
{
	int v1; // esi
	int v2; // edx
	int *v3; // eax

	if (a1 && dword_4C23D8)
	{
		v1 = 8 * (a1 - 1);
		v2 = dword_4C6FDC[v1] | 1;
		dword_4C6FDC[v1] = v2;
		while (v2 & 0x10000)
			;
		(*(void(__stdcall **)(int))(*(_DWORD *)dword_4C6FC0[v1] + 72))(dword_4C6FC0[v1]);
		(*(void(__stdcall **)(int))(*(_DWORD *)dword_4C6FC0[v1] + 8))(dword_4C6FC0[v1]);
		dword_4C6FC0[v1] = 0;
		dword_4C6FDC[v1] = 0;
		off_4795E0(dword_4C6FC4[v1]);
		v3 = dword_4C6FC0;
		while (!*v3)
		{
			v3 += 8;
			if ((signed int)v3 >= (signed int)&dword_4C7020)
			{
				sub_459420();
				return;
			}
		}
	}
}

void __cdecl sub_4598E0(int a1, int a2)
{
	void *v2; // edi
	const char *v3; // eax

	if (dword_4C23E4)
	{
		sub_457C20(dword_4C23E4);
		dword_4C23E4 = 0;
	}
	v2 = (void *)sub_457B70(0x19640u);
	dword_4C23E4 = v2;
	if (v2)
		memset(v2, 0, 0xFA0u);
	v3 = (const char *)a1;
	dword_4C7024 = 0;
	dword_4C7020 = 4000;
	dword_4C23E8 = a1;
	if (!a1)
	{
		v3 = byte_4C2298;
		dword_4C23E8 = (int)byte_4C2298;
	}
	sub_4594F0(v3, (const char *)a2, aWav_0, 1000, (int(__cdecl *)(const char *, const char *, int *))sub_459440);
	if ((signed int)dword_4C7024 > 1)
		qsort(dword_4C23E4, dword_4C7024, 4u, sub_4598B0);
}

void __cdecl sub_4594F0(const char *a1, const char *a2, const char *a3, int a4, int(__cdecl *a5)(const char *, const char *, int *))
{
	int v5; // ebp
	signed int v6; // ebx
	bool v7; // sf
	unsigned __int8 v8; // of
	int v9; // [esp+4h] [ebp-14Ch]
	char *v10; // [esp+8h] [ebp-148h]
	int v11; // [esp+Ch] [ebp-144h]
	CHAR FileName; // [esp+10h] [ebp-140h]
	int v13; // [esp+90h] [ebp-C0h]
	char v14; // [esp+D0h] [ebp-80h]

	v5 = 0;
	v11 = 0;
	v10 = (char *)sub_457B70(0x19640u);
	if (v10)
	{
		v9 = 0;
		strcpy(&FileName, a1);
		v6 = 4000;
		if (FileName)
			sub_458E10(&FileName);
		strcat(&FileName, a2);
		if (FileName)
			sub_458E10(&FileName);
		strcpy(&v14, &FileName);
		strcat(&FileName, a3);
		while (off_4795F0(&FileName, 128, (int)&v13) == -1)
		{
		LABEL_11:
			strcpy(&FileName, &v14);
			strcat(&FileName, (const char *)&unk_479630);
			if (off_4795F0(&FileName, 16, (int)&v13) != -1)
			{
				do
				{
					if ((_BYTE)v13 != 46)
					{
						strcpy(&FileName, &v14);
						strcat(&FileName, (const char *)&v13);
						if (GetFileAttributesA(&FileName) & 0x10)
						{
							*(char* *)&v10[4 * v5] = &v10[v6];
							strcpy(&v10[v6], &FileName);
							if (++v5 >= 1000)
								v5 = 0;
							v6 += strlen(&v10[v6]) + 1;
							if (v6 > 99872)
								v6 = 4000;
						}
					}
				} while (off_4795F4((int)&v13) != -1);
			}
			if (v5 == v9)
				goto LABEL_24;
			strcpy(&FileName, *(const char **)&v10[4 * v9]);
			if (FileName)
				sub_458E10(&FileName);
			strcpy(&v14, &FileName);
			strcat(&FileName, a3);
			v8 = __OFSUB__(v9 + 1, 1000);
			v7 = v9++ - 999 < 0;
			if (!(v7 ^ v8))
				v9 = 0;
		}
		while (v11 < a4 && a5(a1, a2, &v13) != -1)
		{
			++v11;
			if (off_4795F4((int)&v13) == -1)
				goto LABEL_11;
		}
	LABEL_24:
		sub_457C20(v10);
	}
}

int __cdecl sub_459440(int a1, const char *a2, const char *a3)
{
	char *v3; // ebx
	int result; // eax

	v3 = (char *)dword_4C23E4 + dword_4C7020;
	*((char **)dword_4C23E4 + dword_4C7024) = (char *)dword_4C23E4 + dword_4C7020;
	strcpy(v3, a2);
	if (*v3)
		sub_458E10(v3);
	strcat(v3, a3);
	_strupr(v3);
	++dword_4C7024;
	result = 0;
	dword_4C7020 += strlen(v3) + 1;
	return result;
}

int __cdecl sub_4598B0(const void *a1, const void *a2)
{
	int result; // eax

	if (a1 && a2)
		result = _strcmpi(*(const char **)a1, *(const char **)a2);
	else
		result = 0;
	return result;
}

int __cdecl sub_458220(int a1)
{
	return sub_4581C0(16777472 * a1);
}

LPVOID sub_42C1E0()
{
	unsigned int v0; // kr04_4
	CHAR v2[128]; // [esp+8h] [ebp-80h]

	strcpy(v2, byte_4C2298);
	v0 = strlen(v2) + 1;
	wsprintfA(&v2[v0 - 1], aMusicNullWav);
	return sub_45A0B0((int)&v2[v0], (unsigned int)v2, 0, 4);
}

//LPVOID __usercall sub_45A0B0@<eax>(int a1@<edi>, unsigned int a2, int a3, int a4)
LPVOID sub_45A0B0(int a1, unsigned int a2, int a3, int a4)
{
	LPVOID v4; // ebx
	UINT v5; // ecx
	int *v6; // eax
	UINT v8; // esi
	HFILE v9; // eax
	HFILE v10; // ebp
	int v11; // edi
	int v12; // ebx
	int v13; // eax
	LONG v14; // ST2C_4
	int v15; // esi
	int v16; // ecx
	int v17; // eax
	UINT v18; // eax
	int v19; // edi
	int v20; // ST28_4
	int v21; // eax
	int v22; // [esp+34h] [ebp-94h]
	int v23; // [esp+44h] [ebp-84h]
	int v24; // [esp+48h] [ebp-80h]
	UINT uBytes; // [esp+4Ch] [ebp-7Ch]
	LPVOID lpBuffer; // [esp+50h] [ebp-78h]
	char v27; // [esp+54h] [ebp-74h]
	LPVOID v28; // [esp+58h] [ebp-70h]
	UINT v29; // [esp+5Ch] [ebp-6Ch]
	int v30; // [esp+60h] [ebp-68h]
	int v31; // [esp+64h] [ebp-64h]
	int v32; // [esp+68h] [ebp-60h]
	int v33; // [esp+6Ch] [ebp-5Ch]
	int v34; // [esp+70h] [ebp-58h]
	char *v35; // [esp+74h] [ebp-54h]
	int Buffer; // [esp+78h] [ebp-50h]
	int v37; // [esp+88h] [ebp-40h]
	char v38; // [esp+8Ch] [ebp-3Ch]
	int v39; // [esp+90h] [ebp-38h]
	int v40; // [esp+94h] [ebp-34h]

	v4 = 0;
	lpBuffer = 0;
	if (dword_4C23D8)
	{
		v5 = 0;
		v6 = dword_4C6FC0;
		while (*v6)
		{
			v6 += 8;
			++v5;
			if ((signed int)v6 >= (signed int)&dword_4C7020)
				return 0;
		}
		v8 = v5;
		v29 = v5;
		v9 = off_4795DC(a2, 0);
		v10 = v9;
		if (v9 != -1)
		{
			v22 = a1;
			off_4795E4(v9, &Buffer, 0x50u);
			if (Buffer == 1179011410 || (sub_45B266(&Buffer, 168, 38), Buffer == 1179011410))
			{
				if (dword_4C23EC || (dword_4C23EC = timeSetEvent(0xFAu, 0xFAu, fptc, 0, 1u)) != 0)
				{
					v11 = a4 * v40;
					v12 = v37 + 28;
					v31 = 0;
					v13 = *(int *)((char *)&v39 + v37);
					v32 = 0;
					v33 = 0;
					v34 = 0;
					v14 = v37 + 28;
					v15 = 8 * v8;
					v35 = 0;
					v23 = 0;
					v16 = dword_4C6FDC[v15] | 1;
					v30 = v13;
					v31 = 20;
					v32 = 65762;
					v33 = a4 * v40;
					v35 = &v38;
					dword_4C6FDC[v15] = v16;
					off_4795EC(v10, v14, 0);
					if (dword_4C23D8->lpVtbl->CreateSoundBuffer(
						dword_4C23D8,
						(LPCDSBUFFERDESC)&v31,
						(LPDIRECTSOUNDBUFFER *)&v23,
						0) >= 0)
					{
						if ((*(int(__stdcall **)(int, _DWORD, int, UINT *, int *, char *, LPVOID *, _DWORD, int))(*(_DWORD *)v23 + 44))(
							v23,
							0,
							v11,
							&uBytes,
							&v24,
							&v27,
							&v28,
							0,
							v22) < 0)
						{
							(*(void(__cdecl **)(int))(*(_DWORD *)v24 + 8))(v24);
						}
						else
						{
							v17 = v31;
							dword_4C6FC8[v15] = v12;
							dword_4C6FD0[v15] = v17;
							v18 = uBytes;
							dword_4C6FD4[v15] = 0;
							dword_4C6FD8[v15] = 0;
							dword_4C6FC4[v15] = v10;
							dword_4C6FCC[v15] = v11;
							if (v18)
							{
								v19 = v30;
								sub_459EC0(v30, lpBuffer, v18);
							}
							else
							{
								v19 = v30;
							}
							if (v29)
								sub_459EC0(v19, v28, v29);
							(*(void(__stdcall **)(int, LPVOID, UINT, LPVOID))(*(_DWORD *)v24 + 76))(v24, lpBuffer, uBytes, v28);
							v20 = v23;
							dword_4C6FC0[v15] = v23;
							if (sub_45A330(v20, a3, 1))
							{
								v10 = -1;
								lpBuffer = (LPVOID)(v19 + 1);
							}
							else
							{
								sub_459DD0(v19 + 1);
							}
						}
					}
					v21 = dword_4C6FDC[v15];
					v4 = lpBuffer;
					LOBYTE(v21) = v21 & 0xFE;
					dword_4C6FDC[v15] = v21;
				}
			}
			if (v10 != -1)
				off_4795E0(v10);
		}
	}
	return v4;
}

int __cdecl sub_45B266(int *a1, int a2, int a3)
{
	int *v3; // esi
	int result; // eax
	int v5; // ecx

	v3 = a1;
	result = a2;
	v5 = a3;
	do
	{
		*v3++ ^= a2;
		--v5;
	} while (v5);
	return result;
}

void __stdcall fptc(UINT uTimerID, UINT uMsg, DWORD dwUser, DWORD dw1, DWORD dw2)
{
	int v5; // ebx
	int *v6; // esi
	char v7; // al
	int v8; // edi
	int v9; // eax
	UINT v10; // ecx
	int v11; // eax
	int v12; // [esp+40h] [ebp-18h]
	UINT v13; // [esp+44h] [ebp-14h]
	LPVOID v14; // [esp+48h] [ebp-10h]
	UINT uBytes; // [esp+4Ch] [ebp-Ch]
	LPVOID lpBuffer; // [esp+50h] [ebp-8h]
	char v17; // [esp+54h] [ebp-4h]

	if (!sub_458740() && !dword_4C23F0)
	{
		dword_4C23F0 = 1;
		v5 = 0;
		v6 = dword_4C6FC0;
		while (!*v6)
		{
		LABEL_20:
			v6 += 8;
			++v5;
			if ((signed int)v6 >= (signed int)&dword_4C7020)
			{
				v11 = dword_4C23F0;
				LOBYTE(v11) = dword_4C23F0 & 0xFE;
				dword_4C23F0 = v11;
				return;
			}
		}
		v7 = *((_BYTE *)v6 + 28);
		v6[7] |= 0x10000u;
		if (!(v7 & 1))
		{
			v8 = (*(int(__stdcall **)(int, int *, char *))(*(_DWORD *)*v6 + 16))(*v6, &v12, &v17);
			if (v8)
				goto LABEL_17;
			v9 = v6[6];
			v8 = v12 - v9;
			if (v12 != v9)
			{
				if (v8 < 0)
					v8 = v12 + v6[3] - v9;
				if ((*(int(__stdcall **)(int, int, int, LPVOID *, UINT *, LPVOID *, UINT *, _DWORD))(*(_DWORD *)*v6 + 44))(
					*v6,
					v9,
					v8,
					&lpBuffer,
					&uBytes,
					&v14,
					&v13,
					0) >= 0)
				{
					if (uBytes)
						sub_459EC0(v5, lpBuffer, uBytes);
					v10 = v13;
					if (v13)
					{
						sub_459EC0(v5, v14, v13);
						v10 = v13;
					}
					(*(void(__stdcall **)(int, LPVOID, UINT, LPVOID, UINT))(*(_DWORD *)*v6 + 76))(
						*v6,
						lpBuffer,
						uBytes,
						v14,
						v10);
					v6[6] = v12;
					goto LABEL_19;
				}
				v6[6] = v12;
			LABEL_17:
				if (v8 == -2005401450)
					(*(void(__stdcall **)(int))(*(_DWORD *)*v6 + 80))(*v6);
				goto LABEL_19;
			}
		}
	LABEL_19:
		v6[7] &= 0xFFFEFFFF;
		goto LABEL_20;
	}
}

signed int sub_458740()
{
	signed int result; // eax

	result = 0;
	if (dword_4C22D8 & 0x20)
		result = 1;
	return result;
}

int __cdecl sub_459EC0(int a1, LPVOID lpBuffer, UINT uBytes)
{
	int v3; // esi
	int v4; // ecx
	HFILE v5; // ebp
	int v6; // edi
	int result; // eax

	v3 = 8 * a1;
	v4 = dword_4C6FD4[8 * a1];
	v5 = dword_4C6FC4[8 * a1];
	v6 = dword_4C6FD0[8 * a1] - v4;
	if ((signed int)uBytes <= v6)
	{
		result = off_4795E4(v5, lpBuffer, uBytes);
		dword_4C6FD4[v3] += result;
	}
	else
	{
		if (v6 >= 0)
		{
			if (dword_4C6FD0[8 * a1] != v4)
				off_4795E4(v5, lpBuffer, dword_4C6FD0[8 * a1] - v4);
		}
		else
		{
			v6 = 0;
		}
		off_4795EC(v5, dword_4C6FC8[v3], 0);
		result = off_4795E4(v5, (char *)lpBuffer + v6, uBytes - v6);
		dword_4C6FD4[v3] = result;
	}
	return result;
}

signed int __cdecl sub_45A330(int a1, int a2, char a3)
{
	signed int v3; // edi
	bool v4; // zf
	signed int result; // eax

	if (!dword_4C23D8 || !a1)
		return 0;
	v3 = 0;
	if (a3 & 1)
		v3 = 1;
	sub_459D70(a1, a2);
	(*(void(__stdcall **)(int, _DWORD))(*(_DWORD *)a1 + 52))(a1, 0);
	v4 = (*(int(__stdcall **)(int, _DWORD, _DWORD, signed int))(*(_DWORD *)a1 + 48))(a1, 0, 0, v3) == 0;
	result = 1;
	if (!v4)
		return 0;
	return result;
}

signed int __cdecl sub_459D70(int a1, int a2)
{
	int v2; // eax

	if (!dword_4C23D8)
		return 0;
	v2 = 40 * (60 * a2 / 255 - 60);
	if (v2 < -10000)
		v2 = -10000;
	(*(void(__stdcall **)(int, int))(*(_DWORD *)a1 + 60))(a1, v2);
	return 1;
}

char __cdecl sub_46D14C(size_t a1, int a2, size_t a3, int a4, int a5, int a6)
{
	int v6; // eax

	LOBYTE(v6) = sub_4611E3(a4, a1);
	if (v6)
	{
		LOBYTE(v6) = sub_45FE2D(a2, a3, a4);
		if (v6)
			LOBYTE(v6) = (int8)sub_45DAB2(a5, a6);
	}
	return v6;
}

char __cdecl sub_4611E3(int a1, size_t a2)
{
	char *v2; // eax
	unsigned int v3; // ecx
	char *v4; // eax

	if (a1)
		dword_4BFC34 = 31710;
	dword_4BFC48 = a2;
	v2 = (char *)sub_457B70(a2);
	if (!v2)
		return 0;
	dword_4BBBD0 = v2;
	dword_4BBBE4 = (int)&v2[a2];
	sub_461155(640, 480);
	if (!sub_460FB0(16, a1))
	{
		sub_461281();
		return 0;
	}
	v3 = 0;
	v4 = (char *)dword_4BFBEC;
	do
	{
		dword_4BFBF0[v3] = (int)v4;
		v4 += 4096;
		++v3;
	} while (v3 <= 0x10);
	sub_461025(a1);
	sub_4610AB(a1);
	return 1;
}

int __cdecl sub_461155(int a1, int a2)
{
	dword_4BFC44 = a2;
	dword_4BFC40 = a1;
	dword_4BFC54 = a1;
	sub_46133A(0, 0, a1, a2);
	dword_4BFC74 = (int)dword_4BBBD0 + 4 * a2;
	dword_4BBBD4 = dword_4BFC74 + 2 * a1;
	dword_4BBBD8 = dword_4BBBD4 + 0x4000;
	dword_4BBBDC = dword_4BBBD4 + 0x8000;
	memset(dword_4BBBD0, 0, dword_4BFC48);
	dword_4BFC4C = 0;
	return sub_46141C();
}

int __cdecl sub_46133A(int a1, int a2, unsigned int a3, unsigned int a4)
{
	int v4; // eax
	int v5; // eax
	int v6; // eax
	int v7; // eax
	int result; // eax

	v4 = a1;
	if (a1 < 0)
		v4 = 0;
	dword_4BFC9C = v4;
	v5 = a3;
	if (a3 > dword_4BFC40)
		v5 = dword_4BFC40;
	dword_4BFCA4 = v5;
	v6 = a2;
	if (a2 < 0)
		v6 = 0;
	dword_4BFCA0 = v6;
	v7 = a4;
	if (a4 > dword_4BFC44)
		v7 = dword_4BFC44;
	dword_4BFCA8 = v7;
	dword_4BFCBC = dword_4BFCA4 - dword_4BFC9C;
	result = v7 - dword_4BFCA0;
	dword_4BFCC0 = result;
	return result;
}

int sub_46141C()
{
	char *v0; // edi
	int v1; // ecx
	unsigned __int8 v2; // of
	int v3; // edi
	int v4; // esi
	int v5; // ecx
	int result; // eax

	dword_4BBBE0 = dword_4BBBDC;
	v0 = (char *)dword_4BBBD0;
	v1 = 4 * dword_4BFC44 - 4;
	do
	{
		*(_DWORD **)&v0[v1] = &unk_4BFC7C;
		v2 = __OFSUB__(v1, 4);
		v1 -= 4;
	} while (!((v1 < 0) ^ v2));
	v3 = dword_4BBBD4;
	v4 = dword_4BBBD8;
	v5 = 4 * dword_4BFC4C;
	result = 0;
	dword_4BFC4C = 0;
	do
	{
		*(_DWORD *)(v3 + v5) = 0;
		*(_DWORD *)(v4 + v5) = 0;
		v2 = __OFSUB__(v5, 4);
		v5 -= 4;
	} while (!((v5 < 0) ^ v2));
	return result;
}

char __cdecl sub_460FB0(int a1, int a2)
{
	void *v2; // eax
	int i; // esi

	if (dword_4BFBEC)
		sub_457C20(dword_4BFBEC);
	v2 = (void *)sub_457B70((a1 + 1) << 12);
	if (v2)
	{
		dword_4BFBEC = v2;
		for (i = 0; i <= a1; ++i)
		{
			if (a2)
				sub_460F26(i, a1, (int)dword_4BFBEC + 4096 * i);
			else
				sub_460E9C(i, a1, (int)dword_4BFBEC + 4096 * i);
		}
		LOBYTE(v2) = 1;
	}
	return (char)v2;
}

int __cdecl sub_460F26(unsigned int a1, unsigned int a2, int a3)
{
	signed int i; // ecx
	signed int j; // ecx
	int v6; // [esp+4h] [ebp-4h]

	for (i = 0; i < 2048; ++i)
		*(_BYTE *)(a3 + i) = (a1 * (unsigned __int64)(i & 0x1F) / a2 & 0x1F)
		+ (a1 * (unsigned __int64)(i & 0x3E0) / a2 & 0xE0);
	for (j = 0; j < 2048; ++j)
		*(_BYTE *)(a3 + 2048 + j) = ((unsigned __int8)(a1 * (unsigned __int64)(j & 0x1F) / a2 & 0x1F) >> 3)
		+ ((unsigned int)(a1 * (unsigned __int64)(j & 0x3E0) / a2 & 0x3E0) >> 3);
	return v6;
}

int __cdecl sub_460E9C(unsigned int a1, unsigned int a2, int a3)
{
	signed int i; // ecx
	signed int j; // ecx
	int v6; // [esp+4h] [ebp-4h]

	for (i = 0; i < 2048; ++i)
		*(_BYTE *)(a3 + i) = (a1 * (unsigned __int64)(i & 0x1F) / a2 & 0x1F)
		+ (a1 * (unsigned __int64)(i & 0x7E0) / a2 & 0xE0);
	for (j = 0; j < 2048; ++j)
		*(_BYTE *)(a3 + 2048 + j) = ((unsigned __int8)(a1 * (unsigned __int64)(j & 0x3F) / a2 & 0x3F) >> 3)
		+ ((unsigned int)(a1 * (unsigned __int64)(j & 0x7C0) / a2 & 0x7C0) >> 3);
	return v6;
}

void sub_461281()
{
	if (dword_4BFBEC)
	{
		sub_457C20(dword_4BFBEC);
		dword_4BFBEC = 0;
	}
	if (dword_4BBBD0)
	{
		sub_457C20(dword_4BBBD0);
		dword_4BBBD0 = 0;
	}
}

//void __cdecl __spoils<ecx> sub_461025(int a1)
void __cdecl sub_461025(int a1)
{
	signed int v1; // ecx
	__int16 v2; // ax
	__int16 v3; // ax

	v1 = 4095;
	if (a1)
	{
		dword_4BFC38 = 2047;
		do
		{
			v2 = 0;
			if (v1 & 1)
				v2 = 31744;
			if (v1 & 0x400)
				v2 |= 0x3E0u;
			if (v1 & 0x20)
				v2 |= 0x1Fu;
			word_4BBBEC[v1--] = v2;
		} while (v1 >= 0);
	}
	else
	{
		do
		{
			v3 = 0;
			if (v1 & 1)
				v3 = -2048;
			if (v1 & 0x800)
				v3 |= 0x7E0u;
			if (v1 & 0x20)
				v3 |= 0x1Fu;
			word_4BBBEC[v1--] = v3;
		} while (v1 >= 0);
	}
}

//void __cdecl __spoils<ecx> sub_4610AB(int a1)
void __cdecl sub_4610AB(int a1)
{
	signed int v1; // ecx
	__int16 v2; // ax
	__int16 v3; // ax

	v1 = 4095;
	if (a1)
	{
		dword_4BFC38 = 2047;
		do
		{
			v2 = 0x7FFF;
			if (v1 & 1)
				v2 = 1023;
			if (v1 & 0x400)
				v2 &= 0x7C1Fu;
			if (v1 & 0x20)
				v2 &= 0x7FE0u;
			word_4BDBEC[v1--] = v2;
		} while (v1 >= 0);
	}
	else
	{
		do
		{
			v3 = -1;
			if (v1 & 1)
				v3 = 2047;
			if (v1 & 0x800)
				v3 &= 0xF81Fu;
			if (v1 & 0x20)
				v3 &= 0xFFE0u;
			word_4BDBEC[v1--] = v3;
		} while (v1 >= 0);
	}
}

char __cdecl sub_45FE2D(int a1, size_t a2, int a3)
{
	char *v3; // eax
	int v4; // ecx
	char *v5; // edx
	char *v6; // esi
	int v7; // ecx
	void *v8; // eax
	char *v9; // eax
	signed int v10; // ecx
	char result; // al

	dword_4A421C = a3;
	v3 = (char *)sub_457B70(0x38A40u);
	if (!v3)
		goto LABEL_16;
	dword_4BBB3C = v3;
	dword_4BBB40 = v3 + 32000;
	memset(v3, 0, 0x7D00u);
	v4 = *(_DWORD *)a1;
	v5 = (char *)(a1 + 4);
	if (!*(_BYTE *)(a1 + 4))
		v5 = byte_4C2298;
	dword_4BB934 = v5;
	dword_4BBB38 = 0;
	v6 = (char *)(a1 + 36);
	if (v4)
	{
		do
		{
			sub_45F8B9(v6);
			v6 += 32;
		} while (v7 != 1);
		sub_45F9E6(0);
	}
	v8 = (void *)sub_457B70(a2);
	if (v8)
	{
		dword_4A4210 = v8;
		memset(v8, 0, 0x600u);
		v9 = (char *)dword_4A4210 + 1536;
		if (a3)
		{
			v10 = 768;
			do
			{
				*v9 = 0x7FFF;
				++v9;
				--v10;
			} while (v10);
		}
		else
		{
			memset((char *)dword_4A4210 + 1536, 255, 0x600u);
		}
		dword_4BBB4E = (int)dword_4A4210 + 3072;
		dword_4BBB52 = (int)sub_45F7CB();
		dword_4A4220 = (int)sub_45F83E();
		dword_4A4214 = (int)dword_4A4210 + a2;
		result = 1;
	}
	else
	{
	LABEL_16:
		sub_45FF4F();
		result = 0;
	}
	return result;
}

char *__cdecl sub_45F8B9(char *a1)
{
	char *result; // eax
	int v2; // edx
	const char *v3; // ecx

	strcpy(FileName, dword_4BB934);
	if (FileName[0])
		sub_458E10(FileName);
	strcat(FileName, a1);
	if (FileName[0])
		sub_458E10(FileName);
	strcat(FileName, aShp);
	for (result = sub_46CCB0(FileName, 128, (int)byte_4BBA38); result != (char *)-1; result = (char *)sub_46CD60(byte_4BBA38))
	{
		strcpy(dword_4BBB40, a1);
		if (*dword_4BBB40)
			sub_458E10(dword_4BBB40);
		strcat(dword_4BBB40, byte_4BBA38);
		_strupr(dword_4BBB40);
		v2 = 4 * dword_4BBB38++;
		v3 = dword_4BBB40;
		*(char **)((char *)dword_4BBB3C + v2) = dword_4BBB40;
		dword_4BBB40 += strlen(v3) + 1;
	}
	return result;
}

void __cdecl sub_45F9E6(int a1)
{
	if (dword_4BBB38 - a1 >= 2)
		qsort((char *)dword_4BBB3C + 4 * a1, dword_4BBB38 - a1, 4u, sub_45F9CC);
}

int __cdecl sub_45F9CC(const void *a1, const void *a2)
{
	return _strcmpi(*(const char **)a1, *(const char **)a2);
}

_DWORD *sub_45F7CB()
{
	int v0; // eax
	void *v1; // edx
	_DWORD *v2; // edi
	unsigned int v3; // ecx
	_DWORD *v4; // edi
	int v5; // ebx
	int v7; // [esp+8h] [ebp-4h]

	v7 = sub_461149();
	v0 = sub_46114F();
	v1 = dword_4A4210;
	v2 = (_DWORD *)dword_4BBB4E;
	v3 = 0;
	*(_DWORD *)dword_4BBB4E = v0;
	v2[1] = v0;
	v2[2] = v7;
	v2[3] = 0;
	v2[4] = 0;
	v4 = v2 + 5;
	v5 = (int)(v4 + 5);
	do
	{
		*v4 = 0;
		v4[1] = v3;
		v4[2] = (uint32)v1;
		v4[3] = v7;
		v4[4] = v5;
		v4 += 5;
		v5 += 20;
		++v3;
	} while (v3 < 0x300);
	return v4;
}

int sub_461149()
{
	return dword_4BFC40;
}

int sub_46114F()
{
	return dword_4BFC44;
}

_DWORD *sub_45F83E()
{
	int v0; // eax
	char *v1; // edx
	_DWORD *v2; // edi
	unsigned int v3; // ecx
	_DWORD *v4; // edi
	int v5; // ebx
	int v7; // [esp+8h] [ebp-4h]

	v7 = sub_461149();
	v0 = sub_46114F();
	v1 = (char *)dword_4A4210 + 1536;
	v2 = (_DWORD *)dword_4BBB52;
	v3 = 0;
	*(_DWORD *)dword_4BBB52 = v0;
	v2[1] = v0;
	v2[2] = v7;
	v2[3] = 0;
	v2[4] = 0;
	v4 = v2 + 5;
	v5 = (int)(v4 + 5);
	do
	{
		*v4 = 0;
		v4[1] = v3;
		v4[2] = (uint32)v1;
		v4[3] = v7;
		v4[4] = v5;
		v4 += 5;
		v5 += 20;
		++v3;
	} while (v3 < 0x300);
	return v4;
}

void sub_45FF4F()
{
	if (dword_4BBB62)
	{
		sub_457C20(dword_4BBB62);
		dword_4BBB62 = 0;
	}
	if (dword_4BBB66)
	{
		sub_457C20(dword_4BBB66);
		dword_4BBB66 = 0;
	}
	if (dword_4BBB6A)
	{
		sub_457C20(dword_4BBB6A);
		dword_4BBB6A = 0;
	}
	if (dword_4BBB7E)
	{
		sub_457C20(dword_4BBB7E);
		dword_4BBB7E = 0;
	}
	if (dword_4BBB82)
	{
		sub_457C20(dword_4BBB82);
		dword_4BBB82 = 0;
	}
	if (dword_4BBB86)
	{
		sub_457C20(dword_4BBB86);
		dword_4BBB86 = 0;
	}
	if (dword_4BBB3C)
	{
		sub_457C20(dword_4BBB3C);
		dword_4BBB3C = 0;
	}
	if (dword_4A4210)
	{
		sub_457C20(dword_4A4210);
		dword_4A4210 = 0;
	}
}

void *__cdecl sub_45DAB2(int a1, int a2)
{
	void *result; // eax
	void *v3; // eax
	void *v4; // eax

	dword_4A19BC = a2;
	dword_4A19C4 = a1;
	dword_4A19C8 = 176;
	result = (void *)sub_457B70(176 * (a1 + 1));
	dword_4A19C0 = result;
	if (result)
	{
		v3 = (void *)sub_457B70(850 * dword_4A19C8);
		dword_4A19CC = v3;
		if (v3 && (dword_4A19D0 = (int)v3, (v4 = (void *)sub_457B70(8 * (dword_4A19C4 + 1) + 0x4000)) != 0))
		{
			dword_4A35EC = v4;
			sub_45E224();
			result = (void *)sub_46D0CC(a1);
		}
		else
		{
			sub_45DB49();
			result = 0;
		}
	}
	return result;
}

char *sub_45E224()
{
	char *result; // eax

	dword_4A19D8 = dword_4A19C0;
	dword_4A19DC = 0;
	dword_4A35F4 = 0;
	memset(dword_4A19C0, 0, dword_4A19C8 * (dword_4A19C4 + 1));
	memset(dword_4A35EC, 0, 8 * (dword_4A19C4 + 1) + 0x4000);
	result = (char *)dword_4A35EC + 0x4000;
	dword_4A35F0 = (int)dword_4A35EC + 0x4000;
	return result;
}

char __cdecl sub_46D0CC(int a1)
{
	char *v1; // eax

	dword_4C09E4 = 0;
	dword_4C09F0 = a1 + 199;
	v1 = (char *)sub_457B70(32 * (a1 + 200));
	if (v1)
	{
		dword_4C09D4 = v1;
		dword_4C09DC = (int)v1;
		v1 += 20 * (a1 + 200);
		dword_4C09D8 = (int)v1;
		dword_4C09E0 = (int)v1;
		LOBYTE(v1) = 1;
	}
	return (char)v1;
}

void sub_45DB49()
{
	sub_46D122();
	if (dword_4A19CC)
	{
		sub_457C20(dword_4A19CC);
		dword_4A19CC = 0;
	}
	if (dword_4A19C0)
	{
		sub_457C20(dword_4A19C0);
		dword_4A19C0 = 0;
	}
}

void sub_46D122()
{
	if (dword_4C09D4)
	{
		sub_457C20(dword_4C09D4);
		dword_4C09D4 = 0;
	}
}

_DWORD *__cdecl sub_46D187(int a1, int a2)
{
	sub_461155(a1, a2);
	sub_46BB02(a1, a2);
	return sub_45FE1D();
}

unsigned int __cdecl sub_46BB02(unsigned int a1, unsigned int a2)
{
	int v2; // eax
	int v3; // eax
	unsigned int result; // eax

	dword_4C0960 = a1 >> 1;
	dword_4C0964 = a2 >> 1;
	v2 = dword_4C0948 - dword_4BFCBC;
	if (dword_4C0948 < (unsigned int)dword_4BFCBC)
		v2 = 0;
	dword_4C0958 = v2;
	dword_4C0968 = dword_4C0948 - ((unsigned int)dword_4BFCBC >> 1);
	v3 = dword_4C094C - dword_4BFCC0;
	if (dword_4C094C < (unsigned int)dword_4BFCC0)
		v3 = 0;
	dword_4C095C = v3;
	result = dword_4C094C - ((unsigned int)dword_4BFCC0 >> 1);
	dword_4C096C = dword_4C094C - ((unsigned int)dword_4BFCC0 >> 1);
	return result;
}

_DWORD *sub_45FE1D()
{
	sub_45F7CB();
	return sub_45F83E();
}

_DWORD *sub_45F83E()
{
	int v0; // eax
	char *v1; // edx
	_DWORD *v2; // edi
	unsigned int v3; // ecx
	_DWORD *v4; // edi
	int v5; // ebx
	int v7; // [esp+8h] [ebp-4h]

	v7 = sub_461149();
	v0 = sub_46114F();
	v1 = (char *)dword_4A4210 + 1536;
	v2 = (_DWORD *)dword_4BBB52;
	v3 = 0;
	*(_DWORD *)dword_4BBB52 = v0;
	v2[1] = v0;
	v2[2] = v7;
	v2[3] = 0;
	v2[4] = 0;
	v4 = v2 + 5;
	v5 = (int)(v4 + 5);
	do
	{
		*v4 = 0;
		v4[1] = v3;
		v4[2] = (uint32)v1;
		v4[3] = v7;
		v4[4] = v5;
		v4 += 5;
		v5 += 20;
		++v3;
	} while (v3 < 0x300);
	return v4;
}

int __cdecl sub_42D270(int a1)
{
	int result; // eax

	result = a1;
	dword_4C1B24 = (int(*)(void))a1;
	return result;
}

void *sub_45FB5C()
{
	dword_4A4224 = dword_4A4220;
	return memcpy(&dword_4ABF28, &dword_4A4228, 0x7D00u);
}

unsigned int __cdecl sub_45FC01(char *a1)
{
	unsigned int v1; // esi
	signed int v2; // edi
	const char **v3; // ebx
	unsigned __int8 v4; // of
	int v5; // eax
	unsigned int v6; // esi
	signed int v7; // eax
	unsigned int result; // eax
	signed int v9; // [esp-18h] [ebp-24h]
	unsigned int v10; // [esp+4h] [ebp-8h]
	int v11; // [esp+8h] [ebp-4h]

	if (dword_4BBB38)
	{
		v11 = dword_4BBB38;
		v10 = 0;
		v1 = (unsigned int)dword_4BBB38 >> 1;
		v2 = 200;
		v3 = (const char **)dword_4BBB3C;
		while (1)
		{
			v4 = __OFSUB__(v2--, 1);
			if ((v2 < 0) ^ v4)
				break;
			v9 = v1;
			v5 = _strcmpi(a1, v3[v1]);
			if (v5 <= 0)
			{
				if (v5 >= 0)
					return v1;
				v11 = v1;
				v7 = (v1 - v10) >> 1;
				if (!v7)
					v7 = 1;
				v1 -= v7;
				if (v9 < v7)
					break;
			}
			else
			{
				v10 = v1;
				v6 = (v11 - v1) >> 1;
				if (!v6)
					v6 = 1;
				v1 = v9 + v6;
				if (v1 > dword_4BBB38 - 1)
					break;
			}
		}
	}
	result = dword_4BB930;
	if (!dword_4BB92C)
		result = sub_46E100(1, a1);
	return result;
}

int __cdecl sub_46E100(int a1, char *a2)
{
	size_t v2; // eax
	char *v3; // eax
	char *v5; // [esp-4h] [ebp-8h]
	char *v6; // [esp+0h] [ebp-4h]

	v6 = off_4C0AD6[a1];
	switch (a1)
	{
	case 1:
		if (a2)
			strcat(aFileOperationE, a2);
		break;
	case 2:
		v2 = strlen(aShapeAlreadyLo);
		_ltoa((int)a2, &aShapeAlreadyLo[v2], 16);
		break;
	case 3:
		v5 = &aShapeNotLoaded[strlen(aShapeNotLoaded)];
		v3 = sub_45FCA5((unsigned int)a2);
		if (v3)
			strcat(v5, v3);
		else
			_ltoa((int)a2, v5, 16);
		break;
	}
	return sub_45B29E(v6);
}

char *__cdecl sub_45FCA5(unsigned int a1)
{
	char *result; // eax
	HFILE v2; // eax
	char *v3; // [esp+4h] [ebp-4h]

	result = 0;
	if (a1 < dword_4BBB38)
	{
		v3 = (char *)*((_DWORD *)dword_4BBB3C + a1);
		strcpy(Buffer, byte_4C2298);
		strcat(Buffer, v3);
		_beep((unsigned int)Buffer, 0);
		if (v2 == -1)
		{
			strcpy(Buffer, dword_4BB934);
			if (Buffer[0])
				sub_458E10(Buffer);
			strcat(Buffer, v3);
		}
		else
		{
			sub_457910(v2);
		}
		result = Buffer;
	}
	return result;
}

int __cdecl sub_45FBE9(int a1)
{
	int result; // eax

	result = a1;
	dword_4BB930 = a1;
	dword_4BB92C = 1;
	return result;
}

int *__cdecl sub_42CD10(const char *a1)
{
	HFILE v1; // eax

	strcpy((char *)&dword_4C33E0, byte_4C2298);
	strcat((char *)&dword_4C33E0, a1);
	sub_46C830((unsigned int)&dword_4C33E0, 0);
	if (v1 == -1)
	{
		dword_4C33E0 = dword_477DE8;
		strcat((char *)&dword_4C33E0, a1);
	}
	else
	{
		sub_46C970(v1);
	}
	return &dword_4C33E0;
}

void __cdecl sub_45DC5C(int a1, int a2, int a3)
{
	void *v3; // ebx
	int v4; // eax
	int *v5; // ebx
	int *v6; // ebx
	char *v7; // ST14_4
	int v8; // eax
	char *v9; // ebx
	bool v10; // zf
	bool v11; // sf
	unsigned __int8 v12; // of
	int v13; // eax
	void *v14; // [esp+8h] [ebp-18h]
	int v15; // [esp+Ch] [ebp-14h]
	int v16; // [esp+10h] [ebp-10h]
	int v17; // [esp+14h] [ebp-Ch]
	int v18; // [esp+18h] [ebp-8h]
	int v19; // [esp+1Ch] [ebp-4h]

	sub_45DA90();
	if (sub_46DEC0(a1))
	{
		v14 = (void *)sub_457B70(0xFA000u);
		if (v14)
		{
			v18 = sub_46DC70(aObject, 1);
			if (v18)
			{
				v19 = sub_46DBA0(0, v18);
				do
				{
					v15 = 0;
					if (a2 >= 0)
						sub_46DE70(aObjReadshape, 1, v18, (int)&v15);
					if (sub_46DE70(aObjCode, 1, v18, (int)&v17))
					{
						v3 = dword_4A19D4;
						v4 = v17;
						dword_4A2728[v17] = (int)dword_4A19D4;
						if (!(_BYTE)a2)
							dword_4A19E0[v4] = (int)v3;
						memset(v3, 0, 0xB0u);
						sub_46DD50(aObjName, 1, v18, (int)dword_4A19D4 + 52);
						sub_45DBF1(aObjMode, 1, v18, (int)dword_4A19D4, a3);
						sub_45DBF1(aObjPlane, 1, v18, (int)dword_4A19D4 + 12, a3);
						sub_45DBF1(aObjX1, 1, v18, (int)dword_4A19D4 + 16, a3);
						sub_45DBF1(aObjY1, 1, v18, (int)dword_4A19D4 + 20, a3);
						v5 = (int *)((char *)dword_4A19D4 + 24);
						*v5 = sub_461149();
						sub_45DBF1(aObjX2, 1, v18, (int)v5, a3);
						v6 = (int *)((char *)dword_4A19D4 + 28);
						*v6 = sub_46114F();
						sub_45DBF1(aObjY2, 1, v18, (int)v6, a3);
						sub_45DBF1(aObjZoomx, 1, v18, (int)dword_4A19D4 + 32, a3);
						sub_45DBF1(aObjZoomy, 1, v18, (int)dword_4A19D4 + 36, a3);
						sub_45DBF1(aObjData, 1, v18, (int)dword_4A19D4 + 40, a3);
						sub_45DBF1(aObjShapesub, 1, v18, (int)dword_4A19D4 + 44, a3);
						sub_45DBF1(aObjProcessCode, 1, v18, (int)dword_4A19D4 + 100, a3);
						sub_45DBF1(aObjProcessCode, 1, v18, (int)dword_4A19D4 + 100, a3);
						sub_45DBF1(aObjCollideX1, 1, v18, (int)dword_4A19D4 + 104, a3);
						sub_45DBF1(aObjCollideY1, 1, v18, (int)dword_4A19D4 + 108, a3);
						sub_45DBF1(aObjCollideX2, 1, v18, (int)dword_4A19D4 + 112, a3);
						sub_45DBF1(aObjCollideY2, 1, v18, (int)dword_4A19D4 + 116, a3);
						sub_45DBF1(aObjShapeDelay, 1, v18, (int)dword_4A19D4 + 124, a3);
						*((_WORD *)dword_4A19D4 + 63) = *((_DWORD *)dword_4A19D4 + 31);
						sub_45DBF1(aObjAttribute, 1, v18, (int)dword_4A19D4 + 128, a3);
						sub_45DBF1(aObjScore, 1, v18, (int)dword_4A19D4 + 132, a3);
						sub_45DBF1(aObjHitpoint, 1, v18, (int)dword_4A19D4 + 136, a3);
						sub_45DBF1(aObjData1, 1, v18, (int)dword_4A19D4 + 140, a3);
						sub_45DBF1(aObjData2, 1, v18, (int)dword_4A19D4 + 144, a3);
						sub_45DBF1(aObjData3, 1, v18, (int)dword_4A19D4 + 148, a3);
						sub_45DBF1(aObjData4, 1, v18, (int)dword_4A19D4 + 152, a3);
						sub_45DBF1(aObjData5, 1, v18, (int)dword_4A19D4 + 156, a3);
						sub_45DBF1(aObjData6, 1, v18, (int)dword_4A19D4 + 160, a3);
						sub_45DBF1(aObjData7, 1, v18, (int)dword_4A19D4 + 164, a3);
						sub_45DBF1(aObjData8, 1, v18, (int)dword_4A19D4 + 168, a3);
						sub_45DBF1(aObjData9, 1, v18, (int)dword_4A19D4 + 172, a3);
						v7 = (char *)dword_4A19D4 + 120;
						sub_45DBF1(aObjShapeNumber, 1, v18, (int)dword_4A19D4 + 120, a3);
						v16 = *(_DWORD *)v7;
						*((_WORD *)v7 + 1) = v16;
						byte_4C1E98[0] = 0;
						sub_46DD50(aObjShapeName, 1, v18, (int)byte_4C1E98);
						v8 = sub_45FC01(byte_4C1E98);
						if (v8 == -1)
							v8 = sub_46E100(1, byte_4C1E98);
						v17 = v8;
						v9 = (char *)dword_4A19D4 + 48;
						*(_DWORD *)v9 = v8;
						*((_WORD *)v9 + 1) = v8;
						if (!v15)
						{
							while (1)
							{
								sub_4601A2(v8, (unsigned __int8)a2, v14, 0xFA000u);
								v12 = __OFSUB__(v16, 1);
								v10 = v16 == 1;
								v11 = v16-- - 1 < 0;
								if ((unsigned __int8)(v11 ^ v12) | v10)
									break;
								v8 = v17++ + 1;
							}
						}
						dword_4A19D4 = (char *)dword_4A19D4 + 176;
					}
					v13 = sub_46DCE0(aObject, v18);
					if (!v13)
						break;
					v18 = v13;
					--v19;
				} while (v19);
			}
			sub_46E060();
			if (!(_BYTE)a2)
				dword_4A19D0 = (int)dword_4A19D4;
			if (v14)
				sub_457C20(v14);
		}
		else
		{
			sub_46E100(0, 0);
			sub_45E224();
		}
	}
}

void *sub_45DA90()
{
	dword_4A19D4 = (void *)dword_4A19D0;
	return memcpy(dword_4A2728, dword_4A19E0, 0xD48u);
}

signed int __cdecl sub_46DEC0(int a1)
{
  HFILE v1; // eax
  HFILE v2; // edi
  signed int result; // eax
  int v4; // esi
  char *v5; // eax
  int v6; // edi

  byte_4C24C0 = 0;
  byte_4C2541 = 0;
  sub_458D60(&byte_4C2540, (const char *)a1);
  if ( byte_4C2541 != 58 && byte_4C2540 != 92 )
    strcpy(&byte_4C24C0, byte_4C2298);
  strcat(&byte_4C24C0, &byte_4C2540);
  sub_46D450((const char *)a1);
  v2 = v1;
  if ( v1 == -1 )
    return 0;
  v4 = sub_46CB70(v1) + 2;
  if ( dword_4C71D0 )
    v5 = (char *)sub_457BC0(dword_4C24B0, v4 + dword_4C71D0);
  else
    v5 = (char *)sub_457B70(v4);
  if ( v5 )
  {
    dword_4C24B0 = v5;
    sub_46CAB0(v2, &v5[dword_4C71D0], v4 - 2);
    sub_46C970(v2);
    *(_WORD *)((char *)dword_4C24B0 + v4 + dword_4C71D0 - 2) = 2573;
    v6 = dword_4C25C4;
    sub_46D870((int)dword_4C24B0 + dword_4C71D0, v4);
    if ( dword_4C24BC && v6 != dword_4C25C4 )
      sub_46DA40((int)dword_4C24BC + v6, dword_4C25C4 - v6);
    dword_4C71D0 += v4;
    *(_BYTE *)dword_4C24B0 = 0;
    result = 1;
  }
  else
  {
    if ( dword_4C24B0 )
    {
      sub_457C20(dword_4C24B0);
      dword_4C24B0 = 0;
    }
    dword_4C71D0 = 0;
    sub_46C970(v2);
    result = 0;
  }
  return result;
}

unsigned int __cdecl sub_458D60(_BYTE *a1, const char *a2)
{
	unsigned int result; // eax
	unsigned int v3; // ebx
	signed int v4; // ecx
	char v5; // dl

	result = 0;
	v3 = 0;
	v4 = strlen(a2);
	if (v4 <= 0)
	{
		*a1 = 0;
	}
	else
	{
		do
		{
			v5 = a2[result++];
			if (v5 == 58 || v5 == 92)
				v3 = result;
			--v4;
		} while (v4);
		result = (unsigned int)a1;
		if (v3)
		{
			if (a1 != a2)
				memcpy(a1, a2, v3);
		}
		a1[v3] = 0;
	}
	return result;
}

void __cdecl sub_46D450(const char *a1)
{
	int v1; // eax

	sub_46C830((unsigned int)a1, 0);
	if (v1 == -1)
	{
		strcpy(&byte_4C2540, &byte_4C24C0);
		sub_458E10(&byte_4C2540);
		strcat(&byte_4C2540, a1);
		sub_46C830((unsigned int)&byte_4C2540, 0);
	}
}

int __cdecl sub_46DC70(char *a1, int a2)
{
	int v2; // esi
	int v3; // edi
	char *v4; // eax

	v2 = 0;
	if (dword_4C25C8 <= 0)
		return 0;
	v3 = a2;
	v4 = (char *)dword_4C24B4;
	while (_strcmpi((const char *)dword_4C24B0 + *(_DWORD *)&v4[v2], a1) || --v3 > 0)
	{
		v4 = (char *)dword_4C24B4;
		v2 = *(_DWORD *)((char *)dword_4C24B4 + v2 + 8);
		if (!v2)
			return 0;
		if (v2 >= dword_4C25C8)
			return 0;
	}
	return v2 + 1;
}

int __cdecl sub_457BC0(void *a1, size_t a2)
{
	size_t v2; // edi
	void *v3; // eax
	int v4; // esi
	size_t v5; // ecx
	int result; // eax

	v2 = _msize(a1);
	v3 = realloc(a1, a2);
	v4 = (int)v3;
	if (v3)
	{
		v5 = _msize(v3) - v2 + dword_4C1E90;
		result = v4;
		dword_4C1E90 = v5;
	}
	else
	{
		// TODO:sub_45B29E
		/*if (dword_4C1E94)
			sub_45B29E(dword_4C1E94);*/
		/*.text:0045B29E
		.text : 0045B29E; == == == == == == == = S U B R O U T I N E == == == == == == == == == == == == == == == == == == == =
		.text:0045B29E
		.text : 0045B29E
		.text : 0045B29E sub_45B29E proc near; CODE XREF : sub_42C7E0 + 27↑p
		.text : 0045B29E; sub_42EE20 + 7D↑p ...
		.text:0045B29E
		.text : 0045B29E arg_0 = dword ptr  8
		.text : 0045B29E
		.text : 0045B29E enter   0, 0
		.text : 0045B2A2 mov     eax, [ebp + arg_0]
		.text : 0045B2A5 cmp     byte ptr[eax], 0
		.text : 0045B2A8 jz      short loc_45B2B5
		.text : 0045B2AA push[ebp + arg_0]
		.text : 0045B2AD call    sub_458F00
		.text : 0045B2B2 add     esp, 4
		.text : 0045B2B5
		.text : 0045B2B5 loc_45B2B5 : ; CODE XREF : sub_45B29E + A↑j
		.text : 0045B2B5 cli
		.text : 0045B2B6 mov     ebp, dword_4A18A8
		.text : 0045B2BC mov     ss, word_4A18A4
		.text : 0045B2C2 mov     esp, dword_4A18A0
		.text : 0045B2C8 sti
		.text : 0045B2C9 push    dword_4A18AC
		.text : 0045B2CF mov     eax, 0FFFFFFFFh
		.text : 0045B2D4 retn
		.text : 0045B2D4 sub_45B29E endp
		.text : 0045B2D4*/

		result = v4;
	}
	return result;
}

int __cdecl sub_46DBA0(char *a1, int a2)
{
	int v2; // esi
	char *v3; // eax
	int v4; // edi
	int result; // eax
	signed int v6; // edi
	int i; // eax

	v2 = a2 - 1;
	if (a1)
	{
		v3 = (char *)dword_4C24B4;
		v4 = 0;
		do
		{
			if (!_strcmpi((const char *)dword_4C24B0 + *(_DWORD *)&v3[v2], a1))
				++v4;
			v3 = (char *)dword_4C24B4;
			v2 = *(_DWORD *)((char *)dword_4C24B4 + v2 + 8);
		} while (v2);
		result = v4;
	}
	else
	{
		v6 = 1;
		for (i = *(_DWORD *)((char *)dword_4C24B4 + v2 + 8); i; ++v6)
			i = *(_DWORD *)((char *)dword_4C24B4 + i + 8);
		result = v6;
	}
	return result;
}

int __cdecl sub_46DE70(char *a1, int a2, int a3, int a4)
{
	int result; // eax
	char v5[4]; // [esp+0h] [ebp-80h]

	if (sub_46DD50(a1, a2, a3, (int)v5))
		result = sub_46DE00(v5, a4);
	else
		result = 0;
	return result;
}

char *__cdecl sub_46DD50(char *a1, int a2, int a3, int a4)
{
	char *v4; // eax
	int v5; // esi
	int v6; // ebx
	bool v7; // zf
	char *v9; // edx

	v4 = (char *)dword_4C24B4;
	v5 = *(_DWORD *)((char *)dword_4C24B4 + a3 + 11);
	if (v5 < dword_4C25C8)
	{
		v6 = a2;
		while (v5)
		{
			if (!a1
				|| (v7 = _strcmpi((const char *)dword_4C24B0 + *(_DWORD *)&v4[v5], a1) == 0, v4 = (char *)dword_4C24B4, v7))
			{
				if (--v6 <= 0)
				{
					v9 = (char *)dword_4C24B0 + *(_DWORD *)&v4[v5 + 4];
					if (a4)
						strcpy((char *)a4, (const char *)dword_4C24B0 + *(_DWORD *)&v4[v5 + 4]);
					return v9;
				}
			}
			v5 = *(_DWORD *)&v4[v5 + 12];
			if (v5 >= dword_4C25C8)
				return 0;
		}
	}
	return 0;
}

int __cdecl sub_46DE00(char *a1, int a2)
{
	int v3; // [esp+8h] [ebp-80h]

	if (sub_45B5FA((unsigned __int8 *)a1, (int *)a2))
		return 1;
	if (sub_46DB10((int)&v3, a1) && sub_45B5FA((unsigned __int8 *)&v3, (int *)a2))
		return 1;
	return 0;
}

int __cdecl sub_46DB10(int a1, char *a2)
{
	int v2; // esi
	char *v3; // eax
	int result; // eax

	v2 = 0;
	if (dword_4C25D4 <= 0)
		return 0;
	v3 = (char *)dword_4C24B8;
	while (_strcmpi((const char *)dword_4C24BC + *(_DWORD *)&v3[v2], a2))
	{
		v3 = (char *)dword_4C24B8;
		v2 = *(_DWORD *)((char *)dword_4C24B8 + v2 + 8);
		if (!v2)
			return 0;
		if (v2 >= dword_4C25D4)
			return 0;
	}
	result = 1;
	strcpy((char *)a1, (const char *)dword_4C24BC + *(_DWORD *)((char *)dword_4C24B8 + v2 + 4));
	return result;
}

char *__cdecl sub_45DBF1(char *a1, int a2, int a3, int a4, int a5)
{
	char *result; // eax

	result = (char *)sub_46DE70(a1, a2, a3, a4);
	if (!result)
	{
		result = sub_46DD50(a1, a2, a3, (int)byte_4C1E98);
		if (result)
		{
			if (a5)
			{
				result = (char *)((int(__cdecl *)(char *))a5)(byte_4C1E98);
				*(_DWORD *)a4 = (uint32)result;
			}
			else
			{
				sub_46E100(1, byte_4C1E98);
				result = 0;
			}
		}
	}
	return result;
}

void __cdecl sub_4601A2(unsigned int a1, int a2, void *a3, UINT a4)
{
	int v4; // eax
	HFILE v5; // eax
	char *v6; // eax
	unsigned int v7; // eax
	bool v8; // cf
	unsigned int v9; // eax
	_DWORD *v10; // eax
	int v11; // ST08_4
	_DWORD *v12; // eax
	size_t uBytes; // [esp+Ch] [ebp-Ch]
	HFILE hFile; // [esp+10h] [ebp-8h]
	_DWORD *lpBuffer; // [esp+14h] [ebp-4h]

	v4 = a1;
	if (a1 >= dword_4BBB38)
		v4 = sub_46E100(5, 0);
	if (!dword_4ABF28[v4])
	{
		sub_45FD4B(v4);
		if (v5 != -1)
			goto LABEL_7;
		while (1)
		{
			v6 = sub_45FCA5(a1);
			sub_46E100(1, v6);
			do
			{
				v5 = sub_46E100(6, 0);
			LABEL_7:
				hFile = v5;
				uBytes = sub_46CB70(v5);
				v7 = sub_460535();
				v8 = v7 < uBytes;
				v9 = v7 - uBytes;
			} while (v8 || v9 < 0x7D00);
			v10 = (int*)a3;
			if (!a3 || a4 < uBytes)
				v10 = (_DWORD *)sub_457B70(uBytes);
			if (!v10)
			{
				sub_46C970(hFile);
				v10 = (_DWORD *)sub_46E100(0, 0);
			}
			lpBuffer = v10;
			v11 = sub_46CAB0(hFile, v10, uBytes);
			sub_46C970(hFile);
			if (v11 == uBytes)
				break;
			sub_457C20(lpBuffer);
		}
		v12 = sub_45FA1E(lpBuffer, &dword_4A4224);
		dword_4ABF28[a1] = (int)v12;
		if (!a2)
		{
			dword_4A4228[a1] = (int)v12;
			dword_4A4220 = dword_4A4224;
		}
		if (a3 != lpBuffer)
			sub_457C20(lpBuffer);
	}
}

void __cdecl sub_45FD4B(unsigned int a1)
{
	int v1; // eax
	char *v2; // [esp+4h] [ebp-4h]

	if (a1 < dword_4BBB38)
	{
		v2 = (char *)*((_DWORD *)dword_4BBB3C + a1);
		strcpy(Buffer, byte_4C2298);
		strcat(Buffer, v2);
		sub_46C830((unsigned int)Buffer, 0);
		if (v1 == -1)
		{
			strcpy(Buffer, dword_4BB934);
			if (Buffer[0])
				sub_458E10(Buffer);
			strcat(Buffer, v2);
			sub_46C830((unsigned int)Buffer, 0);
		}
	}
}

int sub_460535()
{
	return dword_4A4214 - dword_4A4224;
}

_DWORD *__cdecl sub_45FA1E(_DWORD *a1, _DWORD *a2)
{
	_DWORD *v2; // edi
	int v3; // edx
	int v4; // edx
	_DWORD *v5; // edi
	_DWORD *v6; // ebx
	unsigned __int16 *v7; // esi
	int v8; // eax
	unsigned __int16 *v9; // esi
	int v10; // ecx
	int j; // edx
	unsigned int k; // ecx
	_DWORD *result; // eax
	int v14; // [esp-18h] [ebp-34h]
	_DWORD *v15; // [esp-14h] [ebp-30h]
	int i; // [esp+Ch] [ebp-10h]
	int v17; // [esp+14h] [ebp-8h]
	int v18; // [esp+18h] [ebp-4h]

	v2 = (_DWORD *)*a2;
	if (*a1 == 1397247060)
		goto LABEL_3;
	do
	{
		sub_46E100(1, 0);
	LABEL_3:
		;
	} while (a1[1] || a1[3] || a1[2] != 2);
	v3 = a1[8];
	v2[3] = a1[7];
	v2[4] = v3;
	v4 = a1[6];
	v2[2] = a1[5];
	v2[1] = v4;
	v5 = v2 + 5;
	v18 = a1[7];
	v17 = -a1[8];
	v6 = a1 + 9;
	for (i = 0; v4; --v4)
	{
		HIWORD(v8) = 0;
		v7 = (unsigned __int16 *)((char *)a1 + *v6);
		LOWORD(v8) = *v7;
		if (*v7 != -1)
		{
			do
			{
				v9 = v7 + 1;
				*v5 = v8 - v18;
				v5[1] = v17;
				v10 = *v9;
				v7 = v9 + 1;
				v5[3] = v10;
				v5[2] = *v5 + 5;
				v15 = v5;
				v5 += 5;
				v14 = v4;
				if (dword_4A421C)
				{
					do
					{
						*(_WORD *)v5 = *v7 & 0x1F | ((unsigned __int16)(*v7 & 0xFFC0) >> 1);
						++v7;
						v5 = (_DWORD *)((char *)v5 + 2);
						--v10;
					} while (v10);
				}
				else
				{
					for (j = v10 & 3; j; --j)
					{
						*(_WORD *)v5 = *v7;
						++v7;
						v5 = (_DWORD *)((char *)v5 + 2);
					}
					for (k = v10 & 0xFFFFFFFC; k; k -= 4)
					{
						*v5 = *(_DWORD *)v7;
						v5[1] = *((_DWORD *)v7 + 1);
						v7 += 4;
						v5 += 2;
					}
				}
				v4 = v14;
				++i;
				v15[4] = *v5;
				v8 = *v7;
			} while ((_WORD)v8 != -1);
		}
		++v6;
		++v17;
	}
	result = (_DWORD *)*a2;
	*a2 = *v5;
	*result = i;
	return result;
}

int __cdecl sub_46DCE0(char *a1, int a2)
{
	int v2; // ecx
	char *v3; // eax
	int v4; // esi

	v2 = a2;
	if (a2)
		v2 = a2 - 1;
	v3 = (char *)dword_4C24B4;
	v4 = *(_DWORD *)((char *)dword_4C24B4 + v2 + 8);
	if (!v4 || v4 >= dword_4C25C8)
		return 0;
	while (_strcmpi((const char *)dword_4C24B0 + *(_DWORD *)&v3[v4], a1))
	{
		v3 = (char *)dword_4C24B4;
		v4 = *(_DWORD *)((char *)dword_4C24B4 + v4 + 8);
		if (!v4)
			return 0;
		if (v4 >= dword_4C25C8)
			return 0;
	}
	return v4 + 1;
}

void sub_46E060()
{
	if (dword_4C24B0)
	{
		sub_457C20(dword_4C24B0);
		dword_4C24B0 = 0;
		dword_4C71D0 = 0;
	}
	if (dword_4C24B4)
	{
		sub_457C20(dword_4C24B4);
		dword_4C24B4 = 0;
		dword_4C25C0 = 0;
		dword_4C25C8 = 0;
	}
	if (dword_4C24B8)
	{
		sub_457C20(dword_4C24B8);
		dword_4C24B8 = 0;
		dword_4C25D0 = 0;
		dword_4C25D4 = 0;
	}
	if (dword_4C24BC)
	{
		sub_457C20(dword_4C24BC);
		dword_4C24BC = 0;
		dword_4C25C4 = 0;
	}
}

int __cdecl sub_46D870(int a1, int a2)
{
	int v2; // esi
	int v3; // edi
	int v4; // ebx
	int result; // eax
	int v6; // [esp+10h] [ebp-Ch]
	int v7; // [esp+14h] [ebp-8h]
	int v8; // [esp+18h] [ebp-4h]

	v2 = dword_4C25C8;
	v8 = 0;
	v3 = dword_4C25C8 != 0 ? dword_4C25CC : 0;
	v4 = dword_4C25C8 + 16;
	while (1)
	{
		result = sub_46D710(v4);
		if (!result)
			break;
		result = sub_46D4E0(a1, &v8, a2, &v6, &v7, (int)dword_4C24B0);
		*(_DWORD *)((char *)dword_4C24B4 + v2) = 0;
		*(_DWORD *)((char *)dword_4C24B4 + v2 + 4) = 0;
		*(_DWORD *)((char *)dword_4C24B4 + v2 + 8) = 0;
		*(_DWORD *)((char *)dword_4C24B4 + v2 + 12) = 0;
		switch (result)
		{
		case 0:
			dword_4C25C8 = v2;
			dword_4C25CC = v3;
			return result;
		case 1:
			*(_DWORD *)((char *)dword_4C24B4 + v3 + 8) = v2;
			v3 = v2;
			*(_DWORD *)((char *)dword_4C24B4 + v2) = v6;
			v2 += 16;
			v4 += 16;
			break;
		case 2:
			if (v4 != 16)
				*(_DWORD *)((char *)dword_4C24B4 + v2 - 4) = v2;
			*(_DWORD *)((char *)dword_4C24B4 + v2) = v6;
			*(_DWORD *)((char *)dword_4C24B4 + v2 + 4) = v7;
			v2 += 16;
			v4 += 16;
			break;
		default:
			if (!_strcmpi(aInclude, (const char *)dword_4C24B0 + v6))
				sub_46D7A0((int)dword_4C24B0 + v7);
			break;
		}
	}
	return result;
}

signed int __cdecl sub_46D710(int a1)
{
	void *v1; // eax
	signed int result; // eax

	if (a1 <= dword_4C25C0)
		return 1;
	if (dword_4C25C0)
		v1 = (void *)sub_457BC0(dword_4C24B4, dword_4C25C0 + 960);
	else
		v1 = (void *)sub_457B70(0x3C0u);
	if (v1)
	{
		dword_4C24B4 = v1;
		dword_4C25C0 += 960;
		result = 1;
	}
	else
	{
		if (dword_4C24B4)
		{
			sub_457C20(dword_4C24B4);
			dword_4C24B4 = 0;
		}
		dword_4C25C0 = 0;
		dword_4C25C8 = 0;
		result = 0;
	}
	return result;
}

signed int __cdecl sub_46D4E0(int a1, int *a2, int a3, _DWORD *a4, _DWORD *a5, int a6)
{
	int v6; // esi
	int v7; // eax
	char v8; // bl
	signed int v9; // ebp
	int v11; // eax
	char v12; // al

	v6 = *a2;
	v7 = a3;
	*a4 = 0;
	*a5 = 0;
	if (v6 >= a3)
		return 0;
	do
	{
	LABEL_4:
		v8 = *(_BYTE *)(v6++ + a1);
		if (v8 == 9)
			v8 = 32;
		if (v8 == 47 && *(_BYTE *)(v6 + a1) == 47 || v8 == 59)
		{
			do
			{
				v8 = *(_BYTE *)(v6++ + a1);
				if (v6 >= v7)
					return 0;
			} while (v8 != 10);
		}
		if (v6 >= v7)
			return 0;
	} while (v8 == 32 || v8 == 13 || v8 == 10);
	if (v8 == 91)
	{
		v9 = 1;
		*a4 = v6 + a1 - a6;
		do
		{
			if (v8 == 61 || v8 == 59 || v8 == 13)
				break;
			v8 = *(_BYTE *)(v6++ + a1);
			if (v8 == 9)
				v8 = 32;
			if (v8 == 47 && *(_BYTE *)(v6 + a1) == 47)
				v8 = 59;
		} while (v8 != 93);
		*(_BYTE *)(v6 + a1 - 1) = 0;
	LABEL_77:
		if (v8 != 10)
		{
			do
				v12 = *(_BYTE *)(v6++ + a1);
			while (v12 != 10);
		}
		*a2 = v6;
		return v9;
	}
	if (v8 != 35)
	{
	LABEL_44:
		v9 = 2;
		*a4 = v6 + a1 - a6 - 1;
		goto LABEL_45;
	}
	v9 = 3;
	*a4 = v6 + a1 - a6;
	if (_strnicmp(aDefine_0, (const char *)(v6 + a1), 6u))
	{
	LABEL_45:
		if (v8 != 32)
		{
			while (v8 != 61 && v8 != 59 && v8 != 13)
			{
				if (v8 == 47 && *(_BYTE *)(v6 + a1) == 47)
				{
					v8 = 59;
					break;
				}
				v8 = *(_BYTE *)(v6++ + a1);
				if (v8 == 9)
					v8 = 32;
				if (v8 == 32)
					break;
			}
		}
		*(_BYTE *)(v6 + a1 - 1) = 0;
		while (v8 == 32 || v8 == 61)
		{
			v8 = *(_BYTE *)(v6++ + a1);
			if (v8 == 9)
				v8 = 32;
			if (v8 == 47 && *(_BYTE *)(v6 + a1) == 47)
				v8 = 59;
		}
		if (v8 != 59 && v8 != 13)
		{
			v11 = v6;
			*a5 = v6 + a1 - a6 - 1;
			v8 = 32;
			do
			{
				if (v8 == 59)
					break;
				if (v8 != 32)
					v11 = v6;
				v8 = *(_BYTE *)(v6++ + a1);
				if (v8 == 9)
					v8 = 32;
				if (v8 == 47 && *(_BYTE *)(v6 + a1) == 47)
					v8 = 59;
			} while (v8 != 13);
			*(_BYTE *)(v11 + a1) = 0;
		}
		goto LABEL_77;
	}
	while (1)
	{
		if (v8 == 61 || v8 == 59)
		{
		LABEL_25:
			while (v8 == 32)
			{
				v8 = *(_BYTE *)(v6++ + a1);
				if (v8 == 9)
					v8 = 32;
				if (v8 == 13 || v8 == 10)
					goto LABEL_30;
			}
			goto LABEL_44;
		}
		v8 = *(_BYTE *)(v6++ + a1);
		if (v8 == 9)
			v8 = 32;
		if (v8 == 13 || v8 == 10)
			break;
		if (v8 == 32)
			goto LABEL_25;
	}
LABEL_30:
	if (v6 < a3)
	{
		v7 = a3;
		goto LABEL_4;
	}
	return 0;
}

int __cdecl sub_46D870(int a1, int a2)
{
	int v2; // esi
	int v3; // edi
	int v4; // ebx
	int result; // eax
	int v6; // [esp+10h] [ebp-Ch]
	int v7; // [esp+14h] [ebp-8h]
	int v8; // [esp+18h] [ebp-4h]

	v2 = dword_4C25C8;
	v8 = 0;
	v3 = dword_4C25C8 != 0 ? dword_4C25CC : 0;
	v4 = dword_4C25C8 + 16;
	while (1)
	{
		result = sub_46D710(v4);
		if (!result)
			break;
		result = sub_46D4E0(a1, &v8, a2, &v6, &v7, (int)dword_4C24B0);
		*(_DWORD *)((char *)dword_4C24B4 + v2) = 0;
		*(_DWORD *)((char *)dword_4C24B4 + v2 + 4) = 0;
		*(_DWORD *)((char *)dword_4C24B4 + v2 + 8) = 0;
		*(_DWORD *)((char *)dword_4C24B4 + v2 + 12) = 0;
		switch (result)
		{
		case 0:
			dword_4C25C8 = v2;
			dword_4C25CC = v3;
			return result;
		case 1:
			*(_DWORD *)((char *)dword_4C24B4 + v3 + 8) = v2;
			v3 = v2;
			*(_DWORD *)((char *)dword_4C24B4 + v2) = v6;
			v2 += 16;
			v4 += 16;
			break;
		case 2:
			if (v4 != 16)
				*(_DWORD *)((char *)dword_4C24B4 + v2 - 4) = v2;
			*(_DWORD *)((char *)dword_4C24B4 + v2) = v6;
			*(_DWORD *)((char *)dword_4C24B4 + v2 + 4) = v7;
			v2 += 16;
			v4 += 16;
			break;
		default:
			if (!_strcmpi(aInclude, (const char *)dword_4C24B0 + v6))
				sub_46D7A0((int)dword_4C24B0 + v7);
			break;
		}
	}
	return result;
}

void __cdecl sub_46D350(const char *a1)
{
	int v1; // eax
	int v2; // eax

	sub_46C830((unsigned int)a1, 0);
	if (v1 == -1)
	{
		strcpy(&byte_4C2540, &byte_4C24C0);
		sub_458E10(&byte_4C2540);
		strcat(&byte_4C2540, a1);
		sub_46C830((unsigned int)&byte_4C2540, 0);
		if (v2 == -1)
		{
			strcpy(&byte_4C2540, (const char *)&unk_4C2500);
			sub_458E10(&byte_4C2540);
			strcat(&byte_4C2540, a1);
			sub_46C830((unsigned int)&byte_4C2540, 0);
		}
	}
}

void __cdecl sub_46D7A0(int a1)
{
	HFILE v1; // eax
	HFILE v2; // ebx
	size_t v3; // esi
	int v4; // eax
	char *v5; // edi

	sub_46D350((const char *)a1);
	v2 = v1;
	if (v1 != -1)
	{
		v3 = sub_46CB70(v1) + 2;
		if (dword_4C24BC)
			v4 = sub_457BC0(dword_4C24BC, v3 + dword_4C25C4);
		else
			v4 = sub_457B70(v3);
		v5 = (char *)v4;
		if (v4)
		{
			sub_46CAB0(v2, (LPVOID)(v4 + dword_4C25C4), v3 - 2);
			*(_WORD *)&v5[v3 - 2 + dword_4C25C4] = 2573;
			dword_4C24BC = v5;
			dword_4C25C4 += v3;
			sub_46C970(v2);
		}
		else
		{
			if (dword_4C24BC)
			{
				sub_457C20(dword_4C24BC);
				dword_4C24BC = 0;
			}
			dword_4C25C4 = 0;
			sub_46C970(v2);
		}
	}
}

signed int __cdecl sub_46DA40(int a1, int a2)
{
	int v2; // esi
	int v3; // ebp
	int v4; // edi
	int v5; // ebx
	signed int result; // eax
	int v7; // [esp+10h] [ebp-8h]
	int v8; // [esp+14h] [ebp-4h]

	v2 = dword_4C25D4;
	v3 = a2;
	v7 = 0;
	v4 = dword_4C25D4 != 0 ? dword_4C25D8 : 0;
	v5 = dword_4C25D4 + 12;
	while (1)
	{
		result = sub_46D9B0(v5);
		if (!result)
			break;
		result = sub_46D4E0(a1, &v7, v3, &a2, &v8, (int)dword_4C24BC);
		*(_DWORD *)((char *)dword_4C24B8 + v2) = 0;
		*(_DWORD *)((char *)dword_4C24B8 + v2 + 4) = 0;
		*(_DWORD *)((char *)dword_4C24B8 + v2 + 8) = 0;
		if (!result)
		{
			dword_4C25D4 = v2;
			dword_4C25D8 = v4;
			return result;
		}
		if (result == 2)
		{
			*(_DWORD *)((char *)dword_4C24B8 + v4 + 8) = v2;
			v4 = v2;
			*(_DWORD *)((char *)dword_4C24B8 + v2) = a2;
			*(_DWORD *)((char *)dword_4C24B8 + v2 + 4) = v8;
			v2 += 12;
			v5 += 12;
		}
	}
	return result;
}

signed int __cdecl sub_46D9B0(int a1)
{
	void *v1; // eax
	signed int result; // eax

	if (a1 <= dword_4C25D0)
		return 1;
	if (dword_4C25D0)
		v1 = (void *)sub_457BC0(dword_4C24B8, dword_4C25D0 + 720);
	else
		v1 = (void *)sub_457B70(0x2D0u);
	if (v1)
	{
		dword_4C24B8 = v1;
		dword_4C25D0 += 720;
		result = 1;
	}
	else
	{
		if (dword_4C24B8)
		{
			sub_457C20(dword_4C24B8);
			dword_4C24B8 = 0;
		}
		dword_4C25D0 = 0;
		dword_4C25D4 = 0;
		result = 0;
	}
	return result;
}

unsigned int __cdecl sub_42CDD0(char *a1)
{
	unsigned int result; // eax
	unsigned int v2; // esi

	result = sub_459990(a1);
	if (result == -1)
	{
		v2 = sub_45FC01(a1);
		if (v2 == -1)
			sub_446480(0, a1);
		result = v2;
	}
	return result;
}

int __cdecl sub_459990(char *a1)
{
	int result; // eax
	char *v2; // ebp
	size_t v3; // ebx
	signed int v4; // edi
	signed int v5; // esi
	int v6; // eax
	int v7; // esi
	int v8; // eax
	bool v9; // zf
	char *v10; // [esp+14h] [ebp+4h]

	result = -1;
	if (dword_4C7024)
	{
		v2 = a1;
		if (a1)
		{
			v3 = dword_4C7024;
			v4 = 0;
			v5 = (signed int)dword_4C7024 >> 1;
			v10 = (char *)199;
			while (1)
			{
				v6 = _strcmpi(v2, *((const char **)dword_4C23E4 + v5));
				if (v6 <= 0)
				{
					if (v6 >= 0)
						return v5 + 1;
					v3 = v5;
					v8 = (v5 - v4) >> 1;
					if (!v8)
						v8 = 1;
					v5 -= v8;
					if (v5 < 0)
						return -1;
				}
				else
				{
					v4 = v5;
					v7 = (signed int)(v3 - v5) >> 1;
					if (!v7)
						v7 = 1;
					v5 = v4 + v7;
					if (v5 >= (signed int)dword_4C7024)
						return -1;
				}
				v9 = v10-- == 0;
				if (v9)
					return -1;
			}
		}
	}
	return result;
}

int __cdecl sub_446480(int a1, const char *a2)
{
	char v3; // [esp+8h] [ebp-200h]

	strcpy(&v3, "Not found defined string ");
	if (a2)
		strcat(&v3, a2);
	return sub_45B29E(&v3);
}

int __cdecl sub_4613A6(int a1, int a2)
{
	int result; // eax

	dword_4BFC50 = a1;
	result = a2;
	dword_4BFC54 = a2;
	return result;
}

void __cdecl sub_460ACE(int a1, int a2, int a3, void *a4, int a5, void *a6, int a7, void *a8)
{
	void **v8; // eax
	char *v9; // eax
	HFILE v10; // eax
	_DWORD *v11; // eax
	int v12; // eax
	unsigned int v13; // edx
	unsigned int v14; // edx
	unsigned int v15; // edx
	unsigned int v16; // edx
	unsigned int v17; // edx
	unsigned int v18; // edx
	unsigned int v19; // edx
	unsigned int v20; // edx
	char *v21; // eax
	HFILE v22; // eax
	size_t v23; // eax
	void *v24; // eax
	char *v25; // eax
	HFILE v26; // eax
	_DWORD *v27; // eax
	_DWORD *v28; // [esp-4h] [ebp-18h]
	_DWORD *v29; // [esp-4h] [ebp-18h]
	void **v30; // [esp+8h] [ebp-Ch]
	UINT uBytes; // [esp+Ch] [ebp-8h]
	int uBytesa; // [esp+Ch] [ebp-8h]
	UINT uBytesb; // [esp+Ch] [ebp-8h]
	UINT uBytesc; // [esp+Ch] [ebp-8h]
	int uBytesd; // [esp+Ch] [ebp-8h]
	HFILE hFile; // [esp+10h] [ebp-4h]

	v8 = &dword_4BBB62;
	if (dword_4BBB62)
		v8 = &dword_4BBB7E;
	v30 = v8;
	if (!*v8)
	{
		v8[3] = a4;
		v8[6] = 0;
		v8[4] = a6;
		v8[5] = a8;
		v9 = sub_458E40(a1);
		sub_46C830((unsigned int)v9, 0);
		if (v10 != -1)
		{
			hFile = v10;
			uBytes = sub_46CB70(v10);
			sub_46CAB0(hFile, Buffer, 4u);
			if (*(_DWORD *)Buffer != 1414418246)
				uBytes += 28;
			v11 = (_DWORD *)sub_457B70(uBytes);
			if (!v11)
				goto LABEL_8;
			uBytesa = uBytes - 4;
			*v30 = v11;
			*v11 = 1414418246;
			if (*(_DWORD *)Buffer == 1414418246)
			{
				v28 = v11;
				if (sub_46CAB0(hFile, v11 + 1, uBytesa) != uBytesa)
					goto LABEL_8;
				v28[6] += *v28;
				v30[3] = (void *)v28[4];
			}
			else
			{
				v11[1] = 0;
				v11[2] = 0;
				v11[5] = a5;
				v11[4] = (int)a4;
				v11[3] = ((unsigned int)a4 + 7) >> 3;
				v11[6] = *v11 + 7;
				v11[7] = *(_DWORD *)Buffer;
				if (sub_46CAB0(hFile, v11 + 8, uBytesa - 28) != uBytesa - 28)
					goto LABEL_8;
			}
			sub_46C970(hFile);
			if (a3)
			{
				v21 = sub_458E40(a3);
				sub_46C830((unsigned int)v21, 0);
				if (v22 == -1)
					return;
				hFile = v22;
				v23 = sub_46CB70(v22);
				uBytesb = v23;
				v24 = (void *)sub_457B70(v23);
				if (!v24)
					goto LABEL_8;
				v30[1] = v24;
				if (sub_46CAB0(hFile, v24, uBytesb) != uBytesb)
					goto LABEL_8;
				sub_46C970(hFile);
			LABEL_38:
				v25 = sub_458E40(a2);
				sub_46C830((unsigned int)v25, 0);
				if (v26 == -1)
					return;
				hFile = v26;
				uBytesc = sub_46CB70(v26);
				sub_46CAB0(hFile, Buffer, 4u);
				if (*(_DWORD *)Buffer != 1414418246)
					uBytesc += 28;
				v27 = (_DWORD *)sub_457B70(uBytesc);
				if (!v27)
					goto LABEL_8;
				uBytesd = uBytesc - 4;
				v30[2] = v27;
				*v27 = 1414418246;
				if (*(_DWORD *)Buffer == 1414418246)
				{
					v29 = v27;
					if (sub_46CAB0(hFile, v27 + 1, uBytesd) == uBytesd)
					{
						v29[6] += *v29;
						v30[4] = (void *)v29[4];
					LABEL_47:
						sub_46C970(hFile);
						return;
					}
				}
				else
				{
					v27[1] = 0;
					v27[2] = 0;
					v27[5] = a7;
					v27[4] = (int)a6;
					v27[3] = ((unsigned int)a6 + 7) >> 3;
					v27[6] = *v27 + 7;
					v27[7] = *(_DWORD *)Buffer;
					if (sub_46CAB0(hFile, v27 + 8, uBytesd - 28) == uBytesd - 28)
						goto LABEL_47;
				}
			LABEL_8:
				sub_46C970(hFile);
				return;
			}
			v12 = sub_457B70(0x9470u);
			if (v12)
			{
				v30[1] = (void *)v12;
				v30[6] = (void *)((unsigned int)v30[6] | 1);
				v13 = 0;
				do
					*(_WORD *)(v12 + 2 * v13++) = 0;
				while (v13 < 0x13A0);
				v14 = 5024;
				do
				{
					*(_WORD *)(v12 + 2 * v14) = v14 - 5024 + 13094;
					++v14;
				} while (v14 < 0x1538);
				v15 = 5432;
				do
					*(_WORD *)(v12 + 2 * v15++) = 0;
				while (v15 < 0x1577);
				v16 = 5495;
				do
				{
					*(_WORD *)(v12 + 2 * v16) = v16 - 5495;
					++v16;
				} while (v16 < 0x2A90);
				v17 = 10896;
				do
				{
					*(_WORD *)(v12 + 2 * v17) = v17 - 10896 + 13502;
					++v17;
				} while (v17 < 0x2BFD);
				v18 = 11261;
				do
					*(_WORD *)(v12 + 2 * v18++) = 0;
				while (v18 < 0x2C28);
				v19 = 11304;
				do
				{
					*(_WORD *)(v12 + 2 * v19) = v19 - 11304 + 5401;
					++v19;
				} while (v19 < 0x4A35);
				v20 = 18997;
				do
					*(_WORD *)(v12 + 2 * v20++) = 0;
				while (v20 < 0x4A38);
				goto LABEL_38;
			}
		}
	}
}

char *__cdecl sub_458E40(int a1)
{
	if (*(_BYTE *)(a1 + 1) == 58 || *(_BYTE *)a1 == 92)
		return (char *)a1;
	strcpy(byte_4C1E98, byte_4C2298);
	strcat(byte_4C1E98, (const char *)a1);
	return byte_4C1E98;
}

void __cdecl sub_446800(int a1)
{
	void *v1; // edi
	int i; // edi
	int v3; // esi
	char *v4; // eax
	int v5; // eax
	int v6; // eax
	int v7; // eax
	int v8; // eax
	int v9; // eax
	int v10; // eax
	int v11; // eax
	int v12; // [esp+Ch] [ebp-8h]
	int v13; // [esp+10h] [ebp-4h]

	if (dword_4C1D00)
	{
		sub_457C20(dword_4C1D00);
		dword_4C1D00 = 0;
	}
	v1 = (void *)sub_457B70(0x2EE0u);
	dword_4C1D00 = v1;
	if (v1)
	{
		memset(v1, 0, 0x2EE0u);
		if (sub_46DEC0(a1))
		{
			for (i = 1;; ++i)
			{
				v3 = sub_46DC70(aDefine, i);
				if (!v3)
					break;
				v13 = 0;
				if (!sub_46DE70(aCode, 1, v3, (int)&v13))
				{
					v4 = sub_46DD50(aCode, 1, v3, 0);
					sub_446480(a1, v4);
				}
				v13 *= 60;
				v12 = sub_4466D0(aHit, 1, v3);
				*(_DWORD *)((char *)dword_4C1D00 + v13) = v12;
				v5 = sub_4466D0(aStand, 1, v3);
				*(_DWORD *)((char *)dword_4C1D00 + v13 + 4) = v5;
				v12 = 0;
				sub_46DE70(aStandNum, 1, v3, (int)&v12);
				*(_DWORD *)((char *)dword_4C1D00 + v13 + 8) = v12;
				v6 = sub_4466D0(aWalkUp, 1, v3);
				*(_DWORD *)((char *)dword_4C1D00 + v13 + 12) = v6;
				v12 = 0;
				sub_46DE70(aWalkUpNum, 1, v3, (int)&v12);
				*(_DWORD *)((char *)dword_4C1D00 + v13 + 16) = v12;
				v7 = sub_4466D0(aWalkDown, 1, v3);
				*(_DWORD *)((char *)dword_4C1D00 + v13 + 20) = v7;
				v12 = 0;
				sub_46DE70(aWalkDownNum, 1, v3, (int)&v12);
				*(_DWORD *)((char *)dword_4C1D00 + v13 + 24) = v12;
				v8 = sub_4466D0(aWalkLeft, 1, v3);
				*(_DWORD *)((char *)dword_4C1D00 + v13 + 28) = v8;
				v12 = 0;
				sub_46DE70(aWalkLeftNum, 1, v3, (int)&v12);
				*(_DWORD *)((char *)dword_4C1D00 + v13 + 32) = v12;
				v9 = sub_4466D0(aWalkRight, 1, v3);
				*(_DWORD *)((char *)dword_4C1D00 + v13 + 36) = v9;
				v12 = 0;
				sub_46DE70(aWalkRightNum, 1, v3, (int)&v12);
				*(_DWORD *)((char *)dword_4C1D00 + v13 + 40) = v12;
				v10 = sub_4466D0(aPrepare, 1, v3);
				*(_DWORD *)((char *)dword_4C1D00 + v13 + 44) = v10;
				v12 = 0;
				sub_46DE70(aPrepareNum, 1, v3, (int)&v12);
				*(_DWORD *)((char *)dword_4C1D00 + v13 + 48) = v12;
				v11 = sub_4466D0(aUseMagic, 1, v3);
				*(_DWORD *)((char *)dword_4C1D00 + v13 + 52) = v11;
				v12 = 0;
				sub_46DE70(aUseMagicNum, 1, v3, (int)&v12);
				*(_DWORD *)((char *)dword_4C1D00 + v13 + 56) = v12;
			}
			sub_46E060();
		}
	}
}

unsigned int __cdecl sub_4466D0(char *a1, int a2, int a3)
{
	unsigned int result; // eax
	int v4; // [esp+0h] [ebp-4h]

	v4 = 0;
	if (sub_46DD50(a1, a2, a3, (int)byte_4C1E98) && !sub_46DE00(byte_4C1E98, (int)&v4))
	{
		result = sub_45FC01(byte_4C1E98);
		v4 = result;
		if (result != -1)
			return result;
		sub_446480(0, byte_4C1E98);
	}
	return v4;
}

void __cdecl sub_446D30(int a1)
{
	int *v1; // eax
	int v2; // esi
	int *v3; // edi
	int v4; // eax
	int v5; // ebx
	char *v6; // eax
	char *v7; // eax
	char *k; // esi
	char v9; // al
	int *v10; // edi
	int v11; // ebp
	char *l; // esi
	char v13; // al
	int *v14; // edi
	int v15; // ebp
	char *m; // esi
	char v17; // al
	int v18; // eax
	int v19; // [esp+Ch] [ebp-10h]
	int v20; // [esp+10h] [ebp-Ch]
	int i; // [esp+14h] [ebp-8h]
	int j; // [esp+18h] [ebp-4h]

	if (dword_4C1B6C)
	{
		sub_457C20(dword_4C1B6C);
		dword_4C1B6C = 0;
	}
	v1 = (int *)sub_457B70(0xDD18u);
	dword_4C1B6C = v1;
	if (v1)
	{
		v2 = a1;
		v3 = v1 + 1650;
		if (sub_46DEC0(a1))
		{
			for (i = 1;; i = v18 + 1)
			{
				v4 = sub_46DC70(aAnimal, i);
				v5 = v4;
				if (!v4)
					break;
				v20 = 0;
				if (!sub_46DE70(aCode_0, 1, v4, (int)&v20))
				{
					v6 = sub_46DD50(aCode_0, 1, v5, 0);
					sub_446480(v2, v6);
				}
				v19 = 0;
				v20 *= 44;
				if (sub_46DD50(aShape, 1, v5, (int)byte_4C1E98))
				{
					v19 = sub_45FC01(byte_4C1E98);
					if (v19 == -1)
						sub_46E100(1, byte_4C1E98);
				}
				*(_DWORD *)((char *)dword_4C1B6C + v20) = v19;
				v19 = 0;
				sub_46DE70(aNumber, 1, v5, (int)&v19);
				*(_DWORD *)((char *)dword_4C1B6C + v20 + 4) = v19;
				v19 = 0;
				if (!sub_46DE70(aKAction, 1, v5, (int)&v19))
				{
					v7 = sub_46DD50(aKAction, 1, v5, 0);
					sub_446480(v2, v7);
				}
				*(_DWORD *)((char *)dword_4C1B6C + v20 + 8) = v19;
				v19 = 0;
				if (sub_46DD50(aFhShape, 1, v5, (int)byte_4C1E98))
				{
					v19 = sub_45FC01(byte_4C1E98);
					if (v19 == -1)
						sub_46E100(1, byte_4C1E98);
				}
				*(_DWORD *)((char *)dword_4C1B6C + v20 + 12) = v19;
				*(_DWORD *)((char *)dword_4C1B6C + v20 + 16) = *v3;
				for (j = 1; sub_46DD50(aAction, j, v5, (int)byte_4C1E98); ++j)
				{
					for (k = strtok(byte_4C1E98, asc_47855C); k; k = strtok(0, asc_47855C))
					{
						if (*k == 32)
						{
							do
								v9 = (k++)[1];
							while (v9 == 32);
						}
						v19 = 0;
						if (!sub_46DE00(k, (int)&v19))
							sub_446480(a1, k);
						*v3 = v19;
						++v3;
					}
				}
				*v3 = 0;
				v10 = v3 + 1;
				v19 = 0;
				if (sub_46DD50(aMShape, 1, v5, (int)byte_4C1E98))
				{
					v19 = sub_45FC01(byte_4C1E98);
					if (v19 == -1)
						sub_46E100(1, byte_4C1E98);
				}
				*(_DWORD *)((char *)dword_4C1B6C + v20 + 20) = v19;
				v19 = 0;
				sub_46DE70(aMNumber, 1, v5, (int)&v19);
				v11 = 1;
				*(_DWORD *)((char *)dword_4C1B6C + v20 + 24) = v19;
				for (*(_DWORD *)((char *)dword_4C1B6C + v20 + 28) = *v10; sub_46DD50(aMAction, v11, v5, (int)byte_4C1E98); ++v11)
				{
					for (l = strtok(byte_4C1E98, asc_47855C); l; l = strtok(0, asc_47855C))
					{
						if (*l == 32)
						{
							do
								v13 = (l++)[1];
							while (v13 == 32);
						}
						v19 = 0;
						if (!sub_46DE00(l, (int)&v19))
							sub_446480(a1, l);
						*v10 = v19;
						++v10;
					}
				}
				*v10 = 0;
				v14 = v10 + 1;
				v19 = 0;
				if (sub_46DD50(aSShape, 1, v5, (int)byte_4C1E98))
				{
					v19 = sub_45FC01(byte_4C1E98);
					if (v19 == -1)
						sub_46E100(1, byte_4C1E98);
				}
				*(_DWORD *)((char *)dword_4C1B6C + v20 + 32) = v19;
				v19 = 0;
				sub_46DE70(aSNumber, 1, v5, (int)&v19);
				v15 = 1;
				*(_DWORD *)((char *)dword_4C1B6C + v20 + 36) = v19;
				for (*(_DWORD *)((char *)dword_4C1B6C + v20 + 40) = *v14; sub_46DD50(aSAction, v15, v5, (int)byte_4C1E98); ++v15)
				{
					for (m = strtok(byte_4C1E98, asc_47855C); m; m = strtok(0, asc_47855C))
					{
						if (*m == 32)
						{
							do
								v17 = (m++)[1];
							while (v17 == 32);
						}
						v19 = 0;
						if (!sub_46DE00(m, (int)&v19))
							sub_446480(a1, m);
						*v14 = v19;
						++v14;
					}
				}
				v18 = i;
				v2 = a1;
				*v14 = 0;
				v3 = v14 + 1;
			}
			sub_46E060();
		}
	}
}

void __cdecl sub_447260(int a1)
{
	int v1; // eax
	int v2; // esi
	char *v3; // eax
	int *v4; // edi
	int v5; // ebx
	char *v6; // eax
	signed int v7; // ebp
	char *v8; // esi
	char v9; // al
	int v10; // eax
	int v11; // eax
	int v12; // [esp+0h] [ebp-Ch]
	int v13; // [esp+4h] [ebp-8h]
	int i; // [esp+8h] [ebp-4h]

	if (dword_4C1B70)
	{
		sub_457C20(dword_4C1B70);
		dword_4C1B70 = 0;
	}
	if (sub_46DEC0(a1))
	{
		v1 = sub_46DBA0(aEffect, 1);
		if (v1)
		{
			v2 = v1 + 1;
			v3 = (char *)sub_457B70(4 * (v1 + 1) + 100000);
			dword_4C1B70 = v3;
			if (v3)
			{
				v4 = (int *)&v3[4 * v2];
				for (i = 1;; i = v11 + 1)
				{
					v5 = sub_46DC70(aEffect, i);
					if (!v5)
						goto LABEL_22;
					v13 = 0;
					if (!sub_46DE70(aCode_0, 1, v5, (int)&v13))
					{
						v6 = sub_46DD50(aCode_0, 1, v5, 0);
						sub_446480(a1, v6);
					}
					v7 = 1;
					v13 *= 4;
					*(_DWORD *)((char *)dword_4C1B70 + v13) = *v4;
					if (sub_46DD50(aAction, 1, v5, (int)byte_4C1E98))
						break;
				LABEL_21:
					v11 = i;
					*v4 = 0;
					++v4;
				}
				while (1)
				{
					v8 = strtok(byte_4C1E98, asc_47855C);
					if (v8)
						break;
				LABEL_20:
					if (!sub_46DD50(aAction, ++v7, v5, (int)byte_4C1E98))
						goto LABEL_21;
				}
				while (1)
				{
					if (*v8 == 32)
					{
						do
							v9 = (v8++)[1];
						while (v9 == 32);
					}
					v12 = 0;
					if (!sub_46DE00(v8, (int)&v12))
					{
						v10 = sub_459990(v8);
						v12 = v10;
						if (v10 != -1)
							goto LABEL_19;
						v10 = sub_45FC01(v8);
						v12 = v10;
						if (v10 != -1)
							goto LABEL_19;
						sub_446480(a1, v8);
					}
					v10 = v12;
				LABEL_19:
					*v4 = v10;
					++v4;
					v8 = strtok(0, asc_47855C);
					if (!v8)
						goto LABEL_20;
				}
			}
		}
		else
		{
		LABEL_22:
			sub_46E060();
		}
	}
}

void __cdecl sub_447440(int a1)
{
	int v1; // eax
	int v2; // esi
	char *v3; // eax
	int *v4; // edi
	int v5; // ebx
	char *v6; // eax
	signed int v7; // ebp
	char *v8; // esi
	char v9; // al
	int v10; // eax
	int v11; // eax
	int v12; // [esp+0h] [ebp-Ch]
	int v13; // [esp+4h] [ebp-8h]
	int i; // [esp+8h] [ebp-4h]

	if (dword_4C1B74)
	{
		sub_457C20(dword_4C1B74);
		dword_4C1B74 = 0;
	}
	if (sub_46DEC0(a1))
	{
		v1 = sub_46DBA0(aCommand, 1);
		if (v1)
		{
			v2 = v1 + 1;
			v3 = (char *)sub_457B70(4 * (v1 + 1) + 100000);
			dword_4C1B74 = v3;
			if (v3)
			{
				v4 = (int *)&v3[4 * v2];
				for (i = 1;; i = v11 + 1)
				{
					v5 = sub_46DC70(aCommand, i);
					if (!v5)
						goto LABEL_22;
					v13 = 0;
					if (!sub_46DE70(aCode_0, 1, v5, (int)&v13))
					{
						v6 = sub_46DD50(aCode_0, 1, v5, 0);
						sub_446480(a1, v6);
					}
					v7 = 1;
					v13 *= 4;
					*(_DWORD *)((char *)dword_4C1B74 + v13) = *v4;
					if (sub_46DD50(aAction, 1, v5, (int)byte_4C1E98))
						break;
				LABEL_21:
					v11 = i;
					*v4 = 0;
					++v4;
				}
				while (1)
				{
					v8 = strtok(byte_4C1E98, asc_47855C);
					if (v8)
						break;
				LABEL_20:
					if (!sub_46DD50(aAction, ++v7, v5, (int)byte_4C1E98))
						goto LABEL_21;
				}
				while (1)
				{
					if (*v8 == 32)
					{
						do
							v9 = (v8++)[1];
						while (v9 == 32);
					}
					v12 = 0;
					if (!sub_46DE00(v8, (int)&v12))
					{
						v10 = sub_459990(v8);
						v12 = v10;
						if (v10 != -1)
							goto LABEL_19;
						v10 = sub_45FC01(v8);
						v12 = v10;
						if (v10 != -1)
							goto LABEL_19;
						sub_446480(a1, v8);
					}
					v10 = v12;
				LABEL_19:
					*v4 = v10;
					++v4;
					v8 = strtok(0, asc_47855C);
					if (!v8)
						goto LABEL_20;
				}
			}
		}
		else
		{
		LABEL_22:
			sub_46E060();
		}
	}
}

void __cdecl sub_447720(int a1)
{
	void *v1; // edi
	char *v2; // esi

	if (dword_4C1B3C)
	{
		sub_457C20(dword_4C1B3C);
		dword_4C1B3C = 0;
	}
	v1 = (void *)sub_457B70(0x27100u);
	dword_4C1B3C = v1;
	if (v1)
	{
		memset(v1, 0, 0x27100u);
		if (sub_46DEC0(a1))
		{
			v2 = sub_447620(aName, (int)dword_4C1B3C);
			sub_46E060();
			if (v2 - (_BYTE *)dword_4C1B3C > 160000)
				sub_45B29E(aResourceFileMe);
		}
	}
}

char *__cdecl sub_447620(char *a1, int a2)
{
	int v2; // eax
	int v3; // esi
	int v4; // eax
	int v5; // ebx
	char *v6; // ebp
	char *v7; // eax
	const char *v8; // edi
	int v10; // [esp+4h] [ebp-8h]
	int v11; // [esp+8h] [ebp-4h]

	v2 = sub_46DC70(a1, 1);
	v3 = v2;
	v11 = v2;
	if (!v2)
		return (char *)a2;
	v4 = sub_46DC10(0, v2);
	if (!v4)
		return (char *)a2;
	v5 = 1;
	v10 = a2;
	v6 = (char *)(a2 + 4 * v4);
	a2 = v4;
	do
	{
		if (sub_46DD50(0, v5, v3, (int)byte_4C1E98))
		{
			v7 = strchr(byte_4C1E98, 44);
			if (v7)
			{
				*v7 = 0;
				v8 = v7 + 1;
				a1 = 0;
				sub_45B5FA((unsigned __int8 *)byte_4C1E98, (int *)&a1);
				*(_DWORD *)(v10 + 4 * (_DWORD)a1) = *v6;
				if (*v8)
				{
					strcpy(v6, v8);
					v3 = v11;
					v6 += strlen(v6) + 1;
				}
			}
		}
		++v5;
		--a2;
	} while (a2);
	return v6;
}

int __cdecl sub_46DC10(char *a1, int a2)
{
	char *v2; // eax
	int v3; // esi
	int v4; // edi

	v2 = (char *)dword_4C24B4;
	v3 = *(_DWORD *)((char *)dword_4C24B4 + a2 + 11);
	v4 = 0;
	if (!a1)
	{
		for (; v3; ++v4)
			v3 = *(_DWORD *)((char *)dword_4C24B4 + v3 + 12);
		return v4;
	}
	if (!v3)
		return v4;
	do
	{
		if (!_strcmpi((const char *)dword_4C24B0 + *(_DWORD *)&v2[v3], a1))
			++v4;
		v2 = (char *)dword_4C24B4;
		v3 = *(_DWORD *)((char *)dword_4C24B4 + v3 + 12);
	} while (v3);
	return v4;
}

void __cdecl sub_4477C0(int a1)
{
	int i; // esi
	int v2; // edi
	char *v3; // eax
	char *v4; // ebx
	char v5; // al
	char *v6; // eax
	char v7; // cl
	char *v8; // eax
	char *v9; // ebx
	char v10; // al
	char *v11; // eax
	char v12; // cl
	char *v13; // eax
	char v14; // cl
	int v15; // eax
	int v16; // eax
	int v17; // eax
	int v18; // eax
	int v19; // eax
	int v20; // eax
	int v21; // eax
	int v22; // eax
	int v23; // eax
	int v24; // eax
	int v25; // eax
	int v26; // eax
	int v27; // eax
	int v28; // eax
	int v29; // eax
	int v30; // eax
	char *j; // ebx
	char v32; // al
	int v33; // eax
	int v34; // eax
	int v35; // eax
	int v36; // [esp+4h] [ebp-8h]
	int v37; // [esp+8h] [ebp-4h]

	if (dword_4C1B40)
	{
		sub_457C20(dword_4C1B40);
		dword_4C1B40 = 0;
	}
	dword_4C1B40 = (void *)sub_457B70(0x2B030u);
	if (dword_4C1B40 && sub_46DEC0(a1))
	{
		for (i = sub_46DC70(aItem, 1); i; i = sub_46DCE0(aItem, i))
		{
			v37 = sub_4466D0(aCode_0, 1, i);
			v2 = 176 * v37;
			*((_DWORD *)dword_4C1B40 + 44 * v37) = v37;
			v37 = sub_4466D0(aName, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 4) = v37;
			v37 = sub_4466D0(aType, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 8) = v37;
			v37 = sub_4466D0(aIcon, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 12) = v37;
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 172) = sub_4466D0(aGetRatio, 1, i);
			v37 = -1;
			v36 = 0;
			if (sub_46DD50(aAddResist, 1, i, (int)byte_4C1E98))
			{
				v3 = strtok(byte_4C1E98, asc_47855C);
				v4 = v3;
				if (v3)
				{
					if (*v3 == 32)
					{
						do
							v5 = (v4++)[1];
						while (v5 == 32);
					}
					if (sub_46DE00(v4, (int)&v37))
					{
						v6 = strtok(0, asc_47855C);
						if (v6)
						{
							if (*v6 == 32)
							{
								do
									v7 = (v6++)[1];
								while (v7 == 32);
							}
							sub_46DE00(v6, (int)&v36);
						}
					}
					else
					{
						sub_446480(a1, v4);
					}
				}
			}
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 16) = v37;
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 20) = v36;
			v37 = sub_4466D0(aAddWeaponHit, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 24) = v37;
			v37 = sub_4466D0(aAddMagicHit, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 28) = v37;
			v37 = sub_4466D0(aAddAttackPower, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 32) = v37;
			v37 = sub_4466D0(aAddMagicPower, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 36) = v37;
			v37 = sub_4466D0(aAddMp, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 40) = v37;
			v37 = sub_4466D0(aAddHp, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 44) = v37;
			v37 = sub_4466D0(aAddMove, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 52) = v37;
			v37 = sub_4466D0(aAddSpeed, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 56) = v37;
			v37 = sub_4466D0(aAddDefense, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 60) = v37;
			v37 = sub_4466D0(aAttackRange, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 132) = v37;
			v37 = sub_4466D0(aAttackDamage, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 136) = v37;
			v37 = sub_4466D0(aHitRatio, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 152) = v37;
			v37 = sub_4466D0(aCost, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 156) = v37;
			v37 = sub_4466D0(aAddStealRatio, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 64) = v37;
			v37 = sub_4466D0(aAddMissHit, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 68) = v37;
			v37 = sub_4466D0(aAddAttackBack, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 72) = v37;
			v37 = sub_4466D0(aAddWeaponDmgx2, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 76) = v37;
			v37 = sub_4466D0(aAddSt, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 48) = v37;
			v37 = sub_446740(aGlobalAddWeapo, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 80) = v37;
			v37 = sub_446740(aGlobalAddMagic, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 84) = v37;
			v37 = sub_446740(aGlobalAddDefen, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 88) = v37;
			v37 = sub_446740(aGlobalAddSpeed, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 92) = v37;
			v37 = sub_446740(aGlobalAddResis, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 96) = v37;
			v37 = sub_446740(aGlobalAddResis_0, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 100) = v37;
			v37 = sub_446740(aGlobalAddResis_1, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 104) = v37;
			v37 = sub_446740(aGlobalAddResis_2, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 108) = v37;
			v37 = sub_446740(aGlobalAddResis_3, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 112) = v37;
			v37 = sub_446740(aLocalAddWeapon, 1, i);
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 116) = v37;
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 124) = sub_446740(aLocalAddDefens, 1, i);
			v37 = 0;
			v36 = 0;
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 140) = -1;
			if (sub_46DD50(aMagicAttackTyp, 1, i, (int)byte_4C1E98))
			{
				v8 = strtok(byte_4C1E98, asc_47855C);
				v9 = v8;
				if (v8)
				{
					if (*v8 == 32)
					{
						do
							v10 = (v9++)[1];
						while (v10 == 32);
					}
					if (sub_46DE00(v9, (int)&v37))
					{
						*(_DWORD *)((char *)dword_4C1B40 + v2 + 140) = v37;
						v37 = 0;
						v11 = strtok(0, asc_47855C);
						if (v11)
						{
							if (*v11 == 32)
							{
								do
									v12 = (v11++)[1];
								while (v12 == 32);
							}
							sub_46DE00(v11, (int)&v37);
							v13 = strtok(0, asc_47855C);
							if (v13)
							{
								if (*v13 == 32)
								{
									do
										v14 = (v13++)[1];
									while (v14 == 32);
								}
								sub_46DE00(v13, (int)&v36);
							}
						}
					}
					else
					{
						sub_446480(a1, v9);
					}
				}
			}
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 144) = v37;
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 148) = v36;
			v36 = 0;
			v37 = sub_4466D0(aImportant, 1, i);
			if (v37)
				v36 |= 0x8000000u;
			v37 = sub_4466D0(aAddAttackRange, 1, i);
			if (v37)
				v36 |= 1u;
			v37 = sub_4466D0(aMpUseHalf, 1, i);
			if (v37)
			{
				v15 = v36;
				LOBYTE(v15) = v36 | 2;
				v36 = v15;
			}
			v37 = sub_4466D0(aHpDamageHalf, 1, i);
			if (v37)
			{
				v16 = v36;
				LOBYTE(v16) = v36 | 4;
				v36 = v16;
			}
			v37 = sub_4466D0(aActionTwice, 1, i);
			if (v37)
			{
				v17 = v36;
				LOBYTE(v17) = v36 | 8;
				v36 = v17;
			}
			v37 = sub_4466D0(aExpX2, 1, i);
			if (v37)
			{
				v18 = v36;
				LOBYTE(v18) = v36 | 0x10;
				v36 = v18;
			}
			v37 = sub_4466D0(aGoldX2, 1, i);
			if (v37)
			{
				v19 = v36;
				LOBYTE(v19) = v36 | 0x20;
				v36 = v19;
			}
			v37 = sub_4466D0(aStX2, 1, i);
			if (v37)
			{
				v20 = v36;
				LOBYTE(v20) = v36 | 0x40;
				v36 = v20;
			}
			v37 = sub_4466D0(aKeepStatusGood, 1, i);
			if (v37)
			{
				v21 = v36;
				LOBYTE(v21) = v36 | 0x80;
				v36 = v21;
			}
			v37 = sub_4466D0(aHpAutoRestore, 1, i);
			if (v37)
			{
				v22 = v36;
				BYTE1(v22) |= 1u;
				v36 = v22;
			}
			v37 = sub_4466D0(aMpAutoRestore, 1, i);
			if (v37)
			{
				v23 = v36;
				BYTE1(v23) |= 2u;
				v36 = v23;
			}
			v37 = sub_4466D0(aMoveMagicUse, 1, i);
			if (v37)
			{
				v24 = v36;
				BYTE1(v24) |= 0x10u;
				v36 = v24;
			}
			v37 = sub_4466D0(aNoSpecial, 1, i);
			if (v37)
			{
				v25 = v36;
				BYTE1(v25) |= 0x20u;
				v36 = v25;
			}
			v37 = sub_4466D0(aNoMagic, 1, i);
			if (v37)
			{
				v26 = v36;
				BYTE1(v26) |= 0x40u;
				v36 = v26;
			}
			v37 = sub_4466D0(aCurePoison, 1, i);
			if (v37)
				v36 |= 0x80000000;
			v37 = sub_4466D0(aCureNoMagic, 1, i);
			if (v37)
				v36 |= 0x40000000u;
			v37 = sub_4466D0(aCureParalysis, 1, i);
			if (v37)
				v36 |= 0x20000000u;
			v37 = sub_4466D0(aCureWeaken, 1, i);
			if (v37)
				v36 |= 0x10000000u;
			v37 = sub_4466D0(aDoubleAttack, 1, i);
			if (v37)
			{
				v27 = v36;
				BYTE1(v27) |= 0x80u;
				v36 = v27;
			}
			v37 = sub_4466D0(aAttackCancel, 1, i);
			if (v37)
				v36 |= 0x10000u;
			v37 = sub_4466D0(aAttackWeaken, 1, i);
			if (v37)
				v36 |= 0x20000u;
			v37 = sub_4466D0(aRandomStatusEr, 1, i);
			if (v37)
				v36 |= 0x40000u;
			v37 = sub_4466D0(aAttackNomagic, 1, i);
			if (v37)
				v36 |= 0x80000u;
			v37 = sub_4466D0(aAttackParalysi, 1, i);
			if (v37)
				v36 |= 0x100000u;
			v37 = sub_4466D0(aAttackPoison, 1, i);
			if (v37)
				v36 |= 0x200000u;
			v37 = sub_4466D0(aAttackDecmp, 1, i);
			if (v37)
				v36 |= 0x400000u;
			v37 = sub_4466D0(aAvoidPoison, 1, i);
			if (v37)
				v36 |= 0x800000u;
			v37 = sub_4466D0(aAvoidNomagic, 1, i);
			if (v37)
				v36 |= 0x1000000u;
			v37 = sub_4466D0(aAvoidWeaken, 1, i);
			if (v37)
				v36 |= 0x2000000u;
			v37 = sub_4466D0(aAvoidParalysis, 1, i);
			if (v37)
				v36 |= 0x4000000u;
			v37 = sub_4466D0(aHighCost, 1, i);
			if (v37)
			{
				v28 = v36;
				BYTE1(v28) |= 8u;
				v36 = v28;
			}
			v37 = sub_4466D0(aNoAddst, 1, i);
			if (v37)
			{
				v29 = v36;
				BYTE1(v29) |= 4u;
				v36 = v29;
			}
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 160) = v36;
			v36 = 0;
			v37 = sub_4466D0(aHpTransferMp, 1, i);
			if (v37)
				v36 |= 1u;
			v37 = sub_4466D0(aTakeOff, 1, i);
			if (v37)
			{
				v30 = v36;
				LOBYTE(v30) = v36 | 2;
				v36 = v30;
			}
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 164) = v36;
			v36 = 0;
			if (sub_46DD50(aUseJob, 1, i, (int)byte_4C1E98))
			{
				for (j = strtok(byte_4C1E98, asc_47855C); j; j = strtok(0, asc_47855C))
				{
					if (*j == 32)
					{
						do
							v32 = (j++)[1];
						while (v32 == 32);
					}
					v37 = 0;
					if (sub_46DE00(j, (int)&v37))
					{
						if (v37 == 1000)
						{
							v36 = -1;
						}
						else if (v37 == 1001)
						{
							v36 = -1;
							v33 = sub_4464F0(96);
							v37 = v33;
							if (v33 != -1)
								v36 &= ~(1 << v33);
							v34 = sub_4464F0(97);
							v37 = v34;
							if (v34 != -1)
								v36 &= ~(1 << v34);
						}
						else
						{
							v35 = sub_4464F0(v37);
							v37 = v35;
							if (v35 != -1)
								v36 |= 1 << v35;
						}
					}
					else
					{
						sub_446480(a1, j);
					}
				}
			}
			*(_DWORD *)((char *)dword_4C1B40 + v2 + 168) = v36;
		}
		sub_46E060();
	}
}

int __cdecl sub_446740(char *a1, int a2, int a3)
{
	int v3; // edi
	char *v4; // eax
	char *v5; // esi
	char v6; // al
	char *v7; // eax
	char v8; // al

	v3 = 0;
	if (!sub_46DD50(a1, a2, a3, (int)byte_4C1E98))
		return v3;
	v4 = strtok(byte_4C1E98, asc_47855C);
	v5 = v4;
	if (!v4)
		return v3;
	if (*v4 == 32)
	{
		do
			v6 = (v5++)[1];
		while (v6 == 32);
	}
	if (!sub_46DE00(v5, (int)&a3))
		goto LABEL_11;
	v3 = a3 << 16;
	v7 = strtok(0, asc_47855C);
	v5 = v7;
	if (v7)
	{
		if (*v7 == 32)
		{
			do
				v8 = (v5++)[1];
			while (v8 == 32);
		}
		if (sub_46DE00(v5, (int)&a2))
			return (a3 << 16) + (unsigned __int16)a2;
	LABEL_11:
		sub_446480(0, v5);
	}
	return v3;
}

signed int __cdecl sub_4464F0(int a1)
{
	signed int result; // eax

	result = -1;
	switch (a1)
	{
	case 80:
		result = 0;
		break;
	case 81:
		result = 1;
		break;
	case 82:
		result = 2;
		break;
	case 83:
		result = 3;
		break;
	case 84:
		result = 4;
		break;
	case 85:
		result = 5;
		break;
	case 86:
		result = 6;
		break;
	case 87:
		result = 7;
		break;
	case 88:
		result = 8;
		break;
	case 89:
		result = 9;
		break;
	case 90:
		result = 10;
		break;
	case 91:
		result = 11;
		break;
	case 92:
		result = 12;
		break;
	case 93:
		result = 13;
		break;
	case 94:
		result = 14;
		break;
	case 95:
		result = 15;
		break;
	case 96:
		result = 16;
		break;
	case 97:
		result = 17;
		break;
	case 98:
		result = 18;
		break;
	case 99:
		result = 19;
		break;
	case 100:
		result = 20;
		break;
	default:
		return result;
	}
	return result;
}

void __cdecl sub_44B980(int a1)
{
	void *v1; // edi
	void *v2; // edi
	int i; // edi
	char *v4; // eax
	int v5; // esi
	char *v6; // eax
	__int16 v7; // ax
	char *v8; // eax
	char v9; // cl
	char *v10; // eax
	char *v11; // eax
	char *v12; // eax
	int v13; // ecx
	int v14; // ecx
	int v15; // ecx
	int v16; // ecx
	int v17; // ecx
	int v18; // ecx
	int v19; // ecx
	int v20; // [esp+8h] [ebp-8h]
	int v21; // [esp+Ch] [ebp-4h]

	if (dword_4C1AFC)
	{
		sub_457C20(dword_4C1AFC);
		dword_4C1AFC = 0;
	}
	if (dword_4C1BC8)
	{
		sub_457C20(dword_4C1BC8);
		dword_4C1BC8 = 0;
	}
	v1 = (void *)sub_457B70(0x18EDCu);
	dword_4C1BC8 = v1;
	if (v1)
	{
		memset(v1, 0, 0x18EDCu);
		v2 = (void *)sub_457B70(0x18EDCu);
		dword_4C1AFC = v2;
		if (v2)
		{
			memset(v2, 0, 0x18EDCu);
			if (sub_46DEC0(a1))
			{
				for (i = sub_46DC70(aCharacter, 1); i; i = sub_46DCE0(aCharacter, i))
				{
					v20 = 0;
					if (!sub_46DE70(aCode_0, 1, i, (int)&v20))
					{
						v4 = sub_46DD50(aCode_0, 1, i, 0);
						sub_446480(a1, v4);
					}
					v5 = 508 * v20;
					*((_DWORD *)dword_4C1AFC + 127 * v20) = v20;
					v20 = 0;
					if (!sub_46DE70(aName, 1, i, (int)&v20))
					{
						v6 = sub_46DD50(aName, 1, i, 0);
						sub_446480(a1, v6);
					}
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 4) = v20;
					v20 = sub_44B900(aSoundDead, i);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 8) = v20 << 16;
					v20 = sub_44B900(aSoundWalk, i);
					*(_WORD *)((char *)dword_4C1AFC + v5 + 8) = v20;
					v20 = sub_44B900(aSoundAttack, i);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 12) = v20 << 16;
					v20 = sub_44B900(aSoundMiss, i);
					*(_WORD *)((char *)dword_4C1AFC + v5 + 12) = v20;
					v20 = sub_44B900(aSoundHit, i);
					*(_WORD *)((char *)dword_4C1AFC + v5 + 16) = v20;
					v20 = sub_44B900(aSoundShoothit, i);
					*(_WORD *)((char *)dword_4C1AFC + v5 + 34) = v20;
					v7 = sub_44B900(aSoundWalkwater, i);
					*(_WORD *)((char *)dword_4C1AFC + v5 + 18) = v7;
					v20 = 0;
					v21 = 0;
					if (sub_46DD50(aDeadMessage, 1, i, (int)byte_4C1E98))
					{
						v8 = strtok(byte_4C1E98, asc_47855C);
						if (v8)
						{
							if (*v8 == 32)
							{
								do
									v9 = (v8++)[1];
								while (v9 == 32);
							}
							sub_46DE00(v8, (int)&v20);
							v10 = strtok(0, asc_47855C);
							if (v10)
								sub_46DE00(v10, (int)&v21);
						}
					}
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 20) = v21 + (v20 << 16);
					v20 = 0;
					if (!sub_46DE70(aJob, 1, i, (int)&v20))
					{
						v11 = sub_46DD50(aJob, 1, i, 0);
						sub_446480(a1, v11);
					}
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 24) = v20;
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 28) = 0;
					v20 = 0;
					if (sub_46DE70(aJobShowName, 1, i, (int)&v20))
						*(_DWORD *)((char *)dword_4C1AFC + v5 + 28) = v20;
					v20 = 0;
					if (!sub_46DE70(aClass, 1, i, (int)&v20))
					{
						v12 = sub_46DD50(aClass, 1, i, 0);
						sub_446480(a1, v12);
					}
					*(_WORD *)((char *)dword_4C1AFC + v5 + 32) = v20;
					v20 = 0;
					sub_46DE70(aStatus, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 36) = v20;
					v20 = 0;
					sub_46DE70(aMode, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 40) = v20;
					v20 = 0;
					sub_46DE70(aSizeType, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 44) = v20;
					v20 = 0;
					sub_46DE70(aCarryItem, 1, i, (int)&v20);
					*(_WORD *)((char *)dword_4C1AFC + v5 + 46) = v20;
					v20 = 0;
					sub_46DE70(aStr, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 100) = v20;
					v20 = 0;
					sub_46DE70(off_479088, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 104) = v20;
					v20 = 0;
					sub_46DE70(aMind, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 108) = v20;
					v20 = 0;
					sub_46DE70(aCon, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 112) = v20;
					v20 = sub_4466D0(aPicture, 1, i);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 92) = v20;
					if (sub_46DD50(aJobUpCode, 1, i, (int)byte_4C1E98))
					{
						v20 = 0;
						sub_46DE00(byte_4C1E98, (int)&v20);
						*(_DWORD *)((char *)dword_4C1AFC + v5 + 96) = v20;
					}
					v20 = 0;
					sub_46DE70(aExp, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 136) = v20;
					v20 = 0;
					sub_46DE70(aKillExp, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 144) = v20;
					v20 = 0;
					sub_46DE70(aGold, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 152) = v20;
					v20 = 0;
					sub_46DE70(aLevel, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 156) = v20;
					v20 = 0;
					sub_46DE70(aHitPoint, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 436) = v20 << 16;
					v20 = 0;
					sub_46DE70(aMagicPoint, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 436) += (unsigned __int16)v20;
					v20 = 0;
					sub_46DE70(aDefense, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 428) = v20;
					v20 = 0;
					sub_46DE70(aAttackPower, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 420) = v20;
					v20 = 0;
					sub_46DE70(aMagicAttackPow, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 424) = v20;
					v20 = 0;
					sub_46DE70(aSpeed, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 432) = v20;
					v20 = 0;
					sub_46DE70(aAttackDamagex2, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 416) = v20;
					v20 = 0;
					sub_46DE70(aAttackBack, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 412) = v20;
					v20 = 0;
					sub_46DE70(aAvoidHitRatio, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 408) = v20;
					v20 = 0;
					sub_46DE70(aStealRatio, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 404) = v20;
					v20 = 0;
					sub_46DE70(aStamina, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 232) = v20;
					v20 = 0;
					sub_46DE70(aWeaponEquip, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 236) = v20;
					v20 = 0;
					sub_46DE70(aHeadEquip, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 240) = v20;
					v20 = 0;
					sub_46DE70(aArmorEquip, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 244) = v20;
					v20 = 0;
					sub_46DE70(aFootEquip, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 248) = v20;
					v20 = 0;
					sub_46DE70(aOther1Equip, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 252) = v20;
					v20 = 0;
					sub_46DE70(aOther2Equip, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 256) = v20;
					v20 = 0;
					sub_46DE70(aResistEarth, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 280) = v20;
					v20 = 0;
					sub_46DE70(aResistAir, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 288) = v20;
					v20 = 0;
					sub_46DE70(aResistFire, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 292) = v20;
					v20 = 0;
					sub_46DE70(aResistWater, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 284) = v20;
					v20 = 0;
					sub_46DE70(aResistMind, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 296) = v20;
					v20 = 0;
					sub_46DE70(aMovePoint, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 304) = v20;
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 160) = 0;
					v20 = 0;
					sub_46DE70(aMoveFly, 1, i, (int)&v20);
					if (v20)
						*(_DWORD *)((char *)dword_4C1AFC + v5 + 160) |= 1u;
					v20 = 0;
					sub_46DE70(aNoAttack, 1, i, (int)&v20);
					if (v20)
						*(_DWORD *)((char *)dword_4C1AFC + v5 + 160) |= 2u;
					v20 = 0;
					sub_46DE70(aNoBlock, 1, i, (int)&v20);
					if (v20)
						*(_DWORD *)((char *)dword_4C1AFC + v5 + 160) |= 0x10u;
					v20 = 0;
					sub_46DE70(aNoShowshape, 1, i, (int)&v20);
					if (v20)
						*(_DWORD *)((char *)dword_4C1AFC + v5 + 160) |= 0x20u;
					v20 = 0;
					sub_46DE70(aNoPoison, 1, i, (int)&v20);
					if (v20)
						*(_DWORD *)((char *)dword_4C1AFC + v5 + 160) |= 0x40u;
					v20 = 0;
					sub_46DE70(aNoParalyze, 1, i, (int)&v20);
					if (v20)
					{
						v13 = *(_DWORD *)((char *)dword_4C1AFC + v5 + 160);
						BYTE1(v13) |= 8u;
						*(_DWORD *)((char *)dword_4C1AFC + v5 + 160) = v13;
					}
					v20 = 0;
					sub_46DE70(aNoDisablemagic, 1, i, (int)&v20);
					if (v20)
					{
						v14 = *(_DWORD *)((char *)dword_4C1AFC + v5 + 160);
						BYTE1(v14) |= 0x10u;
						*(_DWORD *)((char *)dword_4C1AFC + v5 + 160) = v14;
					}
					v20 = 0;
					sub_46DE70(aNoWeaken, 1, i, (int)&v20);
					if (v20)
					{
						v15 = *(_DWORD *)((char *)dword_4C1AFC + v5 + 160);
						BYTE1(v15) |= 0x20u;
						*(_DWORD *)((char *)dword_4C1AFC + v5 + 160) = v15;
					}
					v20 = 0;
					sub_46DE70(aNoShadow, 1, i, (int)&v20);
					if (v20)
					{
						v16 = *(_DWORD *)((char *)dword_4C1AFC + v5 + 160);
						BYTE1(v16) |= 1u;
						*(_DWORD *)((char *)dword_4C1AFC + v5 + 160) = v16;
					}
					v20 = 0;
					sub_46DE70(aDoubleAttack, 1, i, (int)&v20);
					if (v20)
					{
						v17 = *(_DWORD *)((char *)dword_4C1AFC + v5 + 160);
						BYTE1(v17) |= 2u;
						*(_DWORD *)((char *)dword_4C1AFC + v5 + 160) = v17;
					}
					v20 = 0;
					sub_46DE70(aMoveMagicUse, 1, i, (int)&v20);
					if (v20)
					{
						v18 = *(_DWORD *)((char *)dword_4C1AFC + v5 + 160);
						BYTE1(v18) |= 4u;
						*(_DWORD *)((char *)dword_4C1AFC + v5 + 160) = v18;
					}
					v20 = 0;
					sub_46DE70(aStX2, 1, i, (int)&v20);
					if (v20)
					{
						v19 = *(_DWORD *)((char *)dword_4C1AFC + v5 + 160);
						BYTE1(v19) |= 0x40u;
						*(_DWORD *)((char *)dword_4C1AFC + v5 + 160) = v19;
					}
					v20 = 0;
					sub_46DE70(off_478EA0, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 308) = v20;
					v20 = 0;
					sub_46DE70(aItem1, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 312) = v20;
					v20 = 0;
					sub_46DE70(aItem2, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 316) = v20;
					v20 = 0;
					sub_46DE70(aItem3, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 320) = v20;
					v20 = 0;
					sub_46DE70(aItem4, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 324) = v20;
					v20 = 0;
					sub_46DE70(aItem5, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 328) = v20;
					v20 = 0;
					sub_46DE70(aItem6, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 332) = v20;
					v20 = 0;
					sub_46DE70(aItem7, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 336) = v20;
					v20 = 0;
					sub_46DE70(aItem8, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 340) = v20;
					v20 = sub_44B870(aSpecialOther, i);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 364) = v20;
					v20 = sub_44B870(aSpecialFire, i);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 356) = v20;
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 348) = sub_44B870(aSpecialWater, i);
					v20 = 0;
					sub_46DE70(aSpecialEarth, 1, i, (int)&v20);
					v20 = sub_44B870(aSpecialEarth, i);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 344) = v20;
					v20 = sub_44B870(aSpecialWind, i);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 352) = v20;
					v20 = sub_44B870(aSpecialMind, i);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 360) = v20;
					v20 = sub_44B870(aSpecialOther2, i);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 368) = v20;
					v20 = sub_44B870(aMagicOther, i);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 392) = v20;
					v20 = sub_44B870(aMagicFire, i);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 384) = v20;
					v20 = sub_44B870(aMagicWater, i);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 376) = v20;
					v20 = sub_44B870(aMagicEarth, i);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 372) = v20;
					v20 = sub_44B870(aMagicWind, i);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 380) = v20;
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 388) = sub_44B870(aMagicMind, i);
					v20 = 0;
					sub_46DE70(aWaitRound, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 440) = v20;
					v20 = -1;
					sub_46DE70(aFindNoId, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 444) = v20;
					v20 = 0;
					sub_46DE70(aFindType, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 448) = v20;
					v20 = 0;
					sub_46DE70(aFindFlag, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 452) = v20;
					v20 = 0;
					sub_46DE70(aFindRange, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 456) = v20;
					v20 = 0;
					sub_46DE70(aAiCallRange, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 460) = v20;
					v20 = 0;
					sub_46DE70(aAiFixed, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 464) = v20;
					v20 = 0;
					sub_46DE70(aAiCheckDying, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 468) = v20;
					v20 = 0;
					sub_46DE70(aAiCheckHp, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 472) = v20;
					v20 = 0;
					sub_46DE70(aAiHelpOtherhp, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 476) = v20;
					v20 = 0;
					sub_46DE70(aAiHelpStatus, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 480) = v20;
					v20 = 0;
					sub_46DE70(aAiHelpAttack, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 484) = v20;
					v20 = 0;
					sub_46DE70(aAiMagicMultiFi, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 500) = v20;
					v20 = 0;
					sub_46DE70(aAiLock, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 488) = v20;
					v20 = 0;
					sub_46DE70(aAiAttSpecial, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 492) = v20;
					v20 = 0;
					sub_46DE70(aAiAttMagic, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 496) = v20;
					v20 = 0;
					sub_46DE70(aLevelAdjustRan, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 504) = v20 << 16;
					v20 = 0;
					sub_46DE70(aLevelAdjustDis, 1, i, (int)&v20);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 504) += (unsigned __int16)v20;
					sub_448840((int)dword_4C1AFC + v5);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 216) = *(_DWORD *)((char *)dword_4C1AFC + v5 + 220);
					*(_DWORD *)((char *)dword_4C1AFC + v5 + 224) = *(_DWORD *)((char *)dword_4C1AFC + v5 + 228);
				}
				sub_46E060();
			}
		}
	}
}

int __cdecl sub_44B900(char *a1, int a2)
{
	int result; // eax
	char *v3; // eax
	int v4; // [esp+8h] [ebp-4h]

	v4 = 0;
	if (sub_46DD50(a1, 1, a2, (int)byte_4C1E98) && !sub_46DE00(byte_4C1E98, (int)&v4))
	{
		result = sub_459990(byte_4C1E98);
		v4 = result;
		if (result != -1)
			return result;
		v3 = sub_46DD50(a1, 1, a2, 0);
		sub_446480(0, v3);
	}
	return v4;
}

int __cdecl sub_44B870(char *a1, int a2)
{
	int v2; // edi
	char *v3; // esi
	char v4; // al

	v2 = 0;
	if (sub_46DD50(a1, 1, a2, (int)byte_4C1E98))
	{
		v3 = strtok(byte_4C1E98, asc_47855C);
		while (v3)
		{
			a2 = 0;
			if (*v3 == 32)
			{
				do
					v4 = (v3++)[1];
				while (v4 == 32);
			}
			if (sub_46DE00(v3, (int)&a2))
			{
				v3 = strtok(0, asc_47855C);
				v2 |= a2;
			}
			else
			{
				sub_446480((int)a1, v3);
			}
		}
	}
	return v2;
}

int __cdecl sub_448840(int a1)
{
	int v1; // edi
	int v2; // eax
	int v3; // ebp
	int v4; // ebp
	int v5; // ebp
	int v6; // eax
	int v7; // ecx
	int v8; // eax
	int v9; // eax
	int v10; // eax
	int v11; // eax
	int v12; // eax
	__int16 v13; // ax
	__int16 v14; // ax
	__int16 v15; // ax
	int v16; // ecx
	int v17; // edx
	int v18; // eax
	int v19; // ecx
	int v20; // ecx
	int v21; // eax
	int v22; // eax
	int v23; // ecx
	int v24; // eax
	int v25; // eax
	int v26; // ecx
	int v27; // ecx
	int v28; // eax
	int v29; // eax
	int v30; // eax
	int v31; // eax
	int v32; // eax
	int v33; // eax
	int v34; // ecx
	int v35; // ebx
	int v36; // ebp
	int v37; // ecx
	unsigned int v38; // ecx
	int v39; // edi
	int v40; // edx
	int v41; // eax
	int v42; // ecx
	int v43; // eax
	int v44; // ecx
	int v45; // ecx
	int v46; // ecx
	int v47; // eax
	int v48; // ecx
	int v49; // ecx
	int v50; // eax
	int v51; // ecx
	int v52; // ecx
	int v53; // ebx
	int v54; // ebp
	unsigned int v55; // ecx
	int v56; // edi
	int v57; // ecx
	int v58; // eax
	int v59; // edi
	int v60; // ebx
	int v61; // eax
	int v62; // edx
	int v63; // eax
	int v64; // eax
	int v65; // ecx
	int v66; // eax
	int v67; // ecx
	int v68; // eax
	int v69; // eax
	int v70; // eax
	int v71; // ecx
	int v72; // eax
	int v73; // eax
	int v74; // ecx
	unsigned int v75; // ecx
	int v76; // eax
	int v77; // ecx
	int v78; // eax
	int v79; // eax
	int v80; // ebx
	int v81; // ebp
	int v82; // ecx
	int v83; // edi
	int v84; // edx
	int v85; // eax
	int v86; // ecx
	int v87; // ecx
	int v88; // eax
	int v89; // ecx
	int v90; // eax
	int v91; // ecx
	int v92; // eax
	int v93; // eax
	int v94; // eax
	int v95; // ecx
	int v96; // eax
	int v97; // ebx
	int v98; // ebp
	unsigned int v99; // ecx
	int v100; // edi
	int v101; // ecx
	int v102; // edx
	int v103; // ecx
	int v104; // ecx
	int v105; // ecx
	int v106; // ecx
	int v107; // ecx
	int v108; // eax
	int v109; // ecx
	int v110; // eax
	int v111; // ecx
	int v112; // eax
	int v113; // ebx
	int v114; // ebp
	int v115; // ecx
	unsigned int v116; // ecx
	int v117; // edi
	int v118; // edx
	int v119; // eax
	int v120; // ecx
	int v121; // ecx
	int v122; // eax
	int v123; // ecx
	int v124; // eax
	int v125; // eax
	int v126; // ecx
	int v127; // eax
	int v128; // eax
	int v129; // ecx
	int v130; // ebx
	int v131; // ebp
	signed int v132; // ecx
	unsigned int v133; // eax
	int v134; // eax
	int v135; // edx
	int v136; // eax
	unsigned int v137; // edx
	int v138; // edx
	int v139; // ecx
	int v140; // eax
	int v141; // ecx
	int v142; // ecx
	int v143; // eax
	int v144; // ecx
	int v145; // eax
	int v146; // eax
	int v147; // ecx
	int v148; // ebx
	int v149; // ebp
	int v150; // edi
	int v151; // ecx
	int v152; // edx
	int v153; // ecx
	int v154; // eax
	int v155; // eax
	int v156; // ecx
	int v157; // eax
	int v158; // ebx
	int v159; // ebp
	int v160; // edi
	int v161; // ecx
	int v162; // edx
	int v163; // eax
	int v164; // ecx
	int v165; // eax
	int v166; // eax
	int v167; // eax
	int v168; // eax
	int v169; // ebx
	int v170; // ebp
	int v171; // edi
	int v172; // edx
	int v173; // eax
	int v174; // ecx
	int v175; // eax
	int v176; // ecx
	int v177; // ecx
	int v178; // eax
	int v179; // ecx
	int v180; // eax
	int v181; // ecx
	int v182; // eax
	int v183; // ecx
	int v184; // ebx
	int v185; // ebp
	int v186; // edi
	int v187; // edx
	int v188; // eax
	int v189; // ecx
	int v190; // ecx
	int v191; // eax
	int v192; // eax
	int v193; // eax
	int v194; // eax
	signed int v195; // eax
	signed int v196; // eax
	signed int v197; // eax
	signed int v198; // eax
	signed int v199; // eax
	signed int v200; // eax
	int v201; // eax
	int result; // eax

	v1 = *(_DWORD *)(a1 + 156);
	if (!(*(_DWORD *)(a1 + 40) & 0x10000))
		v1 = 0;
	*(_DWORD *)(a1 + 76) = *(_DWORD *)(a1 + 100);
	*(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 104);
	*(_DWORD *)(a1 + 84) = *(_DWORD *)(a1 + 108);
	*(_DWORD *)(a1 + 88) = *(_DWORD *)(a1 + 112);
	*(_DWORD *)(a1 + 260) = *(_DWORD *)(a1 + 280);
	*(_DWORD *)(a1 + 264) = *(_DWORD *)(a1 + 284);
	*(_DWORD *)(a1 + 268) = *(_DWORD *)(a1 + 288);
	*(_DWORD *)(a1 + 272) = *(_DWORD *)(a1 + 292);
	*(_DWORD *)(a1 + 276) = *(_DWORD *)(a1 + 296);
	if (*(_BYTE *)(a1 + 36) & 8)
	{
		v2 = *(signed __int16 *)(a1 + 58);
		v3 = *(_DWORD *)(a1 + 76) - v2;
		*(_DWORD *)(a1 + 76) = v3;
		if (v3 < 1)
			*(_DWORD *)(a1 + 76) = 1;
		v4 = *(_DWORD *)(a1 + 80) - v2;
		*(_DWORD *)(a1 + 80) = v4;
		if (v4 < 1)
			*(_DWORD *)(a1 + 80) = 1;
		v5 = *(_DWORD *)(a1 + 84) - v2;
		*(_DWORD *)(a1 + 84) = v5;
		if (v5 < 1)
			*(_DWORD *)(a1 + 84) = 1;
		v6 = *(_DWORD *)(a1 + 88) - v2;
		*(_DWORD *)(a1 + 88) = v6;
		if (v6 < 1)
			*(_DWORD *)(a1 + 88) = 1;
	}
	if (*(_BYTE *)(a1 + 36) & 0x40)
	{
		v7 = *(signed __int16 *)(a1 + 74);
		v8 = v7 + *(_DWORD *)(a1 + 260);
		if (v8 > 80)
			v8 = 80;
		*(_DWORD *)(a1 + 260) = v8;
		v9 = v7 + *(_DWORD *)(a1 + 264);
		if (v9 > 80)
			v9 = 80;
		*(_DWORD *)(a1 + 264) = v9;
		v10 = v7 + *(_DWORD *)(a1 + 268);
		if (v10 > 80)
			v10 = 80;
		*(_DWORD *)(a1 + 268) = v10;
		v11 = *(_DWORD *)(a1 + 272) + v7;
		if (v11 > 80)
			v11 = 80;
		*(_DWORD *)(a1 + 272) = v11;
		v12 = v7 + *(_DWORD *)(a1 + 276);
		if (v12 > 80)
			v12 = 80;
		*(_DWORD *)(a1 + 276) = v12;
	}
	*(_DWORD *)(a1 + 300) = *(_DWORD *)(a1 + 304);
	*(_DWORD *)(a1 + 396) = 0;
	*(_DWORD *)(a1 + 400) = 0;
	*(_DWORD *)(a1 + 188) = 0;
	*(_DWORD *)(a1 + 212) = 0;
	*(_DWORD *)(a1 + 196) = 0;
	*(_DWORD *)(a1 + 200) = 0;
	*(_DWORD *)(a1 + 204) = 0;
	v13 = *(_WORD *)(a1 + 404);
	*(_WORD *)(a1 + 406) = v13;
	if (!v13)
		*(_WORD *)(a1 + 406) = 12;
	*(_WORD *)(a1 + 410) = *(_WORD *)(a1 + 408);
	v14 = *(_WORD *)(a1 + 412);
	*(_WORD *)(a1 + 414) = v14;
	if (!v14)
		*(_WORD *)(a1 + 414) = 12;
	v15 = *(_WORD *)(a1 + 416);
	*(_WORD *)(a1 + 418) = v15;
	if (!v15)
		*(_WORD *)(a1 + 418) = 8;
	v16 = *(_DWORD *)(a1 + 420);
	v17 = *(_DWORD *)(a1 + 424);
	*(_DWORD *)(a1 + 180) = *(_DWORD *)(a1 + 428);
	v18 = *(_DWORD *)(a1 + 24);
	*(_DWORD *)(a1 + 192) = v16;
	v19 = *(_DWORD *)(a1 + 432);
	*(_DWORD *)(a1 + 208) = v17;
	*(_DWORD *)(a1 + 184) = v19;
	switch (v18)
	{
	case 80:
		sub_448370((_DWORD *)a1, 0);
		v20 = *(_DWORD *)(a1 + 88) / 4 + 40 * *(_DWORD *)(a1 + 84) / 100;
		if (v20 > 40)
			v20 = 40;
		*(_DWORD *)(a1 + 260) += v20;
		v21 = *(_DWORD *)(a1 + 88) / 5 + 26 * *(_DWORD *)(a1 + 84) / 100;
		if (v21 > 40)
			v21 = 40;
		*(_DWORD *)(a1 + 264) += v21;
		v22 = *(_DWORD *)(a1 + 88) / 5 + 20 * *(_DWORD *)(a1 + 84) / 100;
		if (v22 > 40)
			v22 = 40;
		*(_DWORD *)(a1 + 268) += v22;
		v23 = *(_DWORD *)(a1 + 88) / 4 + 46 * *(_DWORD *)(a1 + 84) / 100;
		if (v23 > 40)
			v23 = 40;
		*(_DWORD *)(a1 + 272) += v23;
		v24 = *(_DWORD *)(a1 + 88) / 6 + 10 * *(_DWORD *)(a1 + 84) / 100;
		if (v24 > 40)
			v24 = 40;
		*(_DWORD *)(a1 + 276) += v24;
		goto LABEL_64;
	case 81:
		sub_448370((_DWORD *)a1, 1);
		*(_DWORD *)(a1 + 208) += 30;
		v25 = *(_DWORD *)(a1 + 88) / 3 + 56 * *(_DWORD *)(a1 + 84) / 100;
		if (v25 > 45)
			v25 = 45;
		*(_DWORD *)(a1 + 260) += v25;
		v26 = *(_DWORD *)(a1 + 88) / 4 + 32 * *(_DWORD *)(a1 + 84) / 100;
		if (v26 > 45)
			v26 = 45;
		*(_DWORD *)(a1 + 264) += v26;
		v27 = *(_DWORD *)(a1 + 88) / 4 + 26 * *(_DWORD *)(a1 + 84) / 100;
		if (v27 > 45)
			v27 = 45;
		*(_DWORD *)(a1 + 268) += v27;
		v28 = *(_DWORD *)(a1 + 88) / 3 + (*(_DWORD *)(a1 + 84) << 6) / 100;
		if (v28 > 45)
			v28 = 45;
		*(_DWORD *)(a1 + 272) += v28;
		v29 = *(_DWORD *)(a1 + 88) / 5 + 20 * *(_DWORD *)(a1 + 84) / 100;
		if (v29 > 45)
			v29 = 45;
		*(_DWORD *)(a1 + 276) += v29;
		goto LABEL_64;
	case 82:
		sub_448370((_DWORD *)a1, 2);
		v30 = *(_DWORD *)(a1 + 88) / 3 + 62 * *(_DWORD *)(a1 + 84) / 100;
		*(_DWORD *)(a1 + 208) += 32;
		if (v30 > 50)
			v30 = 50;
		*(_DWORD *)(a1 + 260) += v30;
		v31 = *(_DWORD *)(a1 + 88) / 3 + 38 * *(_DWORD *)(a1 + 84) / 100;
		if (v31 > 50)
			v31 = 50;
		*(_DWORD *)(a1 + 264) += v31;
		v32 = *(_DWORD *)(a1 + 88) / 3 + 30 * *(_DWORD *)(a1 + 84) / 100;
		if (v32 > 50)
			v32 = 50;
		*(_DWORD *)(a1 + 268) += v32;
		v33 = *(_DWORD *)(a1 + 88) / 3 + 66 * *(_DWORD *)(a1 + 84) / 100;
		if (v33 > 50)
			v33 = 50;
		*(_DWORD *)(a1 + 272) += v33;
		v34 = *(_DWORD *)(a1 + 88) / 4 + 26 * *(_DWORD *)(a1 + 84) / 100;
		if (v34 > 50)
			v34 = 50;
		*(_DWORD *)(a1 + 276) += v34;
	LABEL_64:
		v35 = *(_DWORD *)(a1 + 88);
		v36 = *(_DWORD *)(a1 + 76);
		v37 = 5 * *(_DWORD *)(a1 + 84);
		*(_DWORD *)(a1 + 220) = 180 * v35 / 100 + v1 + v36 / 8;
		v38 = (signed int)((unsigned __int64)(21990232560i64 * v37) >> 32) >> 5;
		*(_DWORD *)(a1 + 228) = v35 / 6 + (v38 >> 31) + v38;
		*(_DWORD *)(a1 + 192) += ((unsigned int)((unsigned __int64)(49478023260i64 * *(_DWORD *)(a1 + 80)) >> 32) >> 31)
			+ 116 * (v36 / 2) / 100
			+ ((signed int)((unsigned __int64)(49478023260i64 * *(_DWORD *)(a1 + 80)) >> 32) >> 5)
			+ 16;
		sub_448800(a1);
		v39 = *(_DWORD *)(a1 + 84);
		*(_DWORD *)(a1 + 180) += *(_DWORD *)(a1 + 88) / 3
			+ *(_DWORD *)(a1 + 80) / 3
			+ v39 / 5
			+ 20 * *(_DWORD *)(a1 + 76) / 100;
		v40 = 10 * v39 / 100 + *(_DWORD *)(a1 + 156) + 16;
		if (v40 > 76)
			v40 = 76;
		v41 = 5 * *(_DWORD *)(a1 + 80);
		*(_DWORD *)(a1 + 208) += v40;
		v42 = 18 * v41;
		goto LABEL_249;
	case 83:
		sub_448370((_DWORD *)a1, 3);
		v43 = *(_DWORD *)(a1 + 88) / 5 + 20 * *(_DWORD *)(a1 + 84) / 100;
		if (v43 > 36)
			v43 = 36;
		*(_DWORD *)(a1 + 260) += v43;
		v44 = *(_DWORD *)(a1 + 88) / 4 + 16 * *(_DWORD *)(a1 + 84) / 100;
		if (v44 > 36)
			v44 = 36;
		*(_DWORD *)(a1 + 264) += v44;
		v45 = *(_DWORD *)(a1 + 88) / 4 + 46 * *(_DWORD *)(a1 + 84) / 100;
		if (v45 > 36)
			v45 = 36;
		*(_DWORD *)(a1 + 268) += v45;
		v46 = *(_DWORD *)(a1 + 88) / 4 + 32 * *(_DWORD *)(a1 + 84) / 100;
		if (v46 > 36)
			v46 = 36;
		*(_DWORD *)(a1 + 272) += v46;
		v47 = *(_DWORD *)(a1 + 88) / 5 + 30 * *(_DWORD *)(a1 + 84) / 100;
		if (v47 > 36)
			v47 = 36;
		*(_DWORD *)(a1 + 276) += v47;
		goto LABEL_89;
	case 84:
		sub_448370((_DWORD *)a1, 4);
		v48 = *(_DWORD *)(a1 + 88) / 4 + 34 * *(_DWORD *)(a1 + 84) / 100;
		if (v48 > 46)
			v48 = 46;
		*(_DWORD *)(a1 + 260) += v48;
		v49 = *(_DWORD *)(a1 + 88) / 4 + 30 * *(_DWORD *)(a1 + 84) / 100;
		if (v49 > 46)
			v49 = 46;
		*(_DWORD *)(a1 + 264) += v49;
		v50 = *(_DWORD *)(a1 + 88) / 3 + 56 * *(_DWORD *)(a1 + 84) / 100;
		if (v50 > 46)
			v50 = 46;
		*(_DWORD *)(a1 + 268) += v50;
		v51 = *(_DWORD *)(a1 + 88) / 4 + 46 * *(_DWORD *)(a1 + 84) / 100;
		if (v51 > 46)
			v51 = 46;
		*(_DWORD *)(a1 + 272) += v51;
		v52 = *(_DWORD *)(a1 + 88) / 4 + 40 * *(_DWORD *)(a1 + 84) / 100;
		if (v52 > 46)
			v52 = 46;
		*(_DWORD *)(a1 + 276) += v52;
	LABEL_89:
		v53 = *(_DWORD *)(a1 + 88);
		v54 = *(_DWORD *)(a1 + 76);
		v55 = (unsigned __int64)(226774273275i64 * *(_DWORD *)(a1 + 88)) >> 32;
		v56 = (v55 >> 31) + ((signed int)v55 >> 5) + v1;
		v57 = 40 * *(_DWORD *)(a1 + 84);
		*(_DWORD *)(a1 + 220) = v56 + v54 / 7;
		*(_DWORD *)(a1 + 228) = v53 / 8 + v57 / 100;
		*(_DWORD *)(a1 + 192) += ((unsigned int)((unsigned __int64)(54975581400i64 * *(_DWORD *)(a1 + 80)) >> 32) >> 31)
			+ 70 * (v54 / 2) / 100
			+ ((signed int)((unsigned __int64)(54975581400i64 * *(_DWORD *)(a1 + 80)) >> 32) >> 5)
			+ 16;
		sub_448800(a1);
		v58 = *(_DWORD *)(a1 + 84);
		v59 = 5 * v58;
		v60 = *(_DWORD *)(a1 + 80) / 5 + v58 / 4 + 28 * *(_DWORD *)(a1 + 76) / 100;
		v61 = *(_DWORD *)(a1 + 156);
		*(_DWORD *)(a1 + 180) += *(_DWORD *)(a1 + 88) / 3 + v60;
		v62 = v59 / 100 + v61 + 8;
		if (v62 > 50)
			v62 = 50;
		v63 = *(_DWORD *)(a1 + 80);
		*(_DWORD *)(a1 + 208) += v62;
		v42 = 94 * v63;
		goto LABEL_249;
	case 85:
		sub_448370((_DWORD *)a1, 5);
		v64 = *(_DWORD *)(a1 + 88) / 3 + 40 * *(_DWORD *)(a1 + 84) / 100;
		if (v64 > 50)
			v64 = 50;
		*(_DWORD *)(a1 + 260) += v64;
		v65 = *(_DWORD *)(a1 + 88) / 2 + 46 * *(_DWORD *)(a1 + 84) / 100;
		if (v65 > 50)
			v65 = 50;
		*(_DWORD *)(a1 + 264) += v65;
		v66 = *(_DWORD *)(a1 + 88) / 3 + 24 * *(_DWORD *)(a1 + 84) / 100;
		if (v66 > 50)
			v66 = 50;
		*(_DWORD *)(a1 + 268) += v66;
		v67 = *(_DWORD *)(a1 + 88) / 4 + 38 * *(_DWORD *)(a1 + 84) / 100;
		if (v67 > 50)
			v67 = 50;
		*(_DWORD *)(a1 + 272) += v67;
		v68 = *(_DWORD *)(a1 + 88) / 3 + 32 * *(_DWORD *)(a1 + 84) / 100;
		if (v68 > 50)
			v68 = 50;
		goto LABEL_122;
	case 86:
		sub_448370((_DWORD *)a1, 6);
		v69 = *(_DWORD *)(a1 + 84);
		*(_DWORD *)(a1 + 208) += 15;
		v70 = *(_DWORD *)(a1 + 88) / 3 + 52 * v69 / 100;
		if (v70 > 56)
			v70 = 56;
		*(_DWORD *)(a1 + 260) += v70;
		v71 = *(_DWORD *)(a1 + 88) / 2 + 58 * *(_DWORD *)(a1 + 84) / 100;
		if (v71 > 56)
			v71 = 56;
		*(_DWORD *)(a1 + 264) += v71;
		v72 = *(_DWORD *)(a1 + 88) / 3 + 36 * *(_DWORD *)(a1 + 84) / 100;
		if (v72 > 56)
			v72 = 56;
		*(_DWORD *)(a1 + 268) += v72;
		v73 = *(_DWORD *)(a1 + 88) / 3 + 46 * *(_DWORD *)(a1 + 84) / 100;
		if (v73 > 56)
			v73 = 56;
		*(_DWORD *)(a1 + 272) += v73;
		v68 = *(_DWORD *)(a1 + 88) / 3 + 44 * *(_DWORD *)(a1 + 84) / 100;
		if (v68 > 56)
			v68 = 56;
		goto LABEL_122;
	case 87:
		sub_448370((_DWORD *)a1, 7);
		v74 = *(_DWORD *)(a1 + 84);
		*(_DWORD *)(a1 + 208) += 15;
		v75 = (signed int)((unsigned __int64)(96207267450i64 * v74) >> 32) >> 5;
		v76 = *(_DWORD *)(a1 + 88) / 3 + (v75 >> 31) + v75;
		if (v76 > 70)
			v76 = 70;
		*(_DWORD *)(a1 + 260) += v76;
		v77 = *(_DWORD *)(a1 + 88) / 2 + 72 * *(_DWORD *)(a1 + 84) / 100;
		if (v77 > 70)
			v77 = 70;
		*(_DWORD *)(a1 + 264) += v77;
		v78 = *(_DWORD *)(a1 + 88) / 3 + 50 * *(_DWORD *)(a1 + 84) / 100;
		if (v78 > 70)
			v78 = 70;
		*(_DWORD *)(a1 + 268) += v78;
		v79 = *(_DWORD *)(a1 + 88) / 3 + 58 * *(_DWORD *)(a1 + 84) / 100;
		if (v79 > 70)
			v79 = 70;
		*(_DWORD *)(a1 + 272) += v79;
		v68 = *(_DWORD *)(a1 + 88) / 3 + 62 * *(_DWORD *)(a1 + 84) / 100;
		if (v68 > 70)
			v68 = 70;
	LABEL_122:
		*(_DWORD *)(a1 + 276) += v68;
		v80 = *(_DWORD *)(a1 + 88);
		v81 = *(_DWORD *)(a1 + 76);
		v82 = 110 * *(_DWORD *)(a1 + 84);
		*(_DWORD *)(a1 + 220) = 160 * v80 / 100 + v1 + v81 / 6;
		*(_DWORD *)(a1 + 228) = v80 / 4 + v82 / 100;
		*(_DWORD *)(a1 + 192) += ((unsigned int)((unsigned __int64)(38482906980i64 * *(_DWORD *)(a1 + 80)) >> 32) >> 31)
			+ 98 * (v81 / 2) / 100
			+ ((signed int)((unsigned __int64)(38482906980i64 * *(_DWORD *)(a1 + 80)) >> 32) >> 5)
			+ 6;
		sub_448800(a1);
		v83 = *(_DWORD *)(a1 + 84);
		*(_DWORD *)(a1 + 180) += *(_DWORD *)(a1 + 88) / 3
			+ *(_DWORD *)(a1 + 80) / 4
			+ v83 / 7
			+ 22 * *(_DWORD *)(a1 + 76) / 100;
		v84 = 30 * v83 / 100 + 2 * *(_DWORD *)(a1 + 156);
		if (v84 > 44)
			v84 = (v84 - 44) / 2 + 44;
		v85 = *(_DWORD *)(a1 + 80);
		*(_DWORD *)(a1 + 208) += v84 + 45;
		v86 = 94 * v85;
		goto LABEL_275;
	case 88:
		sub_448370((_DWORD *)a1, 8);
		v87 = *(_DWORD *)(a1 + 88) / 4 + 16 * *(_DWORD *)(a1 + 84) / 100;
		if (v87 > 36)
			v87 = 36;
		*(_DWORD *)(a1 + 260) += v87;
		v88 = *(_DWORD *)(a1 + 88) / 3 + 38 * *(_DWORD *)(a1 + 84) / 100;
		if (v88 > 36)
			v88 = 36;
		*(_DWORD *)(a1 + 264) += v88;
		v89 = *(_DWORD *)(a1 + 88) / 4 + 20 * *(_DWORD *)(a1 + 84) / 100;
		if (v89 > 36)
			v89 = 36;
		*(_DWORD *)(a1 + 268) += v89;
		v90 = *(_DWORD *)(a1 + 88) / 5 + 20 * *(_DWORD *)(a1 + 84) / 100;
		if (v90 > 36)
			v90 = 36;
		*(_DWORD *)(a1 + 272) += v90;
		v91 = *(_DWORD *)(a1 + 88) / 4 + 10 * *(_DWORD *)(a1 + 84) / 100;
		if (v91 > 36)
			v91 = 36;
		*(_DWORD *)(a1 + 276) += v91;
		goto LABEL_147;
	case 89:
		sub_448370((_DWORD *)a1, 9);
		v92 = *(_DWORD *)(a1 + 88) / 3 + 26 * *(_DWORD *)(a1 + 84) / 100;
		if (v92 > 44)
			v92 = 44;
		*(_DWORD *)(a1 + 260) += v92;
		v93 = *(_DWORD *)(a1 + 88) / 3 + 56 * *(_DWORD *)(a1 + 84) / 100;
		if (v93 > 44)
			v93 = 44;
		*(_DWORD *)(a1 + 264) += v93;
		v94 = *(_DWORD *)(a1 + 88) / 3 + 32 * *(_DWORD *)(a1 + 84) / 100;
		if (v94 > 44)
			v94 = 44;
		*(_DWORD *)(a1 + 268) += v94;
		v95 = *(_DWORD *)(a1 + 88) / 4 + 38 * *(_DWORD *)(a1 + 84) / 100;
		if (v95 > 44)
			v95 = 44;
		*(_DWORD *)(a1 + 272) += v95;
		v96 = *(_DWORD *)(a1 + 88) / 3 + 14 * *(_DWORD *)(a1 + 84) / 100;
		if (v96 > 44)
			v96 = 44;
		*(_DWORD *)(a1 + 276) += v96;
	LABEL_147:
		v97 = *(_DWORD *)(a1 + 88);
		v98 = *(_DWORD *)(a1 + 76);
		v99 = (unsigned __int64)(43980465120i64 * *(_DWORD *)(a1 + 84)) >> 32;
		*(_DWORD *)(a1 + 220) = v98 / 8 + 120 * v1 / 100 + 170 * *(_DWORD *)(a1 + 88) / 100;
		*(_DWORD *)(a1 + 228) = v97 / 12 + (v99 >> 31) + ((signed int)v99 >> 5);
		*(_DWORD *)(a1 + 192) += 36 * *(_DWORD *)(a1 + 80) / 100 + 70 * v98 / 100 + 12;
		sub_448800(a1);
		v100 = *(_DWORD *)(a1 + 84);
		v101 = *(_DWORD *)(a1 + 156);
		*(_DWORD *)(a1 + 180) += *(_DWORD *)(a1 + 88) / 4
			+ *(_DWORD *)(a1 + 80) / 5
			+ v100 / 3
			+ 20 * *(_DWORD *)(a1 + 76) / 100;
		v102 = 5 * v100 / 100 + v101 + 8;
		if (v102 > 60)
			v102 = 60;
		*(_DWORD *)(a1 + 208) += v102;
		v86 = 96 * *(_DWORD *)(a1 + 80);
		goto LABEL_275;
	case 90:
		sub_448370((_DWORD *)a1, 10);
		v103 = *(_DWORD *)(a1 + 88) / 4 + 42 * *(_DWORD *)(a1 + 84) / 100;
		if (v103 > 45)
			v103 = 45;
		*(_DWORD *)(a1 + 260) += v103;
		v104 = *(_DWORD *)(a1 + 88) / 4 + 48 * *(_DWORD *)(a1 + 84) / 100;
		if (v104 > 45)
			v104 = 45;
		*(_DWORD *)(a1 + 264) += v104;
		v105 = *(_DWORD *)(a1 + 88) / 4 + 26 * *(_DWORD *)(a1 + 84) / 100;
		if (v105 > 45)
			v105 = 45;
		*(_DWORD *)(a1 + 268) += v105;
		v106 = *(_DWORD *)(a1 + 88) / 4 + 40 * *(_DWORD *)(a1 + 84) / 100;
		if (v106 > 45)
			v106 = 45;
		*(_DWORD *)(a1 + 272) += v106;
		v107 = *(_DWORD *)(a1 + 88) / 4 + 28 * *(_DWORD *)(a1 + 84) / 100;
		if (v107 > 45)
			v107 = 45;
		*(_DWORD *)(a1 + 276) += v107;
		goto LABEL_172;
	case 91:
		sub_448370((_DWORD *)a1, 11);
		*(_DWORD *)(a1 + 208) += 15;
		v108 = *(_DWORD *)(a1 + 88) / 3 + 50 * *(_DWORD *)(a1 + 84) / 100;
		if (v108 > 64)
			v108 = 64;
		*(_DWORD *)(a1 + 260) += v108;
		v109 = *(_DWORD *)(a1 + 88) / 4 + 56 * *(_DWORD *)(a1 + 84) / 100;
		if (v109 > 64)
			v109 = 64;
		*(_DWORD *)(a1 + 264) += v109;
		v110 = *(_DWORD *)(a1 + 88) / 3 + 34 * *(_DWORD *)(a1 + 84) / 100;
		if (v110 > 64)
			v110 = 64;
		*(_DWORD *)(a1 + 268) += v110;
		v111 = *(_DWORD *)(a1 + 88) / 4 + 50 * *(_DWORD *)(a1 + 84) / 100;
		if (v111 > 64)
			v111 = 64;
		*(_DWORD *)(a1 + 272) += v111;
		v112 = *(_DWORD *)(a1 + 88) / 3 + 42 * *(_DWORD *)(a1 + 84) / 100;
		if (v112 > 64)
			v112 = 64;
		*(_DWORD *)(a1 + 276) += v112;
	LABEL_172:
		v113 = *(_DWORD *)(a1 + 88);
		v114 = *(_DWORD *)(a1 + 76);
		v115 = 3 * *(_DWORD *)(a1 + 84);
		*(_DWORD *)(a1 + 220) = 150 * v113 / 100 + v1 + v114 / 5;
		v116 = (signed int)((unsigned __int64)(54975581400i64 * v115) >> 32) >> 5;
		*(_DWORD *)(a1 + 228) = v113 / 2 + (v116 >> 31) + v116;
		*(_DWORD *)(a1 + 192) += ((unsigned int)((unsigned __int64)(27487790700i64 * *(_DWORD *)(a1 + 80)) >> 32) >> 31)
			+ 96 * (v114 / 3) / 100
			+ ((signed int)((unsigned __int64)(27487790700i64 * *(_DWORD *)(a1 + 80)) >> 32) >> 5)
			+ 6;
		sub_448800(a1);
		v117 = *(_DWORD *)(a1 + 84);
		*(_DWORD *)(a1 + 180) += *(_DWORD *)(a1 + 88) / 4
			+ *(_DWORD *)(a1 + 80) / 4
			+ *(_DWORD *)(a1 + 84) / 8
			+ 36 * *(_DWORD *)(a1 + 76) / 100;
		v118 = 40 * v117 / 100 + 2 * *(_DWORD *)(a1 + 156);
		if (v118 > 50)
			v118 = (v118 - 50) / 2 + 50;
		v119 = *(_DWORD *)(a1 + 80);
		*(_DWORD *)(a1 + 208) += v118 + 55;
		v86 = 94 * v119;
		goto LABEL_275;
	case 92:
		sub_448370((_DWORD *)a1, 12);
		v120 = *(_DWORD *)(a1 + 88) / 4 + 10 * *(_DWORD *)(a1 + 84) / 100;
		if (v120 > 40)
			v120 = 40;
		*(_DWORD *)(a1 + 260) += v120;
		v121 = *(_DWORD *)(a1 + 88) / 4 + 16 * *(_DWORD *)(a1 + 84) / 100;
		if (v121 > 40)
			v121 = 40;
		*(_DWORD *)(a1 + 264) += v121;
		v122 = *(_DWORD *)(a1 + 88) / 3 + 40 * *(_DWORD *)(a1 + 84) / 100;
		if (v122 > 40)
			v122 = 40;
		*(_DWORD *)(a1 + 268) += v122;
		v123 = *(_DWORD *)(a1 + 88) / 4 + 14 * *(_DWORD *)(a1 + 84) / 100;
		if (v123 > 40)
			v123 = 40;
		*(_DWORD *)(a1 + 272) += v123;
		v124 = *(_DWORD *)(a1 + 88) / 5 + 30 * *(_DWORD *)(a1 + 84) / 100;
		if (v124 > 40)
			v124 = 40;
		*(_DWORD *)(a1 + 276) += v124;
		goto LABEL_197;
	case 93:
		sub_448370((_DWORD *)a1, 13);
		*(_DWORD *)(a1 + 208) += 20;
		v125 = *(_DWORD *)(a1 + 88) / 3 + 20 * *(_DWORD *)(a1 + 84) / 100;
		if (v125 > 50)
			v125 = 50;
		*(_DWORD *)(a1 + 260) += v125;
		v126 = *(_DWORD *)(a1 + 88) / 4 + 34 * *(_DWORD *)(a1 + 84) / 100;
		if (v126 > 50)
			v126 = 50;
		*(_DWORD *)(a1 + 264) += v126;
		v127 = *(_DWORD *)(a1 + 88) / 3 + 57 * *(_DWORD *)(a1 + 84) / 100;
		if (v127 > 50)
			v127 = 50;
		*(_DWORD *)(a1 + 268) += v127;
		v128 = *(_DWORD *)(a1 + 88) / 3 + 26 * *(_DWORD *)(a1 + 84) / 100;
		if (v128 > 50)
			v128 = 50;
		*(_DWORD *)(a1 + 272) += v128;
		v129 = *(_DWORD *)(a1 + 88) / 4 + 48 * *(_DWORD *)(a1 + 84) / 100;
		if (v129 > 50)
			v129 = 50;
		*(_DWORD *)(a1 + 276) += v129;
	LABEL_197:
		v130 = *(_DWORD *)(a1 + 88);
		v131 = *(_DWORD *)(a1 + 76);
		v132 = (signed int)((unsigned __int64)(109951162800i64 * *(_DWORD *)(a1 + 84)) >> 32) >> 5;
		v133 = (signed int)((unsigned __int64)(109951162800i64 * *(_DWORD *)(a1 + 84)) >> 32) >> 5;
		*(_DWORD *)(a1 + 220) = v131 / 8 + 120 * v1 / 100 + 190 * v130 / 100;
		*(_DWORD *)(a1 + 228) = 24 * v130 / 100 + (v133 >> 31) + v132;
		*(_DWORD *)(a1 + 192) += ((unsigned int)((unsigned __int64)(54975581400i64 * *(_DWORD *)(a1 + 80)) >> 32) >> 31)
			+ 105 * (v131 / 2) / 100
			+ ((signed int)((unsigned __int64)(54975581400i64 * *(_DWORD *)(a1 + 80)) >> 32) >> 5)
			+ 14;
		sub_448800(a1);
		v134 = *(_DWORD *)(a1 + 84);
		*(_DWORD *)(a1 + 180) += *(_DWORD *)(a1 + 88) / 3
			+ *(_DWORD *)(a1 + 80) / 4
			+ v134 / 4
			+ 16 * *(_DWORD *)(a1 + 76) / 100;
		v135 = 25 * v134 / 100 + *(_DWORD *)(a1 + 156) + 27;
		if (v135 > 70)
			v135 = 70;
		v136 = *(_DWORD *)(a1 + 80);
		*(_DWORD *)(a1 + 208) += v135;
		v137 = (signed int)((unsigned __int64)(109951162800i64 * v136) >> 32) >> 5;
		v138 = (v137 >> 31) + v137;
		goto LABEL_276;
	case 94:
		sub_448370((_DWORD *)a1, 14);
		v139 = *(_DWORD *)(a1 + 88) / 2 + 36 * *(_DWORD *)(a1 + 84) / 100;
		if (v139 > 34)
			v139 = 34;
		*(_DWORD *)(a1 + 260) += v139;
		v140 = *(_DWORD *)(a1 + 88) / 3 + 6 * *(_DWORD *)(a1 + 84) / 100;
		if (v140 > 34)
			v140 = 34;
		*(_DWORD *)(a1 + 264) += v140;
		v141 = *(_DWORD *)(a1 + 88) / 4 + 42 * *(_DWORD *)(a1 + 84) / 100;
		if (v141 > 34)
			v141 = 34;
		*(_DWORD *)(a1 + 268) += v141;
		v142 = *(_DWORD *)(a1 + 88) / 4 + 26 * *(_DWORD *)(a1 + 84) / 100;
		if (v142 > 34)
			v142 = 34;
		*(_DWORD *)(a1 + 272) += v142;
		v143 = *(_DWORD *)(a1 + 88) / 6 + 10 * *(_DWORD *)(a1 + 84) / 100;
		if (v143 > 34)
			v143 = 34;
		goto LABEL_220;
	case 95:
		sub_448370((_DWORD *)a1, 15);
		v144 = *(_DWORD *)(a1 + 88) / 2 + 48 * *(_DWORD *)(a1 + 84) / 100;
		if (v144 > 45)
			v144 = 45;
		*(_DWORD *)(a1 + 260) += v144;
		v145 = *(_DWORD *)(a1 + 88) / 3 + 16 * *(_DWORD *)(a1 + 84) / 100;
		if (v145 > 45)
			v145 = 45;
		*(_DWORD *)(a1 + 264) += v145;
		v146 = *(_DWORD *)(a1 + 88) / 3 + 55 * *(_DWORD *)(a1 + 84) / 100;
		if (v146 > 45)
			v146 = 45;
		*(_DWORD *)(a1 + 268) += v146;
		v147 = *(_DWORD *)(a1 + 88) / 4 + 40 * *(_DWORD *)(a1 + 84) / 100;
		if (v147 > 45)
			v147 = 45;
		*(_DWORD *)(a1 + 272) += v147;
		v143 = *(_DWORD *)(a1 + 88) / 5 + 20 * *(_DWORD *)(a1 + 84) / 100;
		if (v143 > 45)
			v143 = 45;
	LABEL_220:
		*(_DWORD *)(a1 + 276) += v143;
		v148 = *(_DWORD *)(a1 + 88);
		v149 = *(_DWORD *)(a1 + 76);
		*(_DWORD *)(a1 + 220) = v149 / 6 + 150 * v1 / 100 + 200 * v148 / 100;
		*(_DWORD *)(a1 + 228) = v148 / 14 + 20 * *(_DWORD *)(a1 + 84) / 100;
		*(_DWORD *)(a1 + 192) += 45 * *(_DWORD *)(a1 + 80) / 100 + 120 * (v149 / 2) / 100 + 12;
		sub_448800(a1);
		v150 = *(_DWORD *)(a1 + 84);
		v151 = *(_DWORD *)(a1 + 156);
		*(_DWORD *)(a1 + 180) += *(_DWORD *)(a1 + 88) / 2
			+ *(_DWORD *)(a1 + 80) / 3
			+ v150 / 3
			+ 32 * *(_DWORD *)(a1 + 76) / 100;
		v152 = 2 * v150 / 100 + v151 + 3;
		if (v152 > 30)
			v152 = 30;
		*(_DWORD *)(a1 + 208) += v152;
		v86 = 60 * *(_DWORD *)(a1 + 80);
		goto LABEL_275;
	case 96:
		sub_448370((_DWORD *)a1, 16);
		v153 = *(_DWORD *)(a1 + 88) / 4 + 18 * *(_DWORD *)(a1 + 84) / 100;
		if (v153 > 30)
			v153 = 30;
		*(_DWORD *)(a1 + 260) += v153;
		v154 = *(_DWORD *)(a1 + 88) / 5 + 11 * *(_DWORD *)(a1 + 84) / 100;
		if (v154 > 30)
			v154 = 30;
		*(_DWORD *)(a1 + 264) += v154;
		v155 = *(_DWORD *)(a1 + 88) / 3 + 15 * *(_DWORD *)(a1 + 84) / 100;
		if (v155 > 30)
			v155 = 30;
		*(_DWORD *)(a1 + 268) += v155;
		v156 = *(_DWORD *)(a1 + 88) / 4 + 16 * *(_DWORD *)(a1 + 84) / 100;
		if (v156 > 30)
			v156 = 30;
		*(_DWORD *)(a1 + 272) += v156;
		v157 = *(_DWORD *)(a1 + 88) / 6 + 13 * *(_DWORD *)(a1 + 84) / 100;
		if (v157 > 30)
			v157 = 30;
		*(_DWORD *)(a1 + 276) += v157;
		v158 = *(_DWORD *)(a1 + 88);
		v159 = *(_DWORD *)(a1 + 76);
		*(_DWORD *)(a1 + 220) = 90 * v158 / 100 + v1 + *(_DWORD *)(a1 + 76) / 4;
		*(_DWORD *)(a1 + 228) = v158 / 20 + 38 * *(_DWORD *)(a1 + 84) / 100;
		*(_DWORD *)(a1 + 192) += 28 * *(_DWORD *)(a1 + 80) / 100 + 90 * (v159 / 2) / 100 + 24;
		sub_448800(a1);
		v160 = *(_DWORD *)(a1 + 84);
		v161 = *(_DWORD *)(a1 + 156);
		*(_DWORD *)(a1 + 180) += *(_DWORD *)(a1 + 88) / 2
			+ *(_DWORD *)(a1 + 80) / 3
			+ v160 / 3
			+ 40 * *(_DWORD *)(a1 + 76) / 100;
		v162 = 5 * v160 / 100 + v161 + 12;
		if (v162 > 60)
			v162 = 60;
		v163 = *(_DWORD *)(a1 + 80);
		*(_DWORD *)(a1 + 208) += v162;
		v86 = 92 * v163;
		goto LABEL_275;
	case 97:
		sub_448370((_DWORD *)a1, 17);
		v164 = *(_DWORD *)(a1 + 88) / 4 + 55 * *(_DWORD *)(a1 + 84) / 100;
		if (v164 > 66)
			v164 = 66;
		*(_DWORD *)(a1 + 260) += v164;
		v165 = *(_DWORD *)(a1 + 88) / 3 + 58 * *(_DWORD *)(a1 + 84) / 100;
		if (v165 > 66)
			v165 = 66;
		*(_DWORD *)(a1 + 264) += v165;
		v166 = *(_DWORD *)(a1 + 88) / 3 + 52 * *(_DWORD *)(a1 + 84) / 100;
		if (v166 > 66)
			v166 = 66;
		*(_DWORD *)(a1 + 268) += v166;
		v167 = *(_DWORD *)(a1 + 88) / 3 + 56 * *(_DWORD *)(a1 + 84) / 100;
		if (v167 > 66)
			v167 = 66;
		*(_DWORD *)(a1 + 272) += v167;
		v168 = *(_DWORD *)(a1 + 88) / 5 + 50 * *(_DWORD *)(a1 + 84) / 100;
		if (v168 > 66)
			v168 = 66;
		*(_DWORD *)(a1 + 276) += v168;
		v169 = *(_DWORD *)(a1 + 88);
		v170 = *(_DWORD *)(a1 + 76);
		*(_DWORD *)(a1 + 220) = v170 / 3 + 170 * v1 / 100 + 240 * v169 / 100;
		*(_DWORD *)(a1 + 228) = v169 / 3 + 110 * *(_DWORD *)(a1 + 84) / 100;
		*(_DWORD *)(a1 + 192) += ((unsigned int)((unsigned __int64)(54975581400i64 * *(_DWORD *)(a1 + 80)) >> 32) >> 31)
			+ 110 * (v170 / 2) / 100
			+ ((signed int)((unsigned __int64)(54975581400i64 * *(_DWORD *)(a1 + 80)) >> 32) >> 5)
			+ 12;
		sub_448800(a1);
		v171 = *(_DWORD *)(a1 + 84);
		*(_DWORD *)(a1 + 180) += *(_DWORD *)(a1 + 88) / 3
			+ *(_DWORD *)(a1 + 80) / 5
			+ *(_DWORD *)(a1 + 84) / 4
			+ 28 * *(_DWORD *)(a1 + 76) / 100;
		v172 = 12 * v171 / 100 + *(_DWORD *)(a1 + 156) + 19;
		if (v172 > 75)
			v172 = 75;
		v173 = *(_DWORD *)(a1 + 80);
		*(_DWORD *)(a1 + 208) += v172;
		v42 = 80 * v173;
	LABEL_249:
		v138 = v42 / 100;
		goto LABEL_276;
	case 98:
		sub_448370((_DWORD *)a1, 18);
		v174 = *(_DWORD *)(a1 + 88) / 4 + 10 * *(_DWORD *)(a1 + 84) / 100;
		if (v174 > 42)
			v174 = 42;
		*(_DWORD *)(a1 + 260) += v174;
		v175 = *(_DWORD *)(a1 + 88) / 3 + 40 * *(_DWORD *)(a1 + 84) / 100;
		if (v175 > 42)
			v175 = 42;
		*(_DWORD *)(a1 + 264) += v175;
		v176 = *(_DWORD *)(a1 + 88) / 4 + 20 * *(_DWORD *)(a1 + 84) / 100;
		if (v176 > 42)
			v176 = 42;
		*(_DWORD *)(a1 + 268) += v176;
		v177 = *(_DWORD *)(a1 + 88) / 4 + 24 * *(_DWORD *)(a1 + 84) / 100;
		if (v177 > 42)
			v177 = 42;
		*(_DWORD *)(a1 + 272) += v177;
		v178 = *(_DWORD *)(a1 + 88) / 3 + 38 * *(_DWORD *)(a1 + 84) / 100;
		if (v178 > 42)
			v178 = 42;
		*(_DWORD *)(a1 + 276) += v178;
		goto LABEL_272;
	case 99:
		sub_448370((_DWORD *)a1, 19);
		*(_DWORD *)(a1 + 208) += 26;
		v179 = *(_DWORD *)(a1 + 88) / 4 + 30 * *(_DWORD *)(a1 + 84) / 100;
		if (v179 > 56)
			v179 = 56;
		*(_DWORD *)(a1 + 260) += v179;
		v180 = *(_DWORD *)(a1 + 88) / 3 + 60 * *(_DWORD *)(a1 + 84) / 100;
		if (v180 > 56)
			v180 = 56;
		*(_DWORD *)(a1 + 264) += v180;
		v181 = *(_DWORD *)(a1 + 88) / 4 + 40 * *(_DWORD *)(a1 + 84) / 100;
		if (v181 > 56)
			v181 = 56;
		*(_DWORD *)(a1 + 268) += v181;
		v182 = *(_DWORD *)(a1 + 88) / 3 + 46 * *(_DWORD *)(a1 + 84) / 100;
		if (v182 > 56)
			v182 = 56;
		*(_DWORD *)(a1 + 272) += v182;
		v183 = *(_DWORD *)(a1 + 88) / 2 + 72 * *(_DWORD *)(a1 + 84) / 100;
		if (v183 > 56)
			v183 = 56;
		*(_DWORD *)(a1 + 276) += v183;
	LABEL_272:
		v184 = *(_DWORD *)(a1 + 88);
		v185 = *(_DWORD *)(a1 + 76);
		*(_DWORD *)(a1 + 220) = 110 * *(_DWORD *)(a1 + 88) / 100 + v1 + *(_DWORD *)(a1 + 76) / 8;
		*(_DWORD *)(a1 + 228) = 36 * v184 / 100 + 90 * *(_DWORD *)(a1 + 84) / 100;
		*(_DWORD *)(a1 + 192) += ((unsigned int)((unsigned __int64)(57724360470i64 * *(_DWORD *)(a1 + 80)) >> 32) >> 31)
			+ 99 * (v185 / 2) / 100
			+ ((signed int)((unsigned __int64)(57724360470i64 * *(_DWORD *)(a1 + 80)) >> 32) >> 5)
			+ 9;
		sub_448800(a1);
		v186 = *(_DWORD *)(a1 + 84);
		*(_DWORD *)(a1 + 180) += *(_DWORD *)(a1 + 88) / 4
			+ *(_DWORD *)(a1 + 80) / 3
			+ v186 / 5
			+ 22 * *(_DWORD *)(a1 + 76) / 100;
		v187 = 28 * v186 / 100 + *(_DWORD *)(a1 + 156) + 26;
		if (v187 > 86)
			v187 = 86;
		*(_DWORD *)(a1 + 208) += v187;
		v86 = 88 * *(_DWORD *)(a1 + 80);
	LABEL_275:
		v138 = v86 / 100;
	LABEL_276:
		*(_DWORD *)(a1 + 184) += v138;
		break;
	default:
		break;
	}
	v188 = *(_DWORD *)(a1 + 36);
	if (v188 & 0x10)
		*(_DWORD *)(a1 + 192) += *(signed __int16 *)(a1 + 66);
	if (v188 & 0x20)
		*(_DWORD *)(a1 + 180) += *(signed __int16 *)(a1 + 70);
	sub_448420(a1, *(_DWORD *)(a1 + 236));
	sub_448420(a1, *(_DWORD *)(a1 + 240));
	sub_448420(a1, *(_DWORD *)(a1 + 244));
	sub_448420(a1, *(_DWORD *)(a1 + 248));
	sub_448420(a1, *(_DWORD *)(a1 + 252));
	sub_448420(a1, *(_DWORD *)(a1 + 256));
	v189 = *(signed __int16 *)(a1 + 438) + *(_DWORD *)(a1 + 220);
	*(_DWORD *)(a1 + 220) = v189;
	if (v189 < 1)
		*(_DWORD *)(a1 + 220) = 1;
	v190 = *(signed __int16 *)(a1 + 436);
	v191 = *(_DWORD *)(a1 + 228);
	*(_DWORD *)(a1 + 228) = v190 + v191;
	if (v190 + v191 < 0)
		*(_DWORD *)(a1 + 228) = 0;
	v192 = 50 * (*(_DWORD *)(a1 + 156) + 1);
	*(_DWORD *)(a1 + 140) = v192;
	if (v192 > 2000)
		*(_DWORD *)(a1 + 140) = 2000;
	v193 = *(_DWORD *)(a1 + 220);
	if (*(_DWORD *)(a1 + 216) > v193)
		*(_DWORD *)(a1 + 216) = v193;
	v194 = *(_DWORD *)(a1 + 228);
	if (*(_DWORD *)(a1 + 224) > v194)
		*(_DWORD *)(a1 + 224) = v194;
	v195 = *(_DWORD *)(a1 + 260);
	if (v195 >= 0)
	{
		if (v195 > 80)
			v195 = 80;
	}
	else
	{
		v195 = 0;
	}
	*(_DWORD *)(a1 + 260) = v195;
	v196 = *(_DWORD *)(a1 + 264);
	if (v196 >= 0)
	{
		if (v196 > 80)
			v196 = 80;
	}
	else
	{
		v196 = 0;
	}
	*(_DWORD *)(a1 + 264) = v196;
	v197 = *(_DWORD *)(a1 + 268);
	if (v197 >= 0)
	{
		if (v197 > 80)
			v197 = 80;
	}
	else
	{
		v197 = 0;
	}
	*(_DWORD *)(a1 + 268) = v197;
	v198 = *(_DWORD *)(a1 + 272);
	if (v198 >= 0)
	{
		if (v198 > 80)
			v198 = 80;
	}
	else
	{
		v198 = 0;
	}
	*(_DWORD *)(a1 + 272) = v198;
	v199 = *(_DWORD *)(a1 + 276);
	if (v199 >= 0)
	{
		if (v199 > 80)
			v199 = 80;
	}
	else
	{
		v199 = 0;
	}
	*(_DWORD *)(a1 + 276) = v199;
	v200 = *(_DWORD *)(a1 + 300);
	if (v200 <= 12)
	{
		if (v200 < 0)
			v200 = 0;
	}
	else
	{
		v200 = 12;
	}
	*(_DWORD *)(a1 + 300) = v200;
	if (*(_DWORD *)(a1 + 192) < 0)
		*(_DWORD *)(a1 + 192) = 0;
	if (*(_DWORD *)(a1 + 208) < 0)
		*(_DWORD *)(a1 + 208) = 0;
	if (*(_DWORD *)(a1 + 180) < 0)
		*(_DWORD *)(a1 + 180) = 0;
	if (*(_DWORD *)(a1 + 184) < 0)
		*(_DWORD *)(a1 + 184) = 0;
	if (!(*(_DWORD *)(a1 + 372) | *(_DWORD *)(a1 + 376) | *(_DWORD *)(a1 + 380) | *(_DWORD *)(a1 + 384) | *(_DWORD *)(a1 + 388) | *(_DWORD *)(a1 + 392)))
	{
		v201 = *(_DWORD *)(a1 + 396);
		BYTE1(v201) |= 0x40u;
		*(_DWORD *)(a1 + 396) = v201;
	}
	result = *(_DWORD *)(a1 + 396);
	if (result & 0x2000)
		*(_DWORD *)(a1 + 232) = 0;
	if (result & 0x4000)
	{
		*(_DWORD *)(a1 + 224) = 0;
		*(_DWORD *)(a1 + 228) = 0;
	}
	return result;
}

int __cdecl sub_448370(_DWORD *a1, int a2)
{
	int result; // eax

	result = 4 * a2;
	a1[29] = (unsigned __int16)word_4786BC[4 * a2];
	a1[30] = (unsigned __int16)word_4786BE[4 * a2];
	a1[31] = (unsigned __int16)word_4786C0[4 * a2];
	a1[32] = (unsigned __int16)word_4786C2[4 * a2];
	return result;
}

int __cdecl sub_448800(int a1)
{
	int result; // eax

	result = *(_DWORD *)(a1 + 156);
	if (result >= 10)
	{
		if (result >= 20)
			result = (result - 20) / 4 + 15;
		else
			result = (result - 10) / 2 + 10;
	}
	if (result < 0)
		result = 0;
	*(_DWORD *)(a1 + 192) += result;
	return result;
}

int __cdecl sub_448420(int a1, int a2)
{
	int result; // eax
	char *v3; // ecx
	int v4; // esi
	int v5; // edx
	int v6; // edx
	int v7; // esi
	int v8; // ecx
	int v9; // edx
	int v10; // edx

	result = a2;
	if (a2)
	{
		result = a1;
		v3 = (char *)dword_4C1B40 + 176 * a2;
		switch (*((_DWORD *)v3 + 4))
		{
		case 0:
			*(_DWORD *)(a1 + 260) += *((_DWORD *)v3 + 5);
			break;
		case 1:
			goto LABEL_12;
		case 2:
			goto LABEL_16;
		case 3:
			goto LABEL_8;
		case 4:
			goto LABEL_19;
		case 7:
			*(_DWORD *)(a1 + 260) += *((_DWORD *)v3 + 5);
			*(_DWORD *)(a1 + 264) += *((_DWORD *)v3 + 5);
			*(_DWORD *)(a1 + 268) += *((_DWORD *)v3 + 5);
			goto LABEL_5;
		case 8:
			*(_DWORD *)(a1 + 260) += *((_DWORD *)v3 + 5);
			*(_DWORD *)(a1 + 264) += *((_DWORD *)v3 + 5);
			goto LABEL_7;
		case 9:
			*(_DWORD *)(a1 + 264) += *((_DWORD *)v3 + 5);
			goto LABEL_8;
		case 0xA:
			*(_DWORD *)(a1 + 260) += *((_DWORD *)v3 + 5);
			goto LABEL_8;
		case 0xB:
		LABEL_7 :
			*(_DWORD *)(a1 + 268) += *((_DWORD *)v3 + 5);
			LABEL_8:
				*(_DWORD *)(a1 + 272) += *((_DWORD *)v3 + 5);
				break;
		case 0xC:
		LABEL_5 :
			*(_DWORD *)(a1 + 272) += *((_DWORD *)v3 + 5);
				goto LABEL_19;
		case 0xD:
			*(_DWORD *)(a1 + 260) += *((_DWORD *)v3 + 5);
		LABEL_12:
			*(_DWORD *)(a1 + 264) += *((_DWORD *)v3 + 5);
			break;
		case 0xE:
			*(_DWORD *)(a1 + 264) += *((_DWORD *)v3 + 5);
			goto LABEL_16;
		case 0xF:
			*(_DWORD *)(a1 + 264) += *((_DWORD *)v3 + 5);
			goto LABEL_19;
		case 0x10:
			*(_DWORD *)(a1 + 260) += *((_DWORD *)v3 + 5);
		LABEL_16:
			*(_DWORD *)(a1 + 268) += *((_DWORD *)v3 + 5);
			break;
		case 0x11:
			*(_DWORD *)(a1 + 260) += *((_DWORD *)v3 + 5);
			goto LABEL_19;
		case 0x12:
			*(_DWORD *)(a1 + 268) += *((_DWORD *)v3 + 5);
		LABEL_19:
			*(_DWORD *)(a1 + 276) += *((_DWORD *)v3 + 5);
			break;
		default:
			break;
		}
		*(_DWORD *)(a1 + 188) += *((_DWORD *)v3 + 6);
		*(_DWORD *)(a1 + 212) += *((_DWORD *)v3 + 7);
		*(_DWORD *)(a1 + 192) += *((_DWORD *)v3 + 8);
		v4 = *((_DWORD *)v3 + 15) + *(_DWORD *)(a1 + 180);
		*(_DWORD *)(a1 + 180) = v4;
		v5 = *((_DWORD *)v3 + 2);
		switch (v5)
		{
		case 3:
		case 4:
			*(_DWORD *)(a1 + 180) = v4 + *((_DWORD *)v3 + 34);
			break;
		case 2:
			*(_DWORD *)(a1 + 188) += *((_DWORD *)v3 + 38);
			*(_DWORD *)(a1 + 192) += *((_DWORD *)v3 + 34);
			v6 = *((_DWORD *)v3 + 35);
			*(_DWORD *)(a1 + 196) = v6;
			if (v6 != -1)
			{
				*(_DWORD *)(a1 + 200) = *((_DWORD *)v3 + 36);
				*(_DWORD *)(a1 + 204) = *((_DWORD *)v3 + 37);
			}
			break;
		case 5:
			*(_DWORD *)(a1 + 184) += *((_DWORD *)v3 + 34);
			break;
		}
		*(_DWORD *)(a1 + 208) += *((_DWORD *)v3 + 9);
		*(_DWORD *)(a1 + 228) += *((_DWORD *)v3 + 10);
		*(_DWORD *)(a1 + 220) += *((_DWORD *)v3 + 11);
		*(_DWORD *)(a1 + 300) += *((_DWORD *)v3 + 13);
		*(_DWORD *)(a1 + 184) += *((_DWORD *)v3 + 14);
		*(_WORD *)(a1 + 406) += *((_WORD *)v3 + 32);
		*(_WORD *)(a1 + 410) += *((_WORD *)v3 + 34);
		*(_WORD *)(a1 + 414) += *((_WORD *)v3 + 36);
		*(_WORD *)(a1 + 418) += *((_WORD *)v3 + 38);
		*(_DWORD *)(a1 + 396) |= *((_DWORD *)v3 + 40);
		v7 = *((_DWORD *)v3 + 41) | *(_DWORD *)(a1 + 400);
		v8 = *(_DWORD *)(a1 + 160);
		*(_DWORD *)(a1 + 400) = v7;
		if (v8 & 0x40)
			*(_DWORD *)(a1 + 396) |= 0x800000u;
		if (v8 & 0x200)
		{
			v9 = *(_DWORD *)(a1 + 396);
			BYTE1(v9) |= 0x80u;
			*(_DWORD *)(a1 + 396) = v9;
		}
		if (v8 & 0x400)
		{
			v10 = *(_DWORD *)(a1 + 396);
			BYTE1(v10) |= 0x10u;
			*(_DWORD *)(a1 + 396) = v10;
		}
		if (v8 & 0x800)
			*(_DWORD *)(a1 + 396) |= 0x4000000u;
		if (v8 & 0x1000)
			*(_DWORD *)(a1 + 396) |= 0x1000000u;
		if (v8 & 0x2000)
			*(_DWORD *)(a1 + 396) |= 0x2000000u;
		if (v8 & 0x4000)
			*(_DWORD *)(a1 + 396) |= 0x40u;
	}
	return result;
}

void __cdecl sub_44D300(int a1)
{
	void *v1; // edi
	int v2; // eax
	_BYTE *v3; // esi
	int i; // edi
	int v5; // ebx
	bool j; // zf
	unsigned __int8 *k; // eax
	unsigned __int8 v8; // cl
	char *v9; // eax
	int v10; // [esp+8h] [ebp-8h]
	int v11; // [esp+Ch] [ebp-4h]

	v1 = (void *)dword_4C1B58;
	if (!dword_4C1B58)
	{
		v1 = (void *)sub_457B70(0x2710u);
		dword_4C1B58 = (int)v1;
	}
	memset(v1, 0, 0x2710u);
	if (dword_4C1B58 && sub_46DEC0(a1))
	{
		v2 = sub_46DBA0(aRange, 1);
		if (v2)
		{
			v3 = (_BYTE *)(dword_4C1B58 + 4 * v2);
			for (i = sub_46DC70(aRange, 1); i; i = sub_46DCE0(aRange, i))
			{
				if (sub_46DE70(aCode_0, 1, i, (int)&v10))
				{
					*(_DWORD *)(dword_4C1B58 + 4 * v10) = *v3;
					v10 = 0;
					sub_46DE70(aSize, 1, i, (int)&v10);
					if (v10)
					{
						*v3++ = v10;
						v5 = 1;
						for (j = v10-- == 0; !j; j = v10-- == 0)
						{
							if (!sub_46DD50(aData_0, v5, i, (int)byte_4C1E98))
								break;
							for (k = (unsigned __int8 *)strtok(byte_4C1E98, asc_47855C); k; k = (unsigned __int8 *)strtok(0, asc_47855C))
							{
								if (*k == 32)
								{
									do
										v8 = (k++)[1];
									while (v8 == 32);
								}
								v11 = 0;
								sub_45B5FA(k, &v11);
								*v3++ = v11;
							}
							++v5;
						}
					}
				}
				else
				{
					v9 = sub_46DD50(aCode_0, 1, i, 0);
					sub_446480(a1, v9);
				}
			}
		}
		sub_46E060();
	}
}

void __cdecl sub_44D4B0(int a1)
{
	int v1; // ebx
	int v2; // eax
	void *v3; // eax
	char *v4; // edi
	int *v5; // eax
	char *v6; // ecx
	_DWORD *v7; // edi
	int i; // esi
	char *v9; // eax
	char *v10; // eax
	char *v11; // eax
	char *v12; // eax
	char v13; // cl
	char *v14; // eax
	char *j; // ebx
	char v16; // al
	char *v17; // eax
	char *v18; // eax
	char *v19; // eax
	char *v20; // eax
	__int64 v21; // [esp+4h] [ebp-Ch]
	int v22; // [esp+Ch] [ebp-4h]

	v1 = a1;
	if (sub_46DEC0(a1))
	{
		v2 = sub_46DBA0(aSpecial, 1);
		LODWORD(v21) = v2;
		if (v2)
		{
			if (dword_4C1B5C)
			{
				sub_457C20(dword_4C1B5C);
				v2 = v21;
				dword_4C1B5C = 0;
			}
			v3 = (void *)sub_457B70(48 * v2 + 896);
			dword_4C1B5C = v3;
			memset(v3, 0, 48 * v21 + 896);
			memset(dword_4C3920, 0, sizeof(dword_4C3920));
			v4 = (char *)dword_4C1B5C;
			v5 = dword_4C3920;
			v6 = (char *)dword_4C1B5C;
			do
			{
				*v5 = (int)v6;
				++v5;
				v6 += 128;
			} while ((signed int)v5 < (signed int)&unk_4C393C);
			v7 = (int*)(v4 + 896);
			for (i = sub_46DC70(aSpecial, 1); i; i = sub_46DCE0(aSpecial, i))
			{
				if (sub_46DE70(aCode_0, 1, i, (int)&v21))
				{
					v22 = 0;
					if (!sub_46DE70(aType, 1, i, (int)&v22))
					{
						v9 = sub_46DD50(aType, 1, i, 0);
						sub_446480(v1, v9);
					}
					v7[1] = v22;
					HIDWORD(v21) = dword_4C3920[v22];
					*(_DWORD *)(HIDWORD(v21) + 4 * v21) = *v7;
					LODWORD(v21) = 0;
					sub_46DE70(aName, 1, i, (int)&v21);
					*v7 = v21;
					LODWORD(v21) = 0;
					if (!sub_46DE70(aRange, 1, i, (int)&v21))
					{
						v10 = sub_46DD50(aRange, 1, i, 0);
						sub_446480(v1, v10);
					}
					v7[2] = v21;
					LODWORD(v21) = 0;
					if (!sub_46DE70(aEffectRange, 1, i, (int)&v21))
					{
						v11 = sub_46DD50(aEffectRange, 1, i, 0);
						sub_446480(v1, v11);
					}
					v7[3] = v21;
					LODWORD(v21) = 0;
					sub_46DE70(aExpend, 1, i, (int)&v21);
					v7[4] = v21;
					LODWORD(v21) = 0;
					sub_46DE70(aHitRatio, 1, i, (int)&v21);
					v7[7] = v21;
					LODWORD(v21) = 0;
					sub_46DE70(aUseRatio, 1, i, (int)&v21);
					v7[8] = v21;
					LODWORD(v21) = 0;
					sub_46DE70(aAttackpowRatio, 1, i, (int)&v21);
					v7[11] = v21;
					HIDWORD(v21) = 0;
					v22 = 0;
					if (sub_46DD50(aDamage, 1, i, (int)byte_4C1E98))
					{
						v12 = strtok(byte_4C1E98, asc_47855C);
						if (v12)
						{
							if (*v12 == 32)
							{
								do
									v13 = (v12++)[1];
								while (v13 == 32);
							}
							sub_46DE00(v12, (int)&v21 + 4);
							v14 = strtok(0, asc_47855C);
							if (v14)
								sub_46DE00(v14, (int)&v22);
							else
								v22 = HIDWORD(v21);
						}
					}
					v7[5] = HIDWORD(v21);
					v7[6] = v22;
					HIDWORD(v21) = 0;
					if (sub_46DD50(aFunction, 1, i, (int)byte_4C1E98))
					{
						for (j = strtok(byte_4C1E98, asc_47855C); j; j = strtok(0, asc_47855C))
						{
							if (*j == 32)
							{
								do
									v16 = (j++)[1];
								while (v16 == 32);
							}
							LODWORD(v21) = 0;
							if (!sub_46DE00(j, (int)&v21))
								sub_446480(a1, j);
							HIDWORD(v21) |= v21;
						}
						v1 = a1;
					}
					else
					{
						v19 = sub_46DD50(aFunction, 1, i, 0);
						sub_446480(v1, v19);
					}
					v7[10] = HIDWORD(v21);
					LODWORD(v21) = 0;
					if (!sub_46DE70(aAttackCode, 1, i, (int)&v21))
					{
						v17 = sub_46DD50(aAttackCode, 1, i, 0);
						sub_446480(v1, v17);
					}
					v7[9] = (_DWORD)v21 << 16;
					LODWORD(v21) = 0;
					if (!sub_46DE70(aDefenseCode, 1, i, (int)&v21))
					{
						v18 = sub_46DD50(aDefenseCode, 1, i, 0);
						sub_446480(v1, v18);
					}
					*((_WORD *)v7 + 18) = v21;
					v7 += 12;
				}
				else
				{
					v20 = sub_46DD50(aCode_0, 1, i, 0);
					sub_446480(v1, v20);
				}
			}
		}
		sub_46E060();
	}
}

void __cdecl sub_44D910(int a1)
{
	int v1; // eax
	void *v2; // eax
	char *v3; // ebx
	char *v4; // ecx
	int *v5; // eax
	_DWORD *v6; // ebx
	int i; // esi
	char *v8; // eax
	int v9; // edi
	char *v10; // eax
	char *v11; // eax
	char *v12; // eax
	char *v13; // eax
	char *v14; // eax
	char *v15; // edi
	char v16; // al
	char *v17; // eax
	char v18; // cl
	char *j; // edi
	char v20; // al
	char *v21; // eax
	char *v22; // eax
	char v23; // cl
	char *v24; // eax
	char *v25; // eax
	__int64 v26; // [esp+0h] [ebp-Ch]
	int v27; // [esp+8h] [ebp-4h]

	if (sub_46DEC0(a1))
	{
		v1 = sub_46DBA0(aMagic, 1);
		LODWORD(v26) = v1;
		if (v1)
		{
			if (dword_4C1B60)
			{
				sub_457C20(dword_4C1B60);
				v1 = v26;
				dword_4C1B60 = 0;
			}
			v2 = (void *)sub_457B70(60 * v1 + 768);
			dword_4C1B60 = v2;
			memset(v2, 0, 4 * ((unsigned int)(60 * v26 + 768) >> 2));
			v3 = (char *)dword_4C1B60;
			memset(dword_4C2CA0, 0, sizeof(dword_4C2CA0));
			v4 = (char *)dword_4C1B60;
			v5 = dword_4C2CA0;
			do
			{
				*v5 = (int)v4;
				++v5;
				v4 += 128;
			} while ((signed int)v5 < (signed int)&dword_4C2CB8);
			v6 = (int*)(v3 + 768);
			for (i = sub_46DC70(aMagic, 1); i; i = sub_46DCE0(aMagic, i))
			{
				if (sub_46DE70(aCode_0, 1, i, (int)&v26))
				{
					v27 = 0;
					if (sub_46DE70(aType, 1, i, (int)&v27))
					{
						v9 = a1;
					}
					else
					{
						v8 = sub_46DD50(aType, 1, i, 0);
						v9 = a1;
						sub_446480(a1, v8);
					}
					v6[1] = v27;
					HIDWORD(v26) = dword_4C2CA0[v27];
					*(_DWORD *)(HIDWORD(v26) + 4 * v26) = *v6;
					LODWORD(v26) = 0;
					sub_46DE70(aName, 1, i, (int)&v26);
					*v6 = v26;
					LODWORD(v26) = 0;
					if (!sub_46DE70(aRange, 1, i, (int)&v26))
					{
						v10 = sub_46DD50(aRange, 1, i, 0);
						sub_446480(v9, v10);
					}
					v6[2] = v26;
					LODWORD(v26) = 0;
					if (!sub_46DE70(aEffectRange, 1, i, (int)&v26))
					{
						v11 = sub_46DD50(aEffectRange, 1, i, 0);
						sub_446480(v9, v11);
					}
					v6[3] = v26;
					LODWORD(v26) = 0;
					sub_46DE70(aExpend, 1, i, (int)&v26);
					v6[4] = v26;
					LODWORD(v26) = 0;
					sub_46DE70(aHitRatio, 1, i, (int)&v26);
					v6[7] = v26;
					LODWORD(v26) = 0;
					sub_46DE70(aUseRatio, 1, i, (int)&v26);
					v6[10] = v26;
					LODWORD(v26) = 0;
					sub_46DE70(aStatusHitRatio, 1, i, (int)&v26);
					v6[8] = v26;
					LODWORD(v26) = 0;
					if (!sub_46DE70(aEffectProc, 1, i, (int)&v26))
					{
						v12 = sub_46DD50(aEffectProc, 1, i, 0);
						sub_446480(v9, v12);
					}
					v6[11] = v26;
					LODWORD(v26) = 0;
					if (!sub_46DE70(aEffectCode, 1, i, (int)&v26))
					{
						v13 = sub_46DD50(aEffectCode, 1, i, 0);
						sub_446480(v9, v13);
					}
					v6[12] = v26;
					HIDWORD(v26) = 0;
					if (sub_46DD50(aEffectCaster, 1, i, (int)byte_4C1E98))
					{
						v14 = strtok(byte_4C1E98, asc_47855C);
						v15 = v14;
						if (v14)
						{
							if (*v14 == 32)
							{
								do
									v16 = (v15++)[1];
								while (v16 == 32);
							}
							LODWORD(v26) = 0;
							if (!sub_46DE00(v15, (int)&v26))
								sub_446480(a1, v15);
							v6[13] = v26;
							v17 = strtok(0, asc_47855C);
							if (v17)
							{
								if (*v17 == 32)
								{
									do
										v18 = (v17++)[1];
									while (v18 == 32);
								}
								LODWORD(v26) = 0;
								sub_46DE00(v17, (int)&v26);
								v6[14] = v26;
							}
						}
						v9 = a1;
					}
					HIDWORD(v26) = 0;
					if (sub_46DD50(aFunction, 1, i, (int)byte_4C1E98))
					{
						for (j = strtok(byte_4C1E98, asc_47855C); j; j = strtok(0, asc_47855C))
						{
							if (*j == 32)
							{
								do
									v20 = (j++)[1];
								while (v20 == 32);
							}
							LODWORD(v26) = 0;
							if (!sub_46DE00(j, (int)&v26))
								sub_446480(a1, j);
							HIDWORD(v26) |= v26;
						}
					}
					else
					{
						v21 = sub_46DD50(aFunction, 1, i, 0);
						sub_446480(v9, v21);
					}
					v6[9] = HIDWORD(v26);
					HIDWORD(v26) = 0;
					v27 = 0;
					if (sub_46DD50(aDamage, 1, i, (int)byte_4C1E98))
					{
						v22 = strtok(byte_4C1E98, asc_47855C);
						if (v22)
						{
							if (*v22 == 32)
							{
								do
									v23 = (v22++)[1];
								while (v23 == 32);
							}
							sub_46DE00(v22, (int)&v26 + 4);
							v24 = strtok(0, asc_47855C);
							if (v24)
								sub_46DE00(v24, (int)&v27);
							else
								v27 = HIDWORD(v26);
						}
					}
					v6[5] = HIDWORD(v26);
					v6[6] = v27;
					v6 += 15;
				}
				else
				{
					v25 = sub_46DD50(aCode_0, 1, i, 0);
					sub_446480(a1, v25);
				}
			}
		}
		sub_46E060();
	}
}

void __cdecl sub_44DE20(int a1)
{
	int v1; // eax
	int v2; // eax
	void *v3; // edi
	int *v4; // edi
	int v5; // ebp
	signed int v6; // ebx
	char *j; // esi
	char v8; // al
	int *v9; // edi
	char *v10; // esi
	char v11; // al
	char *v12; // eax
	int v13; // [esp+0h] [ebp-1Ch]
	int v14; // [esp+4h] [ebp-18h]
	int v15; // [esp+8h] [ebp-14h]
	int v16; // [esp+Ch] [ebp-10h]
	int i; // [esp+10h] [ebp-Ch]
	int v18; // [esp+14h] [ebp-8h]
	int v19; // [esp+18h] [ebp-4h]

	if (sub_46DEC0(a1))
	{
		v1 = sub_46DBA0(aTrack, 1);
		v13 = v1;
		if (v1)
		{
			v2 = v1 + 1;
			v13 = v2;
			if (dword_4C1B64)
			{
				sub_457C20(dword_4C1B64);
				v2 = v13;
				dword_4C1B64 = 0;
			}
			v3 = (void *)sub_457B70(12 * v2 + 20000);
			dword_4C1B64 = v3;
			memset(v3, 0, 12 * v13 + 20000);
			v4 = (int *)((char *)dword_4C1B64 + 12 * v13);
			v5 = sub_46DC70(aTrack, 1);
			for (i = v5; v5; i = v5)
			{
				if (sub_46DE70(aCode_0, 1, v5, (int)&v13))
				{
					if (sub_46DD50(aData_0, 1, v5, (int)byte_4C1E98))
					{
						v15 = 0;
						v6 = -1;
						*((_DWORD *)dword_4C1B64 + 3 * v13) = *v4;
						for (j = strtok(byte_4C1E98, asc_47855C); j; v19 = v14)
						{
							if (*j == 32)
							{
								do
									v8 = (j++)[1];
								while (v8 == 32);
							}
							if (!sub_46DE00(j, (int)&v16))
								sub_446480(a1, j);
							*v4 = v16;
							v9 = v4 + 1;
							v10 = strtok(0, asc_47855C);
							if (!v10)
								sub_446480(a1, 0);
							if (*v10 == 32)
							{
								do
									v11 = (v10++)[1];
								while (v11 == 32);
							}
							if (!sub_46DE00(v10, (int)&v14))
								sub_446480(a1, v10);
							*v9 = v14;
							v4 = v9 + 1;
							j = strtok(0, asc_47855C);
							++v15;
							if (v6 >= 0)
							{
								v6 += abs(v18 - v16) + abs(v19 - v14);
								v5 = i;
							}
							else
							{
								v6 = 0;
							}
							v18 = v16;
						}
						*((_DWORD *)dword_4C1B64 + 3 * v13 + 1) = v15;
						*((_DWORD *)dword_4C1B64 + 3 * v13 + 2) = v6;
					}
				}
				else
				{
					v12 = sub_46DD50(aCode_0, 1, v5, 0);
					sub_446480(a1, v12);
				}
				v5 = sub_46DCE0(aTrack, v5);
			}
		}
		sub_46E060();
	}
}

void __cdecl sub_44E110(int a1)
{
	int v1; // esi
	int v2; // esi
	int v3; // edi
	int v4; // ebx
	size_t v5; // edi
	void *v6; // eax
	int *v7; // edi
	int i; // ebx
	int *v9; // edi
	int *v10; // edi
	char *v11; // esi
	char v12; // al
	int v13; // eax
	char *v14; // eax
	int j; // ebx
	char *v16; // esi
	char v17; // al
	int v18; // eax
	char *v19; // eax
	int v20; // [esp+8h] [ebp-8h]
	int v21; // [esp+Ch] [ebp-4h]

	if (dword_4C1D74)
	{
		sub_457C20(dword_4C1D74);
		dword_4C1D74 = 0;
	}
	dword_4C1D74 = (void *)sub_457B70(0x6720u);
	memset(dword_4C1D74, 0, 0x6720u);
	if (sub_46DEC0(a1))
	{
		v1 = sub_46DBA0(aTownEvent, 1);
		dword_4C1D64 = v1;
		dword_4C1D60 = sub_46DBA0(aItem, 1);
		v2 = v1 + 1;
		v3 = dword_4C1D60 + 1;
		if (dword_4C1D5C)
			sub_457C20(dword_4C1D5C);
		v4 = v3 + v2;
		v5 = 4 * (v3 + v2) + 50000;
		v6 = (void *)sub_457B70(v5);
		dword_4C1D5C = v6;
		if (v6)
		{
			memset(v6, 0, v5);
			v7 = (int *)((char *)dword_4C1D5C + 4 * v4);
			dword_4C1D58 = (int)dword_4C1D5C + 4 * v2;
			for (i = sub_46DC70(aTownEvent, 1); i; i = sub_46DCE0(aTownEvent, i))
			{
				if (sub_46DE70(aCode_0, 1, i, (int)&v21))
				{
					*((_DWORD *)dword_4C1D5C + v21) = *v7;
					v20 = 0;
					sub_46DE70(off_4792C8, 1, i, (int)&v20);
					*v7 = v20;
					v9 = v7 + 1;
					v20 = 0;
					sub_46DE70(aItemCode, 1, i, (int)&v20);
					*v9 = v20;
					v10 = v9 + 1;
					v21 = 1;
				LABEL_10:
					while (sub_46DD50(aEvent, v21, i, (int)byte_4C1E98))
					{
						++v21;
						v11 = strtok(byte_4C1E98, asc_47855C);
						if (v11)
						{
							while (1)
							{
								if (*v11 == 32)
								{
									do
										v12 = (v11++)[1];
									while (v12 == 32);
								}
								v20 = 0;
								if (!sub_46DE00(v11, (int)&v20))
								{
									v13 = sub_459990(v11);
									v20 = v13;
									if (v13 != -1)
										goto LABEL_19;
									v13 = sub_45FC01(v11);
									v20 = v13;
									if (v13 != -1)
										goto LABEL_19;
									sub_446480(a1, v11);
								}
								v13 = v20;
							LABEL_19:
								*v10 = v13;
								++v10;
								v11 = strtok(0, asc_47855C);
								if (!v11)
									goto LABEL_10;
							}
						}
					}
					*v10 = 0;
					v7 = v10 + 1;
				}
				else
				{
					v14 = sub_46DD50(aCode_0, 1, i, 0);
					sub_446480(a1, v14);
				}
			}
			for (j = sub_46DC70(aItem, 1); j; j = sub_46DCE0(aItem, j))
			{
				if (sub_46DE70(aCode_0, 1, j, (int)&v21))
				{
					*(_DWORD *)(dword_4C1D58 + 4 * v21) = *v7;
					v21 = 1;
				LABEL_27:
					while (sub_46DD50(aItemId, v21, j, (int)byte_4C1E98))
					{
						++v21;
						v16 = strtok(byte_4C1E98, asc_47855C);
						if (v16)
						{
							while (1)
							{
								if (*v16 == 32)
								{
									do
										v17 = (v16++)[1];
									while (v17 == 32);
								}
								v20 = 0;
								if (!sub_46DE00(v16, (int)&v20))
								{
									v18 = sub_459990(v16);
									v20 = v18;
									if (v18 != -1)
										goto LABEL_36;
									v18 = sub_45FC01(v16);
									v20 = v18;
									if (v18 != -1)
										goto LABEL_36;
									sub_446480(a1, v16);
								}
								v18 = v20;
							LABEL_36:
								*v7 = v18;
								++v7;
								v16 = strtok(0, asc_47855C);
								if (!v16)
									goto LABEL_27;
							}
						}
					}
					*v7 = 0;
					++v7;
				}
				else
				{
					v19 = sub_46DD50(aCode_0, 1, j, 0);
					sub_446480(a1, v19);
				}
			}
		}
		sub_46E060();
	}
}

void __cdecl sub_44CCE0(int a1)
{
	void *v1; // edi
	int v2; // ebp
	int v3; // edi
	int v4; // eax
	char *i; // esi
	char v6; // al
	int v7; // eax
	int v8; // [esp+Ch] [ebp-8h]
	int v9; // [esp+10h] [ebp-4h]
	signed int v10; // [esp+18h] [ebp+4h]

	v1 = (void *)dword_4C1B54;
	if (!dword_4C1B54)
	{
		v1 = (void *)sub_457B70(0xEA60u);
		dword_4C1B54 = (int)v1;
	}
	memset(v1, 0, 0xEA60u);
	if (dword_4C1B54)
	{
		v2 = a1;
		if (sub_46DEC0(a1))
		{
			v10 = 1;
			v3 = 0;
			v4 = sub_46DC70(aStory, 1);
			v9 = v4;
			if (v4)
			{
				while (sub_46DD50(aAction, v10, v4, (int)byte_4C1E98))
				{
					for (i = strtok(byte_4C1E98, asc_47855C); i; i = strtok(0, asc_47855C))
					{
						if (*i == 32)
						{
							do
								v6 = (i++)[1];
							while (v6 == 32);
						}
						v8 = 0;
						if (!sub_46DE00(i, (int)&v8))
						{
							v7 = sub_459990(i);
							v8 = v7;
							if (v7 != -1)
								goto LABEL_15;
							v7 = sub_45FC01(i);
							v8 = v7;
							if (v7 != -1)
								goto LABEL_15;
							v8 = 0;
							sub_446480(v2, i);
						}
						v7 = v8;
					LABEL_15:
						*(_DWORD *)(dword_4C1B54 + v3) = v7;
						v3 += 4;
					}
					++v10;
					v4 = v9;
				}
			}
			*(_DWORD *)(dword_4C1B54 + v3) = 0;
			sub_46E060();
		}
	}
}

int __cdecl sub_4477B0(int a1)
{
	return *((_DWORD *)dword_4C1B3C + a1);
}

BOOL __cdecl sub_457840(LPCSTR lpString)
{
	return SetWindowTextA(hWnd, lpString);
}

void __cdecl sub_460173(char *a1, int a2, void *a3, UINT a4)
{
	unsigned int v4; // eax

	v4 = sub_45FC01(a1);
	if (v4 == -1)
	{
		sub_46E100(1, a1);
		sub_4601A2((unsigned int)a1, a2, a3, a4);
	}
	else
	{
		sub_460058(v4, a2);
	}
}

void __cdecl sub_460058(unsigned int a1, int a2)
{
	unsigned int v2; // eax
	HFILE v3; // eax
	char *v4; // eax
	unsigned int v5; // eax
	bool v6; // cf
	unsigned int v7; // eax
	_DWORD *v8; // eax
	int v9; // ST08_4
	_DWORD *v10; // eax
	UINT uBytes; // [esp+Ch] [ebp-Ch]
	HFILE hFile; // [esp+10h] [ebp-8h]
	_DWORD *lpBuffer; // [esp+14h] [ebp-4h]

	v2 = a1;
	if (a1 >= dword_4BBB38)
		v2 = sub_46E100(5, 0);
	if (!dword_4ABF28[v2])
	{
		sub_45FD4B(v2);
		if (v3 != -1)
			goto LABEL_7;
		while (1)
		{
			v4 = sub_45FCA5(a1);
			sub_46E100(1, v4);
			do
			{
				v3 = sub_46E100(6, 0);
			LABEL_7:
				hFile = v3;
				uBytes = sub_46CB70(v3);
				v5 = sub_460535();
				v6 = v5 < uBytes;
				v7 = v5 - uBytes;
			} while (v6 || v7 < 0x7D00);
			v8 = (_DWORD *)sub_457B70(uBytes);
			if (!v8)
			{
				sub_46C970(hFile);
				v8 = (_DWORD *)sub_46E100(0, 0);
			}
			lpBuffer = v8;
			v9 = sub_46CAB0(hFile, v8, uBytes);
			sub_46C970(hFile);
			if (v9 == uBytes)
				break;
			sub_457C20(lpBuffer);
		}
		v10 = sub_45FA1E(lpBuffer, &dword_4A4224);
		dword_4ABF28[a1] = (int)v10;
		if (!a2)
		{
			dword_4A4228[a1] = (int)v10;
			dword_4A4220 = dword_4A4224;
		}
		sub_457C20(lpBuffer);
	}
}

int sub_42C7E0()
{
	int *v0; // eax
	HFILE v1; // eax
	HFILE v2; // esi
	int result; // eax
	int v4; // eax

	v0 = sub_42CD10(aDataBigmapDat);
	sub_46C830((unsigned int)v0, 0);
	v2 = v1;
	if (v1 == -1)
		sub_45B29E(aImportantFileO);
	sub_46CAB0(v2, &dword_4C4A20, 0xFA0u);
	sub_46CAB0(v2, &unk_4C43C0, 0x640u);
	sub_46C970(v2);
	sub_44CBB0();
	dword_4C1BCC = 1000;
	dword_4C1BC0 = 0;
	dword_4C1BC4 = sub_457830();
	memset(&dword_4C4360, 0, 0x54u);
	sub_42C700(0, 800);
	sub_426B70(1, 2);
	sub_426D60(11, 0x8000000);
	sub_426D80(10, 0x8000000);
	sub_426D60(12, 0x8000000);
	sub_426D80(11, 0x8000000);
	sub_426D60(13, 0x8000000);
	sub_426D80(12, 0x8000000);
	sub_426D60(14, 0x8000000);
	sub_426D80(13, 0x8000000);
	sub_426D60(15, 0x8000000);
	sub_426D80(14, 0x8000000);
	sub_426D60(16, 0x8000000);
	sub_426D60(22, 0x8000000);
	sub_426D80(20, 0x8000000);
	sub_426D60(25, 0x8000000);
	sub_426D80(23, 0x8000000);
	sub_426D60(26, 0x8000000);
	sub_426D80(24, 0x8000000);
	sub_426D60(27, 0x8000000);
	sub_426D80(25, 0x8000000);
	sub_426D60(28, 0x8000000);
	sub_426D80(26, 0x8000000);
	sub_426D60(31, 0x8000000);
	sub_426D80(29, 0x8000000);
	sub_426D60(32, 0x8000000);
	sub_426D80(30, 0x8000000);
	sub_426D60(33, 0x8000000);
	sub_426D80(32, 0x8000000);
	sub_426D60(34, 0x8000000);
	sub_426D80(33, 0x8000000);
	sub_426D80(31, 0x8000000);
	sub_426D80(34, 0x8000000);
	sub_426D60(38, 0x8000000);
	sub_426D80(37, 0x8000000);
	sub_426D60(43, 0x8000000);
	sub_426D80(43, 0x8000000);
	sub_454580();
	memset(&unk_4C6D80, 0, 0xC8u);
	sub_44F670();
	sub_454AE0();
	result = dword_4C3044;
	if (!dword_4C3044 && !dword_4C3040)
	{
		v4 = sub_457830();
		dword_4C3044 = v4;
		result = ~v4;
		dword_4C3040 = result;
	}
	dword_4C1BD0 = 0;
	dword_4C1BD4 = 0;
	dword_4C1D70 = 0;
	dword_4C1ACC = 0;
	dword_4C1BD8 = 0;
	dword_4C1BDC = 0;
	dword_4C1BE0 = 0;
	unk_4C1BE4 = 0;
	return result;
}

int sub_44CBB0()
{
	int result; // eax

	result = 0;
	memset(dword_4C1BC8, 0, 0x18EDCu);
	return result;
}

DWORD sub_457830()
{
	return GetTickCount() - dword_4C2310;
}

signed int __cdecl sub_42C700(signed int a1, int a2)
{
	signed int result; // eax

	result = a1;
	if (a1 < 20)
		dword_4C4360[a1] = a2;
	return result;
}

void __cdecl sub_426B70(signed int a1, int a2)
{
	if (a1 < 100 && !(sub_426E00(a1) & 0x8000000) && dword_4C4A20[10 * a1] != 2)
		dword_4C4A20[10 * a1] = a2;
}

int __cdecl sub_426E00(signed int a1)
{
	int result; // eax

	result = 0;
	if (a1 < 100)
		result = dword_4C4A24[10 * a1];
	return result;
}

int __cdecl sub_426D60(signed int a1, int a2)
{
	int result; // eax

	result = a1;
	if (a1 < 100)
	{
		result = 5 * a1;
		dword_4C4A24[10 * a1] |= a2;
	}
	return result;
}

int *__cdecl sub_426D80(signed int a1, int a2)
{
	int *result; // eax

	result = (int *)a1;
	if (a1 < 100)
	{
		result = &dword_4C43C4[4 * a1];
		*result = a2 | dword_4C43C4[4 * a1];
	}
	return result;
}

signed int sub_454580()
{
	signed int result; // eax

	result = 655370;
	memset32(&unk_4C27E0, 655370, 0x32u);
	return result;
}

void sub_44F670()
{
	void *v0; // eax

	if (dword_4C1D10)
	{
		sub_457C20(dword_4C1D10);
		dword_4C1D10 = 0;
	}
	if (dword_4C1D1C)
	{
		sub_457C20(dword_4C1D1C);
		dword_4C1D1C = 0;
	}
	dword_4C1D14 = 5;
	dword_4C1D18 = 0;
	dword_4C1D20 = 5;
	dword_4C1D24 = 0;
	dword_4C1D10 = (void *)sub_457B70(0x28u);
	v0 = (void *)sub_457B70(0x28u);
	dword_4C1D1C = v0;
	if (!dword_4C1D10 || !v0)
		sub_45B29E(aItemStorageMem);
	memset(dword_4C1D10, 0, 0x28u);
	memset(dword_4C1D1C, 0, 0x28u);
	sub_44F4E0();
}

void sub_44F4E0()
{
	if (dword_4C1D28)
	{
		sub_457C20(dword_4C1D28);
		dword_4C1D28 = 0;
	}
	dword_4C1D30 = 0;
	dword_4C1D2C = 0;
}

int sub_454AE0()
{
	int result; // eax

	if (dword_4C1D74)
	{
		memset(dword_4C1D74, 0, 0x6720u);
		result = sub_454A20();
	}
	return result;
}

int sub_454A20()
{
	sub_4547A0(1, 1);
	sub_4547A0(1, 2);
	sub_4547A0(1, 3);
	sub_4547A0(4, 4);
	sub_4547A0(4, 5);
	sub_4547A0(4, 6);
	sub_4547A0(4, 7);
	sub_454870(4, 7, 8);
	sub_454870(4, 7, 12);
	sub_454870(4, 7, 13);
	sub_454870(4, 7, 14);
	sub_4547A0(6, 16);
	sub_4547A0(6, 17);
	sub_4547A0(6, 18);
	sub_4547A0(6, 20);
	sub_454870(6, 20, 21);
	sub_454870(6, 20, 22);
	return sub_454870(6, 20, 23);
}

int __cdecl sub_4547A0(int a1, int a2)
{
	int result; // eax
	_DWORD *v3; // edx

	result = sub_454690(a1, a2);
	if (result == -1)
	{
		result = 0;
		v3 = (int *)dword_4C1D74 + 264 * a1;
		while (*v3)
		{
			++result;
			v3 += 8;
			if (result >= 8)
				return result;
		}
		result = 264 * a1 + 32 * result;
		*(_DWORD *)((char *)dword_4C1D74 + result) = a2;
	}
	return result;
}

signed int __cdecl sub_454690(int a1, int a2)
{
	signed int result; // eax
	_DWORD *v3; // ecx

	result = 0;
	v3 = (int *)dword_4C1D74 + 264 * a1;
	while (*v3 != a2)
	{
		++result;
		v3 += 8;
		if (result >= 8)
			return -1;
	}
	return result;
}

int __cdecl sub_454870(int a1, int a2, int a3)
{
	if (sub_454690(a1, a2) == -1)
		sub_4547A0(a1, a2);
	return sub_4547F0(a1, a2, a3);
}

signed int __cdecl sub_4547F0(int a1, int a2, int a3)
{
	signed int result; // eax
	signed int v4; // edx
	_DWORD *v5; // ecx
	signed int v6; // ecx
	_DWORD *v7; // edx

	result = sub_454690(a1, a2);
	if (result != -1)
	{
		v4 = 0;
		v5 = (int *)dword_4C1D74 + 264 * a1 + 32 * result;
		while (!*v5 || *v5 != a3)
		{
			++v4;
			++v5;
			if (v4 >= 8)
			{
				v6 = 0;
				v7 = (int *)dword_4C1D74 + 264 * a1 + 32 * result;
				while (*v7)
				{
					++v6;
					++v7;
					if (v6 >= 8)
						return result;
				}
				result = v6 + 8 * result;
				*((_DWORD *)dword_4C1D74 + result + 66 * a1) = a3;
				return result;
			}
		}
	}
	return result;
}

void __cdecl sub_42CC10(int a1, int a2)
{
	if (!(dword_4C1B00 & 0x38000000) && !sub_460989())
	{
		dword_4C1B00 |= 0x90000000;
		dword_4C1BA8 = a1;
		dword_4C1BAC = a2;
		sub_42DC90(2);
	}
}

int sub_460989()
{
	return dword_4BBB5A;
}

void *__cdecl sub_42DC90(int a1)
{
	return sub_46098F((void *)a1);
}

void *__cdecl sub_46098F(void *a1)
{
	void *result; // eax

	if (!sub_460989())
		dword_4BBB56 = 1;
	dword_4BBB5A = 1;
	result = a1;
	off_4BBB5E = a1;
	HIWORD(off_4BBB5E) = (_WORD)a1;
	return result;
}

int sub_458520()
{
	return dword_4C22F8;
}

void __cdecl sub_42DA60(int a1)
{
	int v1; // esi

	dword_4C1BB8 = a1;
	if (!dword_4C1AE4 && a1 == 51)
		sub_42DEF0((unsigned int)aMovieStartAni, (int)aMovieStartSnd);
	sub_42C640();
	sub_407260();
	sub_45FB5C();
	sub_42CE10(dword_4C1BAC);
	sub_458410();
	memset((void *)dword_4C1B44, 0, 0x28A4u);
	memset((void *)dword_4C1B48, 0, 0x190u);
	memset((void *)dword_4C1B4C, 0, 0x190u);
	sub_45E224();
	if (!dword_4C1AE4)
		sub_46BE17(0, (void(__cdecl *)(int, unsigned int *))sub_42BD50);
	v1 = dword_4C1AE4;
	dword_4C1AE4 = 0;
	if (v1)
	{
		if (v1 >= 0)
		{
			if (!sub_42EBE0(1))
			{
				sub_42CB90();
				goto LABEL_29;
			}
			if (a1 == 17
				&& (dword_4C2968 != 992 && dword_4C2968 != 1024 && dword_4C2968 != 1056 && dword_4C2968 != 1088
				|| dword_4C296C != 448 && dword_4C296C != 416))
			{
				dword_4C2968 = 1024;
				dword_4C296C = 416;
			}
			sub_42C340();
		}
		else
		{
			sub_46BE17(0, (void(__cdecl *)(int, unsigned int *))sub_42BD50);
			if (!sub_42EC10(v1 & 0x7FFFFFFF, 1))
			{
				sub_42CB90();
				goto LABEL_29;
			}
		}
	}
	sub_42DCA0(2);
	if (!a1)
	{
		sub_42D7C0(200);
		sub_42C340();
	}
	sub_458410();
	sub_46141C();
	sub_45F4B9(0x3Cu);
	sub_458410();
	sub_45B4FF();
	while (!sub_458520())
	{
		dword_4C1B24();
		if (dword_4C1B00 & 0x38000000 && !sub_460989())
			break;
		sub_458410();
		sub_45B4FF();
	}
	if (dword_4C1B28)
		dword_4C1B28();
LABEL_29:
	sub_42C380();
	if (sub_458520())
		dword_4C1B00 |= 0x20000000u;
	sub_46075B();
	sub_46B868();
}

int sub_42C640()
{
	dword_4C1B00 = 0;
	dword_4C1CBC = 0;
	dword_4C091C = 0;
	dword_4C0920 = 0;
	dword_4C1CC0 = 0;
	dword_4C1CC4 = 0;
	dword_4C1CC8 = 0;
	dword_4C1B2C = 0;
	dword_4C1CE8 = 0;
	dword_4C1CEC = 0;
	dword_4C1A74 = 0;
	dword_4C1D40 = 0;
	sub_415D20();
	sub_42C3D0();
	sub_4075E0();
	sub_459B00();
	sub_44E520();
	sub_44F4E0();
	dword_4C1AC4 = 0;
	dword_4C1BBC = 1;
	dword_4C1B00 |= 0x2000000u;
	dword_4C1D48 = 0;
	dword_4C1D4C = 0;
	dword_4C1D44 = 0;
	dword_4C1AD0 = 0;
	dword_4C1AD4 = 0;
	dword_4C1D3C = 0;
	return sub_44CBD0();
}

int sub_415D20()
{
	int result; // eax

	sub_46075B();
	result = 0;
	dword_4C1AA4 = 0;
	memset(&unk_4C6360, 0, 0x28u);
	return result;
}

int sub_46075B()
{
	int result; // eax

	result = dword_4A4218;
	if (dword_4A4218)
	{
		result = sub_46071A(dword_4A4218, 8000 - dword_4A4218);
		dword_4A4218 = 0;
	}
	return result;
}

int __cdecl sub_46071A(int a1, int a2)
{
	int result; // eax
	int v3; // ecx
	void *v4; // edx
	int v5; // ST08_4
	int v6; // ST04_4
	unsigned __int8 v7; // of

	result = a1;
	v3 = a2;
	do
	{
		v4 = (void *)dword_4ABF28[result];
		dword_4ABF28[result] = 0;
		dword_4A4228[result] = 0;
		dword_4B3C28[result] = 0;
		if (v4)
		{
			v5 = result;
			v6 = v3;
			sub_457C20(v4);
			v3 = v6;
			result = v5;
		}
		++result;
		v7 = __OFSUB__(v3--, 1);
	} while (!((unsigned __int8)((v3 < 0) ^ v7) | (v3 == 0)));
	return result;
}

void *sub_42C3D0()
{
	void *result; // eax

	result = (void *)dword_4C1B38;
	if (dword_4C1B38)
	{
		dword_4C1B38 = 0;
		dword_4A4224 = dword_4BB928;
		result = memcpy(dword_4ABF28, dword_4B3C28, 0x7D00u);
	}
	return result;
}

int sub_4075E0()
{
	int v0; // ebx
	signed int v1; // edi
	int result; // eax
	_DWORD *v3; // esi
	int v4; // edx

	v0 = 0;
	v1 = 508;
	do
	{
		result = sub_42CAA0(v0);
		if (result)
		{
			v3 = (int *)dword_4C1BC8 + v1;
			sub_4483C0((int *)dword_4C1BC8 + v1);
			v4 = v3[57];
			v3[54] = v3[55];
			v3[56] = v4;
			v3[42] = 0;
			result = dword_4C1AF0;
			if (!dword_4C1AF0)
				v3[58] = 0;
		}
		v1 += 508;
		++v0;
	} while (v1 < 10668);
	dword_4C1AF0 = 0;
	return result;
}

int __cdecl sub_42CAA0(int a1)
{
	int result; // eax

	result = dword_4C4360[a1];
	if (result < 0)
		result = 0;
	return result;
}

int __cdecl sub_4483C0(_DWORD *a1)
{
	a1[9] = 0;
	a1[12] = 0;
	a1[13] = 0;
	a1[15] = 0;
	a1[14] = 0;
	a1[16] = 0;
	a1[17] = 0;
	a1[18] = 0;
	a1[44] = 0;
	return sub_448840((int)a1);
}

void *sub_459B00()
{
	void *result; // eax
	int v1; // edi
	int v2; // esi
	int v3; // eax

	result = dword_4C23E0;
	if (dword_4C23E0)
	{
		result = (void *)dword_4C23D4;
		v1 = 0;
		if (dword_4C23D4 > 0)
		{
			v2 = 0;
			do
			{
				v3 = *(_DWORD *)((char *)dword_4C23E0 + v2);
				if (v3)
				{
					(*(void(__stdcall **)(_DWORD))(*(_DWORD *)v3 + 72))(*(_DWORD *)((char *)dword_4C23E0 + v2));
					(*(void(__stdcall **)(_DWORD))(**(_DWORD **)((char *)dword_4C23E0 + v2) + 8))(*(_DWORD *)((char *)dword_4C23E0 + v2));
					*(_DWORD *)((char *)dword_4C23E0 + v2) = 0;
				}
				result = (void *)dword_4C23D4;
				++v1;
				v2 += 36;
			} while (v1 < dword_4C23D4);
		}
	}
	return result;
}

signed int sub_44E520()
{
	signed int result; // eax

	if (!dword_4C1D04)
		dword_4C1D04 = sub_457B70(0x708u);
	if (!dword_4C1D08)
		dword_4C1D08 = sub_457B70(0x708u);
	if (!dword_4C1D0C)
		dword_4C1D0C = sub_457B70(0xE10u);
	memset((void *)dword_4C1D04, 0xFFu, 0x708u);
	memset((void *)dword_4C1D08, 0xFFu, 0x708u);
	result = -1;
	memset((void *)dword_4C1D0C, 0xFFu, 0xE10u);
	return result;
}

int sub_44CBD0()
{
	int result; // eax

	result = 0;
	memset((char *)dword_4C1BC8 + 10160, 0, 0x1672Cu);
	return result;
}

int __cdecl sub_42DEF0(wint_t a1, int a2)
{
	DWORD v2; // esi
	void *v3; // esi
	signed int v4; // edi

	sub_42C380();
	v2 = sub_457830();
	do
		sub_458410();
	while ((signed int)(sub_457830() - v2) < 1000);
	sub_459B00();
	sub_42EE20(1);
	v3 = (void *)sub_457B70(0x12C00u);
	if (v3)
	{
		sub_42DCE0(0);
		v4 = sub_45CAD0(dword_4C1E04, 0);
		sub_45C570((int)v3, 320, 240, 0, 0, (int)&unk_42DEB0);
		if (sub_45C530(3, v4))
		{
			sub_45C5F0(a1, a2, dword_477C20);
			sub_42DCE0(0);
		}
		sub_457C20(v3);
	}
	sub_42EE20(0);
	return sub_45F4B9(60);
}

void sub_42C380()
{
	if (dword_4C1C74)
	{
		sub_459DD0(dword_4C1C74);
		dword_4C1C74 = 0;
	}
	dword_477C10 = -1;
}

int __cdecl sub_42DCE0(int a1)
{
	int result; // eax

	result = sub_457CA0(&dword_477C0C, &dword_4C3080);
	if (result != -1)
	{
		sub_4613A6(dword_477C0C, dword_4C3080);
		/*sub_45BF14(0, 0, 640, 480, dword_4C3080, dword_477C0C, a1);*/
		sub_457DE0();
		sub_457F00();
		result = sub_457CA0(&dword_477C0C, &dword_4C3080);
		if (result != -1)
		{
			sub_4613A6(dword_477C0C, dword_4C3080);
			//sub_45BF14(0, 0, 640, 480, dword_4C3080, dword_477C0C, a1);
			result = sub_457DE0();
		}
	}
	return result;
}

signed int __cdecl sub_457CA0(_DWORD *a1, _DWORD *a2)
{
	int v2; // eax
	int v3; // eax
	bool v4; // zf
	int v6; // [esp+4h] [ebp-6Ch]
	int v7; // [esp+14h] [ebp-5Ch]
	int v8; // [esp+28h] [ebp-48h]

	memset(&v6, 0, 0x6Cu);
	v2 = dword_4C2420;
	v6 = 108;
	while (1)
	{
		while (1)
		{
			v3 = (*(int(__stdcall **)(int, _DWORD, int *, signed int, _DWORD))(*(_DWORD *)v2 + 100))(v2, 0, &v6, 1, 0);
			if (!v3)
			{
				*a1 = v8;
				*a2 = v7;
				return 0;
			}
			if (v3 == -2005532222)
				break;
			if (v3 != -2005532132)
				return -1;
			v2 = dword_4C2420;
		}
		v4 = (*(int(__stdcall **)(int))(*(_DWORD *)dword_4C241C + 108))(dword_4C241C) == 0;
		v2 = dword_4C2420;
		if (!v4)
			break;
		if (dword_4C241C != dword_4C2420)
		{
			if ((*(int(__stdcall **)(int))(*(_DWORD *)dword_4C2420 + 108))(dword_4C2420))
				return -1;
			v2 = dword_4C2420;
		}
	}
	(*(void(__stdcall **)(int))(*(_DWORD *)dword_4C2420 + 108))(dword_4C2420);
	return -1;
}

//int __usercall sub_45BF14@<eax>(_DWORD *a1@<ebp>)
int sub_45BF14(_DWORD *a1)
{
	int v1; // ecx
	unsigned int v2; // edi
	int result; // eax
	int v4; // edx
	int v5; // ebp
	int v6; // ebx

	v1 = a1[6];
	v2 = (v1 * a1[3] + 2 * a1[2] + a1[7]) & 0xFFFFFFFC;
	result = a1[8] << 16;
	LOWORD(result) = *((_WORD *)a1 + 16);
	v4 = a1[5];
	v5 = a1[4];
	do
	{
		v6 = 0;
		do
		{
			*(_DWORD *)(v2 + 2 * v6) = result;
			*(_DWORD *)(v2 + 2 * v6 + 4) = result;
			v6 += 4;
		} while (v6 < v5);
		v2 += v1;
		--v4;
	} while (v4);
	return result;
}

int sub_457DE0()
{
	return (*(int(__stdcall **)(int, _DWORD))(*(_DWORD *)dword_4C2420 + 128))(dword_4C2420, 0);
}

int sub_457F00()
{
	int result; // eax
	struct tagPOINT Point; // [esp+0h] [ebp-28h]
	struct tagRECT rc; // [esp+8h] [ebp-20h]
	struct tagRECT Rect; // [esp+18h] [ebp-10h]

	result = dword_4C2420;
	if (dword_4C2420 != dword_4C241C)
	{
		if (dword_4C22F4)
		{
			result = sub_457E20();
			if (result)
			{
				SetRect(&rc, 0, 0, xRight, yBottom);
				result = (*(int(__stdcall **)(int, _DWORD, _DWORD, int, struct tagRECT *, signed int))(*(_DWORD *)dword_4C241C
					+ 28))(
					dword_4C241C,
					0,
					0,
					dword_4C2420,
					&rc,
					16);
			}
		}
		else
		{
			SetRect(&rc, 0, 0, xRight, yBottom);
			GetClientRect(hWnd, &Rect);
			Point.x = 0;
			Point.y = 0;
			ClientToScreen(hWnd, &Point);
			OffsetRect(&Rect, Point.x, Point.y);
			result = (*(int(__stdcall **)(int, struct tagRECT *, int, struct tagRECT *, signed int, _DWORD))(*(_DWORD *)dword_4C241C + 20))(
				dword_4C241C,
				&Rect,
				dword_4C2420,
				&rc,
				0x1000000,
				0);
		}
	}
	return result;
}

int sub_457E20()
{
	int result; // eax
	int v1; // eax
	int v2; // esi

	result = 0;
	if (dword_4C22F4)
	{
		do
		{
			v1 = (*(int(__stdcall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_4C241C + 44))(dword_4C241C, 0, 0);
			v2 = v1;
			if (!v1)
				break;
			if (v1 == -2005532222)
			{
				if (!(*(int(__stdcall **)(int))(*(_DWORD *)dword_4C241C + 108))(dword_4C241C) && dword_4C241C != dword_4C2420)
					(*(void(__stdcall **)(int))(*(_DWORD *)dword_4C2420 + 108))(dword_4C2420);
				break;
			}
		} while (v1 == -2005532132);
		result = v2;
	}
	return result;
}

signed int __cdecl sub_45CAD0(int a1, int a2)
{
	signed int result; // eax

	result = 0;
	if (a1)
	{
		if (!a2)
			result = 2;
	}
	else if (a2)
	{
		result = 1;
	}
	return result;
}

int __cdecl sub_45C570(int a1, int a2, int a3, int a4, int a5, int a6)
{
	int result; // eax

	dword_4C2404 = a1;
	result = a4;
	dword_4A1914 = a2;
	dword_4A1918 = a3;
	dword_4C2410 = a4;
	dword_4C2414 = a5;
	dword_4C240C = (int(__cdecl *)(_DWORD))a6;
	return result;
}

void *__cdecl sub_45C530(signed int a1, int a2)
{
	void *result; // eax

	dword_4C2408 = a1;
	dword_4C2400 = a2;
	if (a1 < 3 || a1 > 5 || (result = (void *)sub_457B70(0x400u), (dword_4C23FC = result) != 0))
		result = (void *)1;
	return result;
}

void __cdecl sub_45C5F0(wint_t a1, int a2, int a3)
{
	unsigned __int16 *v3; // eax
	unsigned __int16 *v4; // ebp
	signed int v5; // esi
	int v6; // ecx
	int v7; // eax
	HFILE v8; // ebx
	size_t v9; // eax
	UINT v10; // edi
	_DWORD *v11; // eax
	_DWORD *v12; // esi
	signed int v13; // ebx
	double v14; // st7
	void(__cdecl *v15)(_DWORD); // eax
	bool v16; // sf
	unsigned __int8 v17; // of
	int v18; // eax
	int v19; // [esp+8h] [ebp-8h]
	DWORD v20; // [esp+14h] [ebp+4h]
	int v21; // [esp+14h] [ebp+4h]
	int v22; // [esp+18h] [ebp+8h]
	int v23; // [esp+18h] [ebp+8h]

	v19 = 0;
	v3 = (unsigned __int16 *)iswlower_0(a1);
	v4 = v3;
	if (v3)
	{
		v5 = *v3;
		dword_4A1914 = v3[1];
		v6 = dword_4A191C;
		v20 = (unsigned __int16)v5;
		dword_4A1918 = v3[2];
		if (!dword_4A191C)
			v6 = v3[3];
		if (flt_4A1920 == 0.0)
			flt_4A1920 = (double)(70 / v6);
		dword_4C23F4 = 0;
		v7 = sub_45C4A0(a2, 0);
		v8 = v7;
		if (v7 != -1)
		{
			v9 = off_4795E8(v7);
			v10 = v9;
			if (v9)
			{
				v11 = (_DWORD *)sub_457B70(v9);
				v12 = v11;
				if (v11)
				{
					sub_45C4E0(v8, v11, v10);
					sub_459B00();
					dword_4C23F4 = (int)sub_45A6D0(v12);
					sub_457C20(v12);
				}
				v5 = v20;
			}
			operator delete((void*)v8);
		}
		if (dword_4C23F4)
			sub_45A330(dword_4C23F4, a3, 0);
		v13 = 0;
		v21 = sub_457830();
		v22 = 0;
		if (v5 > 0)
		{
			while (1)
			{
				*(float *)&v23 = (double)v22 / flt_4A1920;
				if (sub_458520())
					goto LABEL_35;
				sub_458410();
				v14 = sub_45C510(v21) - *(float *)&v23;
				if (v14 < -0.1)
				{
					while (!sub_458520())
					{
						sub_458410();
						if (sub_45C510(v21) - *(float *)&v23 >= -0.1)
							goto LABEL_19;
					}
					goto LABEL_35;
				}
				if (v14 > 0.25)
					break;
			LABEL_19:
				v19 = 0;
				sub_45C440((int)v4);
				v15 = (void(__cdecl *)(_DWORD))dword_4C240C;
				if (dword_4C240C)
				{
					if (dword_4C240C(0) == -1)
						v13 = v5;
				LABEL_22:
					v15 = (void(__cdecl *)(_DWORD))dword_4C240C;
				}
			LABEL_23:
				v22 = ++v13;
				if (v13 >= v5)
					goto LABEL_33;
			}
			sub_45C440((int)v4);
			v15 = (void(__cdecl *)(_DWORD))dword_4C240C;
			if (!dword_4C240C)
				goto LABEL_23;
			v17 = __OFSUB__(v19 + 1, 45);
			v16 = v19++ - 44 < 0;
			if (v16 ^ v17)
			{
				v18 = dword_4C240C(1);
			}
			else
			{
				v19 = 0;
				v18 = dword_4C240C(0);
			}
			if (v18 == -1)
				goto LABEL_35;
			goto LABEL_22;
		}
		v15 = (void(__cdecl *)(_DWORD))dword_4C240C;
	LABEL_33:
		if (v15)
			v15(0);
	LABEL_35:
		sub_45C490(v4);
		if (dword_4C23F4)
		{
			sub_45A6B0(dword_4C23F4);
			dword_4C23F4 = 0;
		}
		if (dword_4C23FC)
		{
			sub_457C20(dword_4C23FC);
			dword_4C23FC = 0;
		}
	}
}

int __cdecl iswlower_0(wint_t a1)
{
	return sub_45D180(a1, 2);
}

int __cdecl sub_45D180(unsigned int a1, signed int a2)
{
	HFILE v2; // eax
	HFILE v3; // ebx
	int result; // eax
	signed int v5; // edi
	int v6; // esi
	unsigned int v7; // edx
	char *v8; // edi
	size_t Buffer; // [esp+Ch] [ebp-80h]
	int v10; // [esp+10h] [ebp-7Ch]
	__int16 v11; // [esp+14h] [ebp-78h]
	__int16 v12; // [esp+16h] [ebp-76h]
	int v13; // [esp+18h] [ebp-74h]
	int v14; // [esp+1Ch] [ebp-70h]
	LONG lOffset; // [esp+5Ch] [ebp-30h]

	v2 = sub_45C4A0(a1, 0);
	v3 = v2;
	if (v2 == -1)
		return 0;
	sub_45C4E0(v2, &Buffer, 0x80u);
	if ((unsigned __int16)v10 != 44817)
	{
		if ((unsigned __int16)v10 != 44818)
		{
			operator delete((void*)v3);
			return 0;
		}
		sub_45C4C0(v3, 0, lOffset);
	}
	v5 = a2;
	word_4C6FB0 = ((unsigned __int16)v13 >> 3) + ((unsigned __int16)v13 % 8 != 0);
	if (a2 != 2)
	{
		v6 = sub_457B70(Buffer);
		if (v6)
		{
			v5 = 4;
			goto LABEL_15;
		}
		if (a2 == 4)
		{
			operator delete((void*)v3);
			return 0;
		}
		v5 = 2;
	}
	v6 = sub_457B70(0x12u);
	if (!v6)
	{
		operator delete((void*)v3);
		return 0;
	}
LABEL_15:
	if ((_WORD)v10 == -20719)
	{
		*(_WORD *)v6 = HIWORD(v10);
		*(_WORD *)(v6 + 2) = v11;
		*(_WORD *)(v6 + 4) = v12;
		*(_WORD *)(v6 + 6) = v14;
	}
	else
	{
		*(_WORD *)v6 = HIWORD(v10);
		*(_WORD *)(v6 + 2) = v11;
		*(_WORD *)(v6 + 4) = v12;
		v7 = 7 * v14 / 0x64u;
		*(_WORD *)(v6 + 6) = v7;
		if ((unsigned __int16)v7 < 1u)
			*(_WORD *)(v6 + 6) = 1;
	}
	*(_WORD *)(v6 + 8) = 0;
	*(_DWORD *)(v6 + 10) = 18;
	if (v5 == 4)
	{
		v8 = (char *)(v6 + 18);
		for (*(_DWORD *)(v6 + 14) = 0; sub_45C4E0(v3, v8, 0x7FBCu) == 32700; v8 += 32700)
			;
		operator delete((void*)v3);
		result = v6;
	}
	else
	{
		*(_DWORD *)(v6 + 14) = v3;
		result = v6;
	}
	return result;
}

int __cdecl sub_45C4A0(unsigned int a1, unsigned int a2)
{
	int result; // eax

	if (a1)
		result = off_4795DC(a1, a2);
	else
		result = -1;
	return result;
}

int __cdecl sub_45C4E0(HFILE hFile, LPVOID lpBuffer, UINT uBytes)
{
	return off_4795E4(hFile, lpBuffer, uBytes);
}

int __cdecl sub_45C4C0(HFILE hFile, int iOrigin, LONG lOffset)
{
	return off_4795EC(hFile, lOffset, iOrigin);
}

_DWORD *__cdecl sub_45A6D0(_DWORD *a1)
{
	LPDIRECTSOUND v1; // ecx
	_DWORD *v2; // esi
	int v4; // eax
	char *v5; // edi
	unsigned int v6; // ebx
	int v7; // [esp+10h] [ebp-14h]
	int v8; // [esp+14h] [ebp-10h]
	char *v9; // [esp+18h] [ebp-Ch]
	int v10; // [esp+1Ch] [ebp-8h]
	_DWORD *v11; // [esp+20h] [ebp-4h]

	v1 = dword_4C23D8;
	if (dword_4C23D8)
	{
		v2 = a1;
		if (*a1 != 1179011410)
		{
			sub_45B266(a1, 168, 38);
			if (*v2 != 1179011410)
				return 0;
			v1 = dword_4C23D8;
		}
		v4 = v2[4] + 4;
		v5 = *(char **)((char *)v2 + v4 + 20);
		v6 = (unsigned int)v2 + v4 + 24;
		v7 = 20;
		v8 = 65762;
		v9 = v5;
		v10 = 0;
		a1 = 0;
		v11 = v2 + 5;
		if (v1->lpVtbl->CreateSoundBuffer(v1, (LPCDSBUFFERDESC)&v7, (LPDIRECTSOUNDBUFFER *)&a1, 0) >= 0)
		{
			if (sub_459A40((unsigned int)a1, v6, v5))
				return a1;
			(*(void(__stdcall **)(_DWORD *))(*a1 + 8))(a1);
		}
	}
	return 0;
}

signed int __cdecl sub_459A40(unsigned int a1, unsigned int a2, char *a3)
{
	unsigned int v3; // ebx
	char *v4; // ebp
	unsigned int v5; // eax
	unsigned int v6; // ecx
	char *v8; // [esp+20h] [ebp-4h]

	v3 = a1;
	if (!a1)
		return 0;
	v4 = (char *)a2;
	if (!a2
		|| !a3
		|| (*(int(__stdcall **)(unsigned int, _DWORD, char *, char **, unsigned int *, char **, unsigned int *, _DWORD))(*(_DWORD *)a1 + 44))(
		a1,
		0,
		a3,
		&v8,
		&a1,
		&a3,
		&a2,
		0) < 0)
	{
		return 0;
	}
	v5 = a1;
	if (a1)
	{
		memcpy(v8, v4, a1);
		v5 = a1;
	}
	v6 = a2;
	if (a2)
	{
		memcpy(a3, &v4[v5], a2);
		v6 = a2;
		v5 = a1;
	}
	(*(void(__stdcall **)(unsigned int, char *, unsigned int, char *, unsigned int))(*(_DWORD *)v3 + 76))(
		v3,
		v8,
		v5,
		a3,
		v6);
	return 1;
}

double __cdecl sub_45C510(int a1)
{
	return (double)(signed int)(sub_457830() - a1) * 0.0009765625;
}

int __cdecl sub_45C440(int a1)
{
	int v1; // eax

	v1 = dword_4A1914;
	if (dword_4C2408 >= 6 && dword_4C2408 <= 8)
		v1 = 2 * dword_4A1914;
	sub_45D830(a1, dword_4C2404 + dword_4C2410 + v1 * dword_4C2414, v1);
	return 0;
}

signed __int16 __cdecl sub_45D830(int a1, int a2, int a3)
{
	int v3; // edi
	HFILE v4; // eax
	int *v5; // esi
	int *v6; // eax
	HFILE v8; // edx
	HFILE v9; // eax
	int v10; // [esp+Ch] [ebp-18h]
	void *v11; // [esp+10h] [ebp-14h]
	int Buffer; // [esp+14h] [ebp-10h]
	unsigned __int16 v13; // [esp+1Ah] [ebp-Ah]
	int *v14; // [esp+28h] [ebp+4h]

	v3 = a1;
	v4 = *(_DWORD *)(a1 + 14);
	if (v4)
	{
		sub_45C4E0(v4, &Buffer, 0x10u);
		v14 = &Buffer;
		if (v13 <= 0u)
		{
			v5 = &Buffer;
		}
		else
		{
			v6 = (int *)sub_457B70(Buffer - 16);
			v5 = v6;
			if (!v6)
				return 1;
			v8 = *(_DWORD *)(v3 + 14);
			v11 = v6;
			sub_45C4E0(v8, v6, Buffer - 16);
		}
		if (++*(_WORD *)(v3 + 8) == *(_WORD *)v3)
		{
			v9 = *(_DWORD *)(v3 + 14);
			*(_WORD *)(v3 + 8) = 0;
			if (sub_45C4C0(v9, 0, 128) == -1)
				return 1;
		}
	}
	else
	{
		v14 = (int *)(a1 + *(_DWORD *)(a1 + 10));
		v5 = v14 + 4;
		++*(_WORD *)(v3 + 8);
	}
	if (*((_WORD *)v14 + 2) == -3590)
	{
		v10 = 0;
		if (*((_WORD *)v14 + 3))
		{
			do
			{
				switch (*((unsigned __int16 *)v5 + 2))
				{
				case 4u:
					sub_45D370((unsigned __int8 *)v5 + 6);
					*((_WORD *)v5 + 2) = 11;
					sub_45D3C0((unsigned __int8 *)v5 + 6);
					break;
				case 7u:
					sub_45D6E0((_WORD *)v5 + 3, (_WORD *)a2, a3);
					break;
				case 0xBu:
					sub_45D3C0((unsigned __int8 *)v5 + 6);
					break;
				case 0xCu:
					sub_45D5B0(v3, (unsigned __int8 *)v5 + 6, (_BYTE *)a2, a3, (unsigned int)v5 + *v5 - 1);
					break;
				case 0xDu:
					sub_45D7F0((char *)a2, a3, a3, *(_WORD *)(v3 + 4));
					break;
				case 0xFu:
					sub_45D4F0(a3, (char *)v5 + 6, (_BYTE *)a2, a3, *(_WORD *)(v3 + 4));
					break;
				case 0x10u:
					sub_45D690(v3, (char *)v5 + 6, (char *)a2, a3);
					break;
				default:
					break;
				}
				v5 = (int *)((char *)v5 + *v5);
				++v10;
			} while ((signed __int16)v10 < (signed int)*((unsigned __int16 *)v14 + 3));
		}
	}
	if (*(_DWORD *)(v3 + 14))
	{
		if (v13)
		{
			sub_457C20(v11);
			return 0;
		}
	}
	else
	{
		if (*(_WORD *)(v3 + 8) > *(_WORD *)v3)
		{
			*(_WORD *)(v3 + 8) = 1;
			*(_DWORD *)(v3 + 10) = 18;
			v14 = (int *)(v3 + 18);
		}
		*(_DWORD *)(v3 + 10) += *v14;
	}
	return 0;
}

_BYTE *__cdecl sub_45D370(unsigned __int8 *a1)
{
	_BYTE *result; // eax
	int v2; // esi
	signed __int16 v3; // dx
	int v4; // ecx
	int v5; // edx

	result = (_BYTE *)(a1 + 2);
	if ((signed __int16)*a1 > 0)
	{
		v2 = *a1;
		do
		{
			v3 = (unsigned __int8)result[1];
			result += 2;
			if (!v3)
				v3 = 256;
			v4 = 0;
			v5 = 3 * v3;
			if (v5 > 0)
			{
				do
				{
					*result++ >>= 2;
					++v4;
				} while ((signed __int16)v4 < v5);
			}
			--v2;
		} while (v2);
	}
	return result;
}

void __cdecl sub_45D3C0(unsigned __int8 *a1)
{
	unsigned __int8 v1; // bl
	__int16 v2; // ax
	unsigned __int8 *v3; // esi
	int v4; // ebp
	unsigned __int8 v5; // bl
	unsigned __int8 *v6; // esi
	signed __int16 v7; // bx
	_BYTE *v8; // esi
	int v9; // eax
	unsigned __int8 *v10; // esi
	signed __int16 v11; // ax
	int v12; // ecx
	int v13; // edx
	int v14; // edi
	int v15; // eax
	char v16; // bl
	unsigned __int8 v17; // [esp+10h] [ebp-4h]
	int v18; // [esp+10h] [ebp-4h]
	unsigned __int8 v19; // [esp+18h] [ebp+4h]
	unsigned __int8 v20; // [esp+18h] [ebp+4h]

	v1 = 0;
	v17 = 0;
	v2 = *a1;
	v3 = a1 + 2;
	if (dword_4A19B8)
	{
		if (v2 > 0)
		{
			v4 = *a1;
			while (1)
			{
				v5 = *v3 + v1;
				v6 = v3 + 1;
				v19 = v5;
				v7 = *v6;
				v8 = (_BYTE*)(v6 + 1);
				if (!v7)
					v7 = 256;
				if (dword_4C23FC)
				{
					v9 = sub_45CB50();
					sub_45BD0E(v19 + v17, v7, v8, (int)dword_4C23FC, v9);
				}
				else
				{
					sub_457E80(v19 + v17, v7, (int)v8);
				}
				--v4;
				v3 = (unsigned char *)&v8[2 * v7 + v7];
				v17 += v7;
				if (!v4)
					break;
				v1 = v19;
			}
		}
	}
	else if (v2 > 0)
	{
		v18 = *a1;
		do
		{
			v1 += *v3;
			v10 = v3 + 1;
			v20 = v1;
			v11 = *v10;
			v3 = v10 + 1;
			if (!v11)
				v11 = 256;
			v12 = 0;
			v13 = 3 * v11;
			if (v13 > 0)
			{
				v14 = 3 * v1;
				v15 = 0;
				do
				{
					v16 = *v3++;
					++v12;
					*(_BYTE *)(v14 + v15 + dword_4C6FAC) = v16;
					v15 = (signed __int16)v12;
				} while ((signed __int16)v12 < v13);
				v1 = v20;
			}
			--v18;
		} while (v18);
	}
}

int __cdecl sub_45BD0E(int a1, int a2, _BYTE *a3, int a4, int a5)
{
	_BYTE *v5; // esi
	int v6; // ecx
	_WORD *v7; // edi
	int v8; // ebx
	int v9; // eax
	int v10; // ebx
	int v11; // eax
	int v13; // [esp+4h] [ebp-4h]

	v5 = a3;
	v6 = a2;
	v7 = (_WORD *)(a4 + 2 * a1);
	if (a5)
	{
		do
		{
			v10 = (unsigned __int8)(*v5 >> 1) << 10;
			LOBYTE(v10) = v5[1] >> 1;
			v10 *= 32;
			v11 = v10 | ((unsigned __int8)(*v5 >> 1) << 10);
			LOBYTE(v10) = v5[2] >> 1;
			LOWORD(v11) = v10 | v11;
			*v7 = v11;
			v7[1] = v11;
			v5 += 3;
			v7 += 2;
			--v6;
		} while (v6);
	}
	else
	{
		do
		{
			v8 = (unsigned __int8)(*v5 >> 1) << 11;
			LOBYTE(v8) = v5[1];
			v8 *= 32;
			v9 = v8 | ((unsigned __int8)(*v5 >> 1) << 11);
			LOBYTE(v8) = v5[2] >> 1;
			LOWORD(v9) = v8 | v9;
			*v7 = v9;
			v7[1] = v9;
			v5 += 3;
			v7 += 2;
			--v6;
		} while (v6);
	}
	return v13;
}

int sub_45CB50()
{
	return dword_4C242C;
}

void __cdecl sub_457E80(int a1, int a2, int a3)
{
	int v3; // ecx
	int v4; // edi
	int v5; // eax
	char *v6; // ecx
	char v7; // dl

	v3 = dword_4C2424;
	v4 = a1 + a2;
	if (dword_4C2424)
	{
		v5 = a1;
		if (a1 < v4)
		{
			v6 = (char *)(a3 + 1);
			do
			{
				plpal->palPalEntry[v5].peRed = 4 * *(v6 - 1);
				v7 = *v6;
				v6 += 3;
				plpal->palPalEntry[v5].peGreen = 4 * v7;
				plpal->palPalEntry[v5++].peBlue = 4 * *(v6 - 2);
			} while (v5 < v4);
			v3 = dword_4C2424;
		}
		(*(void(__stdcall **)(int, _DWORD, int, int, PALETTEENTRY *))(*(_DWORD *)v3 + 24))(
			v3,
			0,
			a1,
			a2,
			&plpal->palPalEntry[a1]);
	}
}

unsigned __int8 *__cdecl sub_45D6E0(_WORD *a1, _WORD *a2, __int16 a3)
{
	unsigned __int8 *result; // eax
	__int16 v4; // si
	_WORD *v5; // ecx
	__int16 v6; // bx
	int v7; // edi
	__int16 v8; // dx
	signed __int8 v9; // dl
	bool v10; // sf
	int v11; // esi
	__int16 v12; // di
	__int16 v13; // di
	int v14; // edx
	int v15; // esi
	int v16; // [esp+0h] [ebp-4h]
	int v17; // [esp+8h] [ebp+4h]
	_WORD *v18; // [esp+Ch] [ebp+8h]

	result = (unsigned __int8 *)(a1 + 1);
	if (*a1 > 0)
	{
		v4 = a3;
		v16 = (signed __int16)*a1;
		v5 = a2;
		do
		{
			v6 = *(_WORD *)result;
			result += 2;
			if ((v6 & 0xC000) == 49152)
			{
				do
				{
					v7 = v4 * v6;
					v6 = *(_WORD *)result;
					v5 = (_WORD *)((char *)v5 - v7);
					LOWORD(v7) = *(_WORD *)result;
					result += 2;
				} while ((v7 & 0xC000) == 49152);
			}
			v18 = v5;
			v8 = v6;
			if (v6 < 0)
			{
				v8 = *(_WORD *)result;
				result += 2;
			}
			if (v8 > 0)
			{
				v17 = v8;
				do
				{
					v5 = (_WORD *)((char *)v5 + word_4C6FB0 * *result);
					v9 = result[1];
					result += 2;
					v10 = v9 < 0;
					if (v9 > 0)
					{
						if (v9 > 0)
						{
							v11 = v9;
							do
							{
								v12 = *(_WORD *)result;
								result += 2;
								*v5 = v12;
								++v5;
								--v11;
							} while (v11);
						}
						v10 = v9 < 0;
					}
					if (v10)
					{
						v13 = *(_WORD *)result;
						result += 2;
						v14 = -v9;
						v15 = 0;
						if (v14 > 0)
						{
							do
							{
								*v5 = v13;
								++v5;
								++v15;
							} while ((signed __int16)v15 < v14);
						}
					}
					--v17;
				} while (v17);
				v4 = a3;
			}
			if (v6 < 0)
				*(_BYTE *)v5 = v6;
			v5 = (_WORD *)((char *)v18 + v4);
			--v16;
		} while (v16);
	}
	return result;
}

//unsigned __int8 *__usercall sub_45D5B0@<eax>(int a1@<edi>, unsigned __int8 *a2, _BYTE *a3, __int16 a4, unsigned int a5)
unsigned __int8 * sub_45D5B0(int a1, unsigned __int8 *a2, _BYTE *a3, __int16 a4, unsigned int a5)
{
	_BYTE *v5; // ecx
	unsigned __int8 *result; // eax
	int v7; // esi
	unsigned __int8 v8; // dl
	signed __int16 v9; // bp
	unsigned __int8 v10; // dl
	bool v11; // sf
	int v12; // esi
	char v13; // bl
	int v14; // esi
	int v15; // edi
	int v16; // [esp+10h] [ebp-8h]
	_BYTE *v17; // [esp+14h] [ebp-4h]
	int v18; // [esp+1Ch] [ebp+4h]
	int v19; // [esp+20h] [ebp+8h]

	v5 = a3;
	result = a2;
	v7 = a4;
	while (1)
	{
		LOWORD(a1) = *((_WORD *)result + 1);
		v5 += v7 * *(signed __int16 *)result;
		result += 4;
		v16 = a1;
		v18 = 0;
		if ((signed __int16)a1 > 0)
			break;
	LABEL_16:
		if ((unsigned int)result >= a5)
			return result;
	}
	while (1)
	{
		v8 = *result++;
		v9 = v8;
		v17 = v5;
		v19 = 0;
		if ((signed __int16)v8 > 0)
			break;
	LABEL_15:
		v7 = a4;
		v5 = &v17[a4];
		if ((signed __int16)++v18 >= (signed __int16)a1)
			goto LABEL_16;
	}
	while (1)
	{
		v5 += *result;
		v10 = result[1];
		result += 2;
		v11 = (v10 & 0x80u) != 0;
		if ((char)v10 > 0)
		{
			if ((char)v10 > 0)
			{
				v12 = (char)v10;
				do
				{
					*v5++ = *result++;
					--v12;
				} while (v12);
			}
			v11 = (v10 & 0x80u) != 0;
		}
		if (v11)
		{
			v13 = *result++;
			v14 = -(char)v10;
			v15 = 0;
			if (v14 >= 0 && v10 != 0)
			{
				do
				{
					*v5++ = v13;
					++v15;
				} while ((signed __int16)v15 < v14);
			}
		}
		if ((unsigned int)result >= a5)
			return result;
		if ((signed __int16)++v19 >= v9)
		{
			a1 = v16;
			goto LABEL_15;
		}
	}
}

//__int16 __usercall sub_45D4F0@<ax>(int a1@<ebx>, char *a2, _BYTE *a3, __int16 a4, __int16 a5)
__int16 sub_45D4F0(int a1, char *a2, _BYTE *a3, __int16 a4, __int16 a5)
{
	__int16 result; // ax
	_BYTE *v6; // ebp
	char *v7; // esi
	char v8; // al
	__int16 v9; // cx
	int v10; // ecx
	int v11; // eax
	char v12; // al
	int v13; // edx
	int v14; // eax
	unsigned int v15; // ecx
	int v16; // [esp+0h] [ebp-4h]
	_BYTE *v17; // [esp+8h] [ebp+4h]
	int v18; // [esp+14h] [ebp+10h]

	result = a5;
	if (a5 > 0)
	{
		v6 = a3;
		v7 = a2;
		v16 = a5;
		do
		{
			v8 = *v7++;
			v17 = v6;
			if (v8 > 0)
			{
				v18 = v8;
				do
				{
					LOBYTE(v9) = *v7++;
					if ((v9 & 0x80u) == 0)
					{
						v12 = *v7++;
						v9 = (char)v9;
						if ((char)v9 > 0)
						{
							LOBYTE(a1) = v12;
							BYTE1(a1) = v12;
							v13 = v9;
							v14 = a1 << 16;
							LOWORD(v14) = a1;
							v15 = (unsigned int)v9 >> 2;
							memset32(v6, v14, v15);
							memset(&v6[4 * v15], a1, v13 & 3);
							v6 += v13;
						}
					}
					else
					{
						v10 = -(char)v9;
						v11 = 0;
						if (v10 > 0)
						{
							do
							{
								*v6++ = *v7++;
								++v11;
							} while ((signed __int16)v11 < v10);
						}
					}
					--v18;
				} while (v18);
			}
			v6 = &v17[a4];
			result = v16-- - 1;
		} while (v16);
	}
	return result;
}

int __cdecl sub_45D690(int a1, char *a2, char *a3, __int16 a4)
{
	int result; // eax
	signed int v5; // edx
	char *v6; // ebx
	char *v7; // esi

	result = a1;
	v5 = 0;
	if (*(_WORD *)(a1 + 4))
	{
		result = a4;
		v6 = a2;
		do
		{
			memcpy(a3, v6, 4 * ((unsigned int)a4 >> 2));
			v7 = &v6[4 * ((unsigned int)a4 >> 2)];
			v6 += a4;
			memcpy(&a3[4 * ((unsigned int)a4 >> 2)], v7, a4 & 3);
			++v5;
			a3 += a4;
		} while (v5 < *(unsigned __int16 *)(a1 + 4));
	}
	return result;
}

int __cdecl sub_45C490(void *a1)
{
	sub_45DA70(a1);
	return 0;
}

void __cdecl sub_45DA70(void *a1)
{
	if (*(_DWORD *)((char *)a1 + 14))
		operator delete((void *)*(_DWORD *)((char *)a1 + 14));
	sub_457C20(a1);
}

LPDIRECTSOUND __cdecl sub_45A6B0(int a1)
{
	LPDIRECTSOUND result; // eax

	result = dword_4C23D8;
	if (dword_4C23D8)
	{
		sub_45A620(a1, a1);
		result = (LPDIRECTSOUND)(*(int(__stdcall **)(int))(*(_DWORD *)a1 + 8))(a1);
	}
	return result;
}

__int16 __cdecl sub_45D7F0(char *a1, __int16 a2, __int16 a3, __int16 a4)
{
	__int16 result; // ax
	char *v5; // edx
	int v6; // esi

	result = a4;
	if (a4 > 0)
	{
		v5 = a1;
		v6 = a4;
		do
		{
			memset(v5, 0, a3);
			result = a2;
			v5 += a2;
			--v6;
		} while (v6);
	}
	return result;
}

DWORD __cdecl sub_45F4B9(unsigned int a1)
{
	DWORD result; // eax

	dword_4A4204 = 0;
	dword_4A41FC = 0x3E8 / a1;
	result = sub_457830();
	dword_4A4200 = result;
	dword_4A420C = 16;
	return result;
}

__int64 sub_407260()
{
	__int64 result; // rax

	result = 0i64;
	memset(&unk_4C6E60, 0, 0xF0u);
	memset(&unk_4C34C0, 0, 0x320u);
	dword_4C1A3C = 20;
	memset(&unk_4C3940, 0, 0x960u);
	dword_4C1A38 = 0;
	dword_4C1B90 = 0;
	dword_4C1B94 = 0;
	return result;
}

void __cdecl sub_42CE10(int a1)
{
	int *v1; // eax
	int *v2; // eax
	int v3; // ST4C_4
	int *v4; // eax
	int *v5; // eax
	int *v6; // eax
	int *v7; // eax

	sub_45B6DE(a1, (_WORD *)&aDataLevel000Ic[strlen(aDataLevel000Ic) - 7], 0xAu, 3, 48);
	strcat(aDataLevel000Ic, aIco);
	sub_45B6DE(a1, (_WORD *)&aDataLevel000Wr[strlen(aDataLevel000Wr) - 7], 0xAu, 3, 48);
	strcat(aDataLevel000Wr, aWrd);
	sub_45B6DE(a1, (_WORD *)&aDataLevel000Bi[strlen(aDataLevel000Bi) - 7], 0xAu, 3, 48);
	strcat(aDataLevel000Bi, aBin);
	sub_45B6DE(a1, (_WORD *)&aDataObj000Obs[strlen(aDataObj000Obs) - 7], 0xAu, 3, 48);
	strcat(aDataObj000Obs, aObs);
	sub_45B6DE(a1, (_WORD *)&aDataStory000Tx[strlen(aDataStory000Tx) - 7], 0xAu, 3, 48);
	strcat(aDataStory000Tx, aTxt);
	sub_45B6DE(a1, (_WORD *)&aDataWinfail000[strlen(aDataWinfail000) - 7], 0xAu, 3, 48);
	strcat(aDataWinfail000, aTxt);
	v1 = sub_42CD10(aDataWinfail000);
	sub_44D180((int)v1);
	v2 = sub_42CD10(aDataObj000Obs);
	sub_45DC5C((int)v2, 1, (int)sub_42CDD0);
	v3 = dword_4C1E04;
	v4 = sub_42CD10(aDataLevel000Ic);
	sub_46B989((int)v4, v3);
	v5 = sub_42CD10(aDataLevel000Wr);
	sub_46BB65((int)v5);
	v6 = sub_42CD10(aDataLevel000Bi);
	sub_46BCBD((int)v6);
	v7 = sub_42CD10(aDataStory000Tx);
	sub_44CCE0((int)v7);
}

signed __int16 __cdecl sub_45B6DE(int a1, _WORD *a2, unsigned int a3, int a4, signed __int16 a5)
{
	_WORD *v5; // edi
	int v6; // edx
	int v7; // ebx
	signed __int16 result; // ax
	int *v9; // esi
	int v10; // edi
	unsigned int v11; // eax
	int v12; // edi
	unsigned __int64 v13; // rtt
	_BYTE *v14; // edx
	int v15; // ecx
	char v16; // cl
	int v17; // [esp+Eh] [ebp-Ch]

	v5 = a2;
	v6 = a1;
	v7 = a4;
	if (a4 < 0)
	{
		v7 = a4 & 0x7FFFFFFF;
		if (a1 >= 0)
		{
			result = 43;
			*a2 = 43;
			v5 = (_WORD *)((char *)a2 + 1);
			if (!--v7)
				return result;
			a2 = (_WORD *)((char *)a2 + 1);
		}
	}
	v9 = &v17;
	if ((_BYTE)a3 == 10 && a1 < 0)
	{
		result = 45;
		v6 = -a1;
		*v5 = 45;
		v10 = (int)v5 + 1;
		if (!--v7)
			return result;
		a2 = (_WORD *)v10;
	}
	v11 = v6;
	v12 = 0;
	do
	{
		v13 = v11;
		v11 /= a3;
		*(_BYTE *)v9 = byte_4A18B0[v13 % a3];
		++v12;
		v9 = (int *)((char *)v9 + 1);
	} while (v11);
	result = a5;
	v14 = (int8 *)a2;
	if ((_BYTE)a5)
	{
		v15 = v7 - v12;
		if (v7 > v12)
		{
			do
			{
				*v14++ = a5;
				--v7;
				--v15;
			} while (v15);
		}
	}
	do
	{
		v9 = (int *)((char *)v9 - 1);
		v16 = *(_BYTE *)v9;
		*v14++ = *(_BYTE *)v9;
		if (!--v7)
		{
			if (v16)
			{
				v16 = 0;
				*v14 = 0;
			}
		}
	} while (v16);
	return result;
}

void __cdecl sub_44D180(int a1)
{
	int v1; // eax
	signed int v2; // ecx
	signed int v3; // edx
	int v4; // eax
	int v5; // esi
	void *v6; // edi
	int v7; // eax
	int v8; // eax

	if (dword_4C1B50)
	{
		sub_457C20(dword_4C1B50);
		dword_4C1B50 = 0;
	}
	memset(&dword_4C3060, 0, 0x18u);
	if (sub_46DEC0(a1))
	{
		dword_4C3060 = sub_46DBA0(aWin, 1);
		dword_4C3068 = sub_46DBA0(aFail, 1);
		v1 = sub_46DBA0(aEvent, 1);
		v2 = dword_4C3060;
		dword_4C3070 = v1;
		if (!dword_4C3060)
		{
			v2 = 1;
			dword_4C3060 = 1;
		}
		v3 = dword_4C3068;
		if (!dword_4C3068)
		{
			v3 = 1;
			dword_4C3068 = 1;
		}
		if (!v1)
		{
			v1 = 1;
			dword_4C3070 = 1;
		}
		v4 = v2 + v3 + v1;
		if (v4)
		{
			v5 = 8 * v4;
			v6 = (void *)sub_457B70(8 * v4 + 60000);
			dword_4C1B50 = v6;
			if (v6)
			{
				memset(v6, 0, v5);
				dword_4C3064 = (int)dword_4C1B50;
				dword_4C306C = (int)dword_4C1B50 + 8 * dword_4C3060;
				dword_4C3074 = (int)dword_4C1B50 + 8 * (dword_4C3060 + dword_4C3068);
				v7 = sub_44CEF0((int)dword_4C1B50, dword_4C3060, aWin, v5);
				v8 = sub_44CEF0(dword_4C306C, dword_4C3068, aFail, v7);
				if (sub_44CEF0(dword_4C3074, dword_4C3070, aEvent, v8) - v5 > 60000)
					sub_45B29E(aWinfailFileMem);
			}
		}
		sub_46E060();
	}
}

int __cdecl sub_44CEF0(int a1, int a2, char *a3, int a4)
{
	int v4; // ebp
	int v5; // edi
	char *v6; // eax
	char *v7; // esi
	char v8; // al
	char *v9; // eax
	char *v10; // esi
	char v11; // al
	char *v12; // esi
	char v13; // al
	int v14; // eax
	int v16; // [esp+10h] [ebp-Ch]
	int v17; // [esp+14h] [ebp-8h]
	int v18; // [esp+18h] [ebp-4h]

	v4 = sub_46DC70(a3, 1);
	if (v4)
	{
		v5 = a4;
		while (1)
		{
			if (sub_46DE70(aCode_0, 1, v4, (int)&v18))
			{
				if (v18 >= a2)
				{
					sub_45B29E(aWinfailFileCod);
					return v5;
				}
				if (*(_DWORD *)(a1 + 8 * v18))
				{
					sub_45B29E(aWinfailFileHas);
					return v5;
				}
				*(_DWORD *)(a1 + 8 * v18) = *((char *)dword_4C1B50 + v5);
				v16 = 0;
				if (sub_46DD50(aMessage_0, 1, v4, (int)byte_4C1E98))
				{
					v6 = strtok(byte_4C1E98, asc_47855C);
					v7 = v6;
					if (v6)
					{
						if (*v6 == 32)
						{
							do
								v8 = (v7++)[1];
							while (v8 == 32);
						}
						v17 = 0;
						if (!sub_46DE00(v7, (int)&v17))
							sub_446480((int)aWinfailFile, v7);
						v16 = v17 << 16;
						v9 = strtok(0, asc_47855C);
						v10 = v9;
						if (v9)
						{
							if (*v9 == 32)
							{
								do
									v11 = (v10++)[1];
								while (v11 == 32);
							}
							v17 = 0;
							if (!sub_46DE00(v10, (int)&v17))
								sub_446480((int)aWinfailFile, v10);
							LOWORD(v16) = v17;
						}
					}
				}
				*(_DWORD *)(a1 + 8 * v18 + 4) = v16;
				v18 = 1;
				if (sub_46DD50(aAction, 1, v4, (int)byte_4C1E98))
				{
					while (1)
					{
						v12 = strtok(byte_4C1E98, asc_47855C);
						if (v12)
							break;
					LABEL_28:
						if (!sub_46DD50(aAction, ++v18, v4, (int)byte_4C1E98))
							goto LABEL_29;
					}
					while (2)
					{
						if (*v12 == 32)
						{
							do
								v13 = (v12++)[1];
							while (v13 == 32);
						}
						v16 = 0;
						if (sub_46DE00(v12, (int)&v16))
						{
						LABEL_26:
							v14 = v16;
						}
						else
						{
							v14 = sub_459990(v12);
							v16 = v14;
							if (v14 == -1)
							{
								v14 = sub_45FC01(v12);
								v16 = v14;
								if (v14 == -1)
								{
									v16 = 0;
									sub_446480((int)aWinfailFile, v12);
									goto LABEL_26;
								}
							}
						}
						*(_DWORD *)((char *)dword_4C1B50 + v5) = v14;
						v5 += 4;
						v12 = strtok(0, asc_47855C);
						if (!v12)
							goto LABEL_28;
						continue;
					}
				}
			LABEL_29:
				v5 += 4;
				*(_DWORD *)((char *)dword_4C1B50 + v5 - 4) = 0;
			}
			v4 = sub_46DCE0(a3, v4);
			if (!v4)
				return v5;
		}
	}
	return a4;
}

void __cdecl sub_46B989(int a1, int a2)
{
	char *v2; // eax
	HFILE v3; // eax
	int v4; // edx
	int v5; // eax
	int v6; // ecx
	int v7; // eax
	char *v8; // eax
	_WORD *v9; // esi
	int v10; // ecx
	unsigned __int8 v11; // of
	_WORD *v12; // esi
	int **v13; // edi
	int *v14; // ebx
	int *v15; // eax
	int v16; // ecx
	unsigned int uBytes; // [esp+Ch] [ebp-Ch]
	HFILE hFile; // [esp+14h] [ebp-4h]

	v2 = sub_458E40(a1);
	sub_46C830((unsigned int)v2, 0);
	if (v3 != -1)
	{
		hFile = v3;
		sub_46CAB0(v3, &dword_4C0970, 0x14u);
		if (dword_4C0970 != 1313817417)
			goto LABEL_16;
		if (dword_4C092C)
		{
			sub_457C20(dword_4C092C);
			dword_4C092C = 0;
		}
		dword_4C0950 = dword_4C0980;
		v4 = dword_4C0980;
		v5 = dword_4C097C;
		if (dword_4C097C != 32)
			v5 = sub_46E100(4, 0);
		v6 = v5;
		v7 = 2 * v5 * v5;
		dword_4C0954 = v7;
		uBytes = v4 * v7;
		v8 = (char *)sub_457B70(20 * v4 + v4 * 20 * (v6 + 16) + 4 * v4 + v4 * v7);
		if (v8)
		{
			dword_4C092C = v8;
			dword_4C0930 = (int)&v8[uBytes];
			sub_46CAB0(hFile, v8, uBytes);
			sub_46C970(hFile);
			if (a2)
			{
				v9 = (uint16*)dword_4C092C;
				v10 = (uBytes >> 1) - 1;
				do
				{
					v9[v10] = v9[v10] & 0x1F | ((unsigned __int16)(v9[v10] & 0xFFC0) >> 1);
					v11 = __OFSUB__(v10--, 1);
				} while (!((v10 < 0) ^ v11));
			}
			v12 = (uint16*)dword_4C092C;
			v13 = (int **)dword_4C0930;
			v14 = (int *)(dword_4C0930 + 4 * dword_4C0950);
			do
			{
				*v13 = v14;
				++v13;
				v15 = sub_46B8D2(v12, 32, 32, 32, v14, 0, 0, 0);
				v12 = (_WORD *)((char *)v12 + dword_4C0954);
				v14 = v15;
			} while (v16 != 1);
		}
		else
		{
		LABEL_16:
			sub_46C970(hFile);
		}
	}
}

int *__cdecl sub_46B8D2(_WORD *a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, __int16 a8)
{
	_WORD *v8; // esi
	int *v9; // edi
	int v10; // eax
	int v11; // ecx
	int v12; // ebx
	signed int v13; // edx
	int *v14; // eax
	unsigned __int8 v15; // of
	int v17; // [esp+4h] [ebp-4h]
	int v18; // [esp+10h] [ebp+8h]
	int v19; // [esp+1Ch] [ebp+14h]
	int v20; // [esp+24h] [ebp+1Ch]
	int v21; // [esp+28h] [ebp+20h]

	v8 = a1;
	a5[3] = a6;
	a5[4] = a7;
	a5[2] = a2;
	a5[1] = a3;
	v9 = a5 + 5;
	v19 = 2 * (a4 - a2);
	v20 = -a6;
	v18 = -a7;
	v10 = 0;
	v17 = 0;
	do
	{
		v21 = v10;
		v11 = a2;
		v12 = v20;
		do
		{
			if (*v8 != a8)
			{
				*v9 = v12;
				v9[2] = (int)v8;
				v9[1] = v18;
				v13 = 1;
				while (--v11)
				{
					++v8;
					++v12;
					++v13;
					if (*v8 == a8)
					{
						--v13;
						break;
					}
				}
				v9[3] = v13;
				v14 = v9;
				v9 += 5;
				v14[4] = (int)v9;
				++v17;
			}
			++v8;
			++v12;
			v15 = __OFSUB__(v11--, 1);
		} while (!((unsigned __int8)((v11 < 0) ^ v15) | (v11 == 0)));
		++v18;
		v10 = v21 + 1;
		v8 = (_WORD *)((char *)v8 + v19);
	} while (v21 + 1 != a3);
	*a5 = v17;
	return v9;
}

void __cdecl sub_46BB65(int a1)
{
	char *v1; // eax
	HFILE v2; // eax
	int v3; // eax
	int v4; // eax
	void *v5; // eax
	HFILE hFile; // [esp+0h] [ebp-4h]

	v1 = sub_458E40(a1);
	sub_46C830((unsigned int)v1, 0);
	if (v2 != -1)
	{
		hFile = v2;
		sub_46CAB0(v2, &dword_4C0984, 0x18u);
		if (dword_4C0984 != 1280462679)
			goto LABEL_14;
		if (dword_4C0928)
		{
			sub_457C20(dword_4C0928);
			dword_4C0928 = 0;
		}
		dword_4C0960 = 320;
		dword_4C0964 = 240;
		dword_4C0934 = dword_4C0990;
		dword_4C0948 = 32 * dword_4C0990;
		v3 = 32 * dword_4C0990 - dword_4BFCBC;
		if (32 * dword_4C0990 < (unsigned int)dword_4BFCBC)
			v3 = 0;
		dword_4C0958 = v3;
		dword_4C0968 = dword_4C0948 - ((unsigned int)dword_4BFCBC >> 1);
		dword_4C093C = dword_4C0998;
		dword_4C0940 = dword_4C0934 * dword_4C0998;
		dword_4C0938 = dword_4C0994;
		dword_4C094C = 32 * dword_4C0994;
		v4 = 32 * dword_4C0994 - dword_4BFCC0;
		if (32 * dword_4C0994 < (unsigned int)dword_4BFCC0)
			v4 = 0;
		dword_4C095C = v4;
		dword_4C096C = dword_4C094C - ((unsigned int)dword_4BFCC0 >> 1);
		dword_4C0944 = dword_4C0938 * dword_4C0940;
		v5 = (void *)sub_457B70(dword_4C0938 * dword_4C0940);
		if (v5)
		{
			dword_4C0928 = v5;
			sub_46CAB0(hFile, v5, dword_4C0944);
			sub_46C970(hFile);
		}
		else
		{
		LABEL_14:
			sub_46C970(hFile);
		}
	}
}

void __cdecl sub_46BCBD(int a1)
{
	char *v1; // eax
	HFILE v2; // eax
	size_t v3; // eax
	void *v4; // eax
	UINT uBytes; // [esp+0h] [ebp-8h]
	HFILE hFile; // [esp+4h] [ebp-4h]

	v1 = sub_458E40(a1);
	sub_46C830((unsigned int)v1, 0);
	if (v2 != -1)
	{
		hFile = v2;
		if (dword_4C0924)
			sub_457C20(dword_4C0924);
		v3 = sub_46CB70(hFile);
		uBytes = v3;
		v4 = (void *)sub_457B70(v3);
		if (v4)
		{
			dword_4C0924 = v4;
			sub_46CAB0(hFile, v4, uBytes);
			sub_46C970(hFile);
			*(_DWORD *)dword_4C0924;
		}
		else
		{
			sub_46C970(hFile);
		}
	}
}

void __cdecl sub_46BE17(unsigned int a1, void(__cdecl *a2)(int, unsigned int *))
{
	int v2; // ebx
	unsigned int *v3; // esi
	int v4; // ecx
	int v5; // edx
	int v6; // eax
	_DWORD *v7; // eax

	v2 = *((_DWORD *)dword_4C0924 + 1);
	if (v2)
	{
		v3 = (unsigned int *)((char *)dword_4C0924 + 16);
		do
		{
			v4 = v3[2];
			v5 = v3[3];
			if (*v3 <= a1)
			{
				v6 = v3[1];
				if (v6 >= 0)
					v7 = sub_45E307(v4, v5, v6, 0);
				else
					v7 = sub_46BD67(v4, v5, v6 & 0x7FFFFFFF, 0);
				if (v7)
				{
					if (a2)
						a2((int)v7, v3);
				}
			}
			v3 += 52;
			--v2;
		} while (v2);
	}
}

_DWORD *__cdecl sub_45E307(int a1, int a2, int a3, int a4)
{
	_DWORD *v4; // ebx
	_DWORD *v5; // edi
	unsigned int v6; // eax
	_DWORD *v7; // ebx
	int *v8; // eax
	int v9; // edx
	int v10; // ecx
	int v11; // edx
	_DWORD *result; // eax

	if (dword_4A19DC >= (unsigned int)dword_4A19C4)
		return 0;
	v4 = (_DWORD *)dword_4A2728[a3];
	if (!v4)
		return 0;
	memcpy(dword_4A19D8, v4, 0xB0u);
	v5 = (int *)dword_4A19D8;
	v5[32] |= 0xB0000000;
	v5[1] = a1;
	v5[2] = a2;
	v5[21] = a3;
	v6 = v4[3];
	v5[22] = v6;
	if (v6 > dword_4A35F4)
		dword_4A35F4 = v6;
	v7 = (_DWORD *)dword_4A35F0;
	v8 = (int *)((char *)dword_4A35EC + 4 * v6);
	v9 = *v8;
	if (a4 || !v9)
	{
		*v8 = dword_4A35F0;
		v7[1] = v9;
		*v7 = *v5;
	}
	else
	{
		v10 = *v8;
		do
		{
			v11 = v10;
			v10 = *(_DWORD *)(v10 + 4);
		} while (v10);
		*(_DWORD *)(v11 + 4) = dword_4A35F0;
		*v7 = *v5;
		v7[1] = 0;
	}
	result = v5;
	do
		v5 += 44;
	while (v5[32] < 0);
	do
		v7 += 2;
	while (*v7);
	dword_4A19D8 = v5;
	dword_4A35F0 = (int)v7;
	++dword_4A19DC;
	return result;
}

_DWORD *__cdecl sub_46BD67(int a1, int a2, unsigned int a3, int a4)
{
	int *v4; // esi
	int v5; // ebx
	int *v6; // esi
	_DWORD *v7; // eax
	int v8; // ecx
	int v10; // [esp-1Ch] [ebp-30h]
	int v11; // [esp-18h] [ebp-2Ch]
	int v12; // [esp+4h] [ebp-10h]
	int v13; // [esp+8h] [ebp-Ch]
	_DWORD *v14; // [esp+Ch] [ebp-8h]
	_DWORD *v15; // [esp+10h] [ebp-4h]

	v15 = 0;
	v14 = 0;
	if (a3 < *((_DWORD *)dword_4C0924 + 2))
	{
		v4 = (int *)((char *)dword_4C0924
			+ *((_DWORD *)dword_4C0924 + 3)
			+ *(_DWORD *)((char *)dword_4C0924 + 4 * a3 + *((_DWORD *)dword_4C0924 + 3)));
		v5 = *v4;
		v6 = v4 + 1;
		v13 = a1 - v6[1];
		v12 = a2 - v6[2];
		do
		{
			v11 = v5;
			v10 = *v6;
			v7 = sub_45E307(v13 + v6[1], v12 + v6[2], *v6 & 0x7FFFFFFF, a4);
			if (v7)
			{
				if (v10 < 0)
					v7[32] |= 0x40000000u;
				if (!v15)
					v15 = v7;
				v8 = (int)v14;
				v14 = v7;
				if (v8)
					sub_45E485(v8, (int)v7);
			}
			v6 += 3;
			--v5;
		} while (v11 != 1);
	}
	return v15;
}

int __cdecl sub_45E485(int a1, int a2)
{
	int v2; // edx
	int result; // eax

	v2 = a2;
	result = *(_DWORD *)(a1 + 96);
	*(_DWORD *)(a1 + 96) = a2;
	*(_DWORD *)(a2 + 92) = a1;
	while (*(_DWORD *)(v2 + 96))
		v2 = *(_DWORD *)(v2 + 96);
	*(_DWORD *)(v2 + 96) = result;
	if (result)
		*(_DWORD *)(result + 92) = v2;
	return result;
}

void __cdecl sub_42BD50(int a1, int a2)
{
	int v2; // ecx
	_DWORD *v3; // edx
	signed int v4; // esi
	_DWORD *v5; // ecx
	int v6; // eax
	signed int v7; // edx
	int v8; // eax
	char *v9; // ecx
	signed int v10; // eax
	signed int v11; // ebp
	_DWORD *v12; // ebx
	char *v13; // edx
	int v14; // eax
	int v15; // eax
	int v16; // eax
	int v17; // eax
	int v18; // eax
	int v19; // eax
	signed int v20; // edx
	int v21; // eax
	int v22; // [esp+4h] [ebp-8h]

	v2 = *(_DWORD *)(a1 + 100);
	if (v2 != 3 && v2 != 5)
	{
		if (v2 == 41)
		{
			v3 = (_DWORD *)(a1 + 144);
			v4 = 8;
			v5 = (_DWORD *)(a2 + 16);
			do
			{
				if (*v5)
				{
					*v3 = *v5;
					++v3;
				}
				++v5;
				--v4;
			} while (v4);
		}
		return;
	}
	v6 = *(_DWORD *)(a1 + 164);
	if (!v6)
		return;
	v7 = 0;
	if (v2 == 3)
		v7 = 1;
	if (v6 >= 0)
		goto LABEL_17;
	*(_DWORD *)(a1 + 164) = v6 & 0x7FFFFFFF;
	if (!dword_4C1AD0)
	{
		dword_4C1AD0 = -1;
		goto LABEL_17;
	}
	if (dword_4C1AD0 == -1)
	{
	LABEL_17:
		v8 = sub_44CB10(*(_DWORD *)(a1 + 164), v7);
		goto LABEL_18;
	}
	v8 = *(_DWORD *)(dword_4C1AD0 + 164);
LABEL_18:
	if (!v8)
		return;
	*(_DWORD *)(a1 + 164) = v8;
	if (dword_4C1AD0 == -1)
		dword_4C1AD0 = a1;
	v9 = (char *)dword_4C1BC8 + 508 * v8;
	v10 = 0;
	v11 = 0;
	v12 = (_DWORD *)(a2 + 16);
	do
	{
		if (*v12)
		{
			v13 = &v9[4 * v10 + 312];
			while (*(_DWORD *)v13)
			{
				++v10;
				v13 += 4;
				if (v10 >= 8)
					goto LABEL_29;
			}
			if (v10 < 8 && !*(_DWORD *)&v9[4 * v10 + 312])
			{
				*(_DWORD *)&v9[4 * v10++ + 312] = *v12;
				if (v10 >= 8)
					break;
			}
		}
	LABEL_29:
		++v11;
		++v12;
	} while (v11 < 8);
	if (*(_DWORD *)(a1 + 172))
	{
		v14 = *((_DWORD *)v9 + 10);
		if (v14 == 0x10000)
		{
			*((_DWORD *)v9 + 10) = 0x20000;
			goto LABEL_35;
		}
		if (v14 == 0x20000)
		{
			*((_DWORD *)v9 + 10) = 0x10000;
		LABEL_35:
			v15 = *((_DWORD *)v9 + 40);
			LOBYTE(v15) = v15 | 8;
			*((_DWORD *)v9 + 40) = v15;
		}
		*(_DWORD *)(a1 + 172) = 0;
	}
	v16 = *(_DWORD *)(a1 + 168);
	if (v16)
	{
		if (v16 == -1)
			*((_DWORD *)v9 + 5) = 0;
		else
			*((_DWORD *)v9 + 5) = v16;
		*(_DWORD *)(a1 + 168) = 0;
	}
	v17 = *(_DWORD *)(a1 + 136);
	if (v17)
	{
		*((_WORD *)v9 + 219) += v17;
		*(_DWORD *)(a1 + 136) = 0;
	}
	if (*(_DWORD *)(a1 + 156))
	{
		if (*(_WORD *)(a1 + 158))
			*((_DWORD *)v9 + 1) = *(unsigned __int16 *)(a1 + 158);
		if (*(_WORD *)(a1 + 156))
			*((_DWORD *)v9 + 7) = *(unsigned __int16 *)(a1 + 156);
		*(_DWORD *)(a1 + 156) = 0;
	}
	v18 = *(_DWORD *)(a1 + 16);
	if (v18)
	{
		*((_DWORD *)v9 + 10) = v18;
		*(_DWORD *)(a1 + 16) = 0;
	}
	v19 = *(_DWORD *)(a1 + 20);
	if (v19)
	{
		*((_WORD *)v9 + 154) = v19;
		*(_DWORD *)(a1 + 20) = 0;
	}
	v20 = 0;
	do
	{
		v21 = *(_DWORD *)(a2 + 4 * v20 + 80);
		v22 = *(_DWORD *)(a2 + 4 * v20 + 80);
		if (v21)
		{
			switch (v20)
			{
			case 0:
				*((_DWORD *)v9 + 38) = v21;
				break;
			case 1:
				*((_DWORD *)v9 + 112) = v21;
				break;
			case 2:
				*((_DWORD *)v9 + 113) = v21;
				break;
			case 3:
				*((_DWORD *)v9 + 114) = v21;
				break;
			case 4:
				*((_DWORD *)v9 + 115) = v21;
				break;
			case 5:
				*((_DWORD *)v9 + 116) = v21;
				break;
			case 6:
				*((_DWORD *)v9 + 117) = v21;
				break;
			case 7:
				*((_DWORD *)v9 + 118) = v21;
				break;
			case 8:
				*((_DWORD *)v9 + 119) = v21;
				break;
			case 9:
				*((_DWORD *)v9 + 120) = v21;
				break;
			case 10:
				*((_DWORD *)v9 + 121) = v21;
				break;
			case 11:
				*((_DWORD *)v9 + 122) = v21;
				break;
			case 12:
				*((_DWORD *)v9 + 123) = v21;
				break;
			case 13:
				*((_DWORD *)v9 + 124) = v21;
				break;
			case 14:
				*((_DWORD *)v9 + 110) = v21;
				break;
			case 15:
				LOBYTE(v21) = v21 & 0xE0;
				*(_DWORD *)(a1 + 128) |= 0x4000u;
				*((_DWORD *)v9 + 116) = 8;
				*(_WORD *)(a1 + 70) = (HIWORD(v22) & 0xFFE0) + 16;
				*(_WORD *)(a1 + 68) = v21 + 16;
				break;
			case 16:
				*((_WORD *)v9 + 253) = v21;
				break;
			case 17:
				*((_WORD *)v9 + 252) = v21;
				break;
			case 18:
				*((_DWORD *)v9 + 59) = v21;
				break;
			case 19:
				*((_DWORD *)v9 + 61) = v21;
				break;
			case 20:
				*((_DWORD *)v9 + 60) = v21;
				break;
			case 21:
				*((_DWORD *)v9 + 62) = v21;
				break;
			case 22:
				*((_DWORD *)v9 + 63) = v21;
				break;
			case 23:
				*((_DWORD *)v9 + 64) = v21;
				break;
			case 24:
				*((_DWORD *)v9 + 58) = v21;
				break;
			default:
				break;
			}
		}
		++v20;
	} while (v20 < 32);
	sub_448840((int)v9);
}

signed int __cdecl sub_44CB10(signed int a1, int a2)
{
	signed int result; // eax
	signed int v3; // ecx

	if (!a1)
		return 0;
	if (a2)
	{
		memcpy((char *)dword_4C1BC8 + 508 * a1, (char *)dword_4C1AFC + 508 * a1, 0x1FCu);
		result = a1;
	}
	else
	{
		v3 = 10668;
		result = 21;
		while (*(_DWORD *)((char *)dword_4C1BC8 + v3))
		{
			v3 += 508;
			if (++result >= 199)
				return 0;
		}
		memcpy((char *)dword_4C1BC8 + v3, (char *)dword_4C1AFC + 508 * a1, 0x1FCu);
	}
	return result;
}

int __cdecl sub_42EBE0(int a1)
{
	return sub_42E640(0, 0, a1);
}

int __cdecl sub_42E640(int a1, int a2, int a3)
{
	signed int v3; // ebx
	HFILE v4; // eax
	HFILE v5; // ebp
	int v6; // eax
	int v7; // esi
	_DWORD *v8; // eax
	_DWORD *v9; // edi
	int v10; // esi
	_DWORD *v11; // esi
	_DWORD *v12; // eax
	int v13; // eax
	int v14; // eax
	unsigned __int16 *v15; // ebx
	void(__cdecl *v16)(unsigned __int16 *, signed int); // eax
	size_t Buffer; // [esp+10h] [ebp-8h]
	int v19; // [esp+14h] [ebp-4h]
	int v20; // [esp+1Ch] [ebp+4h]

	v19 = 0;
	strcpy((char *)dword_4C1B84, byte_4C2298);
	strcat((char *)dword_4C1B84, aSaves);
	if (a1)
	{
		strcat((char *)dword_4C1B84, (const char *)&off_477EB0);
		sub_45B6DE(a2, (_WORD *)(dword_4C1B84 + strlen((const char *)dword_4C1B84)), 0xAu, 2, 48);
	}
	else
	{
		strcat((char *)dword_4C1B84, aHslbat);
	}
	v3 = 1;
	strcat((char *)dword_4C1B84, aSav);
	dword_4C43B8 = 1;
	sub_46C830(dword_4C1B84, 0);
	v5 = v4;
	if (v4 != -1)
	{
		dword_4C43B8 = 0;
		v6 = sub_46CB70(v4);
		v7 = v6 - 4;
		if (v6 - 4 <= 0)
			goto LABEL_47;
		v8 = (_DWORD *)sub_457B70(v6 - 4);
		v9 = v8;
		if (!v8)
			goto LABEL_47;
		if (sub_46CAB0(v5, v8, v7) == v7)
		{
			v10 = sub_42E040(v9, v7);
			sub_457C20(v9);
			sub_46CBA0(v5, -4, 2);
			if (sub_46CAB0(v5, &Buffer, 4u) != 4)
				goto LABEL_47;
			if (v10 != Buffer)
				goto LABEL_47;
			sub_46CBA0(v5, 0, 0);
			if (sub_46CAB0(v5, &Buffer, 4u) != 4)
				goto LABEL_47;
			v11 = (_DWORD *)sub_457B70(0x68u);
			v12 = (_DWORD *)sub_457B70(Buffer);
			v9 = v12;
			if (v11)
			{
				if (v12
					&& ((v13 = sub_46CAB0(v5, v12, Buffer), v13 == Buffer) ? sub_45B089((int)v11, (int)v9, Buffer, 104) : (v3 = 0),
					(sub_457C20(v9), v3) && *v11 == 100))
				{
					dword_4C1BA4 = v11[3];
					dword_4C1BA8 = v11[4];
					dword_4C1BAC = v11[6];
					dword_4C1BB8 = v11[7];
					dword_4C3084 = v11[12];
					dword_4C1BC0 = v11[13];
					if (a3)
					{
						sub_46BE92(v11[1], v11[2]);
						dword_4C1BBC = v11[8];
						dword_4C1BCC = v11[10];
						dword_4C1BA0 = v11[11];
						dword_477C18 = v11[5];
						dword_4C1BB0 = *((unsigned __int16 *)v11 + 18);
						dword_4C1BB4 = *((unsigned __int16 *)v11 + 19);
						dword_4C2968 = *((signed __int16 *)v11 + 47);
						dword_4C296C = *((signed __int16 *)v11 + 46);
						dword_4C1BD8 = v11[19];
						dword_4C1BDC = v11[20];
						dword_4C1BE0 = v11[21];
						unk_4C1BE4 = v11[22];
						dword_4C1BD0 = *((unsigned __int16 *)v11 + 33);
						dword_4C1BD4 = *((unsigned __int16 *)v11 + 32);
						dword_4C1D70 = v11[17];
						dword_4C1AD4 = v11[18];
						dword_4C1BC4 = sub_457830();
					}
					if (!dword_4C1AEC)
					{
						dword_4C3044 = v11[14];
						dword_4C3040 = v11[15];
					}
					sub_457C20(v11);
					sub_458410();
					if (a3)
					{
						if (sub_46CAB0(v5, dword_4C4360, 0x54u) != 84)
							goto LABEL_47;
						if (sub_46CAB0(v5, &unk_4C6D80, 0xC8u) != 200)
							goto LABEL_47;
						if (!sub_44CC70(v5))
							goto LABEL_47;
						sub_458410();
						if (!sub_44F8A0(v5))
							goto LABEL_47;
						sub_458410();
						if (!sub_454BF0(v5))
							goto LABEL_47;
						sub_458410();
						if (!sub_426A70(v5))
							goto LABEL_47;
						sub_458410();
						if (!a1)
						{
							if (sub_407AB0(v5))
							{
								sub_458410();
								if (sub_44EAB0(v5))
								{
									sub_458410();
									dword_4C307C = v5;
									dword_4C2CB8 = (LPVOID)sub_457B70(0x108u);
									if (dword_4C2CB8)
									{
										v19 = 1;
										dword_4C43B4 = 0;
										v20 = sub_46CB70(dword_4C307C);
										do
										{
											if (v20 - sub_46CBA0(dword_4C307C, 0, 1) - 4 <= 0)
												goto LABEL_43;
											if (sub_46CAB0(dword_4C307C, &Buffer, 4u) != 4
												|| (v14 = sub_46CAB0(dword_4C307C, dword_4C2CB8, Buffer), v14 != Buffer)
												|| (sub_45B089((int)&unk_4C3860, (int)dword_4C2CB8, Buffer, 176),
												(v15 = (unsigned __int16 *)sub_45E307(0, 0, (unsigned __int16)dword_4C38B4, 0)) == 0))
											{
												v19 = 0;
											LABEL_43:
												sub_457C20(dword_4C2CB8);
												goto LABEL_47;
											}
											memcpy(v15, &unk_4C3860, 0xB0u);
											v16 = (void(__cdecl *)(unsigned __int16 *, signed int))sub_45E295(v15[50]);
											v16(v15, -3);
										} while (!dword_4C43B4);
										sub_457C20(dword_4C2CB8);
									}
								}
							}
							goto LABEL_47;
						}
					}
					v19 = 1;
				}
				else
				{
					sub_457C20(v11);
				}
			LABEL_47:
				sub_46C970(v5);
				goto LABEL_48;
			}
			if (!v12)
				goto LABEL_47;
		}
		sub_457C20(v9);
		goto LABEL_47;
	}
LABEL_48:
	sub_458410();
	sub_45F4B9(0x3Cu);
	return v19;
}

int __cdecl sub_42E040(_DWORD *a1, signed int a2)
{
	int result; // eax
	int v3; // edx
	_DWORD *v4; // ecx

	result = 0;
	if (a2 >= 4 && a2 - 4 >= 0)
	{
		v3 = a2 - 4 + 1;
		v4 = a1;
		do
		{
			result ^= *v4;
			v4 = (_DWORD *)((char *)v4 + 1);
			--v3;
		} while (v3);
	}
	return result;
}

int __cdecl sub_46BE92(unsigned int a1, unsigned int a2)
{
	int v2; // eax
	int v3; // ecx

	v2 = a1;
	v3 = a2;
	if ((a1 & 0x80000000) == 0)
	{
		if (a1 > dword_4C0958)
			v2 = dword_4C0958;
	}
	else
	{
		v2 = 0;
	}
	if ((a2 & 0x80000000) == 0)
	{
		if (a2 > dword_4C095C)
			v3 = dword_4C095C;
	}
	else
	{
		v3 = 0;
	}
	dword_4C091C = v2;
	dword_4C0920 = v3;
	return sub_4613EA(v2, v3);
}

int __cdecl sub_4613EA(int a1, int a2)
{
	int result; // eax

	dword_4BFC60 = -a1;
	dword_4BFC64 = -a2;
	result = dword_4BFC58 - a1;
	dword_4BFC68 = dword_4BFC58 - a1;
	dword_4BFC6C = dword_4BFC5C - a2;
	return result;
}

int __cdecl sub_44CC70(HFILE hFile)
{
	HFILE v1; // ebx
	signed int v2; // edi
	void *v3; // eax
	void *v4; // esi
	int v5; // eax

	v1 = hFile;
	v2 = 0;
	if (sub_46CAB0(hFile, &hFile, 4u) == 4)
	{
		v3 = (void *)sub_457B70(hFile);
		v4 = v3;
		if (v3)
		{
			v5 = sub_46CAB0(v1, v3, hFile);
			if (v5 == hFile)
			{
				sub_45B089((int)dword_4C1BC8, (int)v4, hFile, -1);
				v2 = 1;
			}
			sub_457C20(v4);
		}
	}
	return v2;
}

int __cdecl sub_44F8A0(HFILE hFile)
{
	size_t v1; // ecx
	signed int v2; // esi
	void *v4; // edi
	int v5; // eax
	void *v6; // eax
	void *v7; // edi
	int v8; // eax
	size_t Buffer; // [esp+0h] [ebp-4h]

	Buffer = v1;
	if (dword_4C1D10)
	{
		sub_457C20(dword_4C1D10);
		dword_4C1D10 = 0;
	}
	if (dword_4C1D1C)
	{
		sub_457C20(dword_4C1D1C);
		dword_4C1D1C = 0;
	}
	v2 = 1;
	if (sub_46CAB0(hFile, &dword_4C1D14, 4u) != 4)
		v2 = 0;
	if (sub_46CAB0(hFile, &dword_4C1D18, 4u) != 4)
		v2 = 0;
	if (sub_46CAB0(hFile, &Buffer, 4u) != 4)
		return 0;
	if (v2)
	{
		v2 = 0;
		dword_4C1D10 = (void *)sub_457B70(8 * dword_4C1D14);
		if (dword_4C1D10)
		{
			v4 = (void *)sub_457B70(Buffer);
			if (v4)
			{
				v5 = sub_46CAB0(hFile, v4, Buffer);
				if (v5 == Buffer)
				{
					sub_45B089((int)dword_4C1D10, (int)v4, Buffer, -1);
					v2 = 1;
				}
				sub_457C20(v4);
				if (v2)
				{
					if (sub_46CAB0(hFile, &dword_4C1D20, 4u) != 4)
						v2 = 0;
					if (sub_46CAB0(hFile, &dword_4C1D24, 4u) != 4)
						v2 = 0;
					if (sub_46CAB0(hFile, &Buffer, 4u) != 4)
						return 0;
					if (v2)
					{
						v2 = 0;
						dword_4C1D1C = (void *)sub_457B70(8 * dword_4C1D20);
						if (dword_4C1D1C)
						{
							v6 = (void *)sub_457B70(Buffer);
							v7 = v6;
							if (v6)
							{
								v8 = sub_46CAB0(hFile, v6, Buffer);
								if (v8 == Buffer)
								{
									sub_45B089((int)dword_4C1D1C, (int)v7, Buffer, -1);
									v2 = 1;
								}
								sub_457C20(v7);
							}
						}
					}
				}
			}
		}
	}
	return v2;
}

int __cdecl sub_454BF0(HFILE hFile)
{
	HFILE v1; // ebx
	signed int v2; // edi
	void *v3; // eax
	void *v4; // esi
	int v5; // eax
	void *v6; // eax
	void *v7; // esi
	int v8; // eax

	v1 = hFile;
	v2 = 0;
	if (sub_46CAB0(hFile, &hFile, 4u) == 4)
	{
		v3 = (void *)sub_457B70(hFile);
		v4 = v3;
		if (v3)
		{
			v5 = sub_46CAB0(v1, v3, hFile);
			if (v5 == hFile)
			{
				sub_45B089((int)&unk_4C27E0, (int)v4, hFile, -1);
				v2 = 1;
			}
			sub_457C20(v4);
			if (v2)
			{
				v2 = 0;
				if (sub_46CAB0(v1, &hFile, 4u) == 4)
				{
					v6 = (void *)sub_457B70(hFile);
					v7 = v6;
					if (v6)
					{
						v8 = sub_46CAB0(v1, v6, hFile);
						if (v8 == hFile)
						{
							sub_45B089((int)dword_4C1D74, (int)v7, hFile, -1);
							v2 = 1;
						}
						sub_457C20(v7);
					}
				}
			}
		}
	}
	return v2;
}

int __cdecl sub_426A70(HFILE hFile)
{
	HFILE v1; // ebx
	signed int v2; // edi
	void *v3; // eax
	void *v4; // esi
	int v5; // eax
	void *v6; // eax
	void *v7; // esi
	int v8; // eax

	v1 = hFile;
	v2 = 0;
	if (sub_46CAB0(hFile, &hFile, 4u) == 4)
	{
		v3 = (void *)sub_457B70(hFile);
		v4 = v3;
		if (v3)
		{
			v5 = sub_46CAB0(v1, v3, hFile);
			if (v5 == hFile)
			{
				sub_45B089((int)dword_4C4A20, (int)v4, hFile, 4000);
				v2 = 1;
			}
			sub_457C20(v4);
			if (v2)
			{
				v2 = 0;
				if (sub_46CAB0(v1, &hFile, 4u) == 4)
				{
					v6 = (void *)sub_457B70(hFile);
					v7 = v6;
					if (v6)
					{
						v8 = sub_46CAB0(v1, v6, hFile);
						if (v8 == hFile)
						{
							sub_45B089((int)&unk_4C43C0, (int)v7, hFile, 1600);
							v2 = 1;
						}
						sub_457C20(v7);
					}
				}
			}
		}
	}
	return v2;
}

int __cdecl sub_407AB0(HFILE hFile)
{
	HFILE v1; // edi
	signed int v2; // esi
	signed int v4; // ebx
	void *v5; // eax
	void *v6; // esi
	int v7; // eax

	v1 = hFile;
	v2 = 1;
	if (sub_46CAB0(hFile, &dword_4C1A3C, 4u) != 4)
		v2 = 0;
	if (sub_46CAB0(v1, &dword_4C6E48, 4u) != 4)
		return 0;
	if (!v2)
		return 0;
	v4 = 0;
	if (sub_46CAB0(v1, &hFile, 4u) == 4)
	{
		v5 = (void *)sub_457B70(hFile);
		v6 = v5;
		if (v5)
		{
			v7 = sub_46CAB0(v1, v5, hFile);
			if (v7 == hFile)
			{
				sub_45B089((int)&unk_4C3940, (int)v6, hFile, 2400);
				v4 = 1;
			}
			sub_457C20(v6);
		}
	}
	return v4;
}

int __cdecl sub_44EAB0(HFILE hFile)
{
	signed int v1; // edi
	void *v2; // esi
	int v3; // eax
	int v4; // eax
	int v5; // eax
	UINT Buffer; // [esp+8h] [ebp-4h]

	v1 = 0;
	if (!dword_4C1D04 || !dword_4C1D08 || !dword_4C1D0C)
		sub_44E520();
	v2 = (void *)sub_457B70(0xA8Cu);
	if (v2)
	{
		v1 = 1;
		if (sub_46CAB0(hFile, &Buffer, 4u) != 4)
			v1 = 0;
		v3 = sub_46CAB0(hFile, v2, Buffer);
		if (v3 == Buffer)
		{
			if (v1)
				sub_45B089(dword_4C1D04, (int)v2, Buffer, -1);
		}
		else
		{
			v1 = 0;
		}
		if (sub_46CAB0(hFile, &Buffer, 4u) != 4)
			v1 = 0;
		v4 = sub_46CAB0(hFile, v2, Buffer);
		if (v4 == Buffer)
		{
			if (v1)
				sub_45B089(dword_4C1D08, (int)v2, Buffer, -1);
		}
		else
		{
			v1 = 0;
		}
		if (sub_46CAB0(hFile, &Buffer, 4u) != 4)
			v1 = 0;
		v5 = sub_46CAB0(hFile, v2, Buffer);
		if (v5 != Buffer)
		{
			sub_457C20(v2);
			return 0;
		}
		if (v1)
			sub_45B089(dword_4C1D0C, (int)v2, Buffer, -1);
		sub_457C20(v2);
	}
	return v1;
}

int __cdecl sub_45E295(unsigned __int16 a1)
{
	return *(_DWORD *)(dword_4A19BC + 4 * a1);
}

void sub_42CB90()
{
	if (!(dword_4C1B00 & 0x38000000) && !sub_460989())
	{
		dword_4C1BA8 = 0;
		dword_4C1B00 |= 0x88000000;
		dword_4C1BAC = 0;
		sub_42DC90(2);
	}
}

int sub_42C340()
{
	int v0; // eax

	v0 = sub_42C1C0(-1);
	return sub_42C250(v0);
}

signed int __cdecl sub_42C1C0(signed int a1)
{
	signed int v1; // ecx
	signed int result; // eax

	v1 = a1;
	result = -1;
	if (a1 == -1)
		v1 = dword_4C1BB8;
	if (v1 < 100)
		result = word_477B44[v1];
	return result;
}

DWORD __cdecl sub_42C250(int a1)
{
	unsigned int v1; // kr04_4
	CHAR v3[512]; // [esp+4h] [ebp-200h]

	if (!dword_4C1AF8)
		return sub_45F4B9(0x3Cu);
	if (!dword_477C24)
	{
		dword_477C10 = a1;
		return sub_45F4B9(0x3Cu);
	}
	if (a1 == -1)
		return sub_45F4B9(0x3Cu);
	if (dword_4C1C74)
	{
		sub_459DD0(dword_4C1C74);
		dword_4C1C74 = 0;
	}
	strcpy(v3, byte_4C2298);
	v1 = strlen(v3) + 1;
	wsprintfA(&v3[v1 - 1], aMusic02dWav, a1);
	dword_4C1C74 = (int)sub_45A0B0((int)&v3[v1], (unsigned int)v3, dword_477C24, 4);
	return sub_45F4B9(0x3Cu);
}

int __cdecl sub_42EC10(int a1, int a2)
{
	return sub_42E640(1, a1, a2);
}

void *__cdecl sub_42DCA0(int a1)
{
	return sub_4609C0((void *)a1);
}

void *__cdecl sub_4609C0(void *a1)
{
	void *result; // eax

	if (!sub_460989())
		dword_4BBB56 = 16;
	dword_4BBB5A = -1;
	result = a1;
	off_4BBB5E = a1;
	HIWORD(off_4BBB5E) = (_WORD)a1;
	return result;
}

int __cdecl sub_42D7C0(signed int a1)
{
	int result; // eax
	signed int v2; // edi
	char *v3; // esi
	unsigned __int16 v4; // bp
	char **v5; // ebx
	unsigned int v6; // eax
	signed int v7; // esi
	signed __int16 v8; // bx
	char **v9; // ebp
	bool v10; // sf
	unsigned __int8 v11; // of
	char *v12; // eax
	unsigned __int16 v13; // ax
	int v14; // [esp+8h] [ebp-40h]
	int v15; // [esp+Ch] [ebp-3Ch]
	signed int v16; // [esp+10h] [ebp-38h]
	int v17; // [esp+14h] [ebp-34h]
	int v18; // [esp+18h] [ebp-30h]
	int v19; // [esp+1Ch] [ebp-2Ch]
	int v20; // [esp+20h] [ebp-28h]
	int v21; // [esp+3Ch] [ebp-Ch]
	int v22; // [esp+44h] [ebp-4h]

	result = dword_4C1AC8;
	v2 = 0;
	if (!dword_4C1AC8)
	{
		v3 = off_477D88;
		dword_4C1AC8 = 1;
		if (off_477D88)
		{
			v15 = 0;
			v14 = 0;
			v4 = sub_45FC01(off_477D88);
			sub_42C3B0();
			v5 = &off_477D88;
			do
			{
				v6 = sub_45FC01(v3);
				sub_460058(v6, 1);
				v3 = v5[1];
				++v5;
				++v15;
			} while (v3);
			sub_45F4B9(0x3Cu);
			v17 = 0;
			v21 = 0;
			v20 = 44;
			v7 = a1;
			v8 = a1;
			v22 = sub_460689(v4);
			v16 = a1;
			v9 = &off_477D88;
			while (1)
			{
				dword_4C1B98 = 0;
				dword_4C1B9C = 0;
				sub_458410();
				sub_45B4FF();
				if (sub_458520())
					++v14;
				sub_415910();
				sub_46141C();
				sub_415910();
				switch (v2)
				{
				case 0:
					sub_46BEDE(dword_4C1B98, dword_4C1B9C);
					sub_42C3F0(1);
					sub_4609F1();
					a1 = 262148;
					v8 = 4;
					v17 |= 0x20000000u;
					v2 = 1;
					goto LABEL_10;
				case 1:
					if (--v8 <= 0)
					{
						v8 = HIWORD(a1);
						v11 = __OFSUB__(v21 + 1, 16);
						v10 = v21++ - 15 < 0;
						if (!(v10 ^ v11))
						{
							v17 = 0;
							v21 = 16;
							v2 = 2;
						}
					}
					goto LABEL_10;
				case 2:
					if (dword_4C6390 & 0x70 || dword_4C6398 & 3 || (--v7, v7 <= 0))
					{
						v2 = 3;
						v17 |= 0x20000000u;
					}
					goto LABEL_10;
				case 3:
					if (--v8 <= 0)
					{
						v8 = HIWORD(a1);
						if (--v21 <= 0)
						{
							v21 = 0;
							v7 = 40;
							v2 = 4;
						}
					}
					goto LABEL_10;
				case 4:
					if (--v15 > 0)
					{
						v12 = v9[1];
						++v9;
						v17 |= 0x20000000u;
						v13 = sub_45FC01(v12);
						v7 = v16;
						v22 = sub_460689(v13);
						v2 = 1;
					LABEL_10:
						v18 = dword_4C091C;
						v19 = dword_4C0920;
						sub_461479(&v17);
						goto LABEL_11;
					}
					if (--v7 > 0)
						goto LABEL_10;
					sub_42C3F0(0);
					sub_42C3D0();
					sub_42DCA0(2);
					v2 = 5;
					++v14;
				LABEL_11:
					sub_42D280();
					nullsub_1(dword_4C1BB8);
					result = v14;
					if (v14)
						return result;
					break;
				default:
					goto LABEL_10;
				}
			}
		}
	}
	return result;
}

void *sub_42C3B0()
{
	void *result; // eax

	result = (void *)dword_4C1B38;
	if (!dword_4C1B38)
	{
		dword_4C1B38 = 1;
		dword_4BB928 = dword_4A4224;
		result = memcpy(dword_4B3C28, dword_4ABF28, 0x7D00u);
	}
	return result;
}

int __cdecl sub_460689(unsigned __int16 a1)
{
	int v1; // edx

	v1 = 0;
	if (a1 != 0xFFFF)
		v1 = dword_4ABF28[a1];
	return v1;
}

int sub_45B4FF()
{
	signed int v0; // ecx
	int v1; // esi
	int v2; // eax
	int v3; // edx
	int result; // eax

	v0 = 8;
	v1 = 0;
	do
	{
		v2 = dword_4C2374[v1];
		v3 = v2;
		result = dword_4C2374[v1] & (dword_4C2354[v1] ^ v2);
		dword_4C2354[v1] = v3;
		dword_4C2394[v1] = result;
		++v1;
		--v0;
	} while (v0);
	return result;
}

void sub_415910()
{
	const CHAR *v0; // eax
	int v1; // eax
	int v2; // eax
	int v3; // eax
	int v4; // eax
	int v5; // eax
	int v6; // eax
	int v7; // eax
	int v8; // eax
	int v9; // eax
	int v10; // eax
	int v11; // eax
	int v12; // eax
	int v13; // eax
	int v14; // eax
	int v15; // eax
	int v16; // eax
	int v17; // eax
	int v18; // eax
	int v19; // eax
	int v20; // eax
	int v21; // eax
	int v22; // eax
	int v23; // eax
	int v24; // eax
	int v25; // eax
	int v26; // eax
	int v27; // eax
	int v28; // eax
	int v29; // eax
	int v30; // eax
	int v31; // eax
	int v32; // eax
	int v33; // eax
	int v34; // edx
	int v35; // ecx

	if (dword_4C1B04 & 0x40000000)
	{
		if (lpBuffer)
		{
			if ((signed int)uBytes < dword_4C1B10)
			{
				dword_4C6390 = *(_DWORD *)&lpBuffer[uBytes];
				dword_4C6398 = *(_DWORD *)&lpBuffer[uBytes + 4];
				dword_4C1A8C = *(_DWORD *)&lpBuffer[uBytes + 8];
				dword_4C1A90 = *(_DWORD *)&lpBuffer[uBytes + 12];
				uBytes += 16;
				if ((signed int)uBytes >= dword_4C1B10)
					PostMessageA(hWnd, 0x10u, 0, 0);
			}
		}
	}
	else
	{
		dword_4C6390 = 0;
		LOBYTE(v1) = sub_45B531(1);
		if (v1)
		{
			v2 = dword_4C6390;
			LOBYTE(v2) = dword_4C6390 | 0x10;
			dword_4C6390 = v2;
		}
		LOBYTE(v3) = sub_45B531(28);
		if (v3 || (LOBYTE(v4) = sub_45B531(156), v4))
		{
			v5 = dword_4C6390;
			LOBYTE(v5) = dword_4C6390 | 0x20;
			dword_4C6390 = v5;
		}
		LOBYTE(v6) = sub_45B531(57);
		if (v6)
		{
			v7 = dword_4C6390;
			LOBYTE(v7) = dword_4C6390 | 0x40;
			dword_4C6390 = v7;
		}
		LOBYTE(v8) = sub_45B531(21);
		if (v8)
		{
			v9 = dword_4C6390;
			LOBYTE(v9) = dword_4C6390 | 0x80;
			dword_4C6390 = v9;
		}
		LOBYTE(v10) = sub_45B531(49);
		if (v10)
		{
			v11 = dword_4C6390;
			BYTE1(v11) |= 1u;
			dword_4C6390 = v11;
		}
		LOBYTE(v12) = sub_45B531(42);
		if (v12)
		{
			v13 = dword_4C6390;
			BYTE1(v13) |= 2u;
			dword_4C6390 = v13;
		}
		LOBYTE(v14) = sub_45B531(54);
		if (v14)
		{
			v15 = dword_4C6390;
			BYTE1(v15) |= 4u;
			dword_4C6390 = v15;
		}
		LOBYTE(v16) = sub_45B531(200);
		if (v16 || (LOBYTE(v17) = sub_45B531(72), v17))
		{
			v18 = dword_4C6390;
			LOBYTE(v18) = dword_4C6390 | 4;
			dword_4C6390 = v18;
		}
		LOBYTE(v19) = sub_45B531(208);
		if (v19 || (LOBYTE(v20) = sub_45B531(80), v20))
		{
			v21 = dword_4C6390;
			LOBYTE(v21) = dword_4C6390 | 8;
			dword_4C6390 = v21;
		}
		LOBYTE(v22) = sub_45B531(203);
		if (v22 || (LOBYTE(v23) = sub_45B531(75), v23))
		{
			v24 = dword_4C6390;
			LOBYTE(v24) = dword_4C6390 | 1;
			dword_4C6390 = v24;
		}
		LOBYTE(v25) = sub_45B531(205);
		if (v25 || (LOBYTE(v26) = sub_45B531(77), v26))
		{
			v27 = dword_4C6390;
			LOBYTE(v27) = dword_4C6390 | 2;
			dword_4C6390 = v27;
		}
		LOBYTE(v28) = sub_45B531(201);
		if (v28 || (LOBYTE(v29) = sub_45B531(73), v29))
		{
			v30 = dword_4C6390;
			BYTE1(v30) |= 8u;
			dword_4C6390 = v30;
		}
		LOBYTE(v31) = sub_45B531(209);
		if (v31 || (LOBYTE(v32) = sub_45B531(81), v32))
		{
			v33 = dword_4C6390;
			BYTE1(v33) |= 0x10u;
		}
		else
		{
			v33 = dword_4C6390;
		}
		v34 = dword_4C1A88 ^ v33;
		dword_4C1A88 = v33;
		dword_4C6390 = (unsigned __int16)v33 | ((v33 & v34) << 16);
		sub_4583E0(&dword_4C6398, &dword_4C1A8C, &dword_4C1A90);
		dword_4C1A8C += dword_4C091C;
		dword_4C6394 = dword_4C6398;
		v35 = dword_4C1A94;
		dword_4C1A90 += dword_4C0920;
		dword_4C1A94 = (unsigned __int16)dword_4C6398;
		dword_4C6398 = (unsigned __int16)dword_4C6398 | (((unsigned __int16)dword_4C6398 & (v35 ^ (unsigned __int16)dword_4C6398)) << 16);
		if (dword_4C1B04 < 0)
		{
			v0 = lpBuffer;
			if (lpBuffer || (v0 = (const CHAR *)sub_457B70(0x3E80u), (lpBuffer = v0) != 0))
			{
				*(_DWORD *)&v0[uBytes] = dword_4C6390;
				*(_DWORD *)&lpBuffer[uBytes + 4] = dword_4C6398;
				*(_DWORD *)&lpBuffer[uBytes + 8] = dword_4C1A8C;
				*(_DWORD *)&lpBuffer[uBytes + 12] = dword_4C1A90;
				uBytes += 16;
				if (uBytes >= 0x3E80)
				{
					sub_4578F0(hFile, lpBuffer, 0x3E80u);
					uBytes = 0;
				}
			}
		}
	}
}

unsigned __int8 __cdecl sub_45B531(char a1)
{
	return _bittest((int *)((char *)dword_4C2374 + ((a1 & 0xE0u) >> 3)), a1 & 0x1F);
}

int __cdecl sub_4583E0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
	int result; // eax

	*a1 = dword_4C2344;
	result = dword_4C234C;
	*a2 = dword_4C234C;
	*a3 = dword_4C2350;
	return result;
}

int __cdecl sub_46BEDE(int a1, int a2)
{
	unsigned int v2; // eax
	int v3; // ecx

	v2 = dword_4C091C + a1;
	v3 = dword_4C0920 + a2;
	if (dword_4C091C + a1 >= 0)
	{
		if (v2 > dword_4C0958)
			v2 = dword_4C0958;
	}
	else
	{
		v2 = 0;
	}
	if (v3 >= 0)
	{
		if (v3 > (unsigned int)dword_4C095C)
			v3 = dword_4C095C;
	}
	else
	{
		v3 = 0;
	}
	dword_4C091C = v2;
	dword_4C0920 = v3;
	return sub_4613EA(v2, v3);
}

int __cdecl sub_42C3F0(int a1)
{
	int result; // eax

	result = a1;
	dword_4C1B20 = a1;
	return result;
}

void sub_4609F1()
{
	dword_4BBB56 = 0;
	dword_4BBB5A = 0;
}

int __cdecl sub_461479(int *a1)
{
	_DWORD *v1; // edi
	int v2; // ecx
	int result; // eax
	int v4; // ecx
	int v5; // ebx
	unsigned int v6; // eax
	int v7; // ecx
	int v8; // ecx
	int v9; // ecx
	int v10; // ecx
	int v11; // ecx
	unsigned int v12; // eax
	int *v13; // esi
	int v14; // ebx
	int v15; // ebx
	int v16; // esi

	v1 = (_DWORD *)dword_4BBBE0;
	v2 = dword_4BFC6C + a1[2];
	*(_DWORD *)(dword_4BBBE0 + 4) = dword_4BFC68 + a1[1];
	v1[2] = v2;
	result = a1[12];
	v4 = a1[11];
	if (!result)
		return result;
	v1[10] = result;
	v1[11] = v4;
	v5 = *a1;
	v6 = a1[10];
	if (dword_4BFC34 != 63454 && v5 & 0x50800000)
		LOWORD(v6) = v6 & 0x1F | ((unsigned __int16)(v6 & 0xFFC0) >> 1);
	if (v5 & 0x20000000 && v6 > 0x10)
	{
		result = sub_46E100(7, 0);
		dword_4C08D8 = 1;
		return result;
	}
	v1[9] = v6;
	*v1 = v5;
	if (v5 & 0x8000000)
	{
		v7 = a1[9];
		v1[7] = a1[8];
		v1[8] = v7;
	}
	if (!(v5 & 0x1000000))
	{
		v8 = dword_4BFCA0;
		v1[3] = dword_4BFC9C;
		v1[4] = v8;
		v9 = dword_4BFCA8;
		v1[5] = dword_4BFCA4;
		v1[6] = v9;
	LABEL_26:
		v12 = a1[3];
		if (v12 > dword_4BFC4C)
			dword_4BFC4C = a1[3];
		if (v5 >= 0 && (v16 = dword_4BBBD8 + 4 * v12, *(_DWORD *)v16))
		{
			*(_DWORD *)(*(_DWORD *)v16 + 48) = *v1;
			v1[12] = 0;
			*(_DWORD *)v16 = *v1;
		}
		else
		{
			v13 = (int *)(dword_4BBBD4 + 4 * v12);
			v14 = *v13;
			v1[12] = *v13;
			*v13 = (int)v1;
			if (!v14)
			{
				v15 = dword_4BBBD8;
				v1[12] = 0;
				*(_DWORD *)(v15 + 4 * v12) = *v1;
			}
		}
		result = (int)v1;
		dword_4BBBE0 = (int)(v1 + 13);
		return result;
	}
	result = dword_4BFC68 + a1[4];
	v10 = dword_4BFC6C + a1[5];
	if (result)
	{
		if (result > 0)
		{
			if (result > dword_4BFC40)
				return result;
		}
		else
		{
			result = 0;
		}
	}
	if (v10)
	{
		if (v10 > 0)
		{
			if (v10 > dword_4BFC44)
				return result;
		}
		else
		{
			v10 = 0;
		}
	}
	v1[3] = result;
	v1[4] = v10;
	result = dword_4BFC68 + a1[6];
	v11 = dword_4BFC6C + a1[7];
	if (result > 0)
	{
		if (result > (unsigned int)dword_4BFC40)
			result = dword_4BFC40;
		if (v11 > 0)
		{
			if (v11 > (unsigned int)dword_4BFC44)
				v11 = dword_4BFC44;
			v1[5] = result;
			v1[6] = v11;
			goto LABEL_26;
		}
	}
	return result;
}

int sub_42D280()
{
	int result; // eax
	int v1; // edx
	int v2; // ecx
	int v3; // [esp+4h] [ebp-6Ch]
	int v4; // [esp+14h] [ebp-5Ch]
	int v5; // [esp+28h] [ebp-48h]

	dword_4C1B1C = 0;
	result = sub_45F50D(6);
	if (!result)
		return result;
	if (!dword_4C1E08)
	{
		if (uType && !dword_4C1B20 && sub_457D40(&dword_477C0C, &dword_4C3080) != -1)
			goto LABEL_13;
		goto LABEL_10;
	}
	if (!uType)
	{
	LABEL_10:
		if (sub_457CA0(&dword_477C0C, &dword_4C3080) != -1)
		{
			sub_4613A6(dword_477C0C, dword_4C3080);
			sub_46B821();
			sub_457DE0();
			result = sub_457F00();
			dword_4C1B1C = 1;
			return result;
		}
		result = sub_457D40(&dword_477C0C, &dword_4C3080);
		if (result == -1)
			return result;
	LABEL_13:
		sub_4613A6(dword_477C0C, dword_4C3080);
		sub_46B821();
		result = sub_457E00();
		dword_4C1B1C = 1;
		return result;
	}
	dword_4C1B1C = 1;
	if (!dword_4C1B20 && sub_457D40(&dword_477C0C, &dword_4C3080) != -1)
		goto LABEL_13;
	sub_4613A6(dword_4C1E00, 1280);
	sub_46B821();
	result = dword_4C241C;
	if (dword_4C241C)
	{
		memset(&v3, 0, 0x6Cu);
		v3 = 108;
		do
		{
			result = (*(int(__stdcall **)(int, _DWORD, int *, signed int, _DWORD))(*(_DWORD *)dword_4C2420 + 100))(
				dword_4C2420,
				0,
				&v3,
				1,
				0);
			if (!result)
			{
				off_4795F8(v4, v5);
				(*(void(__stdcall **)(int, _DWORD))(*(_DWORD *)dword_4C2420 + 128))(dword_4C2420, 0);
				return sub_457F00();
			}
			if (result == -2005532222)
			{
				if ((*(int(__stdcall **)(int, int))(*(_DWORD *)dword_4C241C + 108))(dword_4C241C, v3))
				{
					v2 = *(_DWORD *)dword_4C2420;
					v3 = dword_4C2420;
					return (*(int(__cdecl **)(int))(v2 + 108))(dword_4C2420);
				}
				v1 = *(_DWORD *)dword_4C2420;
				v3 = dword_4C2420;
				result = (*(int(**)(void))(v1 + 108))();
				if (result)
					return result;
			}
		} while (result == -2005532132);
	}
	return result;
}

char __cdecl sub_45F50D(unsigned int a1)
{
	DWORD v1; // eax
	int v2; // ecx
	unsigned int v3; // eax
	bool v4; // cf
	unsigned int v5; // eax
	DWORD v6; // eax
	int v7; // ecx
	unsigned int v8; // eax
	char result; // al

	v1 = sub_457830();
	v2 = v1;
	v3 = dword_4A4204 + v1 - dword_4A4200;
	dword_4A420C = v3;
	v4 = v3 < dword_4A41FC;
	v5 = v3 - dword_4A41FC;
	if (!v4)
	{
		dword_4A4200 = v2;
		if (v5 >= dword_4A41FC)
		{
			dword_4A4204 = v5;
			if (dword_4A4208 + 1 <= a1)
			{
				result = 0;
				++dword_4A4208;
				return result;
			}
		}
		else
		{
			dword_4A4204 = v5;
		}
		result = 1;
		dword_4A4208 = 0;
		return result;
	}
	do
	{
		v6 = sub_457830();
		v7 = v6;
		v8 = v6 - dword_4A4200;
	} while (v8 < dword_4A41FC);
	dword_4A420C = v8;
	dword_4A4204 = v8 - dword_4A41FC;
	dword_4A4200 = v7;
	dword_4A4208 = 0;
	return 1;
}

signed int __cdecl sub_457D40(_DWORD *a1, _DWORD *a2)
{
	int v2; // eax
	int v4; // [esp+4h] [ebp-6Ch]
	int v5; // [esp+14h] [ebp-5Ch]
	int v6; // [esp+28h] [ebp-48h]

	memset(&v4, 0, 0x6Cu);
	v4 = 108;
	while (1)
	{
		while (1)
		{
			v2 = (*(int(__stdcall **)(int, _DWORD, int *, signed int, _DWORD))(*(_DWORD *)dword_4C241C + 100))(
				dword_4C241C,
				0,
				&v4,
				1,
				0);
			if (!v2)
			{
				*a1 = v6;
				*a2 = v5;
				return 0;
			}
			if (v2 == -2005532222)
				break;
			if (v2 != -2005532132)
				return -1;
		}
		if ((*(int(__stdcall **)(int))(*(_DWORD *)dword_4C241C + 108))(dword_4C241C))
			break;
		if (dword_4C241C != dword_4C2420 && (*(int(__stdcall **)(int))(*(_DWORD *)dword_4C2420 + 108))(dword_4C2420))
			return -1;
	}
	(*(void(__stdcall **)(int))(*(_DWORD *)dword_4C2420 + 108))(dword_4C2420);
	return -1;
}

int sub_46B821()
{
	sub_46B6C1();
	// TODO: sub_46B78C
	/*sub_46B78C();
	.text : 0046B78C
	.text : 0046B78C; == == == == == == == = S U B R O U T I N E == == == == == == == == == == == == == == == == == == == =
	.text:0046B78C
	.text : 0046B78C
	.text : 0046B78C sub_46B78C proc near; CODE XREF : sub_46B821 + 8↓p
	.text : 0046B78C
	.text : 0046B78C; FUNCTION CHUNK AT.text:0046B400 SIZE 00000291 BYTES
	.text : 0046B78C
	.text : 0046B78C mov     dword_4C08E4, ebp
	.text : 0046B792 mov     edi, dword_4BFC50
	.text : 0046B798 mov     ebx, dword_4BFCA0
	.text : 0046B79E mov     eax, dword_4BFC54
	.text : 0046B7A3 imul    eax, ebx
	.text : 0046B7A6 add     edi, eax
	.text : 0046B7A8 mov     dword_4BFC70, edi
	.text : 0046B7AE mov     ebp, dword_4BFC9C
	.text : 0046B7B4 mov     edx, dword_4BFCBC
	.text : 0046B7BA add     edx, ebp
	.text : 0046B7BC mov     eax, dword_4BFCC0
	.text : 0046B7C1 mov     dword_4C08E0, eax
	.text : 0046B7C6 mov     esi, dword_4BBBD0
	.text : 0046B7CC mov     dword_4C08EC, ebp
	.text : 0046B7D2 mov     dword_4C08F0, edx
	.text : 0046B7D8 lea     esi, [esi + ebx * 4]
	.text : 0046B7DB
	.text : 0046B7DB loc_46B7DB : ; CODE XREF : sub_46B78C + 8C↓j
	.text : 0046B7DB mov     ebx, [esi]
	.text : 0046B7DD mov     ebp, dword_4C08EC
	.text : 0046B7E3 add     esi, 4
	.text : 0046B7E6 mov     edx, dword_4C08F0
	.text : 0046B7EC mov     dword_4C08E8, esi
	.text : 0046B7F2 push    offset loc_46B801
	.text : 0046B7F7 push    0
	.text : 0046B7F9 push    edx
	.text : 0046B7FA push    ebp
	.text : 0046B7FB push    ebx
	.text : 0046B7FC jmp     loc_46B450
	.text : 0046B801; -------------------------------------------------------------------------- -
	.text : 0046B801
	.text : 0046B801 loc_46B801 : ; DATA XREF : sub_46B78C + 66↑o
	.text : 0046B801 mov     esi, dword_4C08E8
	.text : 0046B807 mov     eax, dword_4BFC54
	.text : 0046B80C add     dword_4BFC70, eax
	.text : 0046B812 dec     dword_4C08E0
	.text : 0046B818 jnz     short loc_46B7DB
	.text : 0046B81A mov     ebp, dword_4C08E4
	.text : 0046B820 retn
	.text : 0046B820 sub_46B78C endp; sp - analysis failed
	.text : 0046B820*/
	return dword_4BBBE4 - dword_4BBBE0;
}

void sub_46B6C1()
{
	unsigned int **v0; // ebx
	int v1; // ecx
	unsigned int *i; // esi
	unsigned int v3; // eax

	v0 = (unsigned int **)dword_4BBBD4;
	v1 = dword_4BFC4C + 1;
	do
	{
		dword_4C08E8 = (int)v0;
		dword_4C08E4 = v1;
		for (i = *v0; i; i = *(unsigned int **)(dword_4C08EC + 48))
		{
			v3 = *i;
			dword_4C08EC = (int)i;
			if (v3 & 0x800000)
			{
				LOWORD(v3) = 7;
				sub_4618AB((int *)i, v3);
			}
			else
			{
				if (v3 & 0x6000000)
				{
					LOWORD(v3) = word_46B6B1[(v3 >> 25) & 7];
					if (!(v3 & 0x8000000))
					{
					LABEL_6:
						if (v3 & 0x400000)
							sub_4617D7((int *)i, v3);
						else
							sub_46170C((int *)i, v3);
						continue;
					}
				}
				else
				{
					LOWORD(v3) = word_46B691[(v3 & 0x78000000) >> 27];
					if (!(v3 & 0x8000000))
						goto LABEL_6;
				}
				sub_461982((int *)i, v3);
			}
		}
		v0 = (unsigned int **)(dword_4C08E8 + 4);
		v1 = dword_4C08E4 - 1;
	} while (dword_4C08E4 != 1);
}

void sub_46B78C()
{

}

int __cdecl sub_4618AB(_DWORD *a1, int a2)
{
	_DWORD *v2; // ebx
	_DWORD *v3; // esi
	int v4; // eax
	int v5; // ST0C_4
	int v6; // ecx
	int *v7; // edi
	int v8; // esi
	int result; // eax
	int v10; // edx
	int v11; // edx
	int v12; // ebx
	int v13; // eax
	int v14; // eax
	unsigned __int8 v15; // of
	int v16; // [esp+0h] [ebp-14h]
	int v17; // [esp+4h] [ebp-10h]
	int v18; // [esp+8h] [ebp-Ch]
	int v19; // [esp+Ch] [ebp-8h]
	int *v20; // [esp+10h] [ebp-4h]

	v2 = a1;
	v18 = a1[5];
	v16 = a1[2];
	v3 = (_DWORD *)a1[10];
	v4 = v3[5];
	v17 = v3[4];
	v5 = v4;
	v6 = v3[3];
	v7 = (int *)dword_4BBBE0;
	v8 = v3[6] + v6 * v4 * a1[11];
	result = a1[2] + v4;
	v10 = v5;
	if (result >= a1[4])
	{
		do
		{
			v19 = v10;
			result = v16;
			if (v16 >= v2[4])
			{
				if (v16 >= v2[6])
					break;
				v20 = (int *)((char *)dword_4BBBD0 + 4 * v16);
				result = v2[1];
				v11 = v2[3];
				v12 = v17;
				v7[3] = 0;
				if (result < v11)
				{
					v13 = result - v11;
					v12 = v13 + v17;
					v7[3] = -v13;
					result = v11;
				}
				*v7 = result;
				v7[1] = v8;
				if (v12 > 0)
				{
					v14 = v12 + result;
					v15 = __OFSUB__(v14, v18);
					result = v14 - v18;
					if ((unsigned __int8)((result < 0) ^ v15) | (result == 0)
						|| (v15 = __OFSUB__(v12, result), v12 -= result, !((unsigned __int8)((v12 < 0) ^ v15) | (v12 == 0))))
					{
						v7[2] = v12;
						v7[5] = a2;
						v7[6] = a1[9];
						result = *v20;
						v7[4] = *v20;
						*v20 = (int)v7;
						v7 += 8;
					}
				}
			}
			v8 += v6;
			++v16;
			v2 = a1;
			v10 = v19 - 1;
		} while (v19 != 1);
	}
	dword_4BBBE0 = (int)v7;
	return result;
}

int __cdecl sub_4617D7(_DWORD *a1, int a2)
{
	_DWORD *v2; // ebx
	int *v3; // esi
	int v4; // ecx
	int result; // eax
	int *v6; // edi
	int v7; // eax
	_DWORD *v8; // esi
	int v9; // edx
	int v10; // ecx
	int v11; // ebx
	int v12; // eax
	int v13; // eax
	unsigned __int8 v14; // of
	int v15; // [esp+0h] [ebp-8h]
	int *v16; // [esp+4h] [ebp-4h]

	v2 = a1;
	v15 = a1[5];
	v3 = (int *)a1[10];
	v4 = *v3;
	result = v3[1];
	v6 = (int *)dword_4BBBE0;
	if (*v3 > 0)
	{
		v7 = result - v3[4];
		v8 = v3 + 5;
		result = a1[2] + v7;
		if (result >= a1[4])
		{
			do
			{
				result = v2[2] + v8[1];
				if (result >= v2[4])
				{
					if (result >= v2[6])
						break;
					dword_4C08E0 = v4;
					v16 = (int *)((char *)dword_4BBBD0 + 4 * result);
					result = dword_4BFCC4[result] + v2[1] + *v8;
					v9 = v2[3];
					v10 = v8[2];
					v11 = v8[3];
					if (result < v9)
					{
						v12 = result - v9;
						v11 += v12;
						v10 = v10 - v12 - v12;
						result = v9;
					}
					*v6 = result;
					v6[1] = v10;
					if (v11 > 0)
					{
						v13 = v11 + result;
						v14 = __OFSUB__(v13, v15);
						result = v13 - v15;
						if ((unsigned __int8)((result < 0) ^ v14) | (result == 0)
							|| (v14 = __OFSUB__(v11, result), v11 -= result, !((unsigned __int8)((v11 < 0) ^ v14) | (v11 == 0))))
						{
							v6[2] = v11;
							v6[5] = a2;
							v6[6] = a1[9];
							result = *v16;
							v6[4] = *v16;
							*v16 = (int)v6;
							v6 += 8;
						}
					}
					v4 = dword_4C08E0;
				}
				v8 = (_DWORD *)v8[4];
				v2 = a1;
				--v4;
			} while (v4);
		}
	}
	dword_4BBBE0 = (int)v6;
	return result;
}

int __cdecl sub_46170C(_DWORD *a1, int a2)
{
	_DWORD *v2; // ebx
	int *v3; // esi
	int v4; // ecx
	int result; // eax
	int *v6; // edi
	int v7; // eax
	int *v8; // esi
	int v9; // eax
	int v10; // edx
	int v11; // ecx
	int v12; // ebx
	int v13; // eax
	int v14; // eax
	unsigned __int8 v15; // of
	int v16; // [esp+0h] [ebp-8h]
	int *v17; // [esp+4h] [ebp-4h]

	v2 = a1;
	v16 = a1[5];
	v3 = (int *)a1[10];
	v4 = *v3;
	result = v3[1];
	v6 = (int *)dword_4BBBE0;
	if (*v3 > 0)
	{
		v7 = result - v3[4];
		v8 = v3 + 5;
		result = a1[2] + v7;
		if (result >= a1[4])
		{
			do
			{
				result = v2[2] + v8[1];
				if (result >= v2[4])
				{
					if (result >= v2[6])
						break;
					v17 = (int *)((char *)dword_4BBBD0 + 4 * result);
					v9 = *v8;
					dword_4C08E0 = v4;
					result = v2[1] + v9;
					v10 = v2[3];
					v11 = v8[2];
					v12 = v8[3];
					if (result < v10)
					{
						v13 = result - v10;
						v12 += v13;
						v11 = v11 - v13 - v13;
						result = v10;
					}
					*v6 = result;
					v6[1] = v11;
					if (v12 > 0)
					{
						v14 = v12 + result;
						v15 = __OFSUB__(v14, v16);
						result = v14 - v16;
						if ((unsigned __int8)((result < 0) ^ v15) | (result == 0)
							|| (v15 = __OFSUB__(v12, result), v12 -= result, !((unsigned __int8)((v12 < 0) ^ v15) | (v12 == 0))))
						{
							v6[2] = v12;
							v6[5] = a2;
							v6[6] = a1[9];
							result = *v17;
							v6[4] = *v17;
							*v17 = (int)v6;
							v6 += 8;
						}
					}
					v4 = dword_4C08E0;
				}
				v8 = (int *)v8[4];
				v2 = a1;
				--v4;
			} while (v4);
		}
	}
	dword_4BBBE0 = (int)v6;
	return result;
}

int __cdecl sub_461982(_DWORD *a1, int a2)
{
	int *v2; // esi
	signed __int64 v3; // rax
	int v4; // edi
	int v5; // eax
	_DWORD *v6; // esi
	signed int v7; // ebx
	signed int v8; // ebx
	unsigned int v9; // eax
	unsigned int v10; // ST20_4
	int v11; // ecx
	int v12; // ebx
	int v13; // ebx
	int v14; // ebx
	int v15; // ebx
	int v16; // ebx
	unsigned __int8 v17; // of
	int v18; // ebx
	int v19; // edx
	int v20; // ebx
	int v21; // ebx
	int v22; // eax
	int v23; // ebx
	int v24; // ebx
	int v25; // ebx
	int v26; // ebx
	int v27; // ebx
	int v28; // ebx
	int v29; // edx
	int v30; // ebx
	int v31; // ebx
	int v32; // eax
	int v33; // ebx
	int v34; // ecx
	int v35; // ecx
	int v36; // ebx
	int v37; // ebx
	int v38; // ebx
	int v39; // ebx
	int v40; // ebx
	int v41; // ebx
	int v42; // edx
	int v43; // ebx
	int v44; // ebx
	int v45; // eax
	int v46; // ebx
	int v47; // ebx
	int v48; // ebx
	int v49; // ebx
	int v50; // ebx
	int v51; // ebx
	int v52; // edx
	int v53; // ebx
	int v54; // ebx
	int v55; // eax
	int v56; // ebx
	int v57; // ecx
	_DWORD *v58; // ebx
	int *v59; // edx
	int v60; // esi
	_DWORD *v62; // [esp-4h] [ebp-50h]
	int v63; // [esp+0h] [ebp-4Ch]
	int v64; // [esp+4h] [ebp-48h]
	int v65; // [esp+8h] [ebp-44h]
	signed __int64 v66; // [esp+Ch] [ebp-40h]
	unsigned __int64 v67; // [esp+14h] [ebp-38h]
	int v68; // [esp+20h] [ebp-2Ch]
	int *v69; // [esp+24h] [ebp-28h]
	int *v70; // [esp+24h] [ebp-28h]
	int *v71; // [esp+24h] [ebp-28h]
	int *v72; // [esp+24h] [ebp-28h]
	int *v73; // [esp+24h] [ebp-28h]
	int *v74; // [esp+24h] [ebp-28h]
	int *v75; // [esp+24h] [ebp-28h]
	int *v76; // [esp+24h] [ebp-28h]
	int v77; // [esp+28h] [ebp-24h]
	int v78; // [esp+2Ch] [ebp-20h]
	int v79; // [esp+30h] [ebp-1Ch]
	signed int v80; // [esp+34h] [ebp-18h]
	int v81; // [esp+38h] [ebp-14h]
	int v82; // [esp+3Ch] [ebp-10h]
	int v83; // [esp+40h] [ebp-Ch]
	unsigned int v84; // [esp+44h] [ebp-8h]
	signed int v85; // [esp+48h] [ebp-4h]

	v85 = a1[7];
	v84 = a1[8];
	v83 = a1[3];
	v82 = a1[4];
	v81 = a1[5];
	v80 = a1[6];
	v79 = a1[1];
	v78 = a1[2];
	v77 = a1[9];
	v2 = (int *)a1[10];
	LODWORD(v3) = v2[1];
	v4 = dword_4BBBE0;
	if (*v2 > 0)
	{
		dword_4C08E0 = *v2;
		v5 = v3 - v2[4];
		v6 = v2 + 5;
		v3 = (signed int)v84 * (signed __int64)(v5 << 16);
		if (v78 + HIDWORD(v3) >= v82)
		{
			v7 = 0x10000;
			if (v85)
			{
				v7 = 512;
				if ((unsigned int)v85 >= 0x200)
				{
					v7 = -513;
					if ((unsigned int)v85 <= 0xFFFFFDFF)
						v7 = v85;
				}
			}
			v68 = 0x100000000i64 / v7;
			v8 = 0x10000;
			if (v84)
			{
				v8 = 512;
				if (v84 >= 0x200)
				{
					v8 = -513;
					if (v84 <= 0xFFFFFDFF)
						v8 = v84;
				}
			}
			v9 = 0x100000000i64 / v8;
			v10 = v9;
			v67 = (unsigned __int64)v9 << 16;
			v65 = v82;
			LODWORD(v3) = v9 * ((v82 - v78) << 16);
			v66 = (signed int)v10 * (signed __int64)((v82 - v78) << 16);
			v11 = 0;
			while (dword_4C08E0 > 0)
			{
				v12 = v6[1];
				if (v12 >= SHIDWORD(v66))
				{
					if (v12 != HIDWORD(v66))
					{
						v3 = (signed int)v84 * (signed __int64)(signed int)(v6[1] << 16);
						HIDWORD(v3) += v78;
						if (SHIDWORD(v3) >= v80)
							break;
						v65 = HIDWORD(v3);
						HIDWORD(v66) = v6[1];
						LODWORD(v66) = 0;
					}
					v64 = v65;
					if (v85 < 0)
					{
						v70 = (int *)((char *)dword_4BBBD0 + 4 * v65);
						v19 = (unsigned __int64)(v85 * (signed __int64)(signed int)(v6[3] << 16)) >> 32;
						v20 = v19 + v79 + ((unsigned __int64)(v85 * (signed __int64)(signed int)(*v6 << 16)) >> 32);
						HIDWORD(v3) = -v19;
						LODWORD(v3) = v6[2];
						*(_DWORD *)(v4 + 28) = 0;
						if (v20 < v83)
						{
							HIDWORD(v3) += v20 - v83;
							v20 = v83;
						}
						*(_DWORD *)v4 = v20;
						LODWORD(v3) = 0;
						if (SHIDWORD(v3) > 0)
						{
							LODWORD(v3) = v20 + HIDWORD(v3);
							v21 = HIDWORD(v3);
							v17 = __OFSUB__((_DWORD)v3, v81);
							LODWORD(v3) = v3 - v81;
							if ((unsigned __int8)(((signed int)v3 < 0) ^ v17) | ((_DWORD)v3 == 0)
								|| (v17 = __OFSUB__(HIDWORD(v3), (_DWORD)v3),
								HIDWORD(v3) -= v3,
								LODWORD(v3) = 0,
								!((unsigned __int8)((v3 < 0) ^ v17) | (HIDWORD(v3) == 0))))
							{
								*(_DWORD *)(v4 + 8) = HIDWORD(v3);
								v22 = v6[2];
								v23 = v68 * v21;
								*(_WORD *)(v4 + 30) = v23;
								*(_DWORD *)(v4 + 4) = v22 + 2 * ((-v23 >> 16) - 1);
								*(_DWORD *)(v4 + 20) = a2;
								*(_DWORD *)(v4 + 24) = v77;
								*(_DWORD *)(v4 + 12) = v68;
								*(_DWORD *)(v4 + 16) = *v70;
								*v70 = v4;
								LODWORD(v3) = 1;
								v4 += 32;
							}
						}
					}
					else
					{
						v69 = (int *)((char *)dword_4BBBD0 + 4 * v65);
						v13 = v79 + ((unsigned __int64)(v85 * (signed __int64)(signed int)(*v6 << 16)) >> 32);
						HIDWORD(v3) = (unsigned __int64)(v85 * (signed __int64)(signed int)(v6[3] << 16)) >> 32;
						LODWORD(v3) = v6[2];
						*(_DWORD *)(v4 + 28) = 0;
						if (v13 < v83)
						{
							v14 = v13 - v83;
							HIDWORD(v3) += v14;
							v15 = v68 * -v14;
							*(_WORD *)(v4 + 30) = v15;
							LODWORD(v3) = v3 + 2 * (v15 >> 16);
							v13 = v83;
						}
						*(_DWORD *)v4 = v13;
						*(_DWORD *)(v4 + 4) = v3;
						LODWORD(v3) = 0;
						if (SHIDWORD(v3) > 0)
						{
							v16 = HIDWORD(v3) + v13;
							v17 = __OFSUB__(v16, v81);
							v18 = v16 - v81;
							if ((unsigned __int8)((v18 < 0) ^ v17) | (v18 == 0)
								|| (LODWORD(v3) = 0,
								v17 = __OFSUB__(HIDWORD(v3), v18),
								HIDWORD(v3) -= v18,
								!((unsigned __int8)((v3 < 0) ^ v17) | (HIDWORD(v3) == 0))))
							{
								*(_DWORD *)(v4 + 8) = HIDWORD(v3);
								*(_DWORD *)(v4 + 20) = a2;
								*(_DWORD *)(v4 + 24) = v77;
								*(_DWORD *)(v4 + 12) = v68;
								*(_DWORD *)(v4 + 16) = *v69;
								*v69 = v4;
								LODWORD(v3) = 1;
								v4 += 32;
							}
						}
					}
					v63 = v3;
					v6 = (_DWORD *)v6[4];
					if (--dword_4C08E0)
					{
						do
						{
							if (v6[1] != HIDWORD(v66))
								break;
							if (v85 < 0)
							{
								v72 = (int *)((char *)dword_4BBBD0 + 4 * v65);
								v29 = (unsigned __int64)(v85 * (signed __int64)(signed int)(v6[3] << 16)) >> 32;
								v30 = v29 + v79 + ((unsigned __int64)(v85 * (signed __int64)(signed int)(*v6 << 16)) >> 32);
								HIDWORD(v3) = -v29;
								LODWORD(v3) = v6[2];
								*(_DWORD *)(v4 + 28) = 0;
								if (v30 < v83)
								{
									HIDWORD(v3) += v30 - v83;
									v30 = v83;
								}
								*(_DWORD *)v4 = v30;
								LODWORD(v3) = 0;
								if (SHIDWORD(v3) > 0)
								{
									LODWORD(v3) = v30 + HIDWORD(v3);
									v31 = HIDWORD(v3);
									v17 = __OFSUB__((_DWORD)v3, v81);
									LODWORD(v3) = v3 - v81;
									if ((unsigned __int8)(((signed int)v3 < 0) ^ v17) | ((_DWORD)v3 == 0)
										|| (v17 = __OFSUB__(HIDWORD(v3), (_DWORD)v3),
										HIDWORD(v3) -= v3,
										LODWORD(v3) = 0,
										!((unsigned __int8)((v3 < 0) ^ v17) | (HIDWORD(v3) == 0))))
									{
										*(_DWORD *)(v4 + 8) = HIDWORD(v3);
										v32 = v6[2];
										v33 = v68 * v31;
										*(_WORD *)(v4 + 30) = v33;
										*(_DWORD *)(v4 + 4) = v32 + 2 * ((-v33 >> 16) - 1);
										*(_DWORD *)(v4 + 20) = a2;
										*(_DWORD *)(v4 + 24) = v77;
										*(_DWORD *)(v4 + 12) = v68;
										*(_DWORD *)(v4 + 16) = *v72;
										*v72 = v4;
										LODWORD(v3) = 1;
										v4 += 32;
									}
								}
							}
							else
							{
								v71 = (int *)((char *)dword_4BBBD0 + 4 * v65);
								v24 = v79 + ((unsigned __int64)(v85 * (signed __int64)(signed int)(*v6 << 16)) >> 32);
								HIDWORD(v3) = (unsigned __int64)(v85 * (signed __int64)(signed int)(v6[3] << 16)) >> 32;
								LODWORD(v3) = v6[2];
								*(_DWORD *)(v4 + 28) = 0;
								if (v24 < v83)
								{
									v25 = v24 - v83;
									HIDWORD(v3) += v25;
									v26 = v68 * -v25;
									*(_WORD *)(v4 + 30) = v26;
									LODWORD(v3) = v3 + 2 * (v26 >> 16);
									v24 = v83;
								}
								*(_DWORD *)v4 = v24;
								*(_DWORD *)(v4 + 4) = v3;
								LODWORD(v3) = 0;
								if (SHIDWORD(v3) > 0)
								{
									v27 = HIDWORD(v3) + v24;
									v17 = __OFSUB__(v27, v81);
									v28 = v27 - v81;
									if ((unsigned __int8)((v28 < 0) ^ v17) | (v28 == 0)
										|| (LODWORD(v3) = 0,
										v17 = __OFSUB__(HIDWORD(v3), v28),
										HIDWORD(v3) -= v28,
										!((unsigned __int8)((v3 < 0) ^ v17) | (HIDWORD(v3) == 0))))
									{
										*(_DWORD *)(v4 + 8) = HIDWORD(v3);
										*(_DWORD *)(v4 + 20) = a2;
										*(_DWORD *)(v4 + 24) = v77;
										*(_DWORD *)(v4 + 12) = v68;
										*(_DWORD *)(v4 + 16) = *v71;
										*v71 = v4;
										LODWORD(v3) = 1;
										v4 += 32;
									}
								}
							}
							v6 = (_DWORD *)v6[4];
							v63 += v3;
							--dword_4C08E0;
						} while (dword_4C08E0);
					}
					++v11;
				}
				else
				{
					v6 = (_DWORD *)v6[4];
					--dword_4C08E0;
				}
				if (v11)
				{
				LABEL_49:
					while (1)
					{
						v34 = HIDWORD(v66);
						v66 += v67;
						LODWORD(v3) = v65 + 1;
						v65 = v3;
						if ((signed int)v3 >= v80)
							goto LABEL_94;
						if (v34 != HIDWORD(v66))
						{
							v35 = 0;
							while (dword_4C08E0 > 0)
							{
								v36 = v6[1];
								if (v36 == HIDWORD(v66))
								{
									v64 = v65;
									if (v85 < 0)
									{
										v74 = (int *)((char *)dword_4BBBD0 + 4 * v65);
										v42 = (unsigned __int64)(v85 * (signed __int64)(signed int)(v6[3] << 16)) >> 32;
										v43 = v42 + v79 + ((unsigned __int64)(v85 * (signed __int64)(signed int)(*v6 << 16)) >> 32);
										HIDWORD(v3) = -v42;
										LODWORD(v3) = v6[2];
										*(_DWORD *)(v4 + 28) = 0;
										if (v43 < v83)
										{
											HIDWORD(v3) += v43 - v83;
											v43 = v83;
										}
										*(_DWORD *)v4 = v43;
										LODWORD(v3) = 0;
										if (SHIDWORD(v3) > 0)
										{
											LODWORD(v3) = v43 + HIDWORD(v3);
											v44 = HIDWORD(v3);
											v17 = __OFSUB__((_DWORD)v3, v81);
											LODWORD(v3) = v3 - v81;
											if ((unsigned __int8)(((signed int)v3 < 0) ^ v17) | ((_DWORD)v3 == 0)
												|| (v17 = __OFSUB__(HIDWORD(v3), (_DWORD)v3),
												HIDWORD(v3) -= v3,
												LODWORD(v3) = 0,
												!((unsigned __int8)((v3 < 0) ^ v17) | (HIDWORD(v3) == 0))))
											{
												*(_DWORD *)(v4 + 8) = HIDWORD(v3);
												v45 = v6[2];
												v46 = v68 * v44;
												*(_WORD *)(v4 + 30) = v46;
												*(_DWORD *)(v4 + 4) = v45 + 2 * ((-v46 >> 16) - 1);
												*(_DWORD *)(v4 + 20) = a2;
												*(_DWORD *)(v4 + 24) = v77;
												*(_DWORD *)(v4 + 12) = v68;
												*(_DWORD *)(v4 + 16) = *v74;
												*v74 = v4;
												LODWORD(v3) = 1;
												v4 += 32;
											}
										}
									}
									else
									{
										v73 = (int *)((char *)dword_4BBBD0 + 4 * v65);
										v37 = v79 + ((unsigned __int64)(v85 * (signed __int64)(signed int)(*v6 << 16)) >> 32);
										HIDWORD(v3) = (unsigned __int64)(v85 * (signed __int64)(signed int)(v6[3] << 16)) >> 32;
										LODWORD(v3) = v6[2];
										*(_DWORD *)(v4 + 28) = 0;
										if (v37 < v83)
										{
											v38 = v37 - v83;
											HIDWORD(v3) += v38;
											v39 = v68 * -v38;
											*(_WORD *)(v4 + 30) = v39;
											LODWORD(v3) = v3 + 2 * (v39 >> 16);
											v37 = v83;
										}
										*(_DWORD *)v4 = v37;
										*(_DWORD *)(v4 + 4) = v3;
										LODWORD(v3) = 0;
										if (SHIDWORD(v3) > 0)
										{
											v40 = HIDWORD(v3) + v37;
											v17 = __OFSUB__(v40, v81);
											v41 = v40 - v81;
											if ((unsigned __int8)((v41 < 0) ^ v17) | (v41 == 0)
												|| (LODWORD(v3) = 0,
												v17 = __OFSUB__(HIDWORD(v3), v41),
												HIDWORD(v3) -= v41,
												!((unsigned __int8)((v3 < 0) ^ v17) | (HIDWORD(v3) == 0))))
											{
												*(_DWORD *)(v4 + 8) = HIDWORD(v3);
												*(_DWORD *)(v4 + 20) = a2;
												*(_DWORD *)(v4 + 24) = v77;
												*(_DWORD *)(v4 + 12) = v68;
												*(_DWORD *)(v4 + 16) = *v73;
												*v73 = v4;
												LODWORD(v3) = 1;
												v4 += 32;
											}
										}
									}
									v63 = v3;
									v6 = (_DWORD *)v6[4];
									if (--dword_4C08E0)
									{
										do
										{
											if (v6[1] != HIDWORD(v66))
												break;
											if (v85 < 0)
											{
												v76 = (int *)((char *)dword_4BBBD0 + 4 * v65);
												v52 = (unsigned __int64)(v85 * (signed __int64)(signed int)(v6[3] << 16)) >> 32;
												v53 = v52 + v79 + ((unsigned __int64)(v85 * (signed __int64)(signed int)(*v6 << 16)) >> 32);
												HIDWORD(v3) = -v52;
												LODWORD(v3) = v6[2];
												*(_DWORD *)(v4 + 28) = 0;
												if (v53 < v83)
												{
													HIDWORD(v3) += v53 - v83;
													v53 = v83;
												}
												*(_DWORD *)v4 = v53;
												LODWORD(v3) = 0;
												if (SHIDWORD(v3) > 0)
												{
													LODWORD(v3) = v53 + HIDWORD(v3);
													v54 = HIDWORD(v3);
													v17 = __OFSUB__((_DWORD)v3, v81);
													LODWORD(v3) = v3 - v81;
													if ((unsigned __int8)(((signed int)v3 < 0) ^ v17) | ((_DWORD)v3 == 0)
														|| (v17 = __OFSUB__(HIDWORD(v3), (_DWORD)v3),
														HIDWORD(v3) -= v3,
														LODWORD(v3) = 0,
														!((unsigned __int8)((v3 < 0) ^ v17) | (HIDWORD(v3) == 0))))
													{
														*(_DWORD *)(v4 + 8) = HIDWORD(v3);
														v55 = v6[2];
														v56 = v68 * v54;
														*(_WORD *)(v4 + 30) = v56;
														*(_DWORD *)(v4 + 4) = v55 + 2 * ((-v56 >> 16) - 1);
														*(_DWORD *)(v4 + 20) = a2;
														*(_DWORD *)(v4 + 24) = v77;
														*(_DWORD *)(v4 + 12) = v68;
														*(_DWORD *)(v4 + 16) = *v76;
														*v76 = v4;
														LODWORD(v3) = 1;
														v4 += 32;
													}
												}
											}
											else
											{
												v75 = (int *)((char *)dword_4BBBD0 + 4 * v65);
												v47 = v79 + ((unsigned __int64)(v85 * (signed __int64)(signed int)(*v6 << 16)) >> 32);
												HIDWORD(v3) = (unsigned __int64)(v85 * (signed __int64)(signed int)(v6[3] << 16)) >> 32;
												LODWORD(v3) = v6[2];
												*(_DWORD *)(v4 + 28) = 0;
												if (v47 < v83)
												{
													v48 = v47 - v83;
													HIDWORD(v3) += v48;
													v49 = v68 * -v48;
													*(_WORD *)(v4 + 30) = v49;
													LODWORD(v3) = v3 + 2 * (v49 >> 16);
													v47 = v83;
												}
												*(_DWORD *)v4 = v47;
												*(_DWORD *)(v4 + 4) = v3;
												LODWORD(v3) = 0;
												if (SHIDWORD(v3) > 0)
												{
													v50 = HIDWORD(v3) + v47;
													v17 = __OFSUB__(v50, v81);
													v51 = v50 - v81;
													if ((unsigned __int8)((v51 < 0) ^ v17) | (v51 == 0)
														|| (LODWORD(v3) = 0,
														v17 = __OFSUB__(HIDWORD(v3), v51),
														HIDWORD(v3) -= v51,
														!((unsigned __int8)((v3 < 0) ^ v17) | (HIDWORD(v3) == 0))))
													{
														*(_DWORD *)(v4 + 8) = HIDWORD(v3);
														*(_DWORD *)(v4 + 20) = a2;
														*(_DWORD *)(v4 + 24) = v77;
														*(_DWORD *)(v4 + 12) = v68;
														*(_DWORD *)(v4 + 16) = *v75;
														*v75 = v4;
														LODWORD(v3) = 1;
														v4 += 32;
													}
												}
											}
											v6 = (_DWORD *)v6[4];
											v63 += v3;
											--dword_4C08E0;
										} while (dword_4C08E0);
									}
									++v35;
								}
								else if (v36 >= SHIDWORD(v66))
								{
									v63 = 0;
									++v35;
								}
								else
								{
									v6 = (_DWORD *)v6[4];
									--dword_4C08E0;
								}
								if (v35)
									goto LABEL_49;
							}
							goto LABEL_94;
						}
						v57 = v63;
						if (v63)
						{
							v62 = v6;
							v58 = (_DWORD *)*((_DWORD *)dword_4BBBD0 + v64);
							v59 = (int *)((char *)dword_4BBBD0 + 4 * v3);
							v60 = *v59;
							do
							{
								*(_DWORD *)v4 = *v58;
								*(_DWORD *)(v4 + 4) = v58[1];
								*(_DWORD *)(v4 + 8) = v58[2];
								*(_DWORD *)(v4 + 20) = v58[5];
								*(_DWORD *)(v4 + 24) = v58[6];
								*(_DWORD *)(v4 + 28) = v58[7];
								v58 = (_DWORD *)v58[4];
								*(_DWORD *)(v4 + 12) = v68;
								*(_DWORD *)(v4 + 16) = v60;
								v60 = v4;
								v4 += 32;
								--v57;
							} while (v57);
							*v59 = v60;
							v6 = v62;
						}
					}
				}
			}
		}
	}
LABEL_94:
	dword_4BBBE0 = v4;
	return v3;
}

int sub_457E00()
{
	return (*(int(__stdcall **)(int, _DWORD))(*(_DWORD *)dword_4C241C + 128))(dword_4C241C, 0);
}

void sub_46B868()
{
	if (dword_4C0924)
	{
		sub_457C20(dword_4C0924);
		dword_4C0924 = 0;
	}
	if (dword_4C0928)
	{
		sub_457C20(dword_4C0928);
		dword_4C0928 = 0;
	}
	if (dword_4C092C)
	{
		sub_457C20(dword_4C092C);
		dword_4C092C = 0;
	}
}

void sub_46D1B7()
{
	sub_46B868();
	sub_45DB49();
	sub_45FF4F();
	sub_461281();
}

void sub_461281()
{
	if (dword_4BFBEC)
	{
		sub_457C20(dword_4BFBEC);
		dword_4BFBEC = 0;
	}
	if (dword_4BBBD0)
	{
		sub_457C20(dword_4BBBD0);
		dword_4BBBD0 = 0;
	}
}

void sub_42EC30()
{
	char *v0; // ebx
	HFILE v1; // eax
	HFILE v2; // esi
	CHAR Buffer[4]; // [esp+4h] [ebp-Ch]
	int v4; // [esp+8h] [ebp-8h]
	int v5; // [esp+Ch] [ebp-4h]

	v0 = (char *)sub_457B70(0x400u);
	if (v0)
	{
		strcpy(v0, byte_4C2298);
		strcat(v0, aSaves);
		sub_457AF0(v0);
		strcat(v0, aHslCfg);
		_beep_0((unsigned int)v0, 0);
		v2 = v1;
		if (v1 != -1)
		{
			*(_DWORD *)Buffer = dword_477C20;
			v4 = dword_477C24;
			v5 = (unsigned __int16)dword_477C14;
			sub_4578F0(v1, Buffer, 0xCu);
			sub_457910(v2);
		}
		sub_457C20(v0);
	}
}

int __cdecl sub_457AF0(char *a1)
{
	return -(_mkdir(a1) != 0);
}

int __cdecl _mkdir(const char *lpPathName)
{
	DWORD v1; // eax

	if (CreateDirectoryA(lpPathName, 0))
		v1 = 0;
	else
		v1 = GetLastError();
	if (!v1)
		return 0;
	_dosmaperr(v1);
	return -1;
}

_DWORD *__cdecl _dosmaperr(unsigned int a1)
{
	int v1; // edx
	_DWORD *result; // eax

	v1 = 0;
	dword_4C25F8 = a1;
	result = &unk_4C0C70;
	do
	{
		if (a1 == *result)
		{
			result = (_DWORD *)dword_4C0C74[2 * v1];
			dword_4C25F4 = dword_4C0C74[2 * v1];
			return result;
		}
		result += 2;
		++v1;
	} while ((signed int)result < (signed int)&dword_4C0DD8);
	if (a1 < 0x13 || a1 > 0x24)
	{
		if (a1 < 0xBC || (dword_4C25F4 = 8, a1 > 0xCA))
			dword_4C25F4 = 22;
	}
	else
	{
		dword_4C25F4 = 13;
	}
	return result;
}

void __cdecl _beep_0(unsigned int lpPathName, unsigned int iAttribute)
{
	lcreat((LPCSTR)lpPathName, iAttribute);
}