#ifndef main_h
	#define main_h

/*Game paths*/

#define UW0_LEVEL_PATH  "C:\\Games\\Ultima\\UWDemo\\DATA\\level13.st"
#define UW0_TEXTUREW_PATH "C:\\Games\\Ultima\\UWDemo\\DATA\\level13.txm"

#define UW1_LEVEL_PATH  "C:\\Games\\UW1\\Data\\lev.ark"
#define UW1_TEXTURE_CONFIG_FILE "C:\\Underworld Exporter\\src\\trunk\\uw1_retro_config.txt"
#define UW1_OBJECT_CONFIG_FILE "C:\\Underworld Exporter\\src\\trunk\\uw1_object_config.txt"
#define UW1_STRINGS_FILE "C:\\Games\\UW1\\data\\strings.pak"
#define UW1_CLEAN_STRINGS_FILE "C:\\Underworld Exporter\\src\\trunk\\uw1_stringsclean.txt"

#define UW2_LEVEL_PATH "C:\\Games\\UW2\\DATA\\lev.ark"
#define UW2_TEXTURE_CONFIG_FILE "C:\\Underworld Exporter\\src\\trunk\\uw2_retro_config.txt"
#define UW2_OBJECT_CONFIG_FILE "C:\\Underworld Exporter\\src\\trunk\\uw2_object_config.txt"
#define UW2_STRINGS_FILE "C:\\Games\\UW2\\data\\strings.pak"

//Change these depending on which set of textures you want to extract
#define GRAPHICS_FILE "C:\\Games\\UW1\\DATA\\F32.TR"
#define GRAPHICS_PAL_FILE "C:\\Games\\UW1\\DATA\\pals.dat"


#define SHOCK_LEVEL_PATH  "C:\\Games\\SystemShock\\Res\\DATA\\archive.dat"
#define SHOCK_STRINGS_FILE "C:\\Games\\SystemShock\\Res\\DATA\\CYBSTRNG.RES"
#define SHOCK_TEXTURE_CONFIG_FILE "C:\\Underworld Exporter\\src\\trunk\\shock_texture_config.txt"
#define SHOCK_OBJECT_CONFIG_FILE "C:\\Underworld Exporter\\src\\trunk\\shock_object_config.txt"
#define SHOCK_COMMONOBJ_FILE  "C:\\Games\\SystemShock\\Res\\DATA\\objprop.dat"
#define SHOCK_MODEL_FILE  "C:\\Games\\SystemShock\\Res\\DATA\\obj3d.res"

#define ENTRANCES_CONFIG_FILE  "C:\\Underworld Exporter\\src\\trunk\\uw1_entrances.txt"

//temporary paths for testing things before I implement commandline params/interface for file paths once I switch to file I/O
#define SCRIPT_GlOBAL_FILE "C:\\Underworld Exporter\\src\\trunk\\debug\\scriptglobal.txt"
#define SCRIPT_MAIN_FILE "C:\\Underworld Exporter\\src\\trunk\\debug\\scriptmain.txt"
#define SCRIPT_BODY_FILE "C:\\Underworld Exporter\\src\\trunk\\scriptbody.txt"
#define SCRIPT_FINAL_FILE "C:\\games\\darkmod\\maps\\shock1.script"
#define MAP_OUTPUT_FILE "C:\\games\\darkmod\\maps\\shock1.map"

#define ENABLE_LIGHTING 1

/*Globals*/
extern int BrushSizeX;
extern int BrushSizeY;
extern int BrushSizeZ;
extern int PrimitiveCount;
extern int EntityCount;
extern int CEILING_HEIGHT;

//BrushFaces
#define fSELF 128
#define fCEIL 64
#define fNORTH 32
#define fSOUTH 16
#define fEAST 8
#define fWEST 4
#define fTOP 2
#define fBOTTOM 1

//Game IDs
#define UWDEMO 0
#define UW1 1
#define UW2 2
#define SHOCK 3


//ceiling constants
//#xdefine UW_CEILING_HEIGHT 19
//This is now set in buildtilemapshock in order to support variable height levels.
//#dxefine SHOCK_CEILING_HEIGHT 32	 



//Modes
#define ASCII_MODE 0
#define D3_MODE 1
#define STRINGS_EXTRACT_MODE 2
#define BITMAP_EXTRACT_MODE 3
#define SCRIPT_BUILD_MODE 4
#define MATERIALS_BUILD_MODE 5



void exportMaps(int game,int mode,int LevelNo);
void LoadConfig(int game);
int getShockObjectIndex(int objClass, int objSubClass, int objSubClassIndex);

#endif /* main_h */

